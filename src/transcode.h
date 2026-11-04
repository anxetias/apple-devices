#pragma once

#include "medialib.h"
#include <glib.h>

/* === transcode.h ===
 * Конвертация не-mp3 аудио в mp3 для пути сервера 3u (ветка
 * music-3u-only). GStreamer конвейером gst-launch-1.0:
 *
 *   filesrc → decodebin → audioconvert → audioresample →
 *   lamemp3enc (320 kbps CBR) → filesink
 *
 * Теги и обложка переносятся TagLib'ом в новый файл. Ошибки конвертации
 * НЕ откатываются на старый прямой путь — импорт честно не выполняется,
 * причина уходит в журнал (ветка «только 3u» по определению). */

/* Конвертировать src_path → dst_path (mp3 320 kbps CBR).
 * 0 — успех; -1 — ошибка (error заполнена). Требует gst-launch-1.0
 * в PATH. */
int transcodeToMp3(const char *src_path, const char *dst_path,
                   GError **error);

/* Записать теги и обложку из меты в аудиофайл (TagLib; формат тот же,
 * что taglib распознал — mp3/flac/ogg/mp4/wav). Обложка пишется
 * комплексным свойством PICTURE (TagLib сам разбирается с форматом
 * контейнера). FALSE — ошибка. */
gboolean transcodeWriteTags(const char *path, const MedialibMeta *m,
                            GError **error);

/* Рекурсивно удалить временную папку конвертации (обычно созданную
 * g_dir_make_tmp). */
void transcodeCleanupTmpDir(const char *dir);
