#pragma once

#include "medialib.h"
#include <glib.h>

/* === sync3u.h ===
 * Импорт музыки через сервер 3uTools (a2-s.3u.com) и собственный
 * atc-диалог (com.apple.atc). Репликация рабочего рецепта из
 * исследований 3utools-research (прогон v12, FINDINGS.md):
 *
 *   step2 (HTTPS POST 0xd2, UDID)  → K (u32) + hostGrappa (84 Б)
 *   atc-фаза                       → RequestingSync(hostGrappa) →
 *                                    ReadyForSync → deviceGrappa (A)
 *   cig (HTTPS POST 0xd0, K+A+B)   → 21 Б (при отказе 104 — повтор)
 *   декларация + .cig через AFC    → FinishedSyncingMetadata
 *   фаза 5                         → AssetManifest: FileProgress →
 *                                    AFC-копия Airlock → /Music →
 *                                    FileComplete → SyncFinished
 *
 * Файл трека заранее кладётся в /Airlock/Media/<pid> (обложка — в
 * /Airlock/Media/Artwork/<pid>), декларация строится из тегов трека.
 */

/* Итог одного трека (для журнала и диагностики отказов). */
#define SYNC3U_IMPORT_OK 0    /* трек занесён: SyncFinished получен */
#define SYNC3U_IMPORT_RETRY 1 /* сервер отказал (104) — нужна повторная попытка */
#define SYNC3U_IMPORT_FAIL -1 /* фатально: устройство/канал/декларация */

/* Импорт пакета треков через сервер 3u.
 *
 * udid         — UDID устройства;
 * local_paths  — локальные пути файлов (GPtrArray, длина == metas->len);
 * metas        — теги треков (MedialibMeta, прочитаны TagLib-ом).
 *
 * Возвращает: >=0 — сколько треков заимпортировано (через *out_ok);
 *              -1 — системная ошибка (нет устройства/связи);
 *              -2 — сервер 3u недоступен или отказывает после всех
 *                   повторов (коллеги могут откатиться на прямой путь).
 * out_ok может быть NULL.
 */
int sync3uImportBatch(const char *udid, GPtrArray *local_paths,
                      GPtrArray *metas, int *out_ok, GError **error);
