#include "medialib.h"
#include "deviceScanner.h"
#include "afcUtils.h"

#include <glib.h>
#include <glib/gstdio.h>
#include <libimobiledevice/afc.h>
#include <sqlite3.h>
#include <string.h>
#include <tag_c.h>

/* === medialib.c === */

G_DEFINE_TYPE(MusicTrack, music_track, G_TYPE_OBJECT)

static void
music_track_finalize(GObject *object)
{
  MusicTrack *self = MUSIC_TRACK(object);
  g_free(self->path);
  g_free(self->title);
  g_free(self->artist);
  g_free(self->album);
  if (self->cover)
    g_bytes_unref(self->cover);
  g_free(self->cover_mime);
  G_OBJECT_CLASS(music_track_parent_class)->finalize(object);
}

static void
music_track_class_init(MusicTrackClass *klass)
{
  GObjectClass *object_class = G_OBJECT_CLASS(klass);
  object_class->finalize = music_track_finalize;
}

static void
music_track_init(MusicTrack *self)
{
  (void)self;
}

void medialibMetaFree(gpointer p)
{
  MedialibMeta *m = p;
  g_free(m->location);
  g_free(m->title);
  g_free(m->artist);
  g_free(m->album);
  g_free(m->genre);
  g_free(m->cover_data);
  g_free(m);
}

/* Копирует теги и обложку из одного трека в другой (для кэша). */
void medialibTrackCopyTags(MusicTrack *dst, const MusicTrack *src)
{
  g_free(dst->title);
  dst->title = g_strdup(src->title);
  g_free(dst->artist);
  dst->artist = g_strdup(src->artist);
  g_free(dst->album);
  dst->album = g_strdup(src->album);
  dst->duration = src->duration;
  if (dst->cover)
    g_bytes_unref(dst->cover);
  dst->cover = src->cover ? g_bytes_ref(src->cover) : NULL;
  g_free(dst->cover_mime);
  dst->cover_mime = g_strdup(src->cover_mime);
}

/* --- Низкоуровневые helpers --- */

gboolean dbRunN(sqlite3 *db, const char *sql, gint64 v, GError **error)
{
  sqlite3_stmt *stmt = NULL;
  if (sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) != SQLITE_OK) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED, "sqlite prepare: %s",
                sqlite3_errmsg(db));
    return FALSE;
  }
  sqlite3_bind_int64(stmt, 1, v);
  int rc = sqlite3_step(stmt);
  sqlite3_finalize(stmt);
  if (rc != SQLITE_DONE) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED, "sqlite step: %s",
                sqlite3_errmsg(db));
    return FALSE;
  }
  return TRUE;
}

gint64 dbCountN(sqlite3 *db, const char *sql, gint64 v)
{
  sqlite3_stmt *stmt = NULL;
  if (sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) != SQLITE_OK)
    return -1;
  sqlite3_bind_int64(stmt, 1, v);
  gint64 res = -1;
  if (sqlite3_step(stmt) == SQLITE_ROW)
    res = sqlite3_column_int64(stmt, 0);
  sqlite3_finalize(stmt);
  return res;
}

GPtrArray *dbCollectTextN(sqlite3 *db, const char *sql, gint64 v)
{
  GPtrArray *arr = g_ptr_array_new_with_free_func(g_free);
  sqlite3_stmt *stmt = NULL;
  if (sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) != SQLITE_OK)
    return arr;
  sqlite3_bind_int64(stmt, 1, v);
  while (sqlite3_step(stmt) == SQLITE_ROW) {
    const unsigned char *txt = sqlite3_column_text(stmt, 0);
    if (txt)
      g_ptr_array_add(arr, g_strdup((const char *)txt));
  }
  sqlite3_finalize(stmt);
  return arr;
}

gboolean dbExecSql(sqlite3 *db, const char *sql, GError **error)
{
  char *errmsg = NULL;
  if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED, "sqlite: %s",
                errmsg ? errmsg : sqlite3_errmsg(db));
    sqlite3_free(errmsg);
    return FALSE;
  }
  return TRUE;
}

gboolean dbScalarSql(sqlite3 *db, const char *sql, gint64 *out, GError **error)
{
  sqlite3_stmt *st = NULL;
  if (sqlite3_prepare_v2(db, sql, -1, &st, NULL) != SQLITE_OK) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED, "sqlite prepare: %s",
                sqlite3_errmsg(db));
    return FALSE;
  }
  int rc = sqlite3_step(st);
  gboolean found = rc == SQLITE_ROW;
  if (found)
    *out = sqlite3_column_int64(st, 0);
  else if (rc != SQLITE_DONE)
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED, "sqlite step: %s",
                sqlite3_errmsg(db));
  sqlite3_finalize(st);
  return found;
}

int medialibFindTrack(sqlite3 *db, const char *base_path, const char *location,
                      gint64 file_size, MedialibTrackRow *row)
{
  const char *sql =
    "SELECT i.item_pid, i.album_pid, i.item_artist_pid, i.album_artist_pid,"
    " i.genre_id, i.composer_pid, i.title_order, i.item_artist_order,"
    " i.album_order, i.album_artist_order, i.genre_order, i.composer_order"
    " FROM item i JOIN item_extra e ON e.item_pid=i.item_pid"
    " JOIN base_location b ON b.base_location_id=i.base_location_id"
    " WHERE b.path=? AND e.location=? AND e.file_size=? LIMIT 1";

  sqlite3_stmt *stmt = NULL;
  if (sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) != SQLITE_OK)
    return -1;
  sqlite3_bind_text(stmt, 1, base_path, -1, SQLITE_TRANSIENT);
  sqlite3_bind_text(stmt, 2, location, -1, SQLITE_TRANSIENT);
  sqlite3_bind_int64(stmt, 3, file_size);

  int rc = sqlite3_step(stmt);
  int result = 0;
  if (rc == SQLITE_ROW) {
    row->item_pid          = sqlite3_column_int64(stmt, 0);
    row->album_pid         = sqlite3_column_int64(stmt, 1);
    row->item_artist_pid   = sqlite3_column_int64(stmt, 2);
    row->album_artist_pid  = sqlite3_column_int64(stmt, 3);
    row->genre_id          = sqlite3_column_int64(stmt, 4);
    row->composer_pid      = sqlite3_column_int64(stmt, 5);
    row->title_order       = sqlite3_column_int64(stmt, 6);
    row->item_artist_order = sqlite3_column_int64(stmt, 7);
    row->album_order       = sqlite3_column_int64(stmt, 8);
    row->album_artist_order= sqlite3_column_int64(stmt, 9);
    row->genre_order       = sqlite3_column_int64(stmt, 10);
    row->composer_order    = sqlite3_column_int64(stmt, 11);
    result = 1;
  } else if (rc != SQLITE_DONE) {
    result = -1;
  }
  sqlite3_finalize(stmt);
  return result;
}

