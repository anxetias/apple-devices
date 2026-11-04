#pragma once

#include "medialib.h"
#include <libimobiledevice/afc.h>
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
 * /Airlock/Media/Artwork/<pid>), декларация Sync_00000000.plist
 * строится библиотекой libplist из тегов трека.
 */

/* Итог одного трека (для журнала и диагностики отказов). */
#define SYNC3U_IMPORT_OK 0    /* трек занесён: SyncFinished получен */
#define SYNC3U_IMPORT_RETRY 1 /* сервер отказал (104) — нужна повторная попытка */
#define SYNC3U_IMPORT_FAIL -1 /* фатально: устройство/канал/декларация */

/* Импорт пакета треков через сервер 3u.
 *
 * udid         — UDID устройства (можно с дефисами);
 * afc          — открытый AFC-клиент устройства (для заливки файлов);
 * local_paths  — локальные пути файлов (GPtrArray, длина == metas->len);
 * metas        — теги треков (MedialibMeta; порядок совпадает с путями);
 * out_failed   — GArray (элементы guint) или NULL: после вызова содержит
 *                индексы треков, которые НЕ внесены (отказ сервера 104
 *                после всех попыток, ошибка заливки/декларации/протокола).
 *                Поля с успехом не попадают — вызывающий решает: внешний
 *                повтор (см. musicImportThread) или отказ.
 *
 * Возвращает: >=0 — сколько треков заимпортировано (SyncFinished);
 *              -1 — некорректные аргументы (ретраить бессмысленно).
 *
 * Внутри трека: до S3U_CIG_MAX_ATTEMPTS попыток с паузой 60 с
 * (дросселинг сервера err=104). Внешний RETRY по неуспешным — в
 * musicImportThread (раунды по 60 с). */
int sync3uImportBatch(const char *udid, afc_client_t afc,
                      GPtrArray *local_paths, GPtrArray *metas,
                      GArray *out_failed, GError **error);
