#pragma once

#include "application.h"
#include "medialib.h"
#include <libimobiledevice/afc.h>

/* === afcUtils.h ===
 * Вспомогательные функции для AFC: сессии, скачивание/загрузка,
 * умное частичное чтение тегов.
 */

/* Сеанс AFC (определение структуры в deviceScanner.h). */
typedef struct AfcSession AfcSession;

/* Открытый AFC-хэндл: один open на файл вместо open/close на каждый диапазон. */
typedef struct {
  afc_client_t afc;
  uint64_t handle;
  guint64 bytes; // сколько байт реально прочитано из устройства (статистика)
} AfcFile;

int afcFileOpenH(AfcFile *f, afc_client_t afc, const char *path);
void afcFileCloseH(AfcFile *f);
int afcReadRangeH(AfcFile *f, uint64_t offset, uint32_t len, char *buf,
                  uint32_t *got);

/* Умное частичное скачивание: собирает tmp_path, валидный для TagLib.
 * 0 — успех; 1 — формат не разобрать (нужен полный файл); -1 — ошибка.
 * bytes_out (может быть NULL) — сколько байт прочитано из устройства. */
int musicPartialDownload(afc_client_t afc, const char *path, guint64 size,
                         const char *tmp_path, guint64 *bytes_out);

/* Рекурсивный размер каталога через AFC (только чтение).
 * max_depth ограничивает вложенность; 0 — только файлы самого каталога. */
guint64 afcDirSize(afc_client_t afc, const char *path, int max_depth);

/* Читает теги и обложку из локального файла в трек (TagLib). */
void readTrackTags(MusicTrack *t, const char *local_path);

/* Проверка расширения аудиофайла. */
gboolean hasAudioExtension(const char *name);

/* Рекурсивно собирает пути аудиофайлов в out. */
void afcCollectAudio(afc_client_t afc, const char *dir, GPtrArray *out);
