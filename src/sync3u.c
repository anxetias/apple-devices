/* === sync3u.c — импорт музыки через сервер 3uTools и собственный
 * atc-диалог (com.apple.atc).
 *
 * Репликация рабочего рецепта из исследований 3utools-research
 * (проверенный end-to-end прогон v12): файл заливается в
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
#include "deviceScanner.h" /* afcUploadFile */

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
#define S3U_RETRY_PAUSE_S    60

/* Навигационные уведомления libplist-канала atc. */
#define ATC_SERVICE "com.apple.atc"
#define AFC_SERVICE "com.apple.afc"

/* Локальный домен ошибок. */
static GQuark s3uQuark(void)
{
  return g_quark_from_static_string("sync3u-error");
}

/* Ошибка без параметров: g_set_error трактует tr() как формат
 * (-Wformat-security); обходим через "%s". */
static void s3uErr(GError **error, int code, const char *msg)
{
  g_set_error(error, s3uQuark(), code, "%s", msg ? msg : "?");
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
  /* Wire: 4 байта magic (хвостовой u32 0x35467891 по сети НЕ уходит —
   * подтверждено хуком curl_easy_setopt и python-клиентом server3u.py). */
  f[0] = 0x91; f[1] = 0x78; f[2] = 0x46; f[3] = 0x35;
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

static void putU32LE(unsigned char *p, unsigned v)
{
  p[0] = (unsigned char)(v & 0xff);
  p[1] = (unsigned char)((v >> 8) & 0xff);
  p[2] = (unsigned char)((v >> 16) & 0xff);
  p[3] = (unsigned char)((v >> 24) & 0xff);
}

/* ==== Минимальный HTTPS-клиент (OpenSSL) — один POST, ответ до EOF. ==== */

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
    s3uErr(error, 3, tr("TLS-контекст OpenSSL не создался"));
    goto fail;
  }
  ssl = SSL_new(ctx);
  if (!ssl) {
    s3uErr(error, 3, tr("SSL_new не удался"));
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
    s3uErr(error, 5, tr("не собрали заголовки POST"));
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
        s3uErr(error, 8, tr("ответ сервера подозрительно велик"));
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
    s3uErr(error, 8, tr("ответ сервера пуст"));
    goto fail;
  }
  int status = 0;
  if (sscanf((const char *)acc->data, "HTTP/%*d.%*d %d", &status) != 1) {
    s3uErr(error, 9, tr("не разобрали статусную строку"));
    goto fail;
  }
  char *sep = memmem(acc->data, acc->len, "\r\n\r\n", 4);
  if (!sep) {
    s3uErr(error, 9, tr("нет границы заголовков ответа"));
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
        break; /* конец потока — допускаем сервер, не закрывший соединение */
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
      s3uErr(error, 11, tr("некорректный chunked-ответ"));
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
    s3uErr(error, 20, tr("не собрали frame step2"));
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

/* Формирует area = [u32 K][u32 lenA][A][u32 lenB][B]. */
static unsigned char *s3uCigAreaBuild(guint32 k, const unsigned char *a,
                                      size_t aLen, const unsigned char *b,
                                      size_t bLen, size_t *outArealen)
{
  size_t alen = 4 + 4 + aLen + 4 + bLen;
  if (aLen > 8u * 1024u * 1024u || bLen > 16u * 1024u * 1024u)
    return NULL;
  unsigned char *area = malloc(alen + 1);
  if (!area)
    return NULL;
  size_t p = 0;
  putU32LE(area + p, k);
  p += 4;
  putU32LE(area + p, (unsigned)aLen);
  p += 4;
  if (aLen)
    memcpy(area + p, a, aLen);
  p += aLen;
  putU32LE(area + p, (unsigned)bLen);
  p += 4;
  if (bLen)
    memcpy(area + p, b, bLen);
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
    s3uErr(error, 30, tr("не собрали area для cig"));
    return S3U_CIG_ERROR;
  }
  unsigned char *frame = s3uFrameBuild(S3U_CODE_CIG, area, areaLen, &frameLen);
  free(area);
  if (!frame) {
    s3uErr(error, 31, tr("не собрали frame cig"));
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

/* ==== Утилиты libplist (сборка декларации) ==== */

/* Пустая строка вместо NULL; недопустимые многобайтные цепочки не ждём. */
static plist_t dNewStr(const char *s)
{
  return plist_new_string(s ? s : "");
}

static void dPutStr(plist_t d, const char *key, const char *val)
{
  plist_dict_set_item(d, key, dNewStr(val));
}

static void dPutUint(plist_t d, const char *key, unsigned long long val)
{
  plist_dict_set_item(d, key, plist_new_uint(val));
}

static void dPutDate(plist_t d, const char *key, gint64 unixSec)
{
  /* Apple-дата: plist_new_unix_date хранит секунды с 2001-01-01. */
  plist_dict_set_item(d, key, plist_new_unix_date((int64_t)unixSec));
}

/* Декларация Sync_00000000.plist — структура 1:1 с gen_decl.py
 * (проверено: устройство принимает, трек канонизирует).
 * Владение буфером — malloc (та же память, что plist_to_bin). */
static unsigned char *s3uBuildDeclaration(const MedialibMeta *m, gint64 pid,
                                          guint32 artworkId, size_t *declLen,
                                          GError **error)
{
  gint64 nowSec = (gint64)(g_get_real_time() / G_USEC_PER_SEC);
  char pidStr[32];
  snprintf(pidStr, sizeof(pidStr), "%lld", (long long)pid);

  plist_t root = plist_new_dict();
  plist_t ops = plist_new_array();

  plist_t dbInfo = plist_new_dict();
  dPutUint(dbInfo, "audio_language", 0);
  dPutUint(dbInfo, "subtitle_language", 0);
  dPutUint(dbInfo, "primary_container_pid", 460217054914055021ULL);

  plist_t op1 = plist_new_dict();
  dPutStr(op1, "operation", "update_db_info");
  dPutUint(op1, "pid", 860019141250340ULL);
  plist_dict_set_item(op1, "db_info", dbInfo);
  plist_array_append_item(ops, op1);

  plist_t item = plist_new_dict();
  dPutStr(item, "album", m->album);
  dPutStr(item, "album_artist", m->artist);
  dPutUint(item, "album_pid", 0);
  dPutStr(item, "artist", m->artist);
  dPutUint(item, "artist_pid", 0);
  dPutUint(item, "artwork_cache_id", artworkId);
  dPutStr(item, "comment", "");
  dPutStr(item, "composer", "");
  dPutDate(item, "date_created", nowSec);
  dPutStr(item, "description", "");
  dPutUint(item, "disc_count", 0);
  dPutUint(item, "disc_number", 0);
  dPutStr(item, "genre", m->genre);
  dPutStr(item, "grouping", "");
  plist_dict_set_item(item, "is_song", plist_new_bool(TRUE));
  dPutStr(item, "sort_album", m->album);
  dPutStr(item, "sort_album_artist", m->artist);
  dPutStr(item, "sort_artist", m->artist);
  dPutStr(item, "sort_composer", "");
  dPutStr(item, "sort_name", m->title);
  dPutStr(item, "title", m->title);
  dPutUint(item, "total_time_ms", (unsigned long long)(m->duration_ms > 0 ? m->duration_ms : 0));
  dPutUint(item, "track_count", 0);
  dPutUint(item, "track_number", (unsigned long long)(m->track_number > 0 ? m->track_number : 0));
  dPutUint(item, "year", (unsigned long long)(m->year > 0 ? m->year : 0));

  plist_t itemStats = plist_new_dict();
  plist_dict_set_item(itemStats, "has_been_played", plist_new_bool(FALSE));
  dPutUint(itemStats, "play_count_recent", 0);
  dPutUint(itemStats, "play_count_user", 0);
  dPutUint(itemStats, "skip_count_recent", 0);
  dPutUint(itemStats, "skip_count_user", 0);

  plist_t loc = plist_new_dict();
  dPutStr(loc, "kind", "MPEG Audio"); /* mp3 (для m4a/aac нужен свой kind) */

  plist_t avfmt = plist_new_dict();
  dPutUint(avfmt, "audio_format", 301); /* MPEG Audio */
  dPutUint(avfmt, "bit_rate", (unsigned long long)(m->bit_rate > 0 ? m->bit_rate : 320));
  dPutUint(avfmt, "sample_rate", 0);

  plist_t op2 = plist_new_dict();
  dPutStr(op2, "operation", "insert_track");
  plist_dict_set_item(op2, "item", item);
  plist_dict_set_item(op2, "item_stats", itemStats);
  plist_dict_set_item(op2, "location", loc);
  dPutUint(op2, "pid", (unsigned long long)pid);
  plist_dict_set_item(op2, "avformat_info", avfmt);
  plist_array_append_item(ops, op2);

  plist_dict_set_item(root, "operations", ops);
  dPutUint(root, "revision", 0);
  plist_dict_set_item(root, "timestamp", plist_new_unix_date((int64_t)nowSec));

  char *bin = NULL;
  uint32_t len = 0;
  plist_err_t pb = plist_to_bin(root, &bin, &len);
  plist_free(root);
  if (pb != PLIST_ERR_SUCCESS || !bin) {
    g_set_error(error, s3uQuark(), 35,
                tr("декларация: plist_to_bin не удался (rc=%d)"), (int)pb);
    return NULL;
  }
  (void)pidStr;
  *declLen = len;
  return (unsigned char *)bin;
}

/* ==== Утилиты AFC ==== */

/* Запись буфера в файл на устройстве (обложка, декларация, .cig). */
static gboolean s3uAfcWrite(afc_client_t afc, const char *remote,
                            const unsigned char *data, size_t len,
                            GError **error)
{
  uint64_t h = 0;
  if (afc_file_open(afc, remote, AFC_FOPEN_WRONLY, &h) != AFC_E_SUCCESS) {
    g_set_error(error, s3uQuark(), 40,
                tr("AFC: открыть %s на запись не удалось"), remote);
    return FALSE;
  }
  gboolean ok = TRUE;
  size_t off = 0;
  while (off < len) {
    uint32_t sent = 0;
    size_t chunk = (len - off) > (1u << 17) ? (1u << 17) : (len - off);
    if (afc_file_write(afc, h, (const char *)(data + off), (uint32_t)chunk,
                       &sent) != AFC_E_SUCCESS ||
        sent != chunk) {
      g_set_error(error, s3uQuark(), 41,
                  tr("AFC: запись %s оборвалась (%zu из %zu)"), remote, off, len);
      ok = FALSE;
      break;
    }
    off += sent;
  }
  afc_file_close(afc, h);
  return ok;
}

/* Копия файла внутри устройства (Airlock → /iTunes_Control/Music). */
static gboolean s3uAfcCopy(afc_client_t afc, const char *from, const char *to,
                           unsigned long long *copiedOut)
{
  uint64_t rh = 0, wh = 0;
  char *buf = malloc(1u << 17);
  gboolean ok = buf != NULL;
  unsigned long long total = 0;
  if (!ok)
    return FALSE;
  if (afc_file_open(afc, from, AFC_FOPEN_RDONLY, &rh) != AFC_E_SUCCESS ||
      afc_file_open(afc, to, AFC_FOPEN_WRONLY, &wh) != AFC_E_SUCCESS) {
    ok = FALSE;
  }
  if (ok) {
    for (;;) {
      uint32_t got = 0;
      if (afc_file_read(afc, rh, buf, 1u << 17, &got) != AFC_E_SUCCESS ||
          got == 0)
        break;
      uint32_t sent = 0;
      if (afc_file_write(afc, wh, buf, got, &sent) != AFC_E_SUCCESS ||
          sent != got) {
        ok = FALSE;
        break;
      }
      total += got;
    }
  }
  if (wh)
    afc_file_close(afc, wh);
  if (rh)
    afc_file_close(afc, rh);
  free(buf);
  if (copiedOut)
    *copiedOut = total;
  return ok;
}

/* Инфо о файле в Airlock: есть ли файл и его размер. */
static gboolean s3uAfcFileInfo(afc_client_t afc, const char *remote,
                               long *sizeOut)
{
  char **info = NULL;
  if (afc_get_file_info(afc, remote, &info) != AFC_E_SUCCESS || !info)
    return FALSE;
  gboolean ok = FALSE;
  for (char **kv = info; kv[0] && kv[1]; kv += 2) {
    if (!strcmp(kv[0], "st_size")) {
      if (sizeOut)
        *sizeOut = atol(kv[1]);
      ok = TRUE;
    }
  }
  afc_dictionary_free(info);
  return ok;
}

/* ==== atc-диалог (ком.apple.atc): ручной LE32-фрейминг + bplist ==== */

static double atcNowS(void)
{
  struct timespec ts;
  clock_gettime(CLOCK_MONOTONIC, &ts);
  return (double)ts.tv_sec + (double)ts.tv_nsec / 1e9;
}

static char *atcGetStr(plist_t pl, const char *key)
{
  plist_t n = pl ? plist_dict_get_item(pl, key) : NULL;
  char *s = NULL;
  if (n && plist_get_node_type(n) == PLIST_STRING)
    plist_get_string_val(n, &s);
  return s;
}

/* Приём сообщения: LE32-префикс + bplist00.
 * 0 — ок; -1 — бюджет исчерпан; -2 — ошибка транспортного слоя. */
static int atcRecvMsg(idevice_connection_t conn, plist_t *out, unsigned tmoMs,
                      double deadline)
{
  unsigned char b4[4] = { 0 };
  uint32_t got = 0;
  *out = NULL;
  for (;;) {
    double left = deadline - atcNowS();
    if (left <= 0)
      return -1;
    unsigned t = (tmoMs < (unsigned)(left * 1000.0)) ? tmoMs
                                                    : (unsigned)(left * 1000.0);
    idevice_error_t r =
        idevice_connection_receive_timeout(conn, (char *)b4, 4, &got, t);
    if (r == IDEVICE_E_SUCCESS && got == 4)
      break;
    if (r == IDEVICE_E_SUCCESS && got == 0)
      continue;
    return -2;
  }
  uint32_t len = (uint32_t)b4[0] | ((uint32_t)b4[1] << 8) |
                 ((uint32_t)b4[2] << 16) | ((uint32_t)b4[3] << 24);
  if (len == 0 || len > 8u * 1024u * 1024u)
    return -2;
  unsigned char *body = malloc(len);
  if (!body)
    return -2;
  uint32_t got2 = 0;
  double left = deadline - atcNowS();
  idevice_error_t r2 = idevice_connection_receive_timeout(
      conn, (char *)body, len, &got2, left > 1.0 ? (unsigned)(left * 1000.0) : 1);
  if (r2 != IDEVICE_E_SUCCESS || got2 != len) {
    free(body);
    return -2;
  }
  if (got2 < 8 || memcmp(body, "bplist00", 8) != 0) {
    free(body);
    return -2;
  }
  plist_from_bin((const char *)body, got2, out);
  free(body);
  return *out ? 0 : -2;
}

/* Отправка: LE32-префикс + bplist. 0 — ок. */
static int atcSendMsg(idevice_connection_t conn, plist_t pl)
{
  char *bin = NULL;
  uint32_t len = 0;
  if (plist_to_bin(pl, &bin, &len) != PLIST_ERR_SUCCESS || !bin)
    return -2;
  unsigned char pre[4] = { (unsigned char)(len & 0xff),
                           (unsigned char)((len >> 8) & 0xff),
                           (unsigned char)((len >> 16) & 0xff),
                           (unsigned char)((len >> 24) & 0xff) };
  uint32_t sent = 0;
  int rc = 0;
  if (idevice_connection_send(conn, (const char *)pre, 4, &sent) !=
              IDEVICE_E_SUCCESS ||
      sent != 4) {
    rc = -2;
  } else if (idevice_connection_send(conn, bin, len, &sent) !=
                 IDEVICE_E_SUCCESS ||
             sent != len) {
    rc = -2;
  }
  free(bin);
  return rc;
}

/* FileProgress {AssetID, AssetProgress, Dataclass:"Media",
 * OverallProgress:1.0}. */
static void atcSendFileProgress(idevice_connection_t conn, const char *assetId,
                                double progress)
{
  plist_t fp = plist_new_dict();
  plist_t pp = plist_new_dict();
  dPutStr(pp, "AssetID", assetId);
  plist_dict_set_item(pp, "AssetProgress", plist_new_real(progress));
  dPutStr(pp, "Dataclass", "Media");
  plist_dict_set_item(pp, "OverallProgress", plist_new_real(1.0));
  dPutStr(fp, "Command", "FileProgress");
  plist_dict_set_item(fp, "Params", pp);
  plist_dict_set_item(fp, "Session", plist_new_uint(1));
  atcSendMsg(conn, fp);
  plist_free(fp);
}

/* Ответ на элемент AssetManifest. Только НАШ pid копируется из Airlock
 * (чужие pids в манифесте — это необжитые файлы прошлых синхов, их
 * содержимое не копируем во избежание дублей у пользователя). */
static void atcHandleManifest(idevice_connection_t conn, afc_client_t afc,
                              plist_t msg, const char *pidStr,
                              unsigned *processed, gboolean *sawOurPid)
{
  plist_t p5 = plist_dict_get_item(msg, "Params");
  plist_t am = p5 ? plist_dict_get_item(p5, "AssetManifest") : NULL;
  plist_t media = am ? plist_dict_get_item(am, "Media") : NULL;
  uint32_t n = (media && plist_get_node_type(media) == PLIST_ARRAY)
                   ? plist_array_get_size(media)
                   : 0;
  logMessage(tr("atc: AssetManifest: %u записей"), n);
  for (uint32_t ei = 0; ei < n; ei++) {
    plist_t ent = plist_array_get_item(media, ei);
    char *assetId = NULL;
    plist_t aid = plist_dict_get_item(ent, "AssetID");
    if (aid && plist_get_node_type(aid) == PLIST_STRING)
      plist_get_string_val(aid, &assetId);
    if (!assetId) {
      logMessage(tr("atc: запись %u без AssetID — пропущена"), ei);
      continue;
    }
    gboolean ours = strcmp(assetId, pidStr) == 0;
    if (ours)
      *sawOurPid = TRUE;

    char remoteAir[192];
    snprintf(remoteAir, sizeof(remoteAir), "/Airlock/Media/%s", assetId);
    long fileSize = 0;
    gboolean haveFile = s3uAfcFileInfo(afc, remoteAir, &fileSize);

    /* Имя назначения: последние 4 цифры AssetID (с заворотом) буквы
     * A..J; корзина F%02d = 10 + (порядковый номер записи % 80).
     * F00 не используем — там файлы пользователя. */
    size_t L = strlen(assetId);
    if (L > 0) {
      char bucket[8];
      snprintf(bucket, sizeof(bucket), "F%02d",
               10 + (int)((*processed) % 80));
      const char *letters = "ABCDEFGHIJ";
      char nm[5];
      for (int k = 0; k < 4; k++) {
        char c = assetId[(L - 1 + (size_t)k) % L];
        nm[k] = (c >= '0' && c <= '9') ? letters[c - '0'] : 'X';
      }
      nm[4] = 0;
      if (ours && haveFile) {
        char dirbuf[64];
        snprintf(dirbuf, sizeof(dirbuf), "/iTunes_Control/Music/%s", bucket);
        afc_make_directory(afc, dirbuf);
      }
      char dest[256];
      snprintf(dest, sizeof(dest), "/iTunes_Control/Music/%s/%s.mp3", bucket,
               nm);
      atcSendFileProgress(conn, assetId, 0.0);
      if (ours && haveFile) {
        unsigned long long copied = 0;
        if (s3uAfcCopy(afc, remoteAir, dest, &copied))
          logMessage(tr("atc: скопировано %llu Б → %s"), copied, dest);
        else
          logMessage(tr("atc: копирование в %s не удалось"), dest);
      }
      atcSendFileProgress(conn, assetId, 1.0);

      plist_t fc = plist_new_dict();
      plist_t fcp = plist_new_dict();
      dPutStr(fcp, "AssetID", assetId);
      dPutStr(fcp, "AssetPath", dest);
      dPutStr(fcp, "Dataclass", "Media");
      dPutStr(fc, "Command", "FileComplete");
      plist_dict_set_item(fc, "Params", fcp);
      plist_dict_set_item(fc, "Session", plist_new_uint(1));
      atcSendMsg(conn, fc);
      plist_free(fc);
    }
    (*processed)++;
    free(assetId);
  }
}

/* Полный atc-диалог одного трека. Возвращает SYNC3U_IMPORT_OK /
 * SYNC3U_IMPORT_RETRY (сервер 104 — повтор) / SYNC3U_IMPORT_FAIL. */
static int atcSyncOne(const char *udid, gint64 pid,
                      const unsigned char *hostGrappa, size_t hgLen,
                      guint32 K, const unsigned char *declData,
                      size_t declLen, GError **error)
{
  idevice_t dev = NULL;
  lockdownd_client_t ld = NULL;
  lockdownd_service_descriptor_t atcSvc = NULL, afcSvc = NULL;
  idevice_connection_t conn = NULL;
  afc_client_t afc = NULL;
  unsigned char *devGrappa = NULL;
  size_t devGrappaLen = 0;
  unsigned char *cig = NULL;
  size_t cigLen = 0;
  plist_t msg = NULL;
  int result = SYNC3U_IMPORT_FAIL;
  char pidStr[24];
  snprintf(pidStr, sizeof(pidStr), "%lld", (long long)pid);

  if (idevice_new(&dev, udid) != IDEVICE_E_SUCCESS || !dev) {
    g_set_error(error, s3uQuark(), 50,
                tr("устройство %s не найдено (ATC)"), udid);
    return SYNC3U_IMPORT_FAIL;
  }
  if (lockdownd_client_new_with_handshake(dev, &ld, "apple-devices") !=
          LOCKDOWN_E_SUCCESS ||
      !ld) {
    s3uErr(error, 51, tr("lockdown handshake не удался (ATC)"));
    goto done;
  }
  if (lockdownd_start_service(ld, ATC_SERVICE, &atcSvc) != LOCKDOWN_E_SUCCESS ||
      !atcSvc) {
    g_set_error(error, s3uQuark(), 52,
                tr("старт %s не удался"), ATC_SERVICE);
    goto done;
  }
  if (idevice_connect(dev, atcSvc->port, &conn) != IDEVICE_E_SUCCESS || !conn) {
    g_set_error(error, s3uQuark(), 53,
                tr("подключение к порту %u (atc) не удалось"),
                (unsigned)atcSvc->port);
    goto done;
  }
  if (atcSvc->ssl_enabled &&
      idevice_connection_enable_ssl(conn) != IDEVICE_E_SUCCESS) {
    s3uErr(error, 54, tr("включение SSL на atc-канале не удалось"));
    goto done;
  }

  /* --- Фаза 1: пропускаем уведомления, ждём SyncAllowed --- */
  {
    double deadline = atcNowS() + ATC_PHASE1_BUDGET_S;
    gboolean gotAllowed = FALSE;
    for (;;) {
      int rc = atcRecvMsg(conn, &msg, 1000, deadline);
      if (rc == -1) {
        g_set_error(error, s3uQuark(), 55,
                    tr("atc: SyncAllowed не пришёл за %d с"),
                    (int)ATC_PHASE1_BUDGET_S);
        goto done;
      }
      if (rc == -2) {
        s3uErr(error, 56, tr("atc: ошибка связи на фазе 1"));
        goto done;
      }
      char *cmd = atcGetStr(msg, "Command");
      gotAllowed = cmd && strcmp(cmd, "SyncAllowed") == 0;
      free(cmd);
      plist_free(msg);
      msg = NULL;
      if (gotAllowed)
        break;
    }
    logMessage(tr("atc: SyncAllowed получен"));
  }

  /* --- Фаза 2: RequestingSync (структура из трассы 3uTools) --- */
  {
    plist_t hostinfo = plist_new_dict();
    dPutStr(hostinfo, "SyncHostName", "ow");
    plist_t syncedDc = plist_new_array();
    plist_array_append_item(syncedDc, plist_new_string("Media"));
    plist_dict_set_item(hostinfo, "SyncedDataclasses", syncedDc);
    dPutStr(hostinfo, "Version", "11.1.0.126");
    plist_dict_set_item(
        hostinfo, "Grappa",
        plist_new_data((const char *)hostGrappa, (uint64_t)hgLen));
    dPutStr(hostinfo, "LibraryID", "0000000000000000");

    plist_t dArr = plist_new_array();
    plist_array_append_item(dArr, plist_new_string("Media"));
    plist_t anchors = plist_new_dict();
    dPutStr(anchors, "Media", "1");

    plist_t params = plist_new_dict();
    plist_dict_set_item(params, "HostInfo", hostinfo);
    plist_dict_set_item(params, "Dataclasses", dArr);
    plist_dict_set_item(params, "DataclassAnchors", anchors);

    plist_t req = plist_new_dict();
    dPutStr(req, "Command", "RequestingSync");
    plist_dict_set_item(req, "Params", params);
    plist_dict_set_item(req, "Session", plist_new_uint(1));
    int rs = atcSendMsg(conn, req);
    plist_free(req);
    if (rs != 0) {
      s3uErr(error, 57, tr("atc: отправка RequestingSync не удалась"));
      goto done;
    }
  }

  /* --- Фаза 3: ждём ReadyForSync; синхронизируем Grappa устройства --- */
  {
    double deadline = atcNowS() + ATC_PHASE3_BUDGET_S;
    for (;;) {
      int rc = atcRecvMsg(conn, &msg, 500, deadline);
      if (rc == -1) {
        g_set_error(error, s3uQuark(), 58,
                    tr("atc: ReadyForSync не пришёл за %d с"),
                    (int)ATC_PHASE3_BUDGET_S);
        goto done;
      }
      if (rc == -2) {
        s3uErr(error, 59, tr("atc: ошибка связи на фазе 3"));
        goto done;
      }
      char *cmd = atcGetStr(msg, "Command");
      gboolean isFailed = cmd && strcmp(cmd, "SyncFailed") == 0;
      gboolean isReady = cmd && strcmp(cmd, "ReadyForSync") == 0;
      free(cmd);
      if (isFailed) {
        plist_free(msg);
        msg = NULL;
        s3uErr(error, 60, tr("atc: устройство ответило SyncFailed"));
        goto done;
      }
      if (isReady) {
        plist_t prms = plist_dict_get_item(msg, "Params");
        plist_t dinf = prms ? plist_dict_get_item(prms, "DeviceInfo") : NULL;
        plist_t grp = dinf ? plist_dict_get_item(dinf, "Grappa") : NULL;
        if (grp && plist_get_node_type(grp) == PLIST_DATA) {
          char *gd = NULL;
          uint64_t gl = 0;
          plist_get_data_val(grp, &gd, &gl);
          if (gd && gl) {
            devGrappa = malloc(gl);
            if (devGrappa) {
              memcpy(devGrappa, gd, gl);
              devGrappaLen = gl;
            }
            free(gd);
          }
        }
        plist_free(msg);
        msg = NULL;
        if (!devGrappa) {
          s3uErr(error, 61, tr("atc: в ReadyForSync нет Grappa устройства"));
          goto done;
        }
        break;
      }
      plist_free(msg);
      msg = NULL;
    }
  }

  /* --- cig-запрос к серверу (K + A + B) --- */
  {
    unsigned errCode = 0;
    int cr = s3uRequestCig(K, devGrappa, devGrappaLen, declData, declLen,
                           &cig, &cigLen, &errCode, error);
    free(devGrappa);
    devGrappa = NULL;
    if (cr == S3U_CIG_REFUSAL) {
      if (errCode == 104) {
        /* штатный отказ сервера — цикл повторит всю попытку */
        g_clear_error(error);
        result = SYNC3U_IMPORT_RETRY;
        goto done;
      }
      goto done; /* error уже заполнён/заполнить ниже — ответ не 104 */
    }
    if (cr != S3U_CIG_OK)
      goto done;
    logMessage(tr("atc: cig получен (%zu Б)"), cigLen);
  }

  /* --- Фаза 3.5: декларация + .cig через AFC --- */
  if (lockdownd_start_service(ld, AFC_SERVICE, &afcSvc) != LOCKDOWN_E_SUCCESS ||
      !afcSvc) {
    g_set_error(error, s3uQuark(), 62, tr("старт %s не удался"), AFC_SERVICE);
    goto done;
  }
  if (afc_client_new(dev, afcSvc, &afc) != AFC_E_SUCCESS || !afc) {
    s3uErr(error, 63, tr("afc_client_new (atc) не удался"));
    goto done;
  }
  afc_make_directory(afc, "/iTunes_Control/Sync");
  afc_make_directory(afc, "/iTunes_Control/Sync/Media");
  if (!s3uAfcWrite(afc, "/iTunes_Control/Sync/Media/Sync_00000000.plist",
                   declData, declLen, error))
    goto done;
  if (!s3uAfcWrite(afc, "/iTunes_Control/Sync/Media/Sync_00000000.plist.cig",
                   cig, cigLen, error))
    goto done;
  logMessage(tr("atc: декларация %zu Б и .cig %zu Б залиты"), declLen, cigLen);

  /* --- Фаза 4: FinishedSyncingMetadata --- */
  {
    plist_t syncTypes = plist_new_dict();
    plist_dict_set_item(syncTypes, "Media", plist_new_uint(1));
    plist_t da = plist_new_dict();
    dPutStr(da, "Media", "1");
    plist_t p4 = plist_new_dict();
    plist_dict_set_item(p4, "SyncTypes", syncTypes);
    plist_dict_set_item(p4, "DataclassAnchors", da);
    plist_t fin = plist_new_dict();
    dPutStr(fin, "Command", "FinishedSyncingMetadata");
    plist_dict_set_item(fin, "Params", p4);
    plist_dict_set_item(fin, "Session", plist_new_uint(1));
    int rs = atcSendMsg(conn, fin);
    plist_free(fin);
    if (rs != 0) {
      s3uErr(error, 64, tr("atc: отправка FinishedSyncingMetadata не удалась"));
      goto done;
    }
  }

  /* --- Фаза 5: AssetManifest → FileProgress/копия/FileComplete/… --- */
  {
    double deadline = atcNowS() + ATC_PHASE5_BUDGET_S;
    unsigned processed = 0;
    gboolean sawOurPid = FALSE;
    gboolean finished = FALSE;
    for (;;) {
      int rc = atcRecvMsg(conn, &msg, 1000, deadline);
      if (rc == -1) {
        g_set_error(error, s3uQuark(), 65,
                    tr("atc: SyncFinished не пришёл за %d с"),
                    (int)ATC_PHASE5_BUDGET_S);
        goto done;
      }
      if (rc == -2) {
        s3uErr(error, 66, tr("atc: связь закрыта устройством до SyncFinished"));
        goto done;
      }
      char *cmd = atcGetStr(msg, "Command");
      if (cmd && strcmp(cmd, "AssetManifest") == 0) {
        atcHandleManifest(conn, afc, msg, pidStr, &processed, &sawOurPid);
      } else if (cmd && strcmp(cmd, "Ping") == 0) {
        plist_t po = plist_new_dict();
        dPutStr(po, "Command", "Pong");
        plist_dict_set_item(po, "Session", plist_new_uint(1));
        atcSendMsg(conn, po);
        plist_free(po);
      } else if (cmd && strcmp(cmd, "SyncFinished") == 0) {
        finished = TRUE;
      } else if (cmd && strcmp(cmd, "SyncFailed") == 0) {
        free(cmd);
        plist_free(msg);
        msg = NULL;
        s3uErr(error, 67, tr("atc: устройство ответило SyncFailed в фазе 5"));
        goto done;
      }
      free(cmd);
      plist_free(msg);
      msg = NULL;
      if (finished) {
        result = SYNC3U_IMPORT_OK;
        if (!sawOurPid)
          logMessage(tr("atc: SyncFinished получен, но наш pid не был "
                        "в манифесте (возможен дедуп устройства)"));
        else
          logMessage(tr("atc: SyncFinished — трек %s внесён устройством"),
                     pidStr);
        break;
      }
    }
  }

done:
  free(devGrappa);
  free(cig);
  if (msg)
    plist_free(msg);
  if (afc)
    afc_client_free(afc);
  if (conn)
    idevice_disconnect(conn);
  if (atcSvc)
    lockdownd_service_descriptor_free(atcSvc);
  if (afcSvc)
    lockdownd_service_descriptor_free(afcSvc);
  if (ld)
    lockdownd_client_free(ld);
  if (dev)
    idevice_free(dev);
  return result;
}

/* ==== Пакетный прогон ==== */

/* Свежий pid на каждый трек: 7773-префикс + время и порядковый номер. */
static gint64 s3uNextPidTrack(void)
{
  static gint64 seq = 0;
  gint64 ms = (gint64)(g_get_real_time() / 1000);
  return (gint64)7773000000000000LL +
         ((ms % 1000000000LL) * 1000LL) + (seq++ % 1000LL);
}

int sync3uImportBatch(const char *udid, afc_client_t afc,
                      GPtrArray *local_paths, GPtrArray *metas,
                      GError **error)
{
  char ud[25];
  size_t udLen = 0;
  int imported = 0;
  gboolean sawServerRefusal = FALSE;

  if (!udid || !afc || !local_paths || !metas ||
      local_paths->len != metas->len) {
    s3uErr(error, 70, tr("sync3u: некорректные аргументы пакета"));
    return -1;
  }
  if (!s3uUdidDense(udid, ud, &udLen)) {
    s3uErr(error, 71, tr("sync3u: UDID не приводим к шагу 2 (нужно ровно 24 знака без дефисов)"));
    return -1;
  }
  logMessage(tr("sync3u: импорт через сервер 3u: треков %u"), (unsigned)metas->len);

  afc_make_directory(afc, "/Airlock");
  afc_make_directory(afc, "/Airlock/Media");
  afc_make_directory(afc, "/Airlock/Media/Artwork");

  for (guint i = 0; i < metas->len && i < local_paths->len; i++) {
    MedialibMeta *m = g_ptr_array_index(metas, i);
    const char *lp = g_ptr_array_index(local_paths, i);
    char *base = g_path_get_basename(lp);
    gint64 pid = s3uNextPidTrack();
    char pidStr[24];
    snprintf(pidStr, sizeof(pidStr), "%lld", (long long)pid);
    char remoteAir[192];
    snprintf(remoteAir, sizeof(remoteAir), "/Airlock/Media/%s", pidStr);

    logMessage(tr("sync3u: «%s» → /Airlock/Media/%s"), base, pidStr);
    if (afcUploadFile(afc, lp, remoteAir) != 0) {
      logMessage(tr("sync3u: заливка «%s» в Airlock не удалась — трек пропущен"),
                 base);
      g_free(base);
      continue;
    }
    /* файл занимает место в Airlock — для очистки после отказа сервера
     * не трогаем (отдельный инструмент пользователя). */
    if (m->has_cover && m->cover_data && m->cover_len) {
      char remoteArt[192];
      snprintf(remoteArt, sizeof(remoteArt), "/Airlock/Media/Artwork/%s",
               pidStr);
      GError *cerr = NULL;
      if (!s3uAfcWrite(afc, remoteArt, m->cover_data, m->cover_len, &cerr))
        logMessage(tr("sync3u: обложка не залита (%s)"), cerr->message);
      g_clear_error(&cerr);
    }

    guint32 artworkId = (guint32)((pid % 1000000000LL) + 1);
    size_t declLen = 0;
    GError *derr = NULL;
    unsigned char *decl = s3uBuildDeclaration(m, pid, artworkId, &declLen, &derr);
    if (!decl) {
      logMessage(tr("sync3u: декларация «%s» не собралась: %s"), base,
                 derr->message);
      g_error_free(derr);
      g_free(base);
      continue;
    }

    int outcome = SYNC3U_IMPORT_FAIL;
    for (int att = 1; att <= S3U_CIG_MAX_ATTEMPTS; att++) {
      GError *aerr = NULL;
      logMessage(tr("sync3u: попытка %d/%d (pid %s)"), att,
                 S3U_CIG_MAX_ATTEMPTS, pidStr);
      guint32 K = 0;
      unsigned char *hg = NULL;
      size_t hgLen = 0;
      if (s3uStep2(ud, udLen, &K, &hg, &hgLen, &aerr) != 0) {
        logMessage(tr("sync3u: step2 не удался: %s"),
                   aerr && aerr->message ? aerr->message : "?");
        sawServerRefusal = TRUE;
        g_clear_error(&aerr);
        break;
      }
      logMessage(tr("sync3u: step2: K=0x%08x, hostGrappa=%zu Б"), K, hgLen);

      outcome = atcSyncOne(udid, pid, hg, hgLen, K, decl, declLen, &aerr);
      free(hg);
      if (outcome == SYNC3U_IMPORT_OK) {
        imported++;
        g_clear_error(&aerr);
        break;
      }
      if (outcome == SYNC3U_IMPORT_RETRY) {
        /* отказ 104 — рецепт: пауза 60 с и полный повтор цикла */
        sawServerRefusal = TRUE;
        logMessage(tr("sync3u: сервер отказал (104) — пауза %d с"),
                   S3U_RETRY_PAUSE_S);
        g_clear_error(&aerr);
        if (att < S3U_CIG_MAX_ATTEMPTS)
          g_usleep(S3U_RETRY_PAUSE_S * G_USEC_PER_SEC);
        continue;
      }
      /* SYNC3U_IMPORT_FAIL */
      logMessage(tr("sync3u: atc-диалог не удался: %s"),
                 aerr && aerr->message ? aerr->message : "?");
      g_clear_error(&aerr);
      break;
    }
    free(decl);
    g_free(base);
  }

  if (imported > 0)
    return imported;
  if (sawServerRefusal) {
    s3uErr(error, 72, tr("сервер 3u недоступен или отказал во всех попытках"));
    return -2;
  }
  s3uErr(error, 73, tr("atc-синхронизация на устройстве не завершилась"));
  return -1;
}
