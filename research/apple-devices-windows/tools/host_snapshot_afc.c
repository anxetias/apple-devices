/* host_snapshot_afc.c — снимок состояния устройства через AFC (host-side,
   ветка research-apple-devices-windows). Рекурсивный обход заданных корней:
   полный список в <outdir>/_list.txt, выборочное скачивание файлов.

   Правила скачивания:
     - ветка /iTunes_Control/Music — только список (файлы пользователя не тянем);
     - ветка вида «.sqlitedb, .sqlitedb-wal, .sqlitedb-shm, .plist, .cig, .sidf,
       .sidv» — до 64 МБ;
     - ветка /Airlock — до 100 МБ;
     - прочее — до 8 МБ.
   Сырые снятые файлы лежат в traces/ (gitignored) — в git не идут.

   Сборка:
     gcc -O2 -Wall -Wextra -o host_snapshot_afc host_snapshot_afc.c \
       $(pkg-config --cflags --libs libimobiledevice-1.0 libplist-2.0)
   Запуск:
     ./host_snapshot_afc <outdir> [UDID] <remote-root>...
   UDID опционален — берём первое подключённое устройство.
*/
#include <libimobiledevice/libimobiledevice.h>
#include <libimobiledevice/lockdown.h>
#include <libimobiledevice/afc.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>

#define MAX_PATH_LEN 4096
#define PULL_MAX_SMALL   (8L  << 20)
#define PULL_MAX_DBS     (64L << 20)
#define PULL_MAX_AIRLOCK (100L << 20)

static afc_client_t afc;
static FILE *listf;
static unsigned long nFile, nDir, nPulled, nSkipped;

static void mkdirsFor(const char *path)
{
  char buf[MAX_PATH_LEN];
  snprintf(buf, sizeof(buf), "%s", path);
  for (char *p = buf + 1; *p; p++) {
    if (*p == '/') {
      *p = '\0';
      mkdir(buf, 0755); /* EEXIST — норма */
      *p = '/';
    }
  }
}

static int wantPull(const char *path, long size)
{
  static const char *exts[] = { ".sqlitedb", ".sqlitedb-wal",
                                ".sqlitedb-shm", ".plist", ".cig",
                                ".sidf", ".sidv" };
  size_t pl = strlen(path);

  if (pl >= 21 && strncmp(path, "/iTunes_Control/Music", 21) == 0)
    return 0;
  for (size_t k = 0; k < sizeof(exts) / sizeof(exts[0]); k++) {
    size_t el = strlen(exts[k]);
    if (pl >= el && strcmp(path + pl - el, exts[k]) == 0)
      return size <= PULL_MAX_DBS;
  }
  if (pl >= 8 && strncmp(path, "/Airlock", 8) == 0)
    return size <= PULL_MAX_AIRLOCK;
  return size <= PULL_MAX_SMALL;
}

static long pullFile(const char *remote, const char *local)
{
  FILE *out = NULL;
  char *buf = NULL;
  uint64_t h = 0;
  long total = -1;

  out = fopen(local, "wb");
  buf = malloc(1ul << 20);
  if (!out || !buf) {
    if (out) fclose(out);
    free(buf);
    return -1;
  }
  if (afc_file_open(afc, remote, AFC_FOPEN_RDONLY, &h) != AFC_E_SUCCESS) {
    fclose(out);
    free(buf);
    return -1;
  }
  total = 0;
  for (;;) {
    uint32_t got = 0;
    if (afc_file_read(afc, h, buf, 1u << 20, &got) != AFC_E_SUCCESS || got == 0)
      break;
    if (fwrite(buf, 1, got, out) != got) {
      total = -1;
      break;
    }
    total += (long)got;
  }
  afc_file_close(afc, h);
  fclose(out);
  free(buf);
  if (total < 0)
    remove(local);
  return total;
}