gboolean medialibDeleteTrack(sqlite3 *db, const MedialibTrackRow *t,
                             GError **error)
{
  GError *err = NULL;
  gint64 pid = t->item_pid;
  GPtrArray *tokens = NULL;

  sqlite3_exec(db, "BEGIN IMMEDIATE", NULL, NULL, NULL);

  static const char *tables[] = {
    "item_extra", "item_state", "item_stats", "item_playback", "item_store",
    "item_video", "item_search", "item_kvs", "container_item", "container_seed",
    "chapter", "lyrics", "booklet", "item",
  };
  for (size_t i = 0; i < G_N_ELEMENTS(tables); i++) {
    char *sql = g_strdup_printf("DELETE FROM %s WHERE item_pid=?", tables[i]);
    gboolean ok = dbRunN(db, sql, pid, &err);
    g_free(sql);
    if (!ok)
      goto fail;
  }

  gint64 kill_orders[8];
  int n_orders = 0;
  if (t->title_order)
    kill_orders[n_orders++] = t->title_order;

  tokens = dbCollectTextN(db,
      "SELECT artwork_token FROM artwork_token WHERE entity_pid=? AND entity_type=0", pid);
  if (!dbRunN(db, "DELETE FROM artwork_token WHERE entity_pid=? AND entity_type=0", pid, &err))
    goto fail;
  /* best_artwork_token тоже ссылается на токены item'а — без этой чистки
   * остаются сироты (наблюдалось: (67108885, 4, 6, '315') после удаления
   * BxMxC кнопкой). */
  if (!dbRunN(db, "DELETE FROM best_artwork_token WHERE entity_pid=? AND entity_type=0",
              pid, &err))
    goto fail;

  if (dbCountN(db, "SELECT COUNT(*) FROM item WHERE album_pid=?", t->album_pid) == 0) {
    if (t->album_order)
      kill_orders[n_orders++] = t->album_order;
    GPtrArray *alb_tokens = dbCollectTextN(db,
        "SELECT artwork_token FROM artwork_token WHERE entity_pid=? AND entity_type=4",
        t->album_pid);
    for (guint i = 0; i < alb_tokens->len; i++)
      g_ptr_array_add(tokens, g_ptr_array_index(alb_tokens, i));
    alb_tokens->len = 0;
    g_ptr_array_unref(alb_tokens);

    if (!dbRunN(db, "DELETE FROM artwork_token WHERE entity_pid=? AND entity_type=4",
                t->album_pid, &err) ||
        !dbRunN(db, "DELETE FROM best_artwork_token WHERE entity_pid=? AND entity_type=4",
                t->album_pid, &err) ||
        !dbRunN(db, "DELETE FROM album WHERE album_pid=?", t->album_pid, &err))
      goto fail;

    if (t->album_artist_pid &&
        dbCountN(db, "SELECT COUNT(*) FROM album WHERE album_artist_pid=?",
                   t->album_artist_pid) == 0) {
      if (t->album_artist_order)
        kill_orders[n_orders++] = t->album_artist_order;
      if (!dbRunN(db, "DELETE FROM album_artist WHERE album_artist_pid=?",
                  t->album_artist_pid, &err))
        goto fail;
    }
  }

  if (t->item_artist_pid &&
      dbCountN(db, "SELECT COUNT(*) FROM item WHERE item_artist_pid=?",
                 t->item_artist_pid) == 0) {
    if (t->item_artist_order)
      kill_orders[n_orders++] = t->item_artist_order;
    if (!dbRunN(db, "DELETE FROM item_artist WHERE item_artist_pid=?",
                t->item_artist_pid, &err))
      goto fail;
  }

  if (t->genre_id &&
      dbCountN(db, "SELECT COUNT(*) FROM item WHERE genre_id=?", t->genre_id) == 0) {
    if (t->genre_order)
      kill_orders[n_orders++] = t->genre_order;
    if (!dbRunN(db, "DELETE FROM genre WHERE genre_id=?", t->genre_id, &err))
      goto fail;
  }

  if (t->composer_pid &&
      dbCountN(db, "SELECT COUNT(*) FROM item WHERE composer_pid=?",
                 t->composer_pid) == 0) {
    if (t->composer_order)
      kill_orders[n_orders++] = t->composer_order;
    if (!dbRunN(db, "DELETE FROM composer WHERE composer_pid=?", t->composer_pid, &err))
      goto fail;
  }

  for (int i = 0; i < n_orders; i++)
    if (!dbRunN(db, "DELETE FROM sort_map WHERE name_order=?", kill_orders[i], &err))
      goto fail;

  for (guint i = 0; i < tokens->len; i++) {
    const char *tok = g_ptr_array_index(tokens, i);
    if (dbCountN(db, "SELECT COUNT(*) FROM artwork_token WHERE artwork_token=?",
                 g_ascii_strtoll(tok, NULL, 10)) == 0) {
      sqlite3_stmt *stmt = NULL;
      if (sqlite3_prepare_v2(db, "DELETE FROM artwork WHERE artwork_token=?",
                             -1, &stmt, NULL) == SQLITE_OK) {
        sqlite3_bind_text(stmt, 1, tok, -1, SQLITE_TRANSIENT);
        sqlite3_step(stmt);
        sqlite3_finalize(stmt);
      }
    }
  }
  g_ptr_array_unref(tokens);

  if (sqlite3_exec(db, "COMMIT", NULL, NULL, NULL) != SQLITE_OK) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED, "sqlite commit: %s",
                sqlite3_errmsg(db));
    sqlite3_exec(db, "ROLLBACK", NULL, NULL, NULL);
    return FALSE;
  }
  return TRUE;

fail:
  if (tokens)
    g_ptr_array_unref(tokens);
  sqlite3_exec(db, "ROLLBACK", NULL, NULL, NULL);
  g_propagate_error(error, err);
  return FALSE;
}

/* Пре-флайт гейт безопасности: wal устройства должен отсутствовать или
 * содержать только заголовок (32 Б). Большой wal = у демона есть
 * некчекпоинченные транзакции: он держит базу открытой и при замене
 * main откатывает нашу заливку своим старым wal (инцидент 29.10,
 * research/3utools/FINDINGS.md). */
static gboolean medialibDeviceWalIsClean(afc_client_t afc, GError **error)
{
  char **fi = NULL;
  const char *wal = "/iTunes_Control/iTunes/MediaLibrary.sqlitedb-wal";
  if (afc_get_file_info(afc, wal, &fi) != AFC_E_SUCCESS || !fi)
    return TRUE; /* wal отсутствует — чисто */
  guint64 size = 0;
  for (char **kv = fi; kv[0] && kv[1]; kv += 2)
    if (strcmp(kv[0], "st_size") == 0)
      size = g_ascii_strtoull(kv[1], NULL, 10);
  afc_dictionary_free(fi);
  if (size <= 32)
    return TRUE; /* только заголовок — кадров нет */
  g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
              "библиотека устройства содержит незаписанные транзакции "
              "(wal %llu Б) — замена базы сейчас небезопасна; повторите позже",
              (unsigned long long)size);
  return FALSE;
}

char *medialibDownload(afc_client_t afc, const char *tmpdir, GError **error)
{
  char *db_path = g_build_filename(tmpdir, "MediaLibrary.sqlitedb", NULL);
  char *wal_path = g_strconcat(db_path, "-wal", NULL);
  char *shm_path = g_strconcat(db_path, "-shm", NULL);

  if (afcDownloadFile(afc, "/iTunes_Control/iTunes/MediaLibrary.sqlitedb", db_path) != 0) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "не удалось скачать базу медиатеки");
    g_free(db_path);
    g_free(wal_path);
    g_free(shm_path);
    return NULL;
  }
  if (afcDownloadFile(afc, "/iTunes_Control/iTunes/MediaLibrary.sqlitedb-wal", wal_path) != 0)
    g_unlink(wal_path);
  if (afcDownloadFile(afc, "/iTunes_Control/iTunes/MediaLibrary.sqlitedb-shm", shm_path) != 0)
    g_unlink(shm_path);

  g_free(wal_path);
  g_free(shm_path);
  return db_path;
}

