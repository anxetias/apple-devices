#pragma once

#include "application.h"
#include <libimobiledevice/afc.h>
#include <sqlite3.h>

/* Определение структуры MusicTrack — нужно для доступа к полям из других модулей. */
struct _MusicTrack {
  GObject parent_instance;
  char *path;
  char *title;
  char *artist;
  char *album;
  guint duration;
  guint64 size;
  guint scan_order;
  GBytes *cover;
  char *cover_mime;
};

/* Сеанс AFC (определение в deviceScanner.h). */
typedef struct AfcSession AfcSession;

/* === medialib.h ===
 * Вся работа с MediaLibrary.sqlitedb: SQL-запросы, транзакции, sort_map,
 * кэширование, artwork, вставка/удаление треков.
 */

/* Строка трека в базе: всё, что нужно для каскадного удаления. */
typedef struct {
  gint64 item_pid;
  gint64 album_pid;
  gint64 item_artist_pid;
  gint64 album_artist_pid;
  gint64 genre_id;
  gint64 composer_pid;
  gint64 title_order;
  gint64 item_artist_order;
  gint64 album_order;
  gint64 album_artist_order;
  gint64 genre_order;
  gint64 composer_order;
} MedialibTrackRow;

/* Метаданные импортируемого трека (читаны локально через TagLib). */
typedef struct {
  char *location;  // имя файла на устройстве (basename)
  char *title;
  char *artist;
  char *album;
  char *genre;     // NULL — жанр не задаём (genre_id = 0)
  gint64 duration_ms;
  gint64 file_size;
  int year;
  int track_number;
  int bit_rate;
  gboolean has_cover;
  guint8 *cover_data;  // байты встроенной обложки (JPEG/PNG), владение g_free
  gsize cover_len;
} MedialibMeta;

void medialibMetaFree(gpointer p);

/* Копирует теги и обложку из одного трека в другой (для кэша). */
void medialibTrackCopyTags(MusicTrack *dst, const MusicTrack *src);

/* Читать теги локального файла для вставки в базу. FALSE — файл не читается. */
gboolean medialibReadMeta(const char *local_path, const char *location,
                          MedialibMeta *m, GError **error);

/* --- Низкоуровневые helpers --- */

gboolean dbRunN(sqlite3 *db, const char *sql, gint64 v, GError **error);
gint64   dbCountN(sqlite3 *db, const char *sql, gint64 v);
GPtrArray *dbCollectTextN(sqlite3 *db, const char *sql, gint64 v);
gboolean dbExecSql(sqlite3 *db, const char *sql, GError **error);
gboolean dbScalarSql(sqlite3 *db, const char *sql, gint64 *out, GError **error);

/* Найти файловый трек в базе по папке + имени файла + размеру.
 * 1 — найден (row заполнена), 0 — не найден, -1 — ошибка. */
int medialibFindTrack(sqlite3 *db, const char *base_path, const char *location,
                      gint64 file_size, MedialibTrackRow *row);

/* Каскадное удаление трека из базы (в транзакции). FALSE — ошибка. */
gboolean medialibDeleteTrack(sqlite3 *db, const MedialibTrackRow *t,
                             GError **error);

/* Скачать базу (+wal/shm) во временную папку. Возвращает путь к db (g_free). */
char *medialibDownload(afc_client_t afc, const char *tmpdir, GError **error);

/* Резервная копия базы на комп. Возвращает путь к копии (g_free) или NULL. */
char *medialibBackup(const char *db_path);

/* Залить базу обратно на устройство. */
gboolean medialibUpload(afc_client_t afc, const char *db_path, GError **error);

/* Гейт безопасности: TRUE — заменять базу можно (wal устройства
 * отсутствует или пуст), FALSE — нельзя (error заполнена). Вызывать ДО
 * любых записей на устройство: и до заливки mp3, и перед фазой базы. */
gboolean medialibDeviceWalIsClean(afc_client_t afc, GError **error);

/* Удалить временную папку с базой. */
void medialibCleanupTmpDir(const char *tmpdir, const char *db_path);

/* Вычистить трек из базы «Музыки». 1 — вычищено, 0 — записи не было,
 * -1 — ошибка. */
int musicCleanMedialib(AfcSession *s, MusicTrack *track);

/* --- Классы сущностей в entity_revision (снято с живой базы). --- */
#define ML_CLASS_ITEM         0
#define ML_CLASS_CONTAINER    1
#define ML_CLASS_ARTIST       2
#define ML_CLASS_GENRE        3
#define ML_CLASS_ALBUM        4
#define ML_CLASS_COMPOSER     5
#define ML_CLASS_ALBUM_ARTIST 7

/* Активная ревизия сущности (INSERT OR REPLACE, revision = MAX+1). */
gboolean medialibTouchRevision(sqlite3 *db, gint64 pid, int entity_class,
                               GError **error);

/* Гарантировать имя в sort_map: вернуть name_order. -1 — ошибка. */
gint64 medialibEnsureSortName(sqlite3 *db, const char *name, GError **error);

/* Гарантировать base_location для папки импорта; вернуть её id (или -1). */
gint64 medialibEnsureBaseLocation(sqlite3 *db, GError **error);

/* Найти или создать сущности. Возвращают pid/id или -1. */
gint64 medialibEnsureArtist(sqlite3 *db, const char *name, gint64 item_pid,
                            GError **error);
gint64 medialibEnsureAlbumArtist(sqlite3 *db, const char *name, gint64 item_pid,
                                 GError **error);
gint64 medialibEnsureAlbum(sqlite3 *db, const char *name,
                           gint64 album_artist_pid, gint64 item_pid,
                           GError **error);
gint64 medialibEnsureGenre(sqlite3 *db, const char *name, gint64 item_pid,
                           GError **error);

/* Дозаписать сателлитные строки трека (item_store, item_video, lyrics,
 * chapter). Идемпотентно. */
gboolean medialibEnsureItemSatellites(sqlite3 *db, gint64 item_pid,
                                      GError **error);

/* Вставить трек в базу. 1 — вставлен (*out_pid = новый item_pid),
 * 0 — дубликат, -1 — ошибка. Вызывается внутри транзакции. */
int medialibInsertTrack(sqlite3 *db, const MedialibMeta *m, gint64 base_loc,
                        gint64 date_added, double date_downloaded,
                        gint64 *out_pid, GError **error);

/* Записать artwork_token/best_artwork_token для item. */
gboolean medialibSetItemArtwork(sqlite3 *db, gint64 item_pid, gint64 token,
                                GError **error);

/* Самоисправление relative_path у файловых обложек. Возвращает число
 * исправленных строк, -1 при ошибке. */
int medialibFixArtworkPaths(sqlite3 *db);

/* Загрузить встроенную обложку трека в Artwork-хранилище устройства.
 * 1 — записано, 0 — нечего записывать, -1 — ошибка. */
int medialibAttachArtwork(afc_client_t afc, sqlite3 *db, const char *tmpdir,
                          gint64 item_pid, gint64 album_pid,
                          const MedialibMeta *m, GError **error);

/* Дописать импортированные треки в базу медиатеки.
 * Возвращает число вставленных треков, -1 — ошибка. */
int musicSyncMedialibAdd(afc_client_t afc, GPtrArray *metas);
