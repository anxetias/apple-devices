/* === sync3u.c — импорт музыки через сервер 3uTools и собственный
 * atc-диалог (com.apple.atc).
 *
 * Репликация рабочего рецепта из исследований 3utools-research
 * (прогорел там end-to-end, «прогон v12»): файл заливается в
 * /Airlock/Media/<pid>, декларация Sync_00000000.plist + .cig в
 * /iTunes_Control/Sync/Media, устройство само канонизирует и отвечает
 * AssetManifest → SyncFinished.
 *
 * Логика обоих POST на a2-s.3u.com — подтверждённые wire-байты (хук
 * curl_easy_setopt): фрейм [u64 LE 0x35467891][код@4][0x64@5]
 * [crc16-XMODEM LE@6][u32 area_len LE@8][area]; UA Chrome/126;
 * Accept-Encoding identity; Connection: close.
 */
#define _GNU_SOURCE

#include "sync3u.h"

#include "application.h"

#include <libimobiledevice/libimobiledevice.h>
#include <libimobiledevice/lockdown.h>
#include <libimobiledevice/afc.h>
#include <plist/plist.h>

#include <openssl/ssl.h>
#include <openssl/err.h>

#include <glib/gstdio.h>
#include <gio/gio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

/* ==== Константы сервера 3u (подтверждено перехватом) ==== */

#define S3U_HOST   "a2-s.3u.com"
#define S3U_PATH   "/?pc_vs=9.03.003"
#define S3U_UA     ("Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit" \
                    "/537.36 (KHTML, like Gecko) Chrome/126.0.0.0 " \
                    "Safari/537.36")

#define S3U_CODE_STEP2 0xd2
#define S3U_CODE_CIG   0xd0

#define S3U_TIMEOUT_CONNECT_S 10
#define S3U_TIMEOUT_IO_S      30

/* Бюджеты фаз atc-диалога (секунды). */
#define ATC_PHASE1_BUDGET_S  30.0
#define ATC_PHASE3_BUDGET_S  120.0
#define ATC_PHASE5_BUDGET_S  300.0

/* Повтор cig-запроса при отказе сервера 104. */
#define S3U_CIG_MAX_ATTEMPTS 3
#define S3U_RETRY_PAUSE_NS   60

/* Навигационные уведомления libplist-канала atc. */
#define ATC_SERVICE "com.apple.atc"
#define AFC_SERVICE "com.apple.afc"

/* Локальный домен ошибок. */
static GQuark s3uQuark(void)
{
  return g_quark_from_static_string("sync3u-error");
}

/* ==== CRC16/XMODEM (совпадение с сервером проверено на ответах). ==== */

static unsigned crc16Xmodem(const unsigned char *d, size_t n)
{
  unsigned crc = 0;
  for (size_t i = 0; i < n; i++) {
    crc ^= (unsigned)d[i] << 8;
    for (int b = 0; b < 8; b++)
      crc = (crc & 0x8000) ? ((crc << 1) ^ 0x1021) & 0xFFFF : (crc << 1) & 0xFFFF;
  }
  return crc;
}

/* Сборка POST-фрейма: [8 magic][код][0x64][crc LE16][len LE32][area]. */
static unsigned char *s3uFrameBuild(int code, const unsigned char *area,
                                    size_t alen, size_t *outLen)
{
  unsigned char *f;
  if (alen > 64u * 1024u * 1024u)
    return NULL;
  f = malloc(12 + alen);
  if (!f) {
    if (outLen)
      *outLen = 0;
    return NULL;
  }
  memset(f, 0, 8);
  f[0] = 0x91; f[1] = 0x78; f[2] = 0x46; f[3] = 0x35; /* u64 LE 0x35467891 */
  f[4] = (unsigned char)code;
  f[5] = 0x64;
  unsigned crc = crc16Xmodem(area, alen);
  f[6] = (unsigned char)(crc & 0xff);
  f[7] = (unsigned char)((crc >> 8) & 0xff);
  f[8]  = (unsigned char)(alen & 0xff);
  f[9]  = (unsigned char)((alen >> 8) & 0xff);
  f[10] = (unsigned char)((alen >> 16) & 0xff);
  f[11] = (unsigned char)((alen >> 24) & 0xff);
  if (alen)
    memcpy(f + 12, area, alen);
  if (outLen)
    *outLen = 12 + alen;
  return f;
}