static void walkDir(const char *path, const char *lroot, int depth)
{
  char **entries = NULL;

  if (depth > 32)
    return;
  if (afc_read_directory(afc, path, &entries) != AFC_E_SUCCESS) {
    fprintf(listf, "E <read_dir failed> %s\n", path);
    return;
  }
  for (char **e = entries; e && *e; e++) {
    char sub[MAX_PATH_LEN];
    char local[MAX_PATH_LEN];
    char **info = NULL;
    int isDir = 0;
    long size = -1, mtime = -1, got = 0;

    if (strcmp(*e, ".") == 0 || strcmp(*e, "..") == 0)
      continue;
    if (snprintf(sub, sizeof(sub), "%s/%s", path, *e) >= (int)sizeof(sub))
      continue;
    if (afc_get_file_info(afc, sub, &info) == AFC_E_SUCCESS && info) {
      for (char **kv = info; kv[0] && kv[1]; kv += 2) {
        if (strcmp(kv[0], "st_size") == 0)
          size = atol(kv[1]);
        else if (strcmp(kv[0], "st_mtime") == 0)
          mtime = atol(kv[1]);
        else if (strcmp(kv[0], "st_ifmt") == 0) {
          if (strcmp(kv[1], "S_IFDIR") == 0)
            isDir = 1;
          else if (strcmp(kv[1], "S_IFREG") != 0) {
            fprintf(listf, "? %10ld mt=%ld %s (ifmt=%s)\n", size, mtime, sub, kv[1]);
            continue;
          }
        }
      }
      afc_dictionary_free(info);
    }
    if (snprintf(local, sizeof(local), "%s%s", lroot, sub) >= (int)sizeof(local))
      continue;
    if (isDir) {
      nDir++;
      mkdirsFor(local);
      fprintf(listf, "D %10ld mt=%ld %s\n", size, mtime, sub);
      walkDir(sub, lroot, depth + 1);
      continue;
    }
    nFile++;
    fprintf(listf, "F %10ld mt=%ld %s", size, mtime, sub);
    if (wantPull(sub, size)) {
      mkdirsFor(local);
      got = pullFile(sub, local);
      if (got >= 0) {
        nPulled++;
        fprintf(listf, " +PULL=%ld", got);
      } else {
        nSkipped++;
        fprintf(listf, " +PULL=FAIL");
      }
    } else {
      nSkipped++;
      fprintf(listf, " (list-only)");
    }
    fprintf(listf, "\n");
  }
  afc_dictionary_free(entries);
}

int main(int argc, char **argv)
{
  const char *outdir = NULL;
  const char *udid = NULL;
  int argi = 1;
  idevice_t dev = NULL;
  lockdownd_client_t ld = NULL;
  lockdownd_service_descriptor_t svc = NULL;
  char listPath[MAX_PATH_LEN];
  time_t now = time(NULL);

  if (argc > 1)
    outdir = argv[argi++];
  if (argc > argi && argv[argi][0] != '/')
    udid = argv[argi++];
  if (!outdir || argc <= argi) {
    fprintf(stderr, "использование: %s <outdir> [UDID] <remote-root>...\n", argv[0]);
    return 2;
  }

  if (mkdir(outdir, 0755) != 0 && errno != EEXIST) {
    fprintf(stderr, "mkdir %s: %s\n", outdir, strerror(errno));
    return 1;
  }
  if (snprintf(listPath, sizeof(listPath), "%s/_list.txt", outdir) >= (int)sizeof(listPath))
    return 1;
  listf = fopen(listPath, "w");
  if (!listf) {
    fprintf(stderr, "открыть %s не удалось\n", listPath);
    return 1;
  }
  fprintf(listf, "# snapshot %s", ctime(&now)); /* ctime даёт \n */
  fprintf(listf, "# args:");
  for (int i = 1; i < argc; i++)
    fprintf(listf, " %s", argv[i]);
  fprintf(listf, "\n");

  if (idevice_new(&dev, udid) != IDEVICE_E_SUCCESS) {
    fprintf(stderr, "устройство не найдено (%s)\n", udid ? udid : "первое доступное");
    fclose(listf);
    return 1;
  }
  if (lockdownd_client_new_with_handshake(dev, &ld, "apple-devices-windows") !=
      LOCKDOWN_E_SUCCESS) {
    fprintf(stderr, "lockdown handshake не удался\n");
    fclose(listf);
    idevice_free(dev);
    return 1;
  }
  if (lockdownd_start_service(ld, "com.apple.afc", &svc) != LOCKDOWN_E_SUCCESS || !svc) {
    fprintf(stderr, "старт com.apple.afc не удался\n");
    fclose(listf);
    lockdownd_client_free(ld);
    idevice_free(dev);
    return 1;
  }
  if (afc_client_new(dev, svc, &afc) != AFC_E_SUCCESS) {
    fprintf(stderr, "afc client не завершился успехом\n");
    fclose(listf);
    lockdownd_service_descriptor_free(svc);
    lockdownd_client_free(ld);
    idevice_free(dev);
    return 1;
  }

  for (int i = argi; i < argc; i++)
    walkDir(argv[i], outdir, 0);

  fprintf(listf, "# итог: files=%lu dirs=%lu pulled=%lu skipped=%lu\n",
          nFile, nDir, nPulled, nSkipped);
  printf("итог: files=%lu dirs=%lu pulled=%lu skipped=%lu → %s\n",
         nFile, nDir, nPulled, nSkipped, listPath);

  afc_client_free(afc);
  lockdownd_service_descriptor_free(svc);
  lockdownd_client_free(ld);
  idevice_free(dev);
  fclose(listf);
  return 0;
}
