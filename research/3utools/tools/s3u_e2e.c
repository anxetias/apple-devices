/* Headless E2E импорта через сервер 3u (компируется вручную, НЕ в
 * сборке приложения): та же цепочка, что в musicImportThread ветки
 * music-3u-only:
 *   wal-статус (печать) → чтение тегов → конвертация не-mp3 в mp3
 *   (320 kbps + теги/обложка) → sync3uImportBatch (+ внешний RETRY
 *   по неуспешным с паузой 60 с, до 3 раундов — как в приложении).
 * Аргументы: <udid> <файл1> [файл2 ...] */
const char *tr(const char *ru) { return ru; }
#include <glib.h>
#include <glib/gstdio.h>

#include "sync3u.h"
#include "deviceScanner.h"
#include "medialib.h"
#include "transcode.h"

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

  /* --- подготовка пакета: теги + конвертация не-mp3 --- */
  GPtrArray *paths = g_ptr_array_new();
  GPtrArray *metas = g_ptr_array_new_with_free_func(medialibMetaFree);
  char *workdir = NULL;
  guint nmeta_fail = 0, nconv_fail = 0;
  for (int i = 2; i < argc; i++) {
    const char *lp = argv[i];
    char *base = g_path_get_basename(lp);
    MedialibMeta *m = g_new0(MedialibMeta, 1);
    GError *merr = NULL;
    if (!medialibReadMeta(lp, base, m, &merr)) {
      fprintf(stderr, "теги не читаны: %s: %s\n", base, merr->message);
      medialibMetaFree(m);
      nmeta_fail++;
      g_clear_error(&merr);
      g_free(base);
      continue;
    }

    char *lc = g_ascii_strdown(lp, -1);
    gboolean is_mp3 = g_str_has_suffix(lc, ".mp3");
    g_free(lc);
    if (is_mp3) {
      g_ptr_array_add(paths, g_strdup(lp));
      g_ptr_array_add(metas, m);
      printf("meta[%d]: %s — mp3 как есть (cover=%s)\n", i - 2, base,
             m->has_cover ? "да" : "нет");
      g_free(base);
      continue;
    }

    if (!workdir) {
      GError *werr = NULL;
      workdir = g_dir_make_tmp("s3u-e2e-XXXXXX", &werr);
      if (!workdir) {
        fprintf(stderr, "нет tmp: %s\n", werr->message);
        g_clear_error(&werr);
        return -1;
      }
      printf("tmp конвертации: %s\n", workdir);
    }
    char *dst = g_strconcat(workdir, G_DIR_SEPARATOR_S, base, ".mp3", NULL);
    GError *cerr = NULL;
    if (transcodeToMp3(lp, dst, &cerr) != 0) {
      fprintf(stderr, "конвертация %s не удалась: %s\n", base,
              cerr->message);
      g_clear_error(&cerr);
      nconv_fail++;
      goto skip;
    }
    if (!transcodeWriteTags(dst, m, &cerr)) {
      fprintf(stderr, "теги не перенеслись %s: %s\n", base, cerr->message);
      g_clear_error(&cerr);
      nconv_fail++;
      goto skip;
    }
    {
      char *dstbase = g_strconcat(base, ".mp3", NULL);
      MedialibMeta *nm = g_new0(MedialibMeta, 1);
      if (!medialibReadMeta(dst, dstbase, nm, &cerr)) {
        fprintf(stderr, "меты конвертированного не читаны: %s: %s\n",
                dstbase, cerr->message);
        g_clear_error(&cerr);
        medialibMetaFree(nm);
        nconv_fail++;
        g_free(dstbase);
        goto skip;
      }
      printf("meta[%d]: %s → %s (cover=%s dur=%ld ms size=%ld)\n", i - 2,
             base, dstbase, nm->has_cover ? "да" : "нет",
             (long)nm->duration_ms, (long)nm->file_size);
      g_ptr_array_add(paths, dst);
      g_ptr_array_add(metas, nm);
      g_free(dstbase);
    }
    medialibMetaFree(m);
    g_free(base);
    continue;
  skip:
    g_free(dst);
    medialibMetaFree(m);
    g_free(base);
  }
  printf("мети: %u из %u (конверсий не удалось: %u)\n",
         (unsigned)metas->len, (unsigned)(argc - 2), nconv_fail);
  (void)nmeta_fail;
  if (metas->len == 0) {
    fprintf(stderr, "пакет пуст — импорт не удался\n");
    afcSessionClose(&s);
    return 1;
  }

  /* --- сам импорт: раунды по неуспешным (как в приложении) --- */
  const int ROUNDS = 3;
  GArray *failed = g_array_new(FALSE, FALSE, sizeof(guint));
  int done = 0;

  for (int round = 1;; round++) {
    GError *err = NULL;
    int imported;
    if (round == 1) {
      imported = sync3uImportBatch(udid, s.afc, paths, metas, failed, &err);
    } else {
      printf("раунд %d/%d: повтор %u неуспешных\n", round, ROUNDS,
             (unsigned)failed->len);
      g_usleep(60 * G_USEC_PER_SEC);
      GPtrArray *rp = g_ptr_array_new();
      GPtrArray *rm = g_ptr_array_new();
      for (guint k = 0; k < failed->len; k++) {
        guint idx = g_array_index(failed, guint, k);
        g_ptr_array_add(rp, g_ptr_array_index(paths, idx));
        g_ptr_array_add(rm, g_ptr_array_index(metas, idx));
      }
      g_array_set_size(failed, 0);
      imported = sync3uImportBatch(udid, s.afc, rp, rm, failed, &err);
      g_ptr_array_unref(rp);
      g_ptr_array_unref(rm);
    }
    printf("раунд %d: внесено %d, неуспешных %u (%s)\n", round, imported,
           (unsigned)failed->len,
           err ? err->message : imported >= 0 ? "счётчик" : "отказ");
    g_clear_error(&err);
    if (imported < 0) {
      done = -1;
      break;
    }
    done += imported;
    if (failed->len == 0)
      break;
    if (round >= ROUNDS)
      break;
  }

  printf("ИТОГ: внесено %d из %u\n", done, (unsigned)metas->len);

  g_ptr_array_unref(paths);
  g_ptr_array_unref(metas);
  g_array_unref(failed);
  if (workdir) {
    transcodeCleanupTmpDir(workdir);
    g_free(workdir);
  }
  afcSessionClose(&s);
  return done >= 0 ? 0 : 1;
}