static unsigned rdU32LE(const unsigned char *p)
{
  return (unsigned)p[0] | ((unsigned)p[1] << 8) |
         ((unsigned)p[2] << 16) | ((unsigned)p[3] << 24);
}

/* ==== Минимальный HTTPS-клиент (OpenSSL) — один POST, ответ до EOF. ==== */

static void s3uDialFreeSock(gpointer *unused)
{
  (void)unused;
}

/* TCP-подключение (блокирующий сокет с SO_RCVTIMEO/SNDTIMEO).
 * 0 — ок, дескриптор в *outSock. */
static int s3uDial(const char *host, int sockTimeoutS, int *outSock,
                   GError **error)
{
  struct addrinfo hints, *res = NULL, *ai;
  char portStr[16], buf[160];
  int sock = -1;

  memset(&hints, 0, sizeof(hints));
  hints.ai_family = AF_UNSPEC;
  hints.ai_socktype = SOCK_STREAM;
  hints.ai_protocol = IPPROTO_TCP;
  snprintf(portStr, sizeof(portStr), "443");
  int rc = getaddrinfo(host, portStr, &hints, &res);
  if (rc != 0) {
    g_set_error(error, s3uQuark(), 1, tr("DNS-резолв «%s» не удался (rc=%d)"),
                host, rc);
    return -1;
  }
  for (ai = res; ai; ai = ai->ai_next) {
    int s = socket(ai->ai_family, ai->ai_socktype, ai->ai_protocol);
    if (s < 0)
      continue;
    struct timeval tv = { sockTimeoutS, 0 };
    setsockopt(s, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof(tv));
    setsockopt(s, SOL_SOCKET, SO_SNDTIMEO, &tv, sizeof(tv));
    if (connect(s, ai->ai_addr, ai->ai_addrlen) == 0) {
      sock = s;
      break;
    }
    close(s);
  }
  freeaddrinfo(res);
  if (sock < 0) {
    snprintf(buf, sizeof(buf), "%s:443", host);
    g_set_error(error, s3uQuark(), 2,
                tr("TCP-подключение к %s не состоялось"), buf);
    return -1;
  }
  *outSock = sock;
  return 0;
}

/* POST-запрос целиком (headers+body), чтение ответа (до EOF),
 * разбор HTTP: status, границы, chunked. Ответ — malloc-владение.
 * NULL — ошибка (error заполнена). */