char *medialibBackup(const char *db_path)
{
  char *dir = g_build_filename(g_get_user_data_dir(), "apple-devices", "backups", NULL);
  g_mkdir_with_parents(dir, 0755);

  GDateTime *now = g_date_time_new_now_local();
  char *name = g_date_time_format(now, "MediaLibrary-%Y%m%d-%H%M%S.sqlitedb");
  g_date_time_unref(now);
  char *dest = g_build_filename(dir, name, NULL);
  g_free(dir);
  g_free(name);

  GFile *src = g_file_new_for_path(db_path);
  GFile *dst = g_file_new_for_path(dest);
  gboolean ok = g_file_copy(src, dst, G_FILE_COPY_OVERWRITE, NULL, NULL, NULL, NULL);
  g_object_unref(src);
  g_object_unref(dst);
  if (!ok) {
    g_free(dest);
    return NULL;
  }
  return dest;
}

gboolean medialibUpload(afc_client_t afc, const char *db_path, GError **error)
{
  /* Локальный wal должен исчезнуть при sqlite3_close (sqlite чекпоинтит
   * и удаляет его при закрытии последнего соединения). Остаточный wal
   * с кадрами означает, что чекпоинт не удался и main не содержит наших
   * правок — заливать такой main нельзя (треки молча потеряются). */
  char *local_wal = g_strconcat(db_path, "-wal", NULL);
  GStatBuf st;
  if (g_stat(local_wal, &st) == 0 && st.st_size > 32) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "локальный wal не пуст (%lld Б) — чекпоинт при закрытии базы "
                "не удался; заливка отменена",
                (long long)st.st_size);
    g_free(local_wal);
    return FALSE;
  }
  g_free(local_wal);

  afc_remove_path(afc, "/iTunes_Control/iTunes/MediaLibrary.sqlitedb-wal");
  afc_remove_path(afc, "/iTunes_Control/iTunes/MediaLibrary.sqlitedb-shm");
  if (afc_remove_path(afc, "/iTunes_Control/iTunes/MediaLibrary.sqlitedb") != AFC_E_SUCCESS) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "не удалось удалить базу на устройстве");
    return FALSE;
  }
  if (afcUploadFile(afc, db_path, "/iTunes_Control/iTunes/MediaLibrary.sqlitedb") != 0) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "не удалось загрузить базу на устройство");
    return FALSE;
  }

  /* Контроль размера после заливки — дёшево ловит обрыв соединения. */
  if (g_stat(db_path, &st) != 0) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "не удалось прочитать локальную базу для сверки размера");
    return FALSE;
  }
  guint64 local_size = (guint64)st.st_size;
  guint64 remote_size = 0;
  char **fi = NULL;
  if (afc_get_file_info(afc, "/iTunes_Control/iTunes/MediaLibrary.sqlitedb", &fi) ==
          AFC_E_SUCCESS &&
      fi) {
    for (char **kv = fi; kv[0] && kv[1]; kv += 2)
      if (strcmp(kv[0], "st_size") == 0)
        remote_size = g_ascii_strtoull(kv[1], NULL, 10);
    afc_dictionary_free(fi);
  } else {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "не удалось проверить размер базы на устройстве");
    return FALSE;
  }
  if (remote_size != local_size) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "размер базы на устройстве (%llu Б) не совпадает с локальным "
                "(%llu Б) — заливка неполная",
                (unsigned long long)remote_size, (unsigned long long)local_size);
    return FALSE;
  }
  return TRUE;
}

void medialibCleanupTmpDir(const char *tmpdir, const char *db_path)
{
  char *wal = g_strconcat(db_path, "-wal", NULL);
  char *shm = g_strconcat(db_path, "-shm", NULL);
  g_unlink(db_path);
  g_unlink(wal);
  g_unlink(shm);
  g_free(wal);
  g_free(shm);
  g_rmdir(tmpdir);
}

int musicCleanMedialib(AfcSession *s, MusicTrack *track)
{
  const char *full = track->path;
  const char *slash = strrchr(full, '/');
  if (!slash)
    return -1;
  char *base_path = g_strndup(full + 1, (gsize)(slash - full - 1));
  const char *location = slash + 1;

  logMessage(tr("Музыка: чистим запись в базе «Музыки»…"));

  GError *err = NULL;
  int result = -1;

  /* Не трогаем живую базу при грязном wal устройства (инцидент 29.10). */
  if (!medialibDeviceWalIsClean(s->afc, &err)) {
    logMessage(tr("Музыка: удаление отменено: %s"), err->message);
    g_clear_error(&err);
    g_free(base_path);
    return -1;
  }

  char *tmpdir = g_dir_make_tmp("apple-devices-XXXXXX", NULL);
  char *db_path = tmpdir ? medialibDownload(s->afc, tmpdir, &err) : NULL;
  if (!db_path) {
    logMessage(tr("Музыка: не удалось скачать базу медиатеки: %s"), err->message);
    g_clear_error(&err);
    g_free(base_path);
    g_free(tmpdir);
    return -1;
  }

  char *backup = medialibBackup(db_path);
  if (backup)
    logMessage(tr("Музыка: резервная копия базы: %s"), backup);
  else
    logMessage(tr("Музыка: резервная копия не создана — продолжаем без неё."));

  sqlite3 *db = NULL;
  if (sqlite3_open_v2(db_path, &db, SQLITE_OPEN_READWRITE, NULL) != SQLITE_OK) {
    logMessage(tr("Музыка: не удалось открыть базу: %s"),
               db ? sqlite3_errmsg(db) : "sqlite3_open failed");
    if (db)
      sqlite3_close(db);
    g_free(backup);
    medialibCleanupTmpDir(tmpdir, db_path);
    g_free(db_path);
    g_free(tmpdir);
    g_free(base_path);
    return -1;
  }

  MedialibTrackRow row;
  int found = medialibFindTrack(db, base_path, location, (gint64)track->size, &row);
  if (found < 0) {
    logMessage(tr("Музыка: ошибка поиска записи в базе."));
  } else if (found == 0) {
    logMessage(tr("Музыка: записи в медиатеке нет (файл не из синка) — база не тронута."));
    result = 0;
  } else if (medialibDeleteTrack(db, &row, &err)) {
    logMessage(tr("Музыка: запись вычищена из базы (ID %lld)."),
               (long long)row.item_pid);
    result = 1;
  } else {
    logMessage(tr("Музыка: не удалось вычистить запись: %s"), err->message);
    g_clear_error(&err);
  }

  sqlite3_close(db);

  if (result == 1 && !medialibUpload(s->afc, db_path, &err)) {
    logMessage(tr("Музыка: не удалось загрузить базу на устройство: %s"), err->message);
    g_clear_error(&err);
    result = -1;
  }

  g_free(backup);
  medialibCleanupTmpDir(tmpdir, db_path);
  g_free(db_path);
  g_free(tmpdir);
  g_free(base_path);
  return result;
}

/* --- Sort system --- */

#define SORT_ORDER_STEP ((gint64)1 << 32)

static const guchar cyrWeights[32] = {
  0x06, 0x0c, 0x0e, 0x10, 0x1a, 0x28, 0x2c, 0x3a, 0x46, 0x4e, 0x54, 0x62,
  0x72, 0x78, 0x8a, 0x8e, 0x96, 0x9c, 0xa2, 0xac, 0xb4, 0xb6, 0xc0, 0xc8,
  0xda, 0xe0, 0xe2, 0xe6, 0xe8, 0xee, 0xf4, 0xfa,
};

