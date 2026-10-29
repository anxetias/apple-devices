/* atc_probe2.c — слушаем atc-канал после Capabilities БЕЗ ответов хоста.
   Цель: узнать, шлёт ли устройство SyncAllowed само (тогда Capabilities
   можно игнорировать) или ждёт ответа. Только чтение. */
#include <libimobiledevice/libimobiledevice.h>
#include <libimobiledevice/lockdown.h>
#include <plist/plist.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static double now_s(void)
{
  struct timespec ts;
  clock_gettime(CLOCK_MONOTONIC, &ts);
  return (double)ts.tv_sec + (double)ts.tv_nsec / 1e9;
}

static char *get_command(plist_t pl)
{
  plist_t n = pl ? plist_dict_get_item(pl, "Command") : NULL;
  char *s = NULL;
  if (n && plist_get_node_type(n) == PLIST_STRING)
    plist_get_string_val(n, &s);
  return s;
}

static void dump_plist_short(const char *tag, plist_t pl)
{
  char *xml = NULL;
  uint32_t len = 0;
  if (pl && plist_to_xml(pl, &xml, &len) == PLIST_ERR_SUCCESS && xml) {
    uint32_t show = len < 1200 ? len : 1200;
    printf("---- %s (%u байт xml) ----\n%.*s\n", tag, len, (int)show, xml);
    free(xml);
  } else {
    printf("---- %s: <нет xml> ----\n", tag);
  }
  fflush(stdout);
}

/* принять одно сообщение: LE32-префикс + тело; 0=ок, -1=таймаут, -2=ошибка */
static int recv_msg(idevice_connection_t conn, plist_t *out, unsigned tmo_ms,
                    double deadline)
{
  unsigned char b4[4] = {0};
  uint32_t got = 0;
  *out = NULL;
  for (;;) {
    double left = deadline - now_s();
    if (left <= 0)
      return -1;
    unsigned t = (tmo_ms < (unsigned)(left * 1000)) ? tmo_ms
                                                   : (unsigned)(left * 1000);
    idevice_error_t r =
        idevice_connection_receive_timeout(conn, (char *)b4, 4, &got, t);
    if (r == IDEVICE_E_SUCCESS && got == 4)
      break;
    if (r == IDEVICE_E_SUCCESS && got == 0)
      continue; /* таймаут внутри — крутим дальше до дедлайна */
    printf("  префикс: rc=%d got=%u\n", (int)r, got);
    return -2;
  }
  uint32_t len = (uint32_t)b4[0] | ((uint32_t)b4[1] << 8) |
                 ((uint32_t)b4[2] << 16) | ((uint32_t)b4[3] << 24);
  if (len == 0 || len > 4u * 1024u * 1024u) {
    printf("  префикс мусорный: %02x %02x %02x %02x\n", b4[0], b4[1], b4[2],
           b4[3]);
    return -2;
  }
  unsigned char *body = malloc(len);
  uint32_t got2 = 0;
  double left = deadline - now_s();
  idevice_error_t r2 = idevice_connection_receive_timeout(
      conn, (char *)body, len, &got2, left > 1 ? (unsigned)(left * 1000) : 1);
  if (r2 != IDEVICE_E_SUCCESS || got2 != len) {
    printf("  тело: rc=%d got=%u из %u\n", (int)r2, got2, len);
    free(body);
    return -2;
  }
  if (got2 < 8 || memcmp(body, "bplist00", 8)) {
    printf("  тело не bplist00\n");
    free(body);
    return -2;
  }
  plist_from_bin((const char *)body, got2, out);
  free(body);
  return *out ? 0 : -2;
}

int main(int argc, char **argv)
{
  const char *udid = (argc > 1) ? argv[1] : NULL;
  idevice_t dev = NULL;
  if (idevice_new(&dev, udid) != IDEVICE_E_SUCCESS) {
    printf("устройство не найдено\n");
    return 1;
  }
  lockdownd_client_t ld = NULL;
  char *label = strdup("atc-probe2");
  if (lockdownd_client_new_with_handshake(dev, &ld, label) != LOCKDOWN_E_SUCCESS) {
    printf("lockdown handshake: отказ\n");
    return 1;
  }
  lockdownd_service_descriptor_t svc = NULL;
  if (lockdownd_start_service(ld, "com.apple.atc", &svc) != LOCKDOWN_E_SUCCESS || !svc) {
    printf("StartService com.apple.atc: отказ\n");
    return 1;
  }
  printf("atc: порт %u ssl_enabled=%u\n", (unsigned)svc->port,
         (unsigned)svc->ssl_enabled);
  idevice_connection_t conn = NULL;
  if (idevice_connect(dev, svc->port, &conn) != IDEVICE_E_SUCCESS) {
    printf("idevice_connect: отказ\n");
    return 1;
  }
  if (svc->ssl_enabled) {
    idevice_error_t re = idevice_connection_enable_ssl(conn);
    printf("enable_ssl: rc=%d\n", (int)re);
    if (re != IDEVICE_E_SUCCESS)
      return 1;
  }

  double t0 = now_s();
  double deadline = t0 + 30.0;
  int nmsg = 0;
  while (now_s() < deadline) {
    plist_t pl = NULL;
    int rc = recv_msg(conn, &pl, 1000, deadline);
    if (rc == -1) {
      printf("[%.1f с] бюджет исчерпан, сообщений: %d\n", now_s() - t0, nmsg);
      break;
    }
    if (rc == -2) {
      printf("[%.1f с] ошибка связи\n", now_s() - t0);
      break;
    }
    nmsg++;
    char *cmd = get_command(pl);
    printf("[%.1f с] сообщение #%d: Command=%s\n", now_s() - t0, nmsg,
           cmd ? cmd : "<нет>");
    free(cmd);
    dump_plist_short("содержимое", pl);
    plist_free(pl);
  }

  idevice_disconnect(conn);
  lockdownd_service_descriptor_free(svc);
  lockdownd_client_free(ld);
  idevice_free(dev);
  free(label);
  return 0;
}