static unsigned char *s3uHttpPost(const unsigned char *body, size_t bodyLen,
                                  size_t *respLen, GError **error)
{
  int sock = -1;
  SSL_CTX *ctx = NULL;
  SSL *ssl = NULL;
  GByteArray *acc = NULL;
  unsigned char *resp = NULL;
  GError *dialErr = NULL;
  int headLen;
  char head[464];

  *respLen = 0;
  if (s3uDial(S3U_HOST, S3U_TIMEOUT_CONNECT_S, &sock, &dialErr) != 0) {
    g_propagate_error(error, dialErr);
    return NULL;
  }

  ctx = SSL_CTX_new(TLS_client_method());
  if (!ctx) {
    g_set_error(error, s3uQuark(), 3, tr("TLS-контекст OpenSSL не создался"));
    goto fail;
  }
  ssl = SSL_new(ctx);
  if (!ssl) {
    g_set_error(error, s3uQuark(), 3, tr("SSL_new не удался"));
    goto fail;
  }
  SSL_set_fd(ssl, sock);
  SSL_set_tlsext_host_name(ssl, S3U_HOST); /* SNI */
  if (SSL_connect(ssl) != 1) {
    char buf[256] = "?";
    ERR_error_string_n(ERR_get_error(), buf, sizeof(buf));
    g_set_error(error, s3uQuark(), 4,
                tr("TLS-рукопожатие с %s не состоялось: %s"), S3U_HOST, buf);
    goto fail;
  }

  headLen = snprintf(head, sizeof(head),
      "POST %s HTTP/1.1\r\n"
      "Host: %s\r\n"
      "User-Agent: %s\r\n"
      "Accept-Encoding: identity\r\n"
      "Content-Length: %zu\r\n"
      "Connection: close\r\n"
      "\r\n",
      S3U_PATH, S3U_HOST, S3U_UA, bodyLen);
  if (headLen <= 0 || (size_t)headLen >= sizeof(head) - 1) {
    g_set_error(error, s3uQuark(), 5, tr("не собрали заголовки POST"));
    goto fail;
  }
  {
    size_t sent = 0;
    while (sent < (size_t)headLen) {
      int n = SSL_write(ssl, head + sent, (int)((size_t)headLen - sent));
      if (n <= 0) {
        g_set_error(error, s3uQuark(), 6,
                    tr("отправка заголовка не удалась (rc=%d)"), n);
        goto fail;
      }
      sent += (size_t)n;
    }
  }
  if (bodyLen) {
    size_t sent = 0;
    while (sent < bodyLen) {
      int n = SSL_write(ssl, body + sent, (int)(bodyLen - sent));
      if (n <= 0) {
        g_set_error(error, s3uQuark(), 6,
                    tr("отправка тела POST не удалась (rc=%d)"), n);
        goto fail;
      }
      sent += (size_t)n;
    }
  }

  acc = g_byte_array_new();
  for (;;) {
    char chunk[8192];
    int n = SSL_read(ssl, chunk, (int)sizeof(chunk));
    if (n > 0) {
      g_byte_array_append(acc, (const guint8 *)chunk, (guint)n);
      if (acc->len > 4u * 1024u * 1024u) {
        g_set_error(error, s3uQuark(), 8, tr("ответ сервера подозрительно велик"));
        goto fail;
      }
      continue;
    }
    if (n == 0)
      break;
    int cls = SSL_get_error(ssl, n);
    if (cls == SSL_ERROR_SYSCALL || cls == SSL_ERROR_ZERO_RETURN)
      break;                 /* дефолт-финал или тайм-аут SO_RCVTIMEO */
    if (cls == SSL_ERROR_WANT_READ || cls == SSL_ERROR_WANT_WRITE)
      continue;
    {
      char buf[256] = "?";
      ERR_error_string_n(ERR_get_error(), buf, sizeof(buf));
      g_set_error(error, s3uQuark(), 7,
                  tr("чтение ответа сервера не удалось: %s"), buf);
      goto fail;
    }
  }

  if (acc->len < 16) {
    g_set_error(error, s3uQuark(), 8, tr("ответ сервера пуст"));
    goto fail;
  }
  int status = 0;
  if (sscanf((const char *)acc->data, "HTTP/%*d.%*d %d", &status) != 1) {
    g_set_error(error, s3uQuark(), 9, tr("не разобрали статусную строку"));
    goto fail;
  }
  char *sep = memmem(acc->data, acc->len, "\r\n\r\n", 4);
  if (!sep) {
    g_set_error(error, s3uQuark(), 9, tr("нет границы заголовков ответа"));
    goto fail;
  }
  size_t bodyAt = (size_t)(sep - (char *)acc->data) + 4;
  if (status != 200) {
    g_set_error(error, s3uQuark(), 10, tr("сервер ответил HTTP %d"), status);
    goto fail;
  }
  {
    size_t hlen = bodyAt - 4;
    char *hs = g_strndup((const char *)acc->data, hlen);
    gboolean chunked = strcasestr(hs, "transfer-encoding: chunked") != NULL;
    g_free(hs);
    if (!chunked) {
      size_t blen = acc->len - bodyAt;
      resp = malloc(blen + 1);
      memcpy(resp, acc->data + bodyAt, blen);
      resp[blen] = 0;
      *respLen = blen;
      goto out;
    }
  }
  /* chunked-разбор (проще, чем http-парсер, форматы зависят от сервера). */
  {
    GByteArray *plain = g_byte_array_new();
    size_t p = bodyAt;
    gboolean bad = FALSE;
    for (;;) {
      size_t nl = 0;
      gboolean found = FALSE;
      if (p + 2 >= acc->len) {
        break; /* конец потока — допускаем сервер, не закрывший połączenie */
      }
      for (size_t i = p; i + 1 < acc->len; i++) {
        if (acc->data[i] == '\r' && acc->data[i + 1] == '\n') {
          nl = i + 2;
          found = TRUE;
          break;
        }
      }
      if (!found || nl >= acc->len) {
        bad = TRUE;
        break;
      }
      unsigned long long clen = 0;
      if (sscanf((const char *)acc->data + p, "%llx", &clen) != 1) {
        bad = TRUE;
        break;
      }
      if (clen == 0)
        break;
      if (nl + clen + 2 > acc->len) {
        bad = TRUE;
        break;
      }
      g_byte_array_append(plain, acc->data + nl, (guint)clen);
      p = nl + clen + 2;
    }
    if (bad) {
      g_byte_array_unref(plain);
      g_set_error(error, s3uQuark(), 11, tr("некорректный chunked-ответ"));
      goto fail;
    }
    resp = malloc(plain->len + 1);
    memcpy(resp, plain->data, plain->len);
    resp[plain->len] = 0;
    *respLen = plain->len;
    g_byte_array_unref(plain);
  }

out:
  g_byte_array_unref(acc);
  SSL_free(ssl);
  close(sock);
  SSL_CTX_free(ctx);
  return resp;

fail:
  if (acc)
    g_byte_array_unref(acc);
  if (ssl)
    SSL_free(ssl);
  if (sock >= 0)
    close(sock);
  if (ctx)
    SSL_CTX_free(ctx);
  return NULL;
}