static int sortSectionOf(const char *name)
{
  const char *p = name;
  while (*p == '#' || *p == '@') p++;
  if (!*p)
    return 59;
  gunichar c = g_utf8_get_char(p);
  if (c == 0x451 || c == 0x401)
    c = 0x415;
  c = g_unichar_toupper(c);
  if (c >= 0x410 && c <= 0x42F) {
    int idx = (int)(c - 0x410);
    if (idx == 28)
      idx = 27;
    else if (idx >= 29)
      idx--;
    return idx;
  }
  if (c >= 'A' && c <= 'Z')
    return 32 + (int)(c - 'A');
  return 58;
}

static guint32 sortCharWeight(gunichar c)
{
  if (c == 0x451 || c == 0x401)
    c = 0x435;
  gunichar lo = g_unichar_tolower(c);
  if (lo >= 0x430 && lo <= 0x44F)
    return cyrWeights[lo - 0x430];
  if (lo >= 'a' && lo <= 'z')
    return 0x2b + 2 * (guint32)(lo - 'a');
  if (lo == ' ')
    return 0x03;
  if (lo >= 0x80)
    return 0x100 + (guint32)(lo & 0xFF);
  return 0;
}

typedef struct {
  int kind;
  gint64 a;
} SortTok;

static SortTok *sortBuildKey(const char *name, gsize *len)
{
  GArray *arr = g_array_sized_new(FALSE, FALSE, sizeof(SortTok), 16);
  const char *p = name;
  while (*p == '#' || *p == '@') p++;
  while (*p) {
    if (*p >= '0' && *p <= '9') {
      gint64 v = 0;
      while (*p >= '0' && *p <= '9') {
        if (v <= (G_MAXINT64 - 9) / 10)
          v = v * 10 + (*p - '0');
        p++;
      }
      SortTok t = {1, v};
      g_array_append_vals(arr, &t, 1);
      continue;
    }
    gunichar c = g_utf8_get_char(p);
    guint32 w = sortCharWeight(c);
    if (w) {
      SortTok t = {0, (gint64)w};
      g_array_append_vals(arr, &t, 1);
    }
    p = g_utf8_next_char(p);
  }
  *len = arr->len;
  return (SortTok *)g_array_free(arr, FALSE);
}

static int sortKeyCmp(const SortTok *a, gsize na, const SortTok *b, gsize nb)
{
  gsize n = na < nb ? na : nb;
  for (gsize i = 0; i < n; i++) {
    if (a[i].kind != b[i].kind)
      return a[i].kind == 1 ? -1 : 1;
    if (a[i].a != b[i].a)
      return a[i].a < b[i].a ? -1 : 1;
  }
  if (na == nb)
    return 0;
  return na < nb ? -1 : 1;
}

/* --- Обеспечение сущностей в базе --- */

gboolean medialibTouchRevision(sqlite3 *db, gint64 pid, int entity_class,
                               GError **error)
{
  gint64 rev = 0;
  if (!dbScalarSql(db, "SELECT IFNULL(MAX(revision),0)+1 FROM entity_revision",
                   &rev, error))
    return FALSE;
  char *sql = sqlite3_mprintf(
      "INSERT OR REPLACE INTO entity_revision"
      "(revision, entity_pid, deleted, class, revision_type)"
      " VALUES(%lld, %lld, 0, %d, 0)",
      (long long)rev, (long long)pid, entity_class);
  gboolean ok = dbExecSql(db, sql, error);
  sqlite3_free(sql);
  return ok;
}

gint64 medialibEnsureSortName(sqlite3 *db, const char *name, GError **error)
{
  if (!name || !*name)
    return 0;

  gint64 existing = 0;
  char *sql = sqlite3_mprintf(
      "SELECT name_order FROM sort_map WHERE name=%Q", name);
  gboolean found = dbScalarSql(db, sql, &existing, error);
  sqlite3_free(sql);
  if (!found && *error)
    return -1;
  if (found)
    return existing;

  int my_sec = sortSectionOf(name);
  gsize my_len = 0;
  SortTok *my_key = sortBuildKey(name, &my_len);

  gint64 prev = 0, next = 0;
  sqlite3_stmt *st = NULL;
  gboolean ok = sqlite3_prepare_v2(db,
      "SELECT name, name_order, name_section FROM sort_map WHERE name!=''",
      -1, &st, NULL) == SQLITE_OK;
  if (ok) {
    while (sqlite3_step(st) == SQLITE_ROW) {
      gint64 order = sqlite3_column_int64(st, 1);
      int sec = sqlite3_column_int(st, 2);
      if (sec < my_sec) {
        if (order > prev)
          prev = order;
      } else if (sec > my_sec) {
        if (next == 0 || order < next)
          next = order;
      } else {
        const char *oname = (const char *)sqlite3_column_text(st, 0);
        gsize olen = 0;
        SortTok *okey = sortBuildKey(oname ? oname : "", &olen);
        int c = sortKeyCmp(okey, olen, my_key, my_len);
        g_free(okey);
        if (c < 0) {
          if (order > prev)
            prev = order;
        } else if (c > 0) {
          if (next == 0 || order < next)
            next = order;
        }
      }
    }
  }
  sqlite3_finalize(st);
  g_free(my_key);
  if (!ok) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED, "sort_map scan: %s",
                sqlite3_errmsg(db));
    return -1;
  }

  gint64 order;
  if (next == 0 || next - prev >= 2 * SORT_ORDER_STEP)
    order = prev + SORT_ORDER_STEP;
  else
    order = prev + (next - prev) / 2;
  if (order <= prev || (next != 0 && order >= next)) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "не удалось выделить name_order для «%s»", name);
    return -1;
  }

  sql = sqlite3_mprintf(
      "INSERT INTO sort_map(name, name_order, name_section, sort_key) "
      "VALUES(%Q, %lld, %d, x'')",
      name, (long long)order, my_sec);
  ok = dbExecSql(db, sql, error);
  sqlite3_free(sql);
  return ok ? order : -1;
}

gint64 medialibEnsureBaseLocation(sqlite3 *db, GError **error)
{
  gint64 id = 0;
  char *sql = sqlite3_mprintf(
      "SELECT base_location_id FROM base_location WHERE path=%Q",
      "iTunes_Control/Music/Imported");
  gboolean found = dbScalarSql(db, sql, &id, error);
  sqlite3_free(sql);
  if (!found && *error)
    return -1;
  if (found)
    return id;

  id = 0;
  if (!dbScalarSql(db,
      "SELECT IFNULL(MAX(base_location_id),3839)+1 FROM base_location",
      &id, error))
    return -1;
  sql = sqlite3_mprintf(
      "INSERT INTO base_location(base_location_id, path) "
      "VALUES(%lld, 'iTunes_Control/Music/Imported')",
      (long long)id);
  gboolean ok = dbExecSql(db, sql, error);
  sqlite3_free(sql);
  return ok ? id : -1;
}

