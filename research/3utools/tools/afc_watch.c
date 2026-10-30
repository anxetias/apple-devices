/* afc_watch.c — быстрый поллер /iTunes_Control/Sync: ловит появление
   декларации Sync_*.plist(+.cig) и мгновенно скачивает её, пока 3uTools
   не дал устройству её потребить. Также следит за ArtworkDB.
   Запуск: afc_watch <секунды> ; файлы -> /tmp/opencode/grab_<N>_<имя> */
#include <libimobiledevice/libimobiledevice.h>
#include <libimobiledevice/lockdown.h>
#include <libimobiledevice/afc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

static double now_s(void)
{
  struct timespec ts;
  clock_gettime(CLOCK_MONOTONIC, &ts);
  return (double)ts.tv_sec + (double)ts.tv_nsec / 1e9;
}

static void grab(afc_client_t afc, const char *remote, int idx)
{
  char local[256];
  const char *base = strrchr(remote, '/');
  base = base ? base + 1 : remote;
  snprintf(local, sizeof(local), "/tmp/opencode/grab_%d_%s", idx, base);
  uint64_t handle = 0;
  if (afc_file_open(afc, remote, AFC_FOPEN_RDONLY, &handle) != AFC_E_SUCCESS)
    return;
  FILE *out = fopen(local, "wb");
  if (!out) {
    afc_file_close(afc, handle);
    return;
  }
  char buf[65536];
  uint32_t got = 0, total = 0;
  for (;;) {
    if (afc_file_read(afc, handle, buf, sizeof(buf), &got) !=
            AFC_E_SUCCESS ||
        got == 0)
      break;
    fwrite(buf, 1, got, out);
    total += got;
  }
  afc_file_close(afc, handle);
  fclose(out);
  printf("[%.2f] СХВАЧЕНО %s -> %s (%u Б)\n", now_s(), remote, local, total);
  fflush(stdout);
}

int main(int argc, char **argv)
{
  double budget = (argc > 1) ? atof(argv[1]) : 300.0;
  idevice_t dev = NULL;
  if (idevice_new(&dev, NULL) != IDEVICE_E_SUCCESS) {
    printf("no device\n");
    return 1;
  }
  lockdownd_client_t ld = NULL;
  if (lockdownd_client_new_with_handshake(dev, &ld, "afc_watch") !=
      LOCKDOWN_E_SUCCESS) {
    printf("lockdown failed\n");
    return 1;
  }
  lockdownd_service_descriptor_t svc = NULL;
  if (lockdownd_start_service(ld, "com.apple.afc", &svc) !=
      LOCKDOWN_E_SUCCESS) {
    printf("start afc failed\n");
    return 1;
  }
  afc_client_t afc = NULL;
  if (afc_client_new(dev, svc, &afc) != AFC_E_SUCCESS) {
    printf("afc failed\n");
    return 1;
  }
  printf("поллер запущен, бюджет %.0f с; смотрю Sync, Sync/Media, "
         "iTunes/ArtworkDB\n",
         budget);
  double t0 = now_s();
  int idx = 0;
  char seen[4096] = {0}; /* уже схваченные имена */
  long last_artdb = -1;
  int grabs = 0;
  while (now_s() - t0 < budget) {
    /* Sync/Media */
    char **ent = NULL;
    if (afc_read_directory(afc, "/iTunes_Control/Sync/Media", &ent) ==
        AFC_E_SUCCESS) {
      for (char **p = ent; *p; p++) {
        if (!strcmp(*p, ".") || !strcmp(*p, ".."))
          continue;
        if (strstr(seen, *p))
          continue;
        char full[256];
        snprintf(full, sizeof(full), "/iTunes_Control/Sync/Media/%s", *p);
        strncat(seen, "|", sizeof(seen) - strlen(seen) - 1);
        strncat(seen, *p, sizeof(seen) - strlen(seen) - 1);
        printf("[%.2f] ПОЯВИЛСЯ %s\n", now_s(), full);
        grab(afc, full, idx++);
        grabs++;
      }
      afc_dictionary_free(ent);
    }
    /* сам Sync (на случай раскладки без Media) */
    if (afc_read_directory(afc, "/iTunes_Control/Sync", &ent) ==
        AFC_E_SUCCESS) {
      for (char **p = ent; *p; p++) {
        if (!strcmp(*p, ".") || !strcmp(*p, "..") || !strcmp(*p, "Media"))
          continue;
        if (strstr(seen, *p))
          continue;
        char full[256];
        snprintf(full, sizeof(full), "/iTunes_Control/Sync/%s", *p);
        strncat(seen, "|", sizeof(seen) - strlen(seen) - 1);
        strncat(seen, *p, sizeof(seen) - strlen(seen) - 1);
        printf("[%.2f] ПОЯВИЛСЯ %s\n", now_s(), full);
        grab(afc, full, idx++);
        grabs++;
      }
      afc_dictionary_free(ent);
    }
    /* ArtworkDB по размеру */
    char **info = NULL;
    if (afc_get_file_info(afc, "/iTunes_Control/Artwork/ArtworkDB",
                          &info) == AFC_E_SUCCESS &&
        info) {
      for (char **q = info; *q; q += 2) {
        if (q[1] && !strcmp(*q, "st_size")) {
          long sz = atol(q[1]);
          if (last_artdb >= 0 && sz != last_artdb) {
            printf("[%.2f] ArtworkDB изменился: %ld -> %ld Б\n", now_s(),
                   last_artdb, sz);
            char lb[128];
            snprintf(lb, sizeof(lb), "/tmp/opencode/grab_%d_ArtworkDB",
                     idx++);
            /* скачать */
            uint64_t h = 0;
            if (afc_file_open(afc, "/iTunes_Control/Artwork/ArtworkDB",
                              AFC_FOPEN_RDONLY,
                              &h) == AFC_E_SUCCESS) {
              FILE *o = fopen(lb, "wb");
              if (o) {
                char b[65536];
                uint32_t g2 = 0, t2 = 0;
                for (;;) {
                  if (afc_file_read(afc, h, b, sizeof(b), &g2) !=
                          AFC_E_SUCCESS ||
                      g2 == 0)
                    break;
                  fwrite(b, 1, g2, o);
                  t2 += g2;
                }
                fclose(o);
                printf("[%.2f] ArtworkDB скачан: %u Б -> %s\n", now_s(), t2,
                       lb);
              }
              afc_file_close(afc, h);
            }
          }
          last_artdb = sz;
        }
      }
      afc_dictionary_free(info);
    }
    usleep(120000); /* 120 мс */
  }
  printf("поллер завершён: схвачено файлов %d\n", grabs);
  afc_client_free(afc);
  lockdownd_service_descriptor_free(svc);
  lockdownd_client_free(ld);
  idevice_free(dev);
  return 0;
}