/* ==== Запрос step2 (K + hostGrappa) ==== */

/* UDID устройства без дефисов, длина 24 (формат step2). */
static gboolean s3uUdidDense(const char *udid, char out[25], size_t *outLen)
{
  size_t n = 0;
  for (; udid && *udid && n < 24; udid++)
    if (*udid != '-')
      out[n++] = *udid;
  out[n] = 0;
  if (outLen)
    *outLen = n;
  return n == 24;
}

/* Шаг 2: UDID → K (u32) + hostGrappa (84 Б; владение malloc у *hgOut). */
static int s3uStep2(const char *udidDense, size_t udidLen, guint32 *KOut,
                    unsigned char **hgOut, size_t *hgLenOut, GError **error)
{
  unsigned char area[28];
  unsigned areaLen = 0;
  size_t frameLen = 0;
  putU32LE(area, 24);          /* длина UDID-поля */
  memcpy(area + 4, udidDense, udidLen);
  areaLen = 4 + (unsigned)udidLen;
  unsigned char *frame = s3uFrameBuild(S3U_CODE_STEP2, area, areaLen, &frameLen);
  if (!frame) {
    g_set_error(error, s3uQuark(), 20, tr("не собрали frame step2"));
    return -1;
  }
  size_t respLen = 0;
  unsigned char *resp = s3uHttpPost(frame, frameLen, &respLen, error);
  free(frame);
  if (!resp)
    return -1;
  if (respLen < 20 || memcmp(resp, "\x91\x78\x46\x35", 4) != 0 ||
      resp[4] != 0xCB) {
    g_set_error(error, s3uQuark(), 21,
                tr("step2: отказ сервера (первые байты: %02x %02x %02x %02x)"),
                resp[0], resp[1], resp[2], resp[3]);
    free(resp);
    return -1;
  }
  unsigned hgLen = rdU32LE(resp + 16);
  if (hgLen == 0 || hgLen > 1024 || respLen < 20 + hgLen) {
    g_set_error(error, s3uQuark(), 22,
                tr("step2: некорректная длина hostGrappa (%u)"), hgLen);
    free(resp);
    return -1;
  }
  unsigned char *hg = malloc(hgLen);
  memcpy(hg, resp + 20, hgLen);
  *KOut = rdU32LE(resp + 12);
  *hgOut = hg;
  if (hgLenOut)
    *hgLenOut = hgLen;
  free(resp);
  return 0;
}