gint64 medialibEnsureArtist(sqlite3 *db, const char *name, gint64 item_pid,
                            GError **error)
{
  if (!name || !*name)
    name = "Unknown Artist";

  gint64 pid = 0;
  char *sql = sqlite3_mprintf(
      "SELECT item_artist_pid FROM item_artist WHERE item_artist=%Q", name);
  gboolean found = dbScalarSql(db, sql, &pid, error);
  sqlite3_free(sql);
  if (!found && *error)
    return -1;
  if (found)
    return medialibTouchRevision(db, pid, ML_CLASS_ARTIST, error) ? pid : -1;

  pid = 0;
  if (!dbScalarSql(db,
      "SELECT IFNULL(MAX(item_artist_pid),33554432)+1 FROM item_artist",
      &pid, error))
    return -1;
  gint64 order = medialibEnsureSortName(db, name, error);
  if (order < 0)
    return -1;
  sql = sqlite3_mprintf(
      "INSERT INTO item_artist(item_artist_pid, item_artist, sort_item_artist,"
      " representative_item_pid) VALUES(%lld, %Q, %Q, %lld)",
      (long long)pid, name, name, (long long)item_pid);
  gboolean ok = dbExecSql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;
  return medialibTouchRevision(db, pid, ML_CLASS_ARTIST, error) ? pid : -1;
}

gint64 medialibEnsureAlbumArtist(sqlite3 *db, const char *name, gint64 item_pid,
                                 GError **error)
{
  if (!name || !*name)
    name = "Unknown Artist";

  gint64 pid = 0;
  char *sql = sqlite3_mprintf(
      "SELECT album_artist_pid FROM album_artist WHERE album_artist=%Q", name);
  gboolean found = dbScalarSql(db, sql, &pid, error);
  sqlite3_free(sql);
  if (!found && *error)
    return -1;
  if (found)
    return medialibTouchRevision(db, pid, ML_CLASS_ALBUM_ARTIST, error) ? pid : -1;

  pid = 0;
  if (!dbScalarSql(db,
      "SELECT IFNULL(MAX(album_artist_pid),117440512)+1 FROM album_artist",
      &pid, error))
    return -1;
  gint64 order = medialibEnsureSortName(db, name, error);
  if (order < 0)
    return -1;
  sql = sqlite3_mprintf(
      "INSERT INTO album_artist(album_artist_pid, album_artist,"
      " sort_album_artist, representative_item_pid, sort_order,"
      " sort_order_section, name_order) VALUES(%lld, %Q, %Q, %lld, %lld, %d, %lld)",
      (long long)pid, name, name, (long long)item_pid,
      (long long)order, sortSectionOf(name), (long long)order);
  gboolean ok = dbExecSql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;
  return medialibTouchRevision(db, pid, ML_CLASS_ALBUM_ARTIST, error) ? pid : -1;
}

gint64 medialibEnsureAlbum(sqlite3 *db, const char *name,
                           gint64 album_artist_pid, gint64 item_pid,
                           GError **error)
{
  if (!name || !*name)
    name = "Unknown Album";

  gint64 pid = 0;
  char *sql = sqlite3_mprintf(
      "SELECT album_pid FROM album WHERE album=%Q", name);
  gboolean found = dbScalarSql(db, sql, &pid, error);
  sqlite3_free(sql);
  if (!found && *error)
    return -1;
  if (found)
    return medialibTouchRevision(db, pid, ML_CLASS_ALBUM, error) ? pid : -1;

  pid = 0;
  if (!dbScalarSql(db,
      "SELECT IFNULL(MAX(album_pid),67108864)+1 FROM album",
      &pid, error))
    return -1;
  gint64 order = medialibEnsureSortName(db, name, error);
  if (order < 0)
    return -1;
  sql = sqlite3_mprintf(
      "INSERT INTO album(album_pid, album, sort_album, album_artist_pid,"
      " representative_item_pid, keep_local_status, album_type)"
      " VALUES(%lld, %Q, %Q, %lld, %lld, 2, 1)",
      (long long)pid, name, name, (long long)album_artist_pid,
      (long long)item_pid);
  gboolean ok = dbExecSql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;
  return medialibTouchRevision(db, pid, ML_CLASS_ALBUM, error) ? pid : -1;
}

gint64 medialibEnsureGenre(sqlite3 *db, const char *name, gint64 item_pid,
                           GError **error)
{
  gint64 id = 0;
  char *sql = sqlite3_mprintf(
      "SELECT genre_id FROM genre WHERE genre=%Q", name);
  gboolean found = dbScalarSql(db, sql, &id, error);
  sqlite3_free(sql);
  if (!found && *error)
    return -1;
  if (found)
    return medialibTouchRevision(db, id, ML_CLASS_GENRE, error) ? id : -1;

  id = 0;
  if (!dbScalarSql(db,
      "SELECT IFNULL(MAX(genre_id),50331648)+1 FROM genre",
      &id, error))
    return -1;
  sql = sqlite3_mprintf(
      "INSERT INTO genre(genre_id, genre, representative_item_pid)"
      " VALUES(%lld, %Q, %lld)",
      (long long)id, name, (long long)item_pid);
  gboolean ok = dbExecSql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;
  return medialibTouchRevision(db, id, ML_CLASS_GENRE, error) ? id : -1;
}

gboolean medialibReadMeta(const char *local_path, const char *location,
                          MedialibMeta *m, GError **error)
{
  memset(m, 0, sizeof *m);
  m->location = g_strdup(location);
  m->title = g_strdup("");

  GStatBuf st;
  if (g_stat(local_path, &st) != 0) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "файл недоступен: %s", local_path);
    return FALSE;
  }
  m->file_size = (gint64)st.st_size;

  TagLib_File *tf = taglib_file_new(local_path);
  if (!tf) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "taglib не распознал файл: %s", local_path);
    return FALSE;
  }
  TagLib_Tag *tag = taglib_file_tag(tf);
  if (tag) {
    g_free(m->title);
    m->title = g_strdup(taglib_tag_title(tag));
    m->artist = g_strdup(taglib_tag_artist(tag));
    m->album = g_strdup(taglib_tag_album(tag));
    m->genre = g_strdup(taglib_tag_genre(tag));
    m->year = taglib_tag_year(tag);
    m->track_number = taglib_tag_track(tag);
  }
  const TagLib_AudioProperties *ap = taglib_file_audioproperties(tf);
  if (ap) {
    m->duration_ms = (gint64)taglib_audioproperties_length(ap) * 1000;
    m->bit_rate = taglib_audioproperties_bitrate(ap);
  }
  TagLib_Complex_Property_Attribute ***props = taglib_complex_property_get(tf, "PICTURE");
  if (props) {
    TagLib_Complex_Property_Picture_Data pic;
    taglib_picture_from_complex_property(props, &pic);
    if (pic.data && pic.size > 0) {
      m->has_cover = TRUE;
      m->cover_data = g_memdup2(pic.data, pic.size);
      m->cover_len = pic.size;
    }
    taglib_complex_property_free(props);
  }
  taglib_tag_free_strings();
  taglib_file_free(tf);

  if (!m->title || !*m->title) {
    g_free(m->title);
    m->title = g_path_get_basename(location);
    char *dot = strrchr(m->title, '.');
    if (dot)
      *dot = 0;
  }
  if (!m->artist || !*m->artist) {
    g_free(m->artist);
    m->artist = g_strdup("Unknown Artist");
  }
  if (!m->album || !*m->album) {
    g_free(m->album);
    m->album = g_strdup("Unknown Album");
  }
  if (m->genre && !*m->genre) {
    g_free(m->genre);
    m->genre = NULL;
  }
  return TRUE;
}

