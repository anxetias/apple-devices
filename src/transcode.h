#pragma once

#include "medialib.h"
#include <glib.h>

/* === transcode.h ===
 * Вшивание тегов/обложки в аудиофайл (TagLib). Модуль не знает
 * AFC/устройств: работает только с локальными файлами.
 *
 * Собственный конвертер GStreamer (gst-launch-1.0, avenc/mp3-ветка
 * сервера 3uTools) вырезан вместе с прямым импортом (владелец 06.11:
 * «оставим только irm для заливки»): конвейер 9l «Залить (IRM)» кодирует
 * gst'ом сам (src/irmfill.c, transcode_spawn по кодеку диалога). */

/* Записать теги и обложку из меты в аудиофайл (TagLib; формат тот же,
 * что taglib распознал — mp3/flac/ogg/mp4/wav). Обложка пишется
 * комплексным свойством PICTURE (TagLib сам разбирается с форматом
 * контейнера). FALSE — ошибка. */
gboolean transcodeWriteTags(const char *path, const MedialibMeta *m,
                            GError **error);