/* ==== Запрос cig (K + A=deviceGrappa + B=декларация) ==== */

#define S3U_CIG_OK      0
#define S3U_CIG_REFUSAL 1 /* err@5 — сервер отказал, повторить */
#define S3U_CIG_ERROR  -1 /* сеть/протокол */

typedef struct {
  unsigned char *data;
  size_t len;
} S3uBuf;

/* Формирует area = [u32 K][u32 lenA][A][u32 lenB][B]. */
static unsigned char *s3uCigAreaBuild(guint32 k, const unsigned char *a,
                                      size_t aLen, const unsigned char *b,
                                      size_t bLen, size_t *outArealen)
{
  size_t alen = 4 + 4 + aLen + 4 + bLen;
  unsigned char *area = malloc(alen + 1);
  if (!area)
    return NULL;
  size_t p = 0;
  putU32LE(area + p, k);      p += 4;
  putU32LE(area + p, (unsigned)aLen); p += 4;
  if (aLen) memcpy(area + p, a, aLen); p += aLen;
  putU32LE(area + p, (unsigned)bLen); p += 4;
  if (bLen) memcpy(area + p, b, bLen); p += bLen;
  (void)p;
  if (outArealen)
    *outArealen = alen;
  return area;
}

static int s3uRequestCig(guint32 k, const unsigned char *a, size_t aLen,
                         const unsigned char *b, size_t bLen,
                         unsigned char **cigOut, size_t *cigLenOut,
                         unsigned *errCode, GError **error)
{
  size_t areaLen = 0, frameLen = 0;
  unsigned char *area = s3uCigAreaBuild(k, a, aLen, b, bLen, &areaLen);
  if (!area) {
    g_set_error(error, s3uQuark(), 30, tr("не собрали area для cig"));
    return S3U_CIG_ERROR;
  }
  unsigned char *frame = s3uFrameBuild(S3U_CODE_CIG, area, areaLen, &frameLen);
  free(area);
  if (!frame) {
    g_set_error(error, s3uQuark(), 31, tr("не собрали frame cig"));
    return S3U_CIG_ERROR;
  }
  size_t respLen = 0;
  unsigned char *resp = s3uHttpPost(frame, frameLen, &respLen, error);
  free(frame);
  if (!resp)
    return S3U_CIG_ERROR;
  if (respLen < 16 || memcmp(resp, "\x91\x78\x46\x35", 4) != 0) {
    g_set_error(error, s3uQuark(), 32,
                tr("cig: странный ответ сервера (%zu Б)"), respLen);
    free(resp);
    return S3U_CIG_ERROR;
  }
  if (resp[4] == 0xC9) { /* отказ сервера (0x64-байтовая ошибка @5) */
    *errCode = resp[5];
    free(resp);
    return S3U_CIG_REFUSAL;
  }
  if (resp[4] != 0xD1) { /* не 0xD1 — неизвестный отказ формы */
    g_set_error(error, s3uQuark(), 33,
                tr("cig: неожиданный код ответа %02x (НЕ 0xD1/0xC9)"), resp[4]);
    free(resp);
    return S3U_CIG_ERROR;
  }
  unsigned cl = rdU32LE(resp + 12);
  if (cl == 0 || cl > 256 || respLen < 16 + cl) {
    g_set_error(error, s3uQuark(), 34,
                tr("cig: некорректная длина cig (%u)"), cl);
    free(resp);
    return S3U_CIG_ERROR;
  }
  unsigned char *cig = malloc(cl);
  memcpy(cig, resp + 16, cl);
  *cigOut = cig;
  if (cigLenOut)
    *cigLenOut = cl;
  free(resp);
  return S3U_CIG_OK;
}