gboolean medialibEnsureItemSatellites(sqlite3 *db, gint64 item_pid,
                                      GError **error)
{
  GRand *r = g_rand_new();
  gint64 sync_id = ((gint64)g_rand_int(r) << 32) | (gint64)g_rand_int(r);
  g_rand_free(r);
  if (sync_id == 0)
    sync_id = 1;

  char *sql = sqlite3_mprintf(
      "INSERT OR IGNORE INTO item_store(item_pid, sync_id, sync_in_my_library)"
      " VALUES(%lld, %lld, 1)",
      (long long)item_pid, (long long)sync_id);
  gboolean ok = dbExecSql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return FALSE;

  static const char *bare[] = { "item_video", "lyrics", "chapter", NULL };
  for (int i = 0; bare[i]; i++) {
    sql = sqlite3_mprintf("INSERT OR IGNORE INTO %s(item_pid) VALUES(%lld)",
                          bare[i], (long long)item_pid);
    ok = dbExecSql(db, sql, error);
    sqlite3_free(sql);
    if (!ok)
      return FALSE;
  }
  return TRUE;
}

int medialibInsertTrack(sqlite3 *db, const MedialibMeta *m, gint64 base_loc,
                        gint64 date_added, double date_downloaded,
                        gint64 *out_pid, GError **error)
{
  gint64 dup = 0;
  char *sql = sqlite3_mprintf(
      "SELECT COUNT(*) FROM item_extra WHERE location=%Q AND file_size=%lld",
      m->location, (long long)m->file_size);
  gboolean ok = dbScalarSql(db, sql, &dup, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;
  if (dup > 0) {
    gint64 old_pid = 0;
    sql = sqlite3_mprintf(
        "SELECT item_pid FROM item_extra WHERE location=%Q AND file_size=%lld"
        " LIMIT 1", m->location, (long long)m->file_size);
    gboolean f = dbScalarSql(db, sql, &old_pid, error);
    sqlite3_free(sql);
    if (!f)
      return -1;
    if (!medialibTouchRevision(db, old_pid, ML_CLASS_ITEM, error))
      return -1;
    gint64 artist_pid = medialibEnsureArtist(db, m->artist, old_pid, error);
    if (artist_pid < 0)
      return -1;
    gint64 album_artist_pid = medialibEnsureAlbumArtist(db, m->artist, old_pid, error);
    if (album_artist_pid < 0)
      return -1;
    if (medialibEnsureAlbum(db, m->album, album_artist_pid, old_pid, error) < 0)
      return -1;
    if (m->genre && medialibEnsureGenre(db, m->genre, old_pid, error) < 0)
      return -1;
    if (!medialibEnsureItemSatellites(db, old_pid, error))
      return -1;
    sql = sqlite3_mprintf(
        "UPDATE item SET date_added=%lld, date_downloaded=%f WHERE item_pid=%lld",
        (long long)date_added, date_downloaded, (long long)old_pid);
    if (!dbExecSql(db, sql, error))
      return -1;
    sqlite3_free(sql);
    sql = sqlite3_mprintf(
        "UPDATE item_stats SET date_accessed=%f WHERE item_pid=%lld",
        date_downloaded, (long long)old_pid);
    if (!dbExecSql(db, sql, error))
      return -1;
    sqlite3_free(sql);
    if (!dbExecSql(db,
        "UPDATE item_playback SET relative_volume=0 WHERE relative_volume IS NULL",
        error))
      return -1;
    if (!dbExecSql(db,
        "UPDATE item_extra SET description='' WHERE description IS NULL",
        error))
      return -1;
    return 0;
  }

  gint64 item_pid = 0;
  if (!dbScalarSql(db, "SELECT IFNULL(MAX(item_pid),0)+1 FROM item",
                   &item_pid, error))
    return -1;

  gint64 artist_pid = medialibEnsureArtist(db, m->artist, item_pid, error);
  if (artist_pid < 0)
    return -1;
  gint64 album_artist_pid = medialibEnsureAlbumArtist(db, m->artist, item_pid, error);
  if (album_artist_pid < 0)
    return -1;
  gint64 album_pid = medialibEnsureAlbum(db, m->album, album_artist_pid, item_pid, error);
  if (album_pid < 0)
    return -1;
  gint64 genre_id = 0, genre_order = 0;
  int genre_sec = 59;
  if (m->genre) {
    genre_id = medialibEnsureGenre(db, m->genre, item_pid, error);
    if (genre_id < 0)
      return -1;
    genre_order = medialibEnsureSortName(db, m->genre, error);
    if (genre_order < 0)
      return -1;
    genre_sec = sortSectionOf(m->genre);
  }

  gint64 title_order = medialibEnsureSortName(db, m->title, error);
  if (title_order < 0)
    return -1;
  gint64 artist_order = medialibEnsureSortName(db, m->artist, error);
  if (artist_order < 0)
    return -1;
  gint64 album_order = medialibEnsureSortName(db, m->album, error);
  if (album_order < 0)
    return -1;

  int title_sec = sortSectionOf(m->title);
  int artist_sec = sortSectionOf(m->artist);
  int album_sec = sortSectionOf(m->album);

  sql = sqlite3_mprintf(
      "INSERT INTO item(item_pid, media_type, title_order, title_order_section,"
      " item_artist_pid, item_artist_order, item_artist_order_section,"
      " album_pid, album_order, album_order_section,"
      " album_artist_pid, album_artist_order, album_artist_order_section,"
      " genre_id, genre_order, genre_order_section,"
      " disc_number, track_number, base_location_id,"
      " keep_local, keep_local_status, in_my_library, date_added, date_downloaded)"
      " VALUES(%lld, 8, %lld, %d, %lld, %lld, %d, %lld, %lld, %d, %lld, %lld, %d,"
      " %lld, %lld, %d, 0, %d, %lld, 1, 2, 1, %lld, %f)",
      (long long)item_pid, (long long)title_order, title_sec,
      (long long)artist_pid, (long long)artist_order, artist_sec,
      (long long)album_pid, (long long)album_order, album_sec,
      (long long)album_artist_pid, (long long)artist_order, artist_sec,
      (long long)genre_id, (long long)genre_order, genre_sec,
      m->track_number, (long long)base_loc,
      (long long)date_added, date_downloaded);
  ok = dbExecSql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;

  if (!medialibTouchRevision(db, item_pid, ML_CLASS_ITEM, error))
    return -1;

  sql = sqlite3_mprintf(
      "INSERT INTO item_extra(item_pid, title, sort_title, total_time_ms, year,"
      " location, file_size, description, media_kind, comment, grouping,"
      " version, display_version, classical_work, classical_movement)"
      " VALUES(%lld, %Q, %Q, %f, %d, %Q, %lld, '', 1, '', '', '', '', '', '')",
      (long long)item_pid, m->title, m->title,
      (double)m->duration_ms, m->year, m->location, (long long)m->file_size);
  ok = dbExecSql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;

  sql = sqlite3_mprintf(
      "UPDATE item_state SET store_playlist_id='0', universal_cloud_library_id='',"
      " is_valid_content_type=1, is_library_add_eligible=0,"
      " match_redownload_params='', purchase_history_redownload_params='',"
      " sync_id=0, cloud_id=0, adam_id=0, purchased_adam_id=0,"
      " subscription_adam_id=0, reporting_adam_id=0, asset_adam_id=0,"
      " radio_station_id=0, is_placeholder=0, keep_local_managed_status_reason=0,"
      " is_store_redownloadable=0, hls_asset_traits=0, is_mastered_for_itunes=0,"
      " playback_endpoint_type=0"
      " WHERE item_pid=%lld",
      (long long)item_pid);
  ok = dbExecSql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;

  sql = sqlite3_mprintf(
      "INSERT INTO item_stats(item_pid, date_accessed) VALUES(%lld, %f)",
      (long long)item_pid, date_downloaded);
  ok = dbExecSql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;

  sql = sqlite3_mprintf(
      "INSERT INTO item_search(item_pid, search_title, search_album,"
      " search_artist, search_album_artist, search_composer)"
      " VALUES(%lld, %lld, %lld, %lld, %lld, 0)",
      (long long)item_pid, (long long)title_order, (long long)album_order,
      (long long)artist_order, (long long)artist_order);
  ok = dbExecSql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;

  sql = sqlite3_mprintf(
      "INSERT INTO item_playback(item_pid, audio_format, bit_rate,"
      " relative_volume) VALUES(%lld, 301, %d, 0)",
      (long long)item_pid, m->bit_rate);
  ok = dbExecSql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;

  if (!medialibEnsureItemSatellites(db, item_pid, error))
    return -1;

  *out_pid = item_pid;
  return 1;
}

gboolean medialibSetItemArtwork(sqlite3 *db, gint64 item_pid, gint64 token,
                                GError **error)
{
  char *sql = sqlite3_mprintf(
      "INSERT OR REPLACE INTO artwork_token(entity_pid, artwork_token,"
      " artwork_source_type, artwork_type, entity_type, artwork_variant_type)"
      " VALUES(%lld, %lld, 300, 1, 0, 0)",
      (long long)item_pid, (long long)token);
  gboolean ok = dbExecSql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return FALSE;
  sql = sqlite3_mprintf(
      "INSERT OR REPLACE INTO best_artwork_token(entity_pid, entity_type,"
      " artwork_type, available_artwork_token, fetchable_artwork_token,"
      " fetchable_artwork_source_type, artwork_variant_type)"
      " VALUES(%lld, 0, 1, %lld, '', 0, 0)",
      (long long)item_pid, (long long)token);
  ok = dbExecSql(db, sql, error);
  return ok;
}

int medialibFixArtworkPaths(sqlite3 *db)
{
  sqlite3_stmt *st = NULL;
  if (sqlite3_prepare_v2(db,
                         "SELECT artwork_token, relative_path FROM artwork"
                         " WHERE artwork_source_type=300",
                         -1, &st, NULL) != SQLITE_OK) {
    g_warning("medialib: prepare fix_artwork_paths: %s", sqlite3_errmsg(db));
    return -1;
  }
  int fixed = 0;
  while (sqlite3_step(st) == SQLITE_ROW) {
    const unsigned char *tok = sqlite3_column_text(st, 0);
    const unsigned char *path = sqlite3_column_text(st, 1);
    if (!tok || !path)
      continue;
    char sha1[41];
    GChecksum *ck = g_checksum_new(G_CHECKSUM_SHA1);
    g_checksum_update(ck, tok, (gssize)strlen((const char *)tok));
    g_snprintf(sha1, sizeof sha1, "%s", g_checksum_get_string(ck));
    g_checksum_free(ck);
    char expect[42];
    g_snprintf(expect, sizeof expect, "%.2s/%.38s", sha1, sha1 + 2);
    if (g_strcmp0((const char *)path, expect) == 0)
      continue;
    char *sql = sqlite3_mprintf(
        "UPDATE artwork SET relative_path=%Q"
        " WHERE artwork_token=%Q AND artwork_source_type=300",
        expect, (const char *)tok);
    GError *err = NULL;
    gboolean ok = dbExecSql(db, sql, &err);
    sqlite3_free(sql);
    if (!ok) {
      g_warning("medialib: fix_artwork_paths: %s", err ? err->message : "?");
      g_clear_error(&err);
      continue;
    }
    fixed++;
  }
  sqlite3_finalize(st);
  return fixed;
}

int medialibAttachArtwork(afc_client_t afc, sqlite3 *db, const char *tmpdir,
                          gint64 item_pid, gint64 album_pid,
                          const MedialibMeta *m, GError **error)
{
  if (album_pid > 0) {
    char *sql = sqlite3_mprintf(
        "SELECT artwork_token FROM artwork_token WHERE entity_pid=%lld"
        " AND entity_type=4 AND artwork_source_type=300 LIMIT 1",
        (long long)album_pid);
    gint64 album_token = 0;
    GError *lookup_err = NULL;
    gboolean found = dbScalarSql(db, sql, &album_token, &lookup_err);
    sqlite3_free(sql);
    if (!found && lookup_err) {
      g_propagate_error(error, lookup_err);
      return -1;
    }
    g_clear_error(&lookup_err);
    if (found && album_token > 0)
      return medialibSetItemArtwork(db, item_pid, album_token, error) ? 1 : -1;
  }

  if (!m->cover_data || m->cover_len == 0)
    return 0;

  gint64 token = 0;
  char *sql = sqlite3_mprintf(
      "SELECT IFNULL(MAX(CAST(artwork_token AS INTEGER)),99)+1 FROM artwork");
  gboolean ok = dbScalarSql(db, sql, &token, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;

  char sha1[41];
  char *tok_str = g_strdup_printf("%lld", (long long)token);
  GChecksum *ck = g_checksum_new(G_CHECKSUM_SHA1);
  g_checksum_update(ck, (const guchar *)tok_str, (gssize)strlen(tok_str));
  g_snprintf(sha1, sizeof sha1, "%s", g_checksum_get_string(ck));
  g_checksum_free(ck);
  g_free(tok_str);
  char *rel_path = g_strdup_printf("%.2s/%.38s", sha1, sha1 + 2);

  char *tmp_path = g_build_filename(tmpdir, "cover.bin", NULL);
  FILE *f = fopen(tmp_path, "wb");
  if (!f || fwrite(m->cover_data, 1, m->cover_len, f) != m->cover_len) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "не удалось записать временный файл обложки");
    if (f)
      fclose(f);
    g_free(tmp_path);
    g_free(rel_path);
    return -1;
  }
  fclose(f);
  char *dir = g_strdup_printf("/iTunes_Control/iTunes/Artwork/Originals/%.2s", sha1);
  afc_make_directory(afc, dir);
  g_free(dir);
  char *remote = g_strdup_printf("/iTunes_Control/iTunes/Artwork/Originals/%s", rel_path);
  int up = afcUploadFile(afc, tmp_path, remote);
  g_free(remote);
  g_free(tmp_path);
  if (up != 0) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "не удалось загрузить обложку на устройство");
    g_free(rel_path);
    return -1;
  }

  static const char *interest =
      "{\"ColorAnalysis\":{\"1\":{"
      "\"primaryTextColorLight\":\"YES\","
      "\"secondaryTextColorLight\":\"YES\","
      "\"secondaryTextColor\":\"#CCCCCC\","
      "\"tertiaryTextColorLight\":\"NO\","
      "\"primaryTextColor\":\"#FFFFFF\","
      "\"tertiaryTextColor\":\"#999999\","
      "\"backgroundColorLight\":\"NO\","
      "\"backgroundColor\":\"#000000\"}}}";
  char *interest_hex = g_malloc(strlen(interest) * 2 + 1);
  for (size_t i = 0; i < strlen(interest); i++)
    g_snprintf(interest_hex + i * 2, 3, "%02x", (guchar)interest[i]);
  sql = sqlite3_mprintf(
      "INSERT INTO artwork(artwork_token, artwork_source_type, relative_path,"
      " artwork_type, interest_data, artwork_variant_type)"
      " VALUES(%lld, 300, %Q, 6, X'%q', 0)",
      (long long)token, rel_path, interest_hex);
  g_free(interest_hex);
  ok = dbExecSql(db, sql, error);
  sqlite3_free(sql);
  if (!ok) {
    g_free(rel_path);
    return -1;
  }

  if (!medialibSetItemArtwork(db, item_pid, token, error)) {
    g_free(rel_path);
    return -1;
  }

  if (album_pid > 0) {
    gint64 has = 0;
    sql = sqlite3_mprintf(
        "SELECT COUNT(*) FROM artwork_token WHERE entity_pid=%lld"
        " AND entity_type=4 AND artwork_source_type=300",
        (long long)album_pid);
    ok = dbScalarSql(db, sql, &has, error);
    sqlite3_free(sql);
    if (!ok) {
      g_free(rel_path);
      return -1;
    }
    if (has == 0) {
      sql = sqlite3_mprintf(
          "INSERT OR REPLACE INTO artwork_token(entity_pid, artwork_token,"
          " artwork_source_type, artwork_type, entity_type, artwork_variant_type)"
          " VALUES(%lld, %lld, 300, 6, 4, 0)",
          (long long)album_pid, (long long)token);
      ok = dbExecSql(db, sql, error);
      sqlite3_free(sql);
      if (!ok) {
        g_free(rel_path);
        return -1;
      }
      sql = sqlite3_mprintf(
          "INSERT OR REPLACE INTO best_artwork_token(entity_pid, entity_type,"
          " artwork_type, available_artwork_token, fetchable_artwork_token,"
          " fetchable_artwork_source_type, artwork_variant_type)"
          " VALUES(%lld, 4, 6, %lld, '', 0, 0)",
          (long long)album_pid, (long long)token);
      ok = dbExecSql(db, sql, error);
      sqlite3_free(sql);
      if (!ok) {
        g_free(rel_path);
        return -1;
      }
    }
  }

  g_free(rel_path);
  return 1;
}

