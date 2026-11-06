/* === transcode.c ===
 * Вшивание тегов/обложки в аудиофайл (TagLib). См. transcode.h.
 * Модуль не знает AFC/устройств: работает только с локальными файлами. */

#include "transcode.h"

#include <gio/gio.h>
#include <string.h>
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
