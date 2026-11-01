/* Headless E2E импорта через сервер 3u (компируется вручную, НЕ в
 * сборке приложения): та же цепочка, что в musicImportThread:
 * wal-статус → чтение тегов (medialibReadMeta) → sync3uImportBatch.
 * Аргументы: <udid> <файл1> [файл2 ...] */
const char *tr(const char *ru) { return ru; }
#include <glib.h>

#include "sync3u.h"
#include "deviceScanner.h"
#include "medialib.h"

#include <stdio.h>

void logMessage(const char *format, ...)
{
  va_list ap;
  va_start(ap, format);
  char *s = g_strdup_vprintf(format, ap);
  va_end(ap);
  printf("log: %s\n", s);
  fflush(stdout);
  g_free(s);
}

int main(int argc, char **argv)
{
  if (argc < 3) {
    fprintf(stderr, "usage: s3u_e2e <udid> <файл1> [файл2 ...]\n");
    return 2;
  }
  const char *udid = argv[1];

  gboolean glue = FALSE; /* статус wal, ниже по потоку */
  AfcSession s;
  if (afcSessionOpen(&s, udid) != 0) {
    fprintf(stderr, "AFC не открылся (нет подключения/Trust?)\n");
    return -1;
  }
  printf("AFC открыт\n");

  /* --- wal: статус (3u-путь к базе нашей замены не имеет отношения) --- */
  GError *wal_err = NULL;
  glue = medialibDeviceWalIsClean(s.afc, &wal_err);
  printf("WAL: %s (%s)\n", glue ? "чист" : "грязный",
         wal_err ? wal_err->message : "?");
  g_clear_error(&wal_err);

  /* --- чтение тегов, как в приложении --- */
  GPtrArray *paths = g_ptr_array_new();
  GPtrArray *metas = g_ptr_array_new_with_free_func(medialibMetaFree);
  guint nmeta_fail = 0;
  for (int i = 2; i < argc; i++) {
    char *base = g_path_get_basename(argv[i]);
    MedialibMeta *m = g_new0(MedialibMeta, 1);
    GError *merr = NULL;
    if (medialibReadMeta(argv[i], base, m, &merr)) {
      g_ptr_array_add(metas, m);
      printf("meta[%d]: title=%s artist=%s dur=%ld ms cover=%s\n", i - 2,
             m->title ? m->title : "(нет)", m->artist ? m->artist : "(нет)",
             (long)m->duration_ms,
             m->has_cover ? "да" : "нет");
    } else {
      fprintf(stderr, "теги не читаны: %s: %s\n", base, merr->message);
      medialibMetaFree(m);
      nmeta_fail++;
      g_clear_error(&merr);
    }
    g_ptr_array_add(paths, argv[i]);
    g_free(base);
  }
  printf("мети: %u из %u (сбоев %u)\n", (unsigned)metas->len,
         (unsigned)paths->len, (unsigned)nmeta_fail);
  if (nmeta_fail > 0) {
    fprintf(stderr, "не все теги читаны — путь 3u применим только при полном наборе\n");
    afcSessionClose(&s);
    return -1;
  }

  /* --- сам импорт --- */
  GError *err = NULL;
  int rc = sync3uImportBatch(udid, s.afc, paths, metas, &err);
  printf("ИТОГ sync3uImportBatch: %d (%s)\n", rc,
         err ? err->message : rc >= 0 ? "успех" : "отказ");
  g_clear_error(&err);

  g_ptr_array_unref(paths);
  g_ptr_array_unref(metas);
  afcSessionClose(&s);
  return rc >= 0 ? 0 : 1;
}
