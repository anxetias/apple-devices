/* Хост-тест transcode.{c,h}: конвертация не-mp3 → mp3 (320 kbps) и
 * перенос тегов/обложки. flac (с обложкой) и ogg (без). НЕ входит
 * в сборку приложения. */
const char *tr(const char *ru) { return ru; }
#include <glib.h>
#include <glib/gstdio.h>
#include <string.h>

#include "transcode.h"
#include "medialib.h"

#include <stdio.h>
#include <tag_c.h>

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

static int nFail = 0;
static void expect(int ok, const char *name)
{
  printf("%-4s %s\n", ok ? "OK" : "FAIL", name);
  if (!ok)
    nFail++;
}

static void
checkOne(const char *src, const char *title, int has_cover,
         const unsigned char *cover_data, gsize cover_len)
{
  char *wd = g_dir_make_tmp("trans-test-XXXXXX", NULL);
  char *base = g_path_get_basename(src);
  char *dst = g_strconcat(wd, G_DIR_SEPARATOR_S, base, ".mp3", NULL);
  GError *err = NULL;

  /* «Исходник с тегами»: записываем в тестовый файл (в приложении теги
   * уже есть, читаются medialibReadMeta). */
  MedialibMeta *tm = g_new0(MedialibMeta, 1);
  tm->title = g_strdup(title);
  tm->artist = g_strdup("UT Artist");
  tm->album = g_strdup("UT Src Album");
  tm->genre = g_strdup("UT Genre");
  tm->year = 2024;
  tm->track_number = 7;
  if (has_cover > 0 && cover_data) {
    tm->has_cover = TRUE;
    tm->cover_data = g_memdup2(cover_data, cover_len); /* владение у меты */
    tm->cover_len = cover_len;
  }
  gboolean ok = transcodeWriteTags(src, tm, &err);
  expect(ok, ok ? "теги в исходник (TagLib)" : err->message);
  g_clear_error(&err);

  /* Конвертация → mp3. */
  int cv = transcodeToMp3(src, dst, &err);
  expect(cv == 0, cv == 0 ? "конвертация в mp3" : err->message);
  g_clear_error(&err);

  /* Перенос тегов/обложки в mp3 (как в musicImportThread). */
  gboolean tw = transcodeWriteTags(dst, tm, &err);
  expect(tw, tw ? "теги/обложка в mp3 (TagLib)" : err->message);
  g_clear_error(&err);

  /* Перечитать мету с mp3. */
  char *dstbase = g_strconcat(base, ".mp3", NULL);
  MedialibMeta *m = g_new0(MedialibMeta, 1);
  gboolean rm = medialibReadMeta(dst, dstbase, m, &err);
  expect(rm, rm ? "меты из конвертированного mp3" : err->message);
  g_clear_error(&err);

  printf("   mp3: title=%s artist=%s album=%s dur=%ld мс size=%ld\n",
         m->title ? m->title : "(нет)", m->artist ? m->artist : "(нет)",
         m->album ? m->album : "(нет)", (long)m->duration_ms,
         (long)m->file_size);
  expect(m->title && g_strcmp0(m->title, title) == 0, "title перенесён");
  expect(m->artist && g_strcmp0(m->artist, "UT Artist") == 0, "artist");
  expect(m->album && g_strcmp0(m->album, "UT Src Album") == 0, "album");
  expect(m->duration_ms > 0, "длительность считана в mp3");
  expect(m->has_cover == (has_cover > 0),
         has_cover ? "обложка есть" : "обложки нет (по источнику)");
  if (has_cover) {
    TagLib_File *tf = taglib_file_new(dst);
    TagLib_Complex_Property_Attribute ***props =
        taglib_complex_property_get(tf, "PICTURE");
    expect(props != NULL, "PICTURE в mp3 читается TagLib'ом");
    if (props) {
      TagLib_Complex_Property_Picture_Data pic;
      taglib_picture_from_complex_property(props, &pic);
      printf("   pic: mime=%s size=%d\n", pic.mimeType ? pic.mimeType : "?",
             (int)pic.size);
      expect(pic.size > 0, "обложка в mp3 непустая");
      taglib_complex_property_free(props);
    }
    taglib_file_free(tf);
  }

  medialibMetaFree(m);
  medialibMetaFree(tm);
  g_free(dstbase);
  g_free(dst);
  g_free(base);
  transcodeCleanupTmpDir(wd);
  g_free(wd);
}

int main(void)
{
  setvbuf(stdout, NULL, _IONBF, 0);
  GError *err = NULL;
  char *png = NULL;
  gsize png_len = 0;
  if (!g_file_get_contents("/tmp/opencode/e2e/cover_red.png", &png,
                           &png_len, &err)) {
    fprintf(stderr, "нет png: %s\n", err->message);
    return 1;
  }

  checkOne("/tmp/opencode/e2e/demo_flac.flac", "UT FLAC Song", 1,
           (const unsigned char *)png, png_len);
  checkOne("/tmp/opencode/e2e/demo_ogg.ogg", "UT OGG Song", 0, NULL, 0);

  g_free(png);
  g_clear_error(&err);
  printf("итог: %s\n", nFail ? "ЕСТЬ FAIL" : "все ок");
  return nFail ? 1 : 0;
}
