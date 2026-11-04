/* === transcode.c ===
 * Конвертация произвольного аудио в mp3 и перенос тегов/обложки.
 * См. transcode.h: GStreamer (gst-launch-1.0) + TagLib.
 * Модуль не знает AFC/устройства: работает только с локальными файлами. */

#include "transcode.h"

#include <gio/gio.h>
#include <string.h>
#include <sys/stat.h>
#include <glib/gstdio.h>
#include <tag_c.h>

/* MIME обложки по магическим байтам (для APIC/контейнера). */
static const char *
coverMime(const guint8 *d, gsize n)
{
  if (n >= 8 && d[0] == 0x89 && d[1] == 'P' && d[2] == 'N' && d[3] == 'G')
    return "image/png";
  if (n >= 3 && d[0] == 0xFF && d[1] == 0xD8 && d[2] == 0xFF)
    return "image/jpeg";
  if (n >= 4 && memcmp(d, "GIF8", 4) == 0)
    return "image/gif";
  if (n >= 2 && d[0] == 'B' && d[1] == 'M')
    return "image/bmp";
  /* Редкие контейнеры: отдаём нейтральный тип — TagLib положит байты
   * как есть, устройство обычно распознаёт формат сама. */
  return "application/octet-stream";
}

int
transcodeToMp3(const char *src_path, const char *dst_path, GError **error)
{
  char *gl = g_find_program_in_path("gst-launch-1.0");
  if (!gl) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "конвертация в mp3 невозможна: нет gst-launch-1.0 в PATH");
    return -1;
  }

  char *srcLoc = g_strdup_printf("location=%s", src_path);
  char *dstLoc = g_strdup_printf("location=%s", dst_path);
  const char *argv[] = { gl, "-q",
    "filesrc", srcLoc,
    "!", "decodebin",
    "!", "audioconvert", "!", "audioresample",
    "!", "lamemp3enc", "target=bitrate", "bitrate=320",
    "!", "filesink", dstLoc,
    NULL };
  GError *lerr = NULL;
  GSubprocess *sub = g_subprocess_newv(argv, G_SUBPROCESS_FLAGS_STDOUT_PIPE |
                                       G_SUBPROCESS_FLAGS_STDERR_PIPE, &lerr);
  g_free(gl);
  if (!sub) {
    g_free(srcLoc);
    g_free(dstLoc);
    g_propagate_error(error, lerr);
    return -1;
  }

  GBytes *out = NULL, *errb = NULL;
  if (!g_subprocess_communicate(sub, NULL, NULL, &out, &errb, &lerr)) {
    g_object_unref(sub);
    g_free(srcLoc);
    g_free(dstLoc);
    g_propagate_error(error, lerr);
    return -1;
  }
  int st = g_subprocess_get_exit_status(sub);
  g_object_unref(sub);
  g_free(srcLoc);
  g_free(dstLoc);
  g_bytes_unref(out);
  if (st != 0) {
    gsize n = 0;
    const char *raw = (const char *)g_bytes_get_data(errb, &n);
    char *snip =
        g_strndup(raw ? raw : "", raw && n ? MIN(n, (gsize)300) : 0);
    char *esc = g_strescape(snip, "");
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "gst-launch завершился с кодом %d: %s", st,
                esc && *esc ? esc : "(нет вывода)");
    g_free(snip);
    g_free(esc);
    g_bytes_unref(errb);
    return -1;
  }
  g_bytes_unref(errb);

  /* Контроль результата: файл существует и непустой. */
  GStatBuf fst;
  if (g_stat(dst_path, &fst) != 0 || fst.st_size <= 0) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "конвертация не дала файла: %s", dst_path);
    return -1;
  }
  return 0;
}

/* Вычистить временную папку конвертации (рекурсивно). */
void transcodeCleanupTmpDir(const char *dir)
{
  GDir *d = g_dir_open(dir, 0, NULL);
  if (!d) {
    g_rmdir(dir); /* не папка или уже снесена — не важно */
    return;
  }
  const char *nm;
  while ((nm = g_dir_read_name(d))) {
    char *full = g_build_filename(dir, nm, NULL);
    GStatBuf st;
    if (g_stat(full, &st) == 0 && S_ISDIR(st.st_mode))
      transcodeCleanupTmpDir(full);
    else
      g_unlink(full);
    g_free(full);
  }
  g_dir_close(d);
  g_rmdir(dir);
}

gboolean
transcodeWriteTags(const char *path, const MedialibMeta *m, GError **error)
{
  TagLib_File *tf = taglib_file_new(path);
  if (!tf || !taglib_file_is_valid(tf)) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "taglib не распознал файл: %s", path);
    if (tf)
      taglib_file_free(tf);
    return FALSE;
  }
  TagLib_Tag *tag = taglib_file_tag(tf);
  if (!tag) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "taglib не отдал теги: %s", path);
    taglib_file_free(tf);
    return FALSE;
  }

  if (m->title)
    taglib_tag_set_title(tag, m->title);
  if (m->artist)
    taglib_tag_set_artist(tag, m->artist);
  if (m->album)
    taglib_tag_set_album(tag, m->album);
  if (m->genre)
    taglib_tag_set_genre(tag, m->genre);
  taglib_tag_set_year(tag, m->year);
  taglib_tag_set_track(tag, m->track_number);

  if (m->has_cover && m->cover_data && m->cover_len > 0) {
    const char *mime = coverMime(m->cover_data, m->cover_len);
    TAGLIB_COMPLEX_PROPERTY_PICTURE(props, (const char *)m->cover_data,
                                    (unsigned)m->cover_len, "", mime,
                                    "Front Cover");
    if (!taglib_complex_property_set(tf, "PICTURE", props)) {
      /* Обложка не критична: трек без неё тоже вносится устройством
       * (на случай отсутствия в источнике — см. FINDINGS 01.11). */
      logMessage(tr("Музыка: обложка не перенеслась в %s — продолжаем без неё"), path);
    }
  }

  BOOL saved = taglib_file_save(tf);
  taglib_file_free(tf);
  if (!saved) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "taglib не сохранил файл: %s", path);
    return FALSE;
  }
  return TRUE;
}
