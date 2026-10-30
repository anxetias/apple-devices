/* afcx.c — универсальный AFC-хелпер:
   afcx ls <путь>            — список с размерами
   afcx get <удалённый> <локальный>
   afcx put <локальный> <удалённый>
   afcx rm <путь>
   afcx mkdir <путь>         */
#include <libimobiledevice/libimobiledevice.h>
#include <libimobiledevice/lockdown.h>
#include <libimobiledevice/afc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static afc_client_t open_afc(void)
{
  idevice_t dev = NULL;
  if (idevice_new(&dev, NULL) != IDEVICE_E_SUCCESS) {
    printf("no device\n");
    return NULL;
  }
  lockdownd_client_t ld = NULL;
  if (lockdownd_client_new_with_handshake(dev, &ld, "afcx") !=
      LOCKDOWN_E_SUCCESS) {
    printf("lockdown failed\n");
    return NULL;
  }
  lockdownd_service_descriptor_t svc = NULL;
  if (lockdownd_start_service(ld, "com.apple.afc", &svc) !=
      LOCKDOWN_E_SUCCESS) {
    printf("start afc failed\n");
    return NULL;
  }
  afc_client_t afc = NULL;
  if (afc_client_new(dev, svc, &afc) != AFC_E_SUCCESS) {
    printf("afc_client_new failed\n");
    return NULL;
  }
  lockdownd_service_descriptor_free(svc);
  lockdownd_client_free(ld);
  /* dev не освобождаем — afc держит ссылку; для CLI это ок */
  return afc;
}

static int do_ls(afc_client_t afc, const char *path)
{
  char **entries = NULL;
  if (afc_read_directory(afc, path, &entries) != AFC_E_SUCCESS) {
    printf("read_dir failed: %s\n", path);
    return 1;
  }
  char **p = entries;
  long nfile = 0, ndir = 0, total = 0;
  printf("== %s\n", path);
  for (; *p; p++) {
    if (!strcmp(*p, ".") || !strcmp(*p, ".."))
      continue;
    char *full = malloc(strlen(path) + strlen(*p) + 2);
    sprintf(full, "%s/%s", path, *p);
    char **info = NULL;
    if (afc_get_file_info(afc, full, &info) == AFC_E_SUCCESS && info) {
      const char *st = "", *szs = "0";
      for (char **q = info; *q; q += 2) {
        if (!q[1])
          break;
        if (!strcmp(*q, "st_ifmt"))
          st = q[1];
        else if (!strcmp(*q, "st_size"))
          szs = q[1];
      }
      long sz = atol(szs);
      if (!strcmp(st, "S_IFDIR")) {
        printf("   DIR   %s\n", *p);
        ndir++;
      } else {
        printf("   FILE  %-58s %ld  (%s)\n", *p, sz, st);
        nfile++;
        total += sz;
      }
      afc_dictionary_free(info);
    }
    free(full);
  }
  printf("   итого: %ld файлов, %ld каталогов, %ld байт\n", nfile, ndir,
         total);
  afc_dictionary_free(entries);
  return 0;
}

static int do_get(afc_client_t afc, const char *rem, const char *loc)
{
  uint64_t handle = 0;
  if (afc_file_open(afc, rem, AFC_FOPEN_RDONLY, &handle) != AFC_E_SUCCESS) {
    printf("open failed: %s\n", rem);
    return 1;
  }
  FILE *out = fopen(loc, "wb");
  if (!out) {
    printf("local open failed\n");
    return 1;
  }
  char buf[65536];
  uint32_t got = 0, total = 0;
  for (;;) {
    if (afc_file_read(afc, handle, buf, sizeof(buf), &got) != AFC_E_SUCCESS ||
        got == 0)
      break;
    fwrite(buf, 1, got, out);
    total += got;
  }
  afc_file_close(afc, handle);
  fclose(out);
  printf("скачано %u байт: %s -> %s\n", total, rem, loc);
  return 0;
}

static int do_put(afc_client_t afc, const char *loc, const char *rem)
{
  FILE *in = fopen(loc, "rb");
  if (!in) {
    printf("local open failed: %s\n", loc);
    return 1;
  }
  fseek(in, 0, SEEK_END);
  long size = ftell(in);
  fseek(in, 0, SEEK_SET);
  uint64_t handle = 0;
  if (afc_file_open(afc, rem, AFC_FOPEN_WRONLY, &handle) != AFC_E_SUCCESS) {
    printf("remote open failed: %s\n", rem);
    fclose(in);
    return 1;
  }
  char buf[1 << 16];
  size_t r;
  long total = 0;
  while ((r = fread(buf, 1, sizeof(buf), in)) > 0) {
    uint32_t sent = 0;
    if (afc_file_write(afc, handle, buf, (uint32_t)r, &sent) !=
            AFC_E_SUCCESS ||
        sent != r) {
      printf("write failed @%ld\n", total);
      break;
    }
    total += (long)r;
  }
  afc_file_close(afc, handle);
  fclose(in);
  printf("залито %ld из %ld байт: %s -> %s\n", total, size, loc, rem);
  return total == size ? 0 : 1;
}

static int do_rm(afc_client_t afc, const char *path)
{
  char **info = NULL;
  int isdir = 0;
  if (afc_get_file_info(afc, path, &info) == AFC_E_SUCCESS && info) {
    for (char **q = info; *q; q += 2) {
      if (q[1] && !strcmp(*q, "st_ifmt") && !strcmp(q[1], "S_IFDIR"))
        isdir = 1;
    }
    afc_dictionary_free(info);
  }
  afc_error_t rc = isdir ? afc_remove_path_and_contents(afc, path)
                         : afc_remove_path(afc, path);
  printf("rm %s: %s (%d)\n", path, rc == AFC_E_SUCCESS ? "OK" : "FAIL", rc);
  return rc == AFC_E_SUCCESS ? 0 : 1;
}

static int do_mkdir(afc_client_t afc, const char *path)
{
  afc_error_t rc = afc_make_directory(afc, path);
  printf("mkdir %s: %s (%d)\n", path, rc == AFC_E_SUCCESS ? "OK" : "FAIL",
         rc);
  return rc == AFC_E_SUCCESS ? 0 : 1;
}

int main(int argc, char **argv)
{
  if (argc < 3) {
    printf("usage: afcx ls|get|put|rm|mkdir ...\n");
    return 2;
  }
  afc_client_t afc = open_afc();
  if (!afc)
    return 1;
  int rc = 1;
  if (!strcmp(argv[1], "ls") && argc == 3)
    rc = do_ls(afc, argv[2]);
  else if (!strcmp(argv[1], "get") && argc == 4)
    rc = do_get(afc, argv[2], argv[3]);
  else if (!strcmp(argv[1], "put") && argc == 4)
    rc = do_put(afc, argv[2], argv[3]);
  else if (!strcmp(argv[1], "rm") && argc == 3)
    rc = do_rm(afc, argv[2]);
  else if (!strcmp(argv[1], "mkdir") && argc == 3)
    rc = do_mkdir(afc, argv[2]);
  else
    printf("неизвестная команда или неверное число аргументов\n");
  afc_client_free(afc);
  return rc;
}