int musicSyncMedialibAdd(afc_client_t afc, GPtrArray *metas)
{
  int result = -1;
  int added = 0;
  GError *err = NULL;
  char *tmpdir = NULL;
  char *db_path = NULL;
  char *backup = NULL;
  sqlite3 *db = NULL;
  gint64 base_loc = -1, date_added = 0, new_pid = 0;
  double date_downloaded = 0, now = 0;
  char *sql = NULL;

  if (metas->len == 0)
    return 0;

  /* Не трогаем живую базу при грязном wal устройства (инцидент 29.10). */
  if (!medialibDeviceWalIsClean(afc, &err)) {
    logMessage(tr("Музыка: импорт отменён: %s"), err->message);
    g_clear_error(&err);
    return -1;
  }

  guint no_cover = 0;
  for (guint i = 0; i < metas->len; i++)
    if (!((MedialibMeta *)metas->pdata[i])->has_cover)
      no_cover++;
  if (no_cover)
    logMessage(tr("Музыка: у %u трека(ов) нет встроенной обложки — попробуем унаследовать обложку альбома."),
               no_cover);

  logMessage(tr("Музыка: добавляем треки в базу медиатеки…"));

  tmpdir = g_dir_make_tmp("apple-devices-XXXXXX", NULL);
  db_path = tmpdir ? medialibDownload(afc, tmpdir, &err) : NULL;
  if (!db_path) {
    logMessage(tr("Музыка: не удалось скачать базу медиатеки: %s"), err->message);
    g_clear_error(&err);
    goto fail;
  }

  backup = medialibBackup(db_path);
  if (backup)
    logMessage(tr("Музыка: резервная копия базы: %s"), backup);
  else
    logMessage(tr("Музыка: резервная копия не создана — продолжаем без неё."));

  if (sqlite3_open_v2(db_path, &db, SQLITE_OPEN_READWRITE, NULL) != SQLITE_OK) {
    logMessage(tr("Музыка: не удалось открыть базу: %s"),
               db ? sqlite3_errmsg(db) : "sqlite3_open failed");
    goto fail;
  }

  if (!dbExecSql(db, "BEGIN IMMEDIATE", &err))
    goto fail;

  base_loc = medialibEnsureBaseLocation(db, &err);
  if (base_loc < 0)
    goto rollback;

  now = (double)g_get_real_time() / G_USEC_PER_SEC;
  date_added = (gint64)now - 978307200;
  date_downloaded = now - 978307200.0;

  int art_fixed = medialibFixArtworkPaths(db);
  if (art_fixed > 0)
    logMessage(tr("Музыка: исправлено путей обложек от прошлых импортов: %d."),
               art_fixed);

  for (guint i = 0; i < metas->len; i++) {
    MedialibMeta *m = metas->pdata[i];
    int rc = medialibInsertTrack(db, m, base_loc, date_added, date_downloaded,
                                 &new_pid, &err);
    if (rc < 0)
      goto rollback;
    if (rc > 0) {
      added++;
      logMessage(tr("Музыка: трек добавлен в базу (ID %lld)."), (long long)new_pid);
    } else {
      logMessage(tr("Музыка: трек уже есть в медиатеке — обновляю ревизию («%s»)."), m->title);
    }
  }

  int art_attached = 0;
  for (guint i = 0; i < metas->len; i++) {
    MedialibMeta *m = metas->pdata[i];
    if (!dbExecSql(db, "SAVEPOINT artwork", &err))
      goto rollback;
    gint64 t_pid = 0, al_pid = 0;
    GError *lookup_err = NULL;
    gboolean pok;
    int arc = 0;
    sql = sqlite3_mprintf(
        "SELECT item_pid FROM item_extra WHERE location=%Q AND file_size=%lld"
        " LIMIT 1", m->location, (long long)m->file_size);
    pok = dbScalarSql(db, sql, &t_pid, &lookup_err);
    sqlite3_free(sql);
    if (pok) {
      sql = sqlite3_mprintf("SELECT album_pid FROM item WHERE item_pid=%lld",
                            (long long)t_pid);
      pok = dbScalarSql(db, sql, &al_pid, &lookup_err);
      sqlite3_free(sql);
    }
    if (pok)
      arc = medialibAttachArtwork(afc, db, tmpdir, t_pid, al_pid, m, &err);
    if (!pok && lookup_err) {
      logMessage(tr("Музыка: ошибка базы при записи обложки: %s"), lookup_err->message);
      g_error_free(lookup_err);
      goto rollback;
    }
    g_clear_error(&lookup_err);
    if (arc < 0) {
      dbExecSql(db, "ROLLBACK TO artwork", NULL);
      dbExecSql(db, "RELEASE artwork", NULL);
      g_clear_error(&err);
      logMessage(tr("Музыка: обложку для «%s» записать не удалось — трек добавлен без неё."),
                 m->title);
      continue;
    }
    if (!dbExecSql(db, "RELEASE artwork", NULL))
      goto rollback;
    art_attached += arc;
  }
  if (art_attached)
    logMessage(tr("Музыка: обложки привязаны к трекам (%u шт.)."),
               (guint)art_attached);

  if (!dbExecSql(db, "COMMIT", &err))
    goto fail;

  sqlite3_close(db);
  db = NULL;

  if (!medialibUpload(afc, db_path, &err)) {
    logMessage(tr("Музыка: не удалось загрузить базу на устройство: %s"), err->message);
    g_clear_error(&err);
    goto fail;
  }

  result = added;
  goto fail;

rollback:
  dbExecSql(db, "ROLLBACK", NULL);
  sqlite3_close(db);
  db = NULL;

fail:
  if (db)
    sqlite3_close(db);
  g_free(backup);
  medialibCleanupTmpDir(tmpdir, db_path);
  g_free(db_path);
  g_free(tmpdir);
  return result;
}

