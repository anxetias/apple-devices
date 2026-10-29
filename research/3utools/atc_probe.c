/* atc_probe.c — диагностика SSL-пути atc-канала (шаг 5).
   1) StartService com.apple.atc; 2) idevice_connect + ЯВНЫЙ enable_ssl;
   3) чтение 4 байт (префикс длины) с hex-дампом; 4) при мусоре — тест
   SSL_read(num=1) для различения «отрицательный num» vs «record-слой».
   Использование: atc_probe [udid] */
#include <libimobiledevice/libimobiledevice.h>
#include <libimobiledevice/lockdown.h>
#include <plist/plist.h>
#include <openssl/err.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void dump_ssl_errors(const char *tag)
{
  unsigned long e;
  int n = 0;
  while ((e = ERR_get_error()) != 0) {
    char buf[256];
    ERR_error_string_n(e, buf, sizeof(buf));
    printf("openssl[%s]: %s\n", tag, buf);
    n++;
  }
  if (!n)
    printf("openssl[%s]: очередь пуста\n", tag);
}

static void hexdump(const char *tag, const unsigned char *p, unsigned n)
{
  printf("%s (%u байт):", tag, n);
  for (unsigned i = 0; i < n && i < 64; i++)
    printf(" %02x", p[i]);
  printf("\n");
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
  char *label = strdup("atc-probe");
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
      dump_ssl_errors("enable_ssl");
  }

  /* шаг 1: ровно 4 байта — префикс длины bplist */
  unsigned char b4[4] = {0};
  uint32_t got = 0;
  idevice_error_t r1 =
      idevice_connection_receive_timeout(conn, (char *)b4, 4, &got, 3000);
  printf("чтение4: rc=%d got=%u\n", (int)r1, got);
  if (r1 != IDEVICE_E_SUCCESS)
    dump_ssl_errors("чтение4");
  else
    hexdump("префикс", b4, got);

  if (r1 == IDEVICE_E_SUCCESS && got == 4) {
    uint32_t pktlen_le = ((uint32_t)b4[3] << 24) | ((uint32_t)b4[2] << 16) |
                         ((uint32_t)b4[1] << 8) | (uint32_t)b4[0];
    uint32_t pktlen_be = ((uint32_t)b4[0] << 24) | ((uint32_t)b4[1] << 16) |
                         ((uint32_t)b4[2] << 8) | (uint32_t)b4[3];
    printf("pktlen LE=%u BE=%u\n", pktlen_le, pktlen_be);
    uint32_t use = pktlen_le;
    if (use == 0 || use > 2u * 1024u * 1024u)
      use = pktlen_be;
    if (use == 0 || use > 2u * 1024u * 1024u) {
      printf("оба префикса мусорные — тест SSL_read(num=1):\n");
      unsigned char one = 0;
      uint32_t g1 = 0;
      idevice_error_t r3 =
          idevice_connection_receive_timeout(conn, (char *)&one, 1, &g1, 2000);
      printf("чтение1: rc=%d got=%u байт=%02x\n", (int)r3, g1, one);
      dump_ssl_errors(r3 == IDEVICE_E_SUCCESS ? "чтение1-ок" : "чтение1");
    } else {
      unsigned char *body = malloc(use);
      uint32_t got2 = 0;
      idevice_error_t r2 = idevice_connection_receive_timeout(
          conn, (char *)body, use, &got2, 5000);
      printf("чтение_тела: rc=%d got=%u из %u\n", (int)r2, got2, use);
      if (r2 != IDEVICE_E_SUCCESS)
        dump_ssl_errors("чтение_тела");
      else {
        hexdump("тело", body, got2);
        if (got2 > 8 && !memcmp(body, "bplist00", 8)) {
          plist_t pl = NULL;
          plist_from_bin((const char *)body, got2, &pl);
          if (pl) {
            char *xml = NULL;
            uint32_t xl = 0;
            plist_to_xml(pl, &xml, &xl);
            printf("== plist распознан ==\n%.*s\n",
                   xl < 2000 ? (int)xl : 2000, xml ? xml : "");
            free(xml);
            plist_free(pl);
          } else {
            printf("bplist00 есть, но разбор не удался\n");
          }
        }
      }
      free(body);
    }
  }

  idevice_disconnect(conn);
  lockdownd_service_descriptor_free(svc);
  lockdownd_client_free(ld);
  idevice_free(dev);
  free(label);
  return 0;
}
