#include "application.h"
#include "deviceScanner.h"
#include "medialib.h"
#include "afcUtils.h"
#include "uiWidgets.h"

#include <libimobiledevice/libimobiledevice.h>
#include <libimobiledevice/lockdown.h>
#include <libimobiledevice/afc.h>
#include <tag_c.h>
#include <pango/pangocairo.h>
#include <glib/gstdio.h>
#include <signal.h>
#include <execinfo.h>
#include <unistd.h>
#include <glib.h>

/* === Логирование === */

static AppleApplication *globalApp = NULL;

static void
appendLogToView(const char *msg)
{
  if (!globalApp || !globalApp->log_view || !globalApp->split) {
    return;
  }

  GtkTextBuffer *buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(globalApp->log_view));
  GtkTextIter end;
  gtk_text_buffer_get_end_iter(buffer, &end);

  GDateTime *now = g_date_time_new_now_local();
  char *time_str = g_date_time_format(now, "%H:%M:%S");
  gtk_text_buffer_insert(buffer, &end, time_str, -1);
  g_free(time_str);
  g_date_time_unref(now);

  gtk_text_buffer_insert(buffer, &end, " ", -1);
  gtk_text_buffer_insert(buffer, &end, msg, -1);
  gtk_text_buffer_insert(buffer, &end, "\n", -1);

  GtkTextMark *mark = gtk_text_buffer_create_mark(buffer, NULL, &end, FALSE);
  gtk_text_view_scroll_mark_onscreen(GTK_TEXT_VIEW(globalApp->log_view), mark);
  gtk_text_buffer_delete_mark(buffer, mark);
}

static gboolean
logMessageIdle(gpointer data)
{
  appendLogToView(data);
  return G_SOURCE_REMOVE;
}

void
logMessage(const char *format, ...)
{
  va_list args;
  va_start(args, format);
  char *msg = g_strdup_vprintf(format, args);
  va_end(args);

  g_print("%s\n", msg);

  if (!globalApp || !globalApp->log_view || !globalApp->split) {
    g_free(msg);
    return;
  }

  GMainContext *ctx = g_main_context_default();
  if (g_main_context_is_owner(ctx)) {
    appendLogToView(msg);
    g_free(msg);
  } else {
    g_main_context_invoke_full(NULL, G_PRIORITY_DEFAULT_IDLE,
                               logMessageIdle, msg, g_free);
  }
}

/* === Язык интерфейса === */

static char *appLanguage = NULL;

typedef struct {
  const char *ru;
  const char *en;
} TrEntry;

static const TrEntry trTable[] = {
  {"Заглушка: %s ещё не реализовано", "Stub: %s is not implemented yet"},
  {"\n!!! КРИТИЧЕСКАЯ ОШИБКА (Signal ", "\n!!! CRITICAL ERROR (Signal "},
  {") — программа упала. Backtrace ниже (stderr). !!!\n",
   ") — the program crashed. Backtrace below (stderr). !!!\n"},
  {"Занято · %s%s", "Used · %s%s"},
  {" (демо)", " (demo)"},
  {"Свободно · %s", "Free · %s"},
  {"Начинаем сканирование USB...", "Starting USB scan..."},
  {"Ошибка: idevice_get_device_list вернула ошибку.", "Error: idevice_get_device_list failed."},
  {"Найдено устройств в системе: %d", "Devices found in the system: %d"},
  {"Обработка UDID: %s", "Processing UDID: %s"},
  {"  -> Ошибка: idevice_new не смог создать устройство.", "  -> Error: idevice_new failed to create a device."},
  {"  -> Handshake успешен.", "  -> Handshake succeeded."},
  {"  -> Накопитель (AFC, media-раздел): занято %" G_GUINT64_FORMAT " из %" G_GUINT64_FORMAT " байт",
   "  -> Storage (AFC, media partition): %" G_GUINT64_FORMAT " of %" G_GUINT64_FORMAT " bytes used"},
  {"  -> AFC: не удалось получить информацию о разделе.", "  -> AFC: failed to get partition info."},
  {"  -> AFC: сервис не открылся (нужен Trust?).", "  -> AFC: service failed to start (Trust required?)."},
  {"  -> Батарея: %d%%", "  -> Battery: %d%%"},
  {"  -> Имя: %s, Версия: %s", "  -> Name: %s, Version: %s"},
  {"  -> Тип: %s", "  -> Type: %s"},
  {"  -> Накопитель: занято %" G_GUINT64_FORMAT " из %" G_GUINT64_FORMAT " байт",
   "  -> Storage: %" G_GUINT64_FORMAT " of %" G_GUINT64_FORMAT " bytes used"},
  {"  -> Накопитель: данные недоступны — будет показан демо-режим.",
   "  -> Storage: data unavailable — demo mode will be shown."},
  {"  -> Ошибка: не удалось установить соединение (Trust?).",
   "  -> Error: failed to establish a connection (Trust?)."},
  {"Сканирование завершено.", "Scan complete."},
  {"Музыка: не удалось подключиться к устройству (AFC).", "Music: failed to connect to the device (AFC)."},
  {"Музыка: подключение AFC установлено, сканируем " MUSIC_REMOTE_ROOT "...",
   "Music: AFC connection established, scanning " MUSIC_REMOTE_ROOT "..."},
  {"Музыка: найдено аудиофайлов: %u", "Music: audio files found: %u"},
  {"Читаем теги: %u из %u…", "Reading tags: %u of %u…"},
  {"Музыка: не удалось скачать %s", "Music: failed to download %s"},
  {"Музыка: пример тегов: «%s» — %s (альбом: %s, обложка: %s)",
   "Music: tag sample: \"%s\" — %s (album: %s, cover: %s)"},
  {"(нет)", "(none)"},
  {"есть", "yes"},
  {"нет", "no"},
  {"Музыка: сканирование завершено.", "Music: scan complete."},
  {"Музыка: сканирование заняло %.1f с.", "Music: scan took %.1f s."},
  {"Музыка: скачано %s из %s (умное частичное чтение тегов).",
   "Music: downloaded %s out of %s (smart partial tag reading)."},
  {"Музыка: сканирование не удалось.", "Music: scan failed."},
  {"Музыка: скан устарел (устройство сменилось) — отброшен.",
   "Music: scan is stale (device changed) — discarded."},
  {"Медиатека пуста", "Media library is empty"},
  {"В " MUSIC_REMOTE_ROOT " нет аудиофайлов. Загрузите музыку кнопкой «Импорт».",
   "No audio files in " MUSIC_REMOTE_ROOT ". Upload music with the Import button."},
  {"Музыка: в списке %u треков.", "Music: %u tracks in the list."},
  {"Музыка: операция уже идёт — сканирование отложено (нажмите «Обновить»).",
   "Music: an operation is already running — scan postponed (press Refresh)."},
  {"Загружаем медиатеку…", "Loading the media library…"},
  {"Читаем теги и обложки с устройства — это может занять время.",
   "Reading tags and cover art from the device — this may take a while."},
  {"Музыка: импорт не удался — нет подключения (AFC).", "Music: import failed — no connection (AFC)."},
  {"Музыка: импорт «%s» -> %s", "Music: importing \"%s\" -> %s"},
  {"Музыка: не удалось загрузить «%s».", "Music: failed to upload \"%s\"."},
  {"Импортировано файлов: %d", "Files imported: %d"},
  {"Музыка: файлы загружены, но база «Музыки» не обновлена — треки появятся только после перезагрузки iPhone.",
   "Music: files uploaded, but the Music database was not updated — tracks will appear only after the iPhone is restarted."},
  {"Выберите аудиофайлы для импорта", "Select audio files to import"},
  {"Музыка: экспорт не удался — нет подключения (AFC).", "Music: export failed — no connection (AFC)."},
  {"Музыка: экспорт %s -> %s", "Music: exporting %s -> %s"},
  {"Экспортировано: %s", "Exported: %s"},
  {"Музыка: экспорт не удался.", "Music: export failed."},
  {"Не удалось экспортировать файл", "Failed to export the file"},
  {"Сохранить файл", "Save File"},
  {"Музыка: удаление не удалось — нет подключения (AFC).", "Music: delete failed — no connection (AFC)."},
  {"Музыка: удаление %s", "Music: deleting %s"},
  {"Музыка: удаление не удалось.", "Music: delete failed."},
  {"Не удалось удалить файл", "Failed to delete the file"},
  {"Музыка: файл удалён с накопителя.", "Music: file removed from the drive."},
  {"Файл удалён с накопителя", "File removed from the drive"},
  {"Удалить «%s» с накопителя устройства?\n\nФайл исчезнет с диска. Дополнительно можно вычистить запись трека из базы «Музыки» iPhone — тогда трек исчезнет и из приложения «Музыка» (после его перезапуска). Перед правкой базы создаётся резервная копия на компьютере.\n\nВажно: закройте приложение «Музыка» на iPhone перед удалением — если оно открыто, правка базы может привести к его сбою.",
   "Delete \"%s\" from the device drive?\n\nThe file will disappear from disk. Optionally, the track's entry can also be removed from the iPhone's Music database, so the track disappears from the Music app too (after the app is restarted). A backup of the database is saved to the computer before editing.\n\nImportant: close the Music app on the iPhone before deleting — if it is open, editing the database may cause it to crash."},
  {"Только файл", "File Only"},
  {"Файл и запись в «Музыке»", "File and Music Entry"},
  {"Музыка: чистим запись в базе «Музыки»…", "Music: cleaning the entry from the Music database…"},
  {"Музыка: не удалось скачать базу медиатеки: %s", "Music: failed to download the media library database: %s"},
  {"Музыка: резервная копия базы: %s", "Music: database backup: %s"},
  {"Музыка: резервная копия не создана — продолжаем без неё.", "Music: backup not created — continuing without it."},
  {"Музыка: не удалось открыть базу: %s", "Music: failed to open the database: %s"},
  {"Музыка: ошибка поиска записи в базе.", "Music: error searching for the entry in the database."},
  {"Музыка: записи в медиатеке нет (файл не из синка) — база не тронута.",
   "Music: no entry in the media library (the file is not from a sync) — database untouched."},
  {"Музыка: запись вычищена из базы (ID %lld).", "Music: entry removed from the database (ID %lld)."},
  {"Музыка: не удалось вычистить запись: %s", "Music: failed to remove the entry: %s"},
  {"Музыка: не удалось загрузить базу на устройство: %s", "Music: failed to upload the database to the device: %s"},
  {"Музыка: перезапустите приложение «Музыка» на iPhone, чтобы изменения появились.",
   "Music: restart the Music app on the iPhone for the changes to appear."},
  {"Музыка: добавляем треки в базу медиатеки…", "Music: adding tracks to the media library database…"},
  {"Музыка: трек добавлен в базу (ID %lld).", "Music: track added to the database (ID %lld)."},
  {"Музыка: трек уже есть в медиатеке — обновляю ревизию («%s»).", "Music: track is already in the library — refreshing its revision (\"%s\")."},
  {"Музыка: треки добавлены в базу медиатеки. Перезапустите приложение «Музыка» на iPhone, чтобы они появились.",
   "Music: tracks have been added to the media library database. Restart the Music app on the iPhone to see them."},
  {"Музыка: все треки уже есть в медиатеке.", "Music: all tracks are already in the media library."},
  {"Музыка: не удалось прочитать теги «%s»: %s", "Music: failed to read tags from \"%s\": %s"},
  {"Музыка: у %u трека(ов) нет встроенной обложки — попробуем унаследовать обложку альбома.",
   "Music: %u track(s) have no embedded cover — the album cover will be inherited."},
  {"Музыка: обложки привязаны к трекам (%u шт.).",
   "Music: covers attached to tracks (%u)."},
  {"Музыка: исправлено путей обложек от прошлых импортов: %d.",
   "Music: fixed cover paths from previous imports: %d."},
  {"Музыка: обложку для «%s» записать не удалось — трек добавлен без неё.",
   "Music: failed to attach a cover for \"%s\" — the track was added without it."},
  {"Музыка: файл удалён, но база «Музыки» не вычищена (см. лог).",
   "Music: file deleted, but the Music database was not cleaned (see the log)."},
  {"Файл удалён, база не вычищена", "File deleted, database not cleaned"},
  {"Поиск по трекам", "Search tracks"},
  {"Как на устройстве", "As on Device"},
  {"По названию", "By Title"},
  {"По исполнителю", "By Artist"},
  {"По альбому", "By Album"},
  {"По длительности", "By Duration"},
  {"Ничего не найдено", "No Results"},
  {"Попробуйте изменить поисковый запрос.", "Try changing the search query."},
  {"Удалить файл?", "Delete File?"},
  {"Отмена", "Cancel"},
  {"Удалить", "Delete"},
  {"Устройство не выбрано", "No Device Selected"},
  {"%s · %s (%s свободно)%s", "%s · %s (%s free)%s"},
  {"резервное копирование", "backup"},
  {"восстановление из копии", "restore from backup"},
  {"проверка обновлений", "update check"},
  {"восстановление прошивки", "firmware restore"},
  {"синхронизация", "sync"},
  {"настройки приложения", "app settings"},
  {"Фоновый поток завершен. Обновляем UI...", "Background thread finished. Updating the UI..."},
  {"Окно уже закрыто — обновление списка пропущено.", "Window already closed — skipping the list update."},
  {"Устройств найдено: %u", "Devices found: %u"},
  {"Устройства не найдены", "No Devices Found"},
  {"Устройство отключено", "Device Disconnected"},
  {"Подключите iPhone, iPad или другое устройство Apple по USB.",
   "Connect an iPhone, iPad or other Apple device via USB."},
  {"Устройство отключено: %s", "Device disconnected: %s"},
  {"Устройство подключено: %s — обновляю список…", "Device connected: %s — refreshing the list…"},
  {"Не удалось подписаться на события USB (код %d) — обновляйте список кнопкой.",
   "Failed to subscribe to USB events (code %d) — use the refresh button instead."},
  {"Подключите iPhone, iPad или другое устройство Apple по USB и нажмите «Обновить».",
   "Connect an iPhone, iPad or other Apple device via USB and press Refresh."},
  {"Ошибка при выполнении фоновой задачи.", "Error while running the background task."},
  {"Не удалось получить список устройств", "Failed to get the device list"},
  {"Проверьте подключение к USB (запущен ли usbmuxd?) и нажмите «Обновить».",
   "Check the USB connection (is usbmuxd running?) and press Refresh."},
  {"Сканирование уже идет — запуск проигнорирован.", "A scan is already in progress — start ignored."},
  {"Ищем устройства…", "Looking for Devices…"},
  {"Подключите устройство Apple по USB-кабелю.", "Connect an Apple device with a USB cable."},
  {"Нажата кнопка обновления.", "Refresh button pressed."},
  {"Нажата горячая клавиша Ctrl+R.", "Ctrl+R shortcut pressed."},
  {"Обновить", "Refresh"},
  {"Обзор", "Overview"},
  {"Музыка", "Music"},
  {"Фильмы", "Movies"},
  {"ТВ-шоу", "TV Shows"},
  {"Фото", "Photos"},
  {"Файлы", "Files"},
  {"Разделы", "Sections"},
  {"Обновить список устройств (Ctrl+R)", "Refresh the device list (Ctrl+R)"},
  {"Настройки приложения", "Application Settings"},
  {"Устройства", "Devices"},
  {"Выберите устройство в списке слева, чтобы увидеть информацию.",
   "Select a device in the list on the left to see its info."},
  {"Устройство", "Device"},
  {"Модель", "Model"},
  {"Версия ОС", "OS Version"},
  {"Серийный номер", "Serial Number"},
  {"Идентификатор (UDID)", "Identifier (UDID)"},
  {"Батарея", "Battery"},
  {"Об устройстве", "About Device"},
  {"Программное обеспечение", "Software"},
  {"Резервные копии", "Backups"},
  {"Проверить обновления", "Check for Updates"},
  {"Восстановить iPhone…", "Restore iPhone…"},
  {"Создать резервную копию", "Back Up Now"},
  {"Восстановить из копии", "Restore from Backup"},
  {"Проверка обновлений и восстановление прошивки — в разработке.",
   "Update check and firmware restore are under development."},
  {"Кнопки-заглушки: функции в разработке.", "Stub buttons: features under development."},
  {"Медиатека не загружена", "Media Library Not Loaded"},
  {"Подключите устройство.", "Connect a device."},
  {"Импорт", "Import"},
  {"Экспорт", "Export"},
  {"Синхронизировать", "Sync"},
  {"Логи отладки", "Debug Logs"},
  {"Программа запущена. Запускаем автосканирование USB...",
   "Application started. Starting automatic USB scan..."},
  {"Информация", "Info"},
  {"Общие", "General"},
  {"Язык", "Language"},
  {"Язык применится после перезапуска приложения.",
   "The language will be applied after the application restarts."},
  {"Открыта страница настроек.", "Opened the settings page."},
  {"Скрывать личные данные", "Hide personal data"},
  {"Серийный номер и UDID будут замаскированы.",
   "Serial number and UDID will be masked."},
  {"Личные данные скрыты.", "Personal data is now hidden."},
  {"Личные данные снова видны.", "Personal data is visible again."},
  {"Музыка", "Music"},
  {"Фото", "Photos"},
  {"Прочее", "Other"},
  {"Занято", "Used"},
  {"Свободно", "Free"},
  {"Данные о накопителе недоступны", "Storage information is not available"},
  {"Подсчёт категорий…", "Counting categories…"},
  {"О программе", "About"},
  {"Главное меню", "Main menu"},
};

const char *
tr(const char *ru)
{
  if (!appLanguage || appLanguage[0] != 'e')
    return ru;
  for (gsize i = 0; i < G_N_ELEMENTS(trTable); i++)
    if (g_strcmp0(trTable[i].ru, ru) == 0)
      return trTable[i].en;
  return ru;
}

static char *
appSettingsPath(void)
{
  return g_build_filename(g_get_user_config_dir(), "apple-devices", "settings.ini", NULL);
}

static void
appSettingsLoad(AppleApplication *self)
{
  char *path = appSettingsPath();
  GKeyFile *kf = g_key_file_new();
  if (g_key_file_load_from_file(kf, path, G_KEY_FILE_NONE, NULL)) {
    char *lang = g_key_file_get_string(kf, "general", "language", NULL);
    if (lang && (g_strcmp0(lang, "ru") == 0 || g_strcmp0(lang, "en") == 0)) {
      g_free(appLanguage);
      appLanguage = lang;
    } else {
      g_free(lang);
    }
    // Приватный режим: по умолчанию выключен (личные данные видны)
    self->hide_personal_data =
        g_key_file_get_boolean(kf, "general", "hide-personal-data", NULL);
  }
  g_key_file_free(kf);
  g_free(path);
}

// Записать строковый ключ в settings.ini, сохранив остальные
// (load-modify-save: файл читается целиком, правится один ключ, пишется назад)
static void
appSettingsSetKeyString(const char *key, const char *value)
{
  char *dir = g_build_filename(g_get_user_config_dir(), "apple-devices", NULL);
  g_mkdir_with_parents(dir, 0755);
  g_free(dir);

  char *path = appSettingsPath();
  GKeyFile *kf = g_key_file_new();
  g_key_file_load_from_file(kf, path, G_KEY_FILE_NONE, NULL);
  g_key_file_set_string(kf, "general", key, value);
  gsize len = 0;
  char *data = g_key_file_to_data(kf, &len, NULL);
  g_file_set_contents(path, data, (gssize)len, NULL);
  g_free(data);
  g_key_file_free(kf);
  g_free(path);
}

// То же для булева ключа
static void
appSettingsSetKeyBoolean(const char *key, gboolean value)
{
  char *dir = g_build_filename(g_get_user_config_dir(), "apple-devices", NULL);
  g_mkdir_with_parents(dir, 0755);
  g_free(dir);

  char *path = appSettingsPath();
  GKeyFile *kf = g_key_file_new();
  g_key_file_load_from_file(kf, path, G_KEY_FILE_NONE, NULL);
  g_key_file_set_boolean(kf, "general", key, value);
  gsize len = 0;
  char *data = g_key_file_to_data(kf, &len, NULL);
  g_file_set_contents(path, data, (gssize)len, NULL);
  g_free(data);
  g_key_file_free(kf);
  g_free(path);
}

void
appSettingsSaveLanguage(const char *lang)
{
  appSettingsSetKeyString("language", lang);
}

void
appSettingsSaveHidePersonalData(gboolean hide)
{
  appSettingsSetKeyBoolean("hide-personal-data", hide);
}

// Приватный режим включён? (до создания окна — данные видны)
gboolean
appHidePersonalData(void)
{
  return globalApp ? globalApp->hide_personal_data : FALSE;
}

void
showStubToast(AppleApplication *self, const char *what)
{
  char *msg = g_strdup_printf(tr("Заглушка: %s ещё не реализовано"), what);
  logMessage("%s", msg);
  if (self->toast_overlay)
    adw_toast_overlay_add_toast(ADW_TOAST_OVERLAY(self->toast_overlay), adw_toast_new(msg));
  g_free(msg);
}

static gboolean
musicProgressIdle(gpointer data)
{
  if (globalApp && globalApp->music_status)
    adw_status_page_set_description(ADW_STATUS_PAGE(globalApp->music_status), data);
  return G_SOURCE_REMOVE;
}

static void
musicProgress(const char *format, ...)
{
  va_list args;
  va_start(args, format);
  char *msg = g_strdup_vprintf(format, args);
  va_end(args);
  g_main_context_invoke_full(NULL, G_PRIORITY_DEFAULT_IDLE, musicProgressIdle, msg, g_free);
}

static void
signalHandler(int sig)
{
  void *array[32];
  size_t size = backtrace(array, 32);

  const char *prefix = tr("\n!!! КРИТИЧЕСКАЯ ОШИБКА (Signal ");
  const char *suffix = tr(") — программа упала. Backtrace ниже (stderr). !!!\n");

  char banner[192];
  size_t pos = 0;

  for (size_t i = 0; prefix[i] != '\0'; i++)
    banner[pos++] = prefix[i];

  char digits[4];
  int n = 0;
  int v = sig;
  do { digits[n++] = (char)('0' + v % 10); v /= 10; } while (v > 0 && n < 4);
  while (n > 0)
    banner[pos++] = digits[--n];

  for (size_t i = 0; suffix[i] != '\0'; i++)
    banner[pos++] = suffix[i];

  ssize_t rc = write(STDERR_FILENO, banner, pos);
  (void)rc; // результат сознательно не проверяем: пишем в stderr перед _exit
  backtrace_symbols_fd(array, size, STDERR_FILENO);
  _exit(1);
}

static void
roundedRectPath(cairo_t *cr, double x, double y, double w, double h, double r)
{
  cairo_new_sub_path(cr);
  cairo_arc(cr, x + w - r, y + r, r, -G_PI / 2, 0);
  cairo_arc(cr, x + w - r, y + h - r, r, 0, G_PI / 2);
  cairo_arc(cr, x + r, y + h - r, r, G_PI / 2, G_PI);
  cairo_arc(cr, x + r, y + r, r, G_PI, 3 * G_PI / 2);
  cairo_close_path(cr);
}

static void
drawSegmentLabel(cairo_t *cr, PangoContext *pctx, double cx, double cy,
                 const char *text, const GdkRGBA *color, double maxW)
{
  PangoLayout *layout = pango_layout_new(pctx);
  PangoAttrList *attrs = pango_attr_list_new();
  pango_attr_list_insert(attrs, pango_attr_size_new(11 * PANGO_SCALE));
  pango_layout_set_attributes(layout, attrs);
  pango_attr_list_unref(attrs);
  pango_layout_set_text(layout, text, -1);

  int tw = 0, th = 0;
  pango_layout_get_pixel_size(layout, &tw, &th);
  if (tw <= maxW) {
    cairo_set_source_rgba(cr, color->red, color->green, color->blue, color->alpha);
    cairo_move_to(cr, cx - tw / 2.0, cy - th / 2.0);
    pango_cairo_show_layout(cr, layout);
  }
  g_object_unref(layout);
}

/* --- Диаграмма накопителя: категории ---

   iOS не отдаёт размеры категорий (как в «Настройки → Хранилище») ни через
   lockdown, ни через AFC — там видны только FSTotalBytes/FSFreeBytes.
   Но сами каталоги медиа-раздела доступны, поэтому категории измеряем
   рекурсивным обходом AFC (только чтение, в фоновом потоке). Что не
   удалось измерить (приложения, система и т.д.) — честная категория
   «Прочее»: занятое место минус измеренные категории. */

// Корни AFC для каждой категории (NULL-терминированные списки каталогов).
// Новая категория = список корней + строка в таблице + строка в метаданных.
static const char *const MUSIC_ROOTS[] = { "/iTunes_Control/Music", NULL };
static const char *const PHOTO_ROOTS[] = { "/DCIM", "/PhotoData", "/MediaAnalysis", NULL };
static const char *const *const STORAGE_CATS[] = { MUSIC_ROOTS, PHOTO_ROOTS };
#define STORAGE_CAT_COUNT ((int)G_N_ELEMENTS(STORAGE_CATS))

// Подпись (ключ tr()) и цвет каждой категории — порядок совпадает с STORAGE_CATS
static const struct {
  const char *label;
  GdkRGBA color;
} STORAGE_CAT_META[] = {
  { "Музыка", { 0.965, 0.380, 0.318, 1.0 } }, // #f66151
  { "Фото",   { 0.863, 0.541, 0.867, 1.0 } }, // #dc8add
};
G_STATIC_ASSERT(G_N_ELEMENTS(STORAGE_CAT_META) == STORAGE_CAT_COUNT);

// Байты сегмента категории i, зажатые занятым местом; *rest — остаток
static guint64
storageCatClamped(const AppleApplication *self, int i, guint64 *rest)
{
  guint64 b = self->storage_cats[i].bytes < *rest ? self->storage_cats[i].bytes : *rest;
  *rest -= b;
  return b;
}

// Какой сегмент под курсором (доля 0..1): 0..n_cats-1 — категории,
// n_cats — «Прочее», n_cats+1 — «Свободно»; -1 — данных нет
static int
storageSegAt(const AppleApplication *self, double frac)
{
  if (self->storage_total == 0)
    return -1;
  guint64 pos = (guint64)(CLAMP(frac, 0.0, 1.0) * (double)self->storage_total);
  guint64 left = self->storage_used;
  for (int i = 0; i < self->storage_n_cats; i++) {
    guint64 b = storageCatClamped(self, i, &left);
    if (pos < b)
      return i;
    pos -= b;
  }
  if (pos < left)
    return self->storage_n_cats; // «Прочее»
  return self->storage_n_cats + 1; // «Свободно»
}

// Текст подсказки для сегмента: подпись и точный размер (с числом байт)
static char *
storageSegTip(const AppleApplication *self, int seg)
{
  const char *label = NULL;
  guint64 bytes = 0;

  if (seg >= 0 && seg < self->storage_n_cats) {
    label = tr(STORAGE_CAT_META[seg].label);
    bytes = self->storage_cats[seg].bytes;
  } else if (seg == self->storage_n_cats) {
    guint64 cats = 0;
    for (int i = 0; i < self->storage_n_cats; i++)
      cats += self->storage_cats[i].bytes;
    label = tr("Прочее");
    bytes = self->storage_used > cats ? self->storage_used - cats : 0;
  } else if (seg == self->storage_n_cats + 1) {
    label = tr("Свободно");
    bytes = self->storage_total - self->storage_used;
  } else {
    return NULL;
  }

  return g_strdup_printf("%s — %s", label,
                         g_format_size_full(bytes, G_FORMAT_SIZE_LONG_FORMAT));
}

// Движение мыши над диаграммой: подсказка с точным размером сегмента
static void
onStorageMotion(GtkEventControllerMotion *ctrl, double x, double y,
                gpointer user_data)
{
  (void)y;

  AppleApplication *self = APPLE_APPLICATION(user_data);
  GtkWidget *area = gtk_event_controller_get_widget(GTK_EVENT_CONTROLLER(ctrl));
  int w = gtk_widget_get_width(area);
  if (w <= 0)
    return;

  int seg = storageSegAt(self, x / (double)w);
  char *tip = storageSegTip(self, seg);
  gtk_widget_set_tooltip_text(area, tip); // NULL снимает подсказку
  g_free(tip);
}

static void
storageBarDraw(GtkDrawingArea *area, cairo_t *cr, int width, int height, gpointer userData)
{
  AppleApplication *self = APPLE_APPLICATION(userData);

  double r = 6.0;
  if (r > height / 2.0)
    r = height / 2.0;

  roundedRectPath(cr, 0.5, 0.5, width - 1.0, height - 1.0, r);
  cairo_set_source_rgba(cr, 0.5, 0.5, 0.5, 0.25);
  cairo_fill(cr);

  PangoContext *pctx = gtk_widget_get_pango_context(GTK_WIDGET(area));
  GdkRGBA fg;
  gtk_widget_get_color(GTK_WIDGET(area), &fg);
  GdkRGBA white = {1.0, 1.0, 1.0, 1.0};

  if (self->storage_total == 0) {
    // Данных нет — честная подпись вместо демо-значений
    drawSegmentLabel(cr, pctx, width / 2.0, height / 2.0,
                     tr("Данные о накопителе недоступны"), &fg, width - 12);
    return;
  }

  // Категории ещё считаются — нейтральная плашка вместо «Занято/Свободно»
  if (self->storage_measuring && self->storage_n_cats == 0) {
    drawSegmentLabel(cr, pctx, width / 2.0, height / 2.0,
                     tr("Подсчёт категорий…"), &fg, width - 12);
    return;
  }

  double usedW = width * CLAMP(self->storage_used_frac, 0.0, 1.0);

  // Занятая часть: измеренные категории, затем «Прочее»
  cairo_save(cr);
  roundedRectPath(cr, 0.5, 0.5, width - 1.0, height - 1.0, r);
  cairo_clip(cr);
  double x = 0;
  guint64 rest = self->storage_used;
  for (int i = 0; i < self->storage_n_cats; i++) {
    guint64 b = storageCatClamped(self, i, &rest);
    double w = width * (double)b / (double)self->storage_total;
    if (w > 0) {
      cairo_rectangle(cr, x, 0, w, height);
      const GdkRGBA *c = &STORAGE_CAT_META[i].color;
      cairo_set_source_rgba(cr, c->red, c->green, c->blue, c->alpha);
      cairo_fill(cr);
    }
    x += w;
  }
  if (rest > 0) {
    cairo_rectangle(cr, x, 0, usedW - x, height);
    cairo_set_source_rgba(cr, 0.208, 0.518, 0.894, 1.0); // #3584e4, Adwaita blue
    cairo_fill(cr);
  }
  cairo_restore(cr);

  // Подписи сегментов: не влезает текст — не рисуем (размер виден в подсказке)
  double cx = 0;
  rest = self->storage_used;
  for (int i = 0; i < self->storage_n_cats; i++) {
    guint64 b = storageCatClamped(self, i, &rest);
    double w = width * (double)b / (double)self->storage_total;
    char *txt = g_strdup_printf("%s · %s", tr(STORAGE_CAT_META[i].label),
                                g_format_size(b));
    drawSegmentLabel(cr, pctx, cx + w / 2.0, height / 2.0, txt, &white, w - 12);
    g_free(txt);
    cx += w;
  }
  if (self->storage_n_cats > 0 && rest > 0) {
    double w = usedW - cx;
    char *txt = g_strdup_printf("%s · %s", tr("Прочее"), g_format_size(rest));
    drawSegmentLabel(cr, pctx, cx + w / 2.0, height / 2.0, txt, &white, w - 12);
    g_free(txt);
  }
  if (self->storage_n_cats == 0) {
    // Категории не измерены (подсчёт не удался) — обычные «Занято/Свободно»
    char *txt = g_strdup_printf("%s · %s", tr("Занято"),
                                g_format_size(self->storage_used));
    drawSegmentLabel(cr, pctx, usedW / 2.0, height / 2.0, txt, &white, usedW - 12);
    g_free(txt);
  }
  {
    double w = width - usedW;
    char *txt = g_strdup_printf("%s · %s", tr("Свободно"),
                                g_format_size(self->storage_total - self->storage_used));
    drawSegmentLabel(cr, pctx, usedW + w / 2.0, height / 2.0, txt, &fg, w - 12);
    g_free(txt);
  }
}

typedef struct {
  char *udid;
  GListStore *store;
  gint64 started_usec;
  guint64 total_bytes;
  guint64 network_bytes;
} MusicScanCtx;

static void
musicScanCtxFree(gpointer data)
{
  MusicScanCtx *ctx = data;
  g_free(ctx->udid);
  g_object_unref(ctx->store);
  g_free(ctx);
}

static void
musicScanThread(GTask *task, gpointer source_object,
                gpointer task_data, GCancellable *cancellable)
{
  (void)cancellable;

  MusicScanCtx *ctx = task_data;
  AppleApplication *app = APPLE_APPLICATION(source_object);
  AfcSession s;

  if (afcSessionOpen(&s, ctx->udid) != 0) {
    logMessage(tr("Музыка: не удалось подключиться к устройству (AFC)."));
    g_task_return_boolean(task, FALSE);
    return;
  }
  logMessage(tr("Музыка: подключение AFC установлено, сканируем " MUSIC_REMOTE_ROOT "..."));

  GPtrArray *files = g_ptr_array_new_with_free_func(g_free);
  afcCollectAudio(s.afc, MUSIC_REMOTE_ROOT, files);
  logMessage(tr("Музыка: найдено аудиофайлов: %u"), files->len);

  for (guint i = 0; i < files->len; i++) {
    const char *path = files->pdata[i];

    guint64 size = 0;
    char **fi = NULL;
    if (afc_get_file_info(s.afc, path, &fi) == AFC_E_SUCCESS && fi) {
      for (char **kv = fi; kv[0] && kv[1]; kv += 2) {
        if (g_strcmp0(kv[0], "st_size") == 0)
          size = g_ascii_strtoull(kv[1], NULL, 10);
      }
      afc_dictionary_free(fi);
    }

    MusicTrack *t = g_object_new(MUSIC_TRACK_TYPE, NULL);
    t->path = g_strdup(path);
    t->size = size;

    if (files->len > 0 && (i % 10 == 0 || i == files->len - 1))
      musicProgress(tr("Читаем теги: %u из %u…"), i + 1, files->len);

    char *key = g_strdup_printf("%s|%" G_GUINT64_FORMAT, path, size);
    MusicTrack *cached = app->tag_cache ? g_hash_table_lookup(app->tag_cache, key) : NULL;
    if (cached) {
      medialibTrackCopyTags(t, cached);
    } else {
      char *tmp_path = NULL;
      int fd = g_file_open_tmp("adevice-music-XXXXXX", &tmp_path, NULL);
      if (fd >= 0) {
        close(fd);
        ctx->total_bytes += size;
        guint64 net = 0;
        int pd = musicPartialDownload(s.afc, path, size, tmp_path, &net);
        ctx->network_bytes += net;
        if (pd == 1) {
          pd = afcDownloadFile(s.afc, path, tmp_path);
          ctx->network_bytes += size;
        }
        if (pd == 0) {
          readTrackTags(t, tmp_path);
          if (app->tag_cache && (t->title || t->artist || t->cover))
            g_hash_table_insert(app->tag_cache, g_strdup(key), g_object_ref(t));
        } else {
          logMessage(tr("Музыка: не удалось скачать %s"), path);
        }
        g_unlink(tmp_path);
        g_free(tmp_path);
      }
    }
    g_free(key);

    if (i == 0)
      logMessage(tr("Музыка: пример тегов: «%s» — %s (альбом: %s, обложка: %s)"),
                  t->title ? t->title : tr("(нет)"),
                  t->artist ? t->artist : tr("(нет)"),
                  t->album ? t->album : tr("(нет)"),
                  t->cover ? tr("есть") : tr("нет"));

    g_list_store_append(ctx->store, t);
    g_object_unref(t);
  }

  g_ptr_array_unref(files);
  afcSessionClose(&s);
  logMessage(tr("Музыка: сканирование завершено."));
  g_task_return_boolean(task, TRUE);
}

// Колбэк завершения сканирования медиатеки (главный поток)
static void
onMusicScanFinished(GObject *source_object, GAsyncResult *res, gpointer user_data)
{
  (void)user_data;

  AppleApplication *self = APPLE_APPLICATION(source_object);
  GTask *task = G_TASK(res);
  MusicScanCtx *ctx = g_task_get_task_data(task);

  self->music_busy = FALSE;
  updateMusicButtons(self);

  if (!self->music_list || !self->music_stack)
    return; // окно уже закрыто

  if (!g_task_propagate_boolean(task, NULL)) {
    logMessage(tr("Музыка: сканирование не удалось."));
    return;
  }

  // Пока шло сканирование, устройство могли сменить — результаты устарели
  if (!self->selected || g_strcmp0(self->selected->udid, ctx->udid) != 0) {
    logMessage(tr("Музыка: скан устарел (устройство сменилось) — отброшен."));
    return;
  }

  guint n = g_list_model_get_n_items(G_LIST_MODEL(ctx->store));
  g_list_store_remove_all(self->music_store);
  for (guint i = 0; i < n; i++) {
    MusicTrack *t = MUSIC_TRACK(g_list_model_get_item(G_LIST_MODEL(ctx->store), i));
    t->scan_order = i; // порядок скана — для сортировки «как на устройстве»
    g_list_store_append(self->music_store, t);
    g_object_unref(t); // владение забрал music_store
  }
  self->selected_track = NULL;
  musicApplyFilter(self); // пересчитать поиск/сортировку под новый список

  if (n > 0) {
    gtk_stack_set_visible_child_name(GTK_STACK(self->music_stack), "list");
  } else {
    adw_status_page_set_title(ADW_STATUS_PAGE(self->music_status), tr("Медиатека пуста"));
    adw_status_page_set_description(ADW_STATUS_PAGE(self->music_status),
                                    tr("В " MUSIC_REMOTE_ROOT " нет аудиофайлов. Загрузите музыку кнопкой «Импорт»."));
    gtk_stack_set_visible_child_name(GTK_STACK(self->music_stack), "empty");
  }
  logMessage(tr("Музыка: в списке %u треков."), n);
  logMessage(tr("Музыка: сканирование заняло %.1f с."),
             (g_get_monotonic_time() - ctx->started_usec) / 1000000.0);
  if (ctx->total_bytes > 0)
    logMessage(tr("Музыка: скачано %s из %s (умное частичное чтение тегов)."),
               g_format_size(ctx->network_bytes),
               g_format_size(ctx->total_bytes));
}

// Запуск сканирования медиатеки выбранного устройства
void
startMusicScan(AppleApplication *self, const char *udid)
{
  if (!udid || !self->music_stack)
    return;

  if (self->music_busy) {
    logMessage(tr("Музыка: операция уже идёт — сканирование отложено (нажмите «Обновить»)."));
    return;
  }
  self->music_busy = TRUE;
  updateMusicButtons(self);
  self->selected_track = NULL;

  // Сбрасываем поиск — новый скан показывает всю медиатеку
  if (self->music_search)
    gtk_editable_set_text(GTK_EDITABLE(self->music_search), "");

  // Очищаем список сразу, чтобы не показывать музыку прошлого устройства
  g_list_store_remove_all(self->music_store);
  if (!gtk_widget_get_first_child(self->music_list)) {
    adw_status_page_set_title(ADW_STATUS_PAGE(self->music_status), tr("Загружаем медиатеку…"));
    adw_status_page_set_description(ADW_STATUS_PAGE(self->music_status),
                                    tr("Читаем теги и обложки с устройства — это может занять время."));
    gtk_stack_set_visible_child_name(GTK_STACK(self->music_stack), "empty");
  }

  MusicScanCtx *ctx = g_new0(MusicScanCtx, 1);
  ctx->udid = g_strdup(udid);
  ctx->store = g_list_store_new(MUSIC_TRACK_TYPE);
  ctx->started_usec = g_get_monotonic_time(); // для замера времени в логе

  GTask *task = g_task_new(G_OBJECT(self), NULL, onMusicScanFinished, NULL);
  g_task_set_task_data(task, ctx, musicScanCtxFree);
  g_task_run_in_thread(task, musicScanThread);

  g_object_unref(task); // только наш ref от g_task_new (см. startScan)
}

typedef struct {
  char *udid;
  guint64 bytes[STORAGE_MAX_CATS];
  guint seq; // какому запуску подсчёта принадлежит результат
} StorageScanCtx;

static void
storageScanCtxFree(gpointer data)
{
  StorageScanCtx *ctx = data;
  g_free(ctx->udid);
  g_free(ctx);
}

// Фоновый поток: измеряем размеры категорий через AFC (только чтение)
static void
storageScanThread(GTask *task, gpointer source_object,
                  gpointer task_data, GCancellable *cancellable)
{
  (void)source_object;
  (void)cancellable;

  StorageScanCtx *ctx = task_data;
  AfcSession s;

  if (afcSessionOpen(&s, ctx->udid) != 0) {
    logMessage(tr("Накопитель: не удалось измерить категории (нет подключения)."));
    g_task_return_boolean(task, FALSE);
    return;
  }

  for (int i = 0; i < STORAGE_CAT_COUNT; i++) {
    guint64 sum = 0;
    for (const char *const *root = STORAGE_CATS[i]; *root; root++)
      sum += afcDirSize(s.afc, *root, 8);
    ctx->bytes[i] = sum;
  }

  afcSessionClose(&s);
  g_task_return_boolean(task, TRUE);
}

// Колбэк завершения измерения категорий (главный поток)
static void
onStorageScanFinished(GObject *source_object, GAsyncResult *res, gpointer user_data)
{
  (void)user_data;

  AppleApplication *self = APPLE_APPLICATION(source_object);
  GTask *task = G_TASK(res);
  StorageScanCtx *ctx = g_task_get_task_data(task);

  // Устаревший запуск (устройство сменили, подсчёт перезапущен) —
  // игнорируем, не трогая флаги более нового запуска
  if (ctx->seq != self->storage_scan_seq)
    return;

  // Подсчёт завершён (успешно или нет) — плашка больше не нужна
  self->storage_measuring = FALSE;

  if (!g_task_propagate_boolean(task, NULL))
    return;

  // Пока шло измерение, устройство могли сменить — результаты устарели
  if (!self->selected || g_strcmp0(self->selected->udid, ctx->udid) != 0)
    return;

  for (int i = 0; i < STORAGE_CAT_COUNT; i++) {
    self->storage_cats[i].bytes = ctx->bytes[i];
    // G_FORMAT_SIZE_LONG_FORMAT добавляет точное число байт в скобках
    logMessage("%s — %s", tr(STORAGE_CAT_META[i].label),
               g_format_size_full(ctx->bytes[i], G_FORMAT_SIZE_LONG_FORMAT));
  }
  self->storage_n_cats = STORAGE_CAT_COUNT;

  if (self->storage_area)
    gtk_widget_queue_draw(self->storage_area);
}

// Запуск измерения категорий накопителя выбранного устройства
void
startStorageScan(AppleApplication *self, const char *udid)
{
  if (!udid || !self->storage_area)
    return;
  if (self->storage_total == 0)
    return; // размеры накопителя неизвестны — категориям не от чего считать долю

  // Пока идёт подсчёт, бар показывает плашку «Подсчёт категорий…»
  self->storage_n_cats = 0;
  self->storage_measuring = TRUE;
  self->storage_scan_seq++;
  if (self->storage_area)
    gtk_widget_queue_draw(self->storage_area);

  StorageScanCtx *ctx = g_new0(StorageScanCtx, 1);
  ctx->udid = g_strdup(udid);
  ctx->seq = self->storage_scan_seq;

  GTask *task = g_task_new(G_OBJECT(self), NULL, onStorageScanFinished, NULL);
  g_task_set_task_data(task, ctx, storageScanCtxFree);
  g_task_run_in_thread(task, storageScanThread);

  g_object_unref(task);
}

typedef struct {
  char *udid;
  GPtrArray *local_paths;
  int db_added;
} MusicImportCtx;

static void startScan(AppleApplication *self);

static void
musicImportCtxFree(gpointer data)
{
  MusicImportCtx *ctx = data;
  g_free(ctx->udid);
  g_ptr_array_unref(ctx->local_paths);
  g_free(ctx);
}

static void
musicImportThread(GTask *task, gpointer source_object,
                  gpointer task_data, GCancellable *cancellable)
{
  (void)source_object;
  (void)cancellable;

  MusicImportCtx *ctx = task_data;
  AfcSession s;

  if (afcSessionOpen(&s, ctx->udid) != 0) {
    logMessage(tr("Музыка: импорт не удался — нет подключения (AFC)."));
    g_task_return_int(task, -1);
    return;
  }

  /* Гейт до заливки файлов: при грязном wal устройства фаза базы всё
   * равно будет отменена — не создаём файлы-сироты в Imported/. */
  GError *wal_err = NULL;
  if (!medialibDeviceWalIsClean(s.afc, &wal_err)) {
    logMessage(tr("Музыка: импорт отменён: %s"), wal_err->message);
    g_clear_error(&wal_err);
    afcSessionClose(&s);
    g_task_return_int(task, -1);
    return;
  }

  afc_make_directory(s.afc, MUSIC_REMOTE_ROOT "/Imported");

  int done = 0;
  GPtrArray *metas = g_ptr_array_new_with_free_func(medialibMetaFree);
  for (guint i = 0; i < ctx->local_paths->len; i++) {
    const char *lp = ctx->local_paths->pdata[i];
    char *base = g_path_get_basename(lp);
    char *remote = g_build_filename(MUSIC_REMOTE_ROOT, "Imported", base, NULL);

    logMessage(tr("Музыка: импорт «%s» -> %s"), base, remote);
    if (afcUploadFile(s.afc, lp, remote) == 0) {
      done++;
      MedialibMeta *m = g_new0(MedialibMeta, 1);
      GError *merr = NULL;
      if (medialibReadMeta(lp, base, m, &merr)) {
        g_ptr_array_add(metas, m);
      } else {
        logMessage(tr("Музыка: не удалось прочитать теги «%s»: %s"), base, merr->message);
        medialibMetaFree(m);
        g_clear_error(&merr);
      }
    } else {
      logMessage(tr("Музыка: не удалось загрузить «%s»."), base);
    }

    g_free(base);
    g_free(remote);
  }

  ctx->db_added = metas->len > 0 ? musicSyncMedialibAdd(s.afc, metas) : 0;
  g_ptr_array_unref(metas);

  afcSessionClose(&s);
  g_task_return_int(task, done);
}

static void
onMusicImportFinished(GObject *source_object, GAsyncResult *res, gpointer user_data)
{
  (void)user_data;

  AppleApplication *self = APPLE_APPLICATION(source_object);
  GTask *task = G_TASK(res);
  MusicImportCtx *ctx = g_task_get_task_data(task);

  int done = g_task_propagate_int(task, NULL);
  self->music_busy = FALSE;
  updateMusicButtons(self);

  char *msg = g_strdup_printf(tr("Импортировано файлов: %d"), done);
  logMessage("%s", msg);
  if (self->toast_overlay)
    adw_toast_overlay_add_toast(ADW_TOAST_OVERLAY(self->toast_overlay), adw_toast_new(msg));
  g_free(msg);

  if (done > 0 && ctx->db_added > 0)
    logMessage(tr("Музыка: треки добавлены в базу медиатеки. Перезапустите приложение «Музыка» на iPhone, чтобы они появились."));
  else if (done > 0 && ctx->db_added == 0)
    logMessage(tr("Музыка: все треки уже есть в медиатеке."));
  else if (done > 0)
    logMessage(tr("Музыка: файлы загружены, но база «Музыки» не обновлена — треки появятся только после перезагрузки iPhone."));

  // Обновляем список, чтобы показать импортированное
  if (done > 0 && self->selected && g_strcmp0(self->selected->udid, ctx->udid) == 0)
    startMusicScan(self, self->selected->udid);
}

static void
onImportDialogDone(GObject *source, GAsyncResult *res, gpointer user_data)
{
  AppleApplication *self = APPLE_APPLICATION(user_data);

  GListModel *files = gtk_file_dialog_open_multiple_finish(GTK_FILE_DIALOG(source), res, NULL);
  if (!files)
    return;

  GPtrArray *paths = g_ptr_array_new_with_free_func(g_free);
  guint n = g_list_model_get_n_items(files);
  for (guint i = 0; i < n; i++) {
    GFile *f = g_list_model_get_item(files, i);
    char *p = g_file_get_path(f);
    if (p)
      g_ptr_array_add(paths, p);
    g_object_unref(f);
  }
  g_object_unref(files);

  if (paths->len == 0 || !self->selected || self->music_busy) {
    g_ptr_array_unref(paths);
    return;
  }

  self->music_busy = TRUE;
  updateMusicButtons(self);

  MusicImportCtx *ctx = g_new0(MusicImportCtx, 1);
  ctx->udid = g_strdup(self->selected->udid);
  ctx->local_paths = paths;

  GTask *task = g_task_new(G_OBJECT(self), NULL, onMusicImportFinished, NULL);
  g_task_set_task_data(task, ctx, musicImportCtxFree);
  g_task_run_in_thread(task, musicImportThread);

  g_object_unref(task);
}

static void
onMusicImportClicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;

  if (!self->selected || self->music_busy)
    return;

  GtkFileDialog *dlg = gtk_file_dialog_new();
  gtk_file_dialog_set_title(dlg, tr("Выберите аудиофайлы для импорта"));
  gtk_file_dialog_open_multiple(dlg, GTK_WINDOW(self->window), NULL,
                                onImportDialogDone, self);
  g_object_unref(dlg);
}

typedef struct {
  char *udid;
  MusicTrack *track;
  char *dest;
} MusicExportCtx;

static void
musicExportCtxFree(gpointer data)
{
  MusicExportCtx *ctx = data;
  g_free(ctx->udid);
  g_object_unref(ctx->track);
  g_free(ctx->dest);
  g_free(ctx);
}

static void
musicExportThread(GTask *task, gpointer source_object,
                  gpointer task_data, GCancellable *cancellable)
{
  (void)source_object;
  (void)cancellable;

  MusicExportCtx *ctx = task_data;
  AfcSession s;

  if (afcSessionOpen(&s, ctx->udid) != 0) {
    logMessage(tr("Музыка: экспорт не удался — нет подключения (AFC)."));
    g_task_return_int(task, -1);
    return;
  }

  logMessage(tr("Музыка: экспорт %s -> %s"), ctx->track->path, ctx->dest);
  int rc = afcDownloadFile(s.afc, ctx->track->path, ctx->dest);
  afcSessionClose(&s);
  g_task_return_int(task, rc);
}

static void
onMusicExportFinished(GObject *source_object, GAsyncResult *res, gpointer user_data)
{
  (void)user_data;

  AppleApplication *self = APPLE_APPLICATION(source_object);
  GTask *task = G_TASK(res);
  MusicExportCtx *ctx = g_task_get_task_data(task);

  int rc = g_task_propagate_int(task, NULL);
  self->music_busy = FALSE;
  updateMusicButtons(self);

  if (rc == 0) {
    char *base = g_path_get_basename(ctx->dest);
    char *msg = g_strdup_printf(tr("Экспортировано: %s"), base);
    logMessage("%s", msg);
    if (self->toast_overlay)
      adw_toast_overlay_add_toast(ADW_TOAST_OVERLAY(self->toast_overlay), adw_toast_new(msg));
    g_free(msg);
    g_free(base);
  } else {
    logMessage(tr("Музыка: экспорт не удался."));
    if (self->toast_overlay)
      adw_toast_overlay_add_toast(ADW_TOAST_OVERLAY(self->toast_overlay),
                                  adw_toast_new(tr("Не удалось экспортировать файл")));
  }
}

static void
onExportDialogDone(GObject *source, GAsyncResult *res, gpointer user_data)
{
  MusicTrack *track = MUSIC_TRACK(user_data);
  AppleApplication *self = APPLE_APPLICATION(globalApp);

  GFile *dest = gtk_file_dialog_save_finish(GTK_FILE_DIALOG(source), res, NULL);
  if (!dest) {
    g_object_unref(track);
    return;
  }
  char *dest_path = g_file_get_path(dest);
  g_object_unref(dest);

  if (!dest_path || !self->selected || self->music_busy) {
    g_free(dest_path);
    g_object_unref(track);
    return;
  }

  self->music_busy = TRUE;
  updateMusicButtons(self);

  MusicExportCtx *ctx = g_new0(MusicExportCtx, 1);
  ctx->udid = g_strdup(self->selected->udid);
  ctx->track = track;
  ctx->dest = dest_path;

  GTask *task = g_task_new(G_OBJECT(self), NULL, onMusicExportFinished, NULL);
  g_task_set_task_data(task, ctx, musicExportCtxFree);
  g_task_run_in_thread(task, musicExportThread);

  g_object_unref(task);
}

static void
onMusicExportClicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;

  if (!self->selected_track || self->music_busy)
    return;

  GtkFileDialog *dlg = gtk_file_dialog_new();
  gtk_file_dialog_set_title(dlg, tr("Сохранить файл"));
  char *base = g_path_get_basename(self->selected_track->path);
  gtk_file_dialog_set_initial_name(dlg, base);
  g_free(base);

  gtk_file_dialog_save(dlg, GTK_WINDOW(self->window), NULL,
                       onExportDialogDone, g_object_ref(self->selected_track));
  g_object_unref(dlg);
}

typedef struct {
  char *udid;
  MusicTrack *track;
  gboolean clean_db;
} MusicDeleteCtx;

static void
musicDeleteCtxFree(gpointer data)
{
  MusicDeleteCtx *ctx = data;
  g_free(ctx->udid);
  g_object_unref(ctx->track);
  g_free(ctx);
}

static void
musicDeleteThread(GTask *task, gpointer source_object,
                  gpointer task_data, GCancellable *cancellable)
{
  (void)source_object;
  (void)cancellable;

  MusicDeleteCtx *ctx = task_data;
  AfcSession s;

  if (afcSessionOpen(&s, ctx->udid) != 0) {
    logMessage(tr("Музыка: удаление не удалось — нет подключения (AFC)."));
    g_task_return_int(task, -1);
    return;
  }

  logMessage(tr("Музыка: удаление %s"), ctx->track->path);
  int rc = afc_remove_path(s.afc, ctx->track->path);
  if (rc != AFC_E_SUCCESS) {
    afcSessionClose(&s);
    g_task_return_int(task, -1);
    return;
  }

  int db_status = 0;
  if (ctx->clean_db)
    db_status = musicCleanMedialib(&s, ctx->track);

  afcSessionClose(&s);
  g_task_return_int(task, db_status < 0 ? 1 : 0);
}

static void
onMusicDeleteFinished(GObject *source_object, GAsyncResult *res, gpointer user_data)
{
  (void)user_data;

  AppleApplication *self = APPLE_APPLICATION(source_object);
  GTask *task = G_TASK(res);
  MusicDeleteCtx *ctx = g_task_get_task_data(task);

  int rc = g_task_propagate_int(task, NULL);
  self->music_busy = FALSE;
  updateMusicButtons(self);

  if (rc < 0) {
    logMessage(tr("Музыка: удаление не удалось."));
    if (self->toast_overlay)
      adw_toast_overlay_add_toast(ADW_TOAST_OVERLAY(self->toast_overlay),
                                  adw_toast_new(tr("Не удалось удалить файл")));
    return;
  }

  if (rc > 0) {
    logMessage(tr("Музыка: файл удалён, но база «Музыки» не вычищена (см. лог)."));
    if (self->toast_overlay)
      adw_toast_overlay_add_toast(ADW_TOAST_OVERLAY(self->toast_overlay),
                                  adw_toast_new(tr("Файл удалён, база не вычищена")));
  }

  guint n = g_list_model_get_n_items(G_LIST_MODEL(self->music_store));
  for (guint i = 0; i < n; i++) {
    MusicTrack *it = g_list_model_get_item(G_LIST_MODEL(self->music_store), i);
    gboolean match = (it == ctx->track);
    g_object_unref(it);
    if (match) {
      g_list_store_remove(self->music_store, i);
      break;
    }
  }
  if (self->selected_track == ctx->track)
    self->selected_track = NULL;
  updateMusicButtons(self);

  logMessage(tr("Музыка: файл удалён с накопителя."));
  if (rc == 0 && ctx->clean_db)
    logMessage(tr("Музыка: перезапустите приложение «Музыка» на iPhone, чтобы изменения появились."));
  if (self->toast_overlay)
    adw_toast_overlay_add_toast(ADW_TOAST_OVERLAY(self->toast_overlay),
                                adw_toast_new(tr("Файл удалён с накопителя")));
}

static void
onDeleteConfirmed(GObject *source, GAsyncResult *res, gpointer user_data)
{
  MusicTrack *track = MUSIC_TRACK(user_data);
  AppleApplication *self = APPLE_APPLICATION(globalApp);

  const char *resp = adw_alert_dialog_choose_finish(ADW_ALERT_DIALOG(source), res);
  gboolean clean_db = (g_strcmp0(resp, "full") == 0);
  if ((!clean_db && g_strcmp0(resp, "file") != 0) || !self->selected || self->music_busy) {
    g_object_unref(track);
    return;
  }

  self->music_busy = TRUE;
  updateMusicButtons(self);

  MusicDeleteCtx *ctx = g_new0(MusicDeleteCtx, 1);
  ctx->udid = g_strdup(self->selected->udid);
  ctx->track = track;
  ctx->clean_db = clean_db;

  GTask *task = g_task_new(G_OBJECT(self), NULL, onMusicDeleteFinished, NULL);
  g_task_set_task_data(task, ctx, musicDeleteCtxFree);
  g_task_run_in_thread(task, musicDeleteThread);

  g_object_unref(task);
}

static void
onMusicDeleteClicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;

  if (!self->selected_track || self->music_busy)
    return;

  MusicTrack *track = self->selected_track;
  char *title = musicTrackDisplayTitle(track);
  char *body = g_strdup_printf(
      tr("Удалить «%s» с накопителя устройства?\n\n"
      "Файл исчезнет с диска. Дополнительно можно вычистить запись трека из базы "
      "«Музыки» iPhone — тогда трек исчезнет и из приложения «Музыка» (после "
      "его перезапуска). Перед правкой базы создаётся резервная копия "
      "на компьютере.\n\n"
      "Важно: закройте приложение «Музыка» на iPhone перед удалением — "
      "если оно открыто, правка базы может привести к его сбою."),
      title);
  g_free(title);

  AdwDialog *md = adw_alert_dialog_new(tr("Удалить файл?"), body);
  g_free(body);
  adw_alert_dialog_add_response(ADW_ALERT_DIALOG(md), "cancel", tr("Отмена"));
  adw_alert_dialog_add_response(ADW_ALERT_DIALOG(md), "file", tr("Только файл"));
  adw_alert_dialog_add_response(ADW_ALERT_DIALOG(md), "full",
                                tr("Файл и запись в «Музыке»"));
  adw_alert_dialog_set_response_appearance(ADW_ALERT_DIALOG(md), "full",
                                           ADW_RESPONSE_DESTRUCTIVE);

  adw_alert_dialog_choose(ADW_ALERT_DIALOG(md), GTK_WIDGET(self->window), NULL,
                          onDeleteConfirmed, g_object_ref(track));
  adw_dialog_present(md, GTK_WIDGET(self->window));
}

static void
onMusicRefreshClicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;

  if (self->selected)
    startMusicScan(self, self->selected->udid);
}

static void storageBarDraw(GtkDrawingArea *area, cairo_t *cr, int width, int height, gpointer userData);

static void
onScanFinished(GObject *source_object, GAsyncResult *res, gpointer user_data)
{
  (void)user_data;

  AppleApplication *self = APPLE_APPLICATION(source_object);
  GTask *task = G_TASK(res);

  logMessage(tr("Фоновый поток завершен. Обновляем UI..."));
  self->scanning = FALSE;

  if (self->refresh_btn)
    gtk_widget_set_sensitive(self->refresh_btn, TRUE);

  if (!self->sidebar_list || !self->sidebar_stack) {
    logMessage(tr("Окно уже закрыто — обновление списка пропущено."));
    return;
  }

  if (g_task_propagate_boolean(task, NULL)) {
    GListStore *found = G_LIST_STORE(g_task_get_task_data(task));
    guint n_items = g_list_model_get_n_items(G_LIST_MODEL(found));
    logMessage(tr("Устройств найдено: %u"), n_items);

    char *prev_udid = self->selected ? g_strdup(self->selected->udid) : NULL;
    self->selected = NULL;

    g_list_store_remove_all(self->device_store);
    for (guint i = 0; i < n_items; i++) {
      DeviceInfo *info = DEVICE_INFO(g_list_model_get_item(G_LIST_MODEL(found), i));
      logMessage("  + %s", info->name);
      g_list_store_append(self->device_store, info);
      g_object_unref(info);
    }

    gtk_stack_set_visible_child_name(GTK_STACK(self->sidebar_stack),
                                     n_items > 0 ? "devices" : "status");
    if (n_items == 0) {
      adw_status_page_set_title(ADW_STATUS_PAGE(self->status_page), tr("Устройства не найдены"));
      adw_status_page_set_description(ADW_STATUS_PAGE(self->status_page),
                                      tr("Подключите iPhone, iPad или другое устройство Apple по USB и нажмите «Обновить»."));
    }

    restoreSelection(self, prev_udid);
    g_free(prev_udid);
  } else {
    logMessage(tr("Ошибка при выполнении фоновой задачи."));

    if (self->sidebar_stack && self->status_page && self->sidebar_list &&
        !gtk_widget_get_first_child(self->sidebar_list)) {
      adw_status_page_set_title(ADW_STATUS_PAGE(self->status_page),
                                tr("Не удалось получить список устройств"));
      adw_status_page_set_description(ADW_STATUS_PAGE(self->status_page),
                                      tr("Проверьте подключение к USB (запущен ли usbmuxd?) и нажмите «Обновить»."));
      gtk_stack_set_visible_child_name(GTK_STACK(self->sidebar_stack), "status");
    }
  }

  if (self->rescan_pending) {
    self->rescan_pending = FALSE;
    startScan(self);
  }
}

static void
startScan(AppleApplication *self)
{
  if (self->scanning) {
    logMessage(tr("Сканирование уже идет — запуск проигнорирован."));
    return;
  }
  self->scanning = TRUE;

  if (self->refresh_btn)
    gtk_widget_set_sensitive(self->refresh_btn, FALSE);

  if (self->sidebar_stack && self->status_page && self->sidebar_list &&
      !gtk_widget_get_first_child(self->sidebar_list)) {
    adw_status_page_set_title(ADW_STATUS_PAGE(self->status_page), tr("Ищем устройства…"));
    adw_status_page_set_description(ADW_STATUS_PAGE(self->status_page),
                                    tr("Подключите устройство Apple по USB-кабелю."));
    gtk_stack_set_visible_child_name(GTK_STACK(self->sidebar_stack), "status");
  }

  GListStore *store = g_list_store_new(DEVICE_TYPE_INFO);

  GTask *task = g_task_new(G_OBJECT(self), NULL, onScanFinished, NULL);
  g_task_set_task_data(task, store, g_object_unref);
  g_task_run_in_thread(task, scanDevicesThread);

  g_object_unref(task);
}

static void
onRefreshClicked(GtkButton *btn, gpointer user_data)
{
  (void)btn;
  logMessage(tr("Нажата кнопка обновления."));
  startScan(APPLE_APPLICATION(user_data));
}

static void
onRefreshAction(GSimpleAction *action, GVariant *parameter, gpointer user_data)
{
  (void)action;
  (void)parameter;
  logMessage(tr("Нажата горячая клавиша Ctrl+R."));
  startScan(APPLE_APPLICATION(user_data));
}

// Действие «О программе»: диалог AdwAboutDialog по GNOME HIG
// (современная замена устаревшему с libadwaita 1.5 AdwAboutWindow)
static void
onAboutAction(GSimpleAction *action, GVariant *parameter, gpointer user_data)
{
  (void)action;
  (void)parameter;

  AppleApplication *self = APPLE_APPLICATION(user_data);

  AdwAboutDialog *about = ADW_ABOUT_DIALOG(adw_about_dialog_new());
  adw_about_dialog_set_application_name(about, "Apple Devices");
  // Иконка-плейсхолдер: телефон Apple из установленной темы
  adw_about_dialog_set_application_icon(about, "phone-apple-iphone-symbolic");
  adw_about_dialog_set_version(about, APP_VERSION);
  adw_about_dialog_set_developer_name(about, "Pavel Burimskiy (saitexna)");
  adw_about_dialog_set_copyright(about, "© 2026 Pavel Burimskiy");
  // GTK_LICENSE_GPL_3_0 в GTK означает «GPL 3.0 или новее»
  adw_about_dialog_set_license_type(about, GTK_LICENSE_GPL_3_0);
  adw_about_dialog_set_website(about, "https://github.com/anxetias/apple-devices");
  adw_about_dialog_set_issue_url(about, "https://github.com/anxetias/apple-devices/issues");

  adw_dialog_present(ADW_DIALOG(about), GTK_WIDGET(self->window));
}

typedef struct {
  AppleApplication *self;
  int kind;
  char *udid;
} DeviceEventMsg;

static gboolean
onDeviceEventIdle(gpointer user_data)
{
  DeviceEventMsg *msg = user_data;
  AppleApplication *self = msg->self;

  if (msg->kind == IDEVICE_DEVICE_REMOVE) {
    guint n = g_list_model_get_n_items(G_LIST_MODEL(self->device_store));
    for (guint i = 0; i < n; i++) {
      DeviceInfo *info = DEVICE_INFO(g_list_model_get_item(G_LIST_MODEL(self->device_store), i));
      gboolean match = g_strcmp0(info->udid, msg->udid) == 0;
      g_object_unref(info);
      if (match) {
        g_list_store_remove(self->device_store, i);
        // UDID в логе маскируется, если включён приватный режим
        if (appHidePersonalData()) {
          char *masked = deviceMaskUdid(msg->udid);
          logMessage(tr("Устройство отключено: %s"), masked);
          g_free(masked);
        } else {
          logMessage(tr("Устройство отключено: %s"), msg->udid);
        }
        if (g_list_model_get_n_items(G_LIST_MODEL(self->device_store)) == 0 &&
            self->sidebar_stack && self->status_page) {
          adw_status_page_set_title(ADW_STATUS_PAGE(self->status_page), tr("Устройство отключено"));
          adw_status_page_set_description(ADW_STATUS_PAGE(self->status_page),
                                          tr("Подключите iPhone, iPad или другое устройство Apple по USB."));
          gtk_stack_set_visible_child_name(GTK_STACK(self->sidebar_stack), "status");
        }
        break;
      }
    }
  } else if (msg->kind == IDEVICE_DEVICE_ADD) {
    // UDID в логе маскируется, если включён приватный режим
    if (appHidePersonalData()) {
      char *masked = deviceMaskUdid(msg->udid);
      logMessage(tr("Устройство подключено: %s — обновляю список…"), masked);
      g_free(masked);
    } else {
      logMessage(tr("Устройство подключено: %s — обновляю список…"), msg->udid);
    }
    if (self->scanning)
      self->rescan_pending = TRUE;
    else
      startScan(self);
  }

  g_free(msg->udid);
  g_free(msg);
  return G_SOURCE_REMOVE;
}

static void
deviceEventCb(const idevice_event_t *event, void *user_data)
{
  DeviceEventMsg *msg = g_new0(DeviceEventMsg, 1);
  msg->self = APPLE_APPLICATION(user_data);
  msg->kind = event->event;
  msg->udid = g_strdup(event->udid);
  g_idle_add(onDeviceEventIdle, msg);
}

static void
apple_application_activate(GApplication *app)
{
  AppleApplication *self = APPLE_APPLICATION(app);
  globalApp = self;

  if (self->window) {
    gtk_window_present(self->window);
    return;
  }

  GtkWindow *window;
  window = g_object_new(ADW_TYPE_APPLICATION_WINDOW,
                        "application", app,
                        "title", "Apple Devices",
                        "default-width", 1000,
                        "default-height", 760,
                        NULL);
  self->window = window;

  self->device_store = g_list_store_new(DEVICE_TYPE_INFO);

  /* === Левая панель === */
  self->status_page = adw_status_page_new();
  adw_status_page_set_icon_name(ADW_STATUS_PAGE(self->status_page),
                                "phone-apple-iphone-symbolic");
  adw_status_page_set_title(ADW_STATUS_PAGE(self->status_page), tr("Ищем устройства…"));
  adw_status_page_set_description(ADW_STATUS_PAGE(self->status_page),
                                  tr("Подключите устройство Apple по USB-кабелю."));
  g_object_add_weak_pointer(G_OBJECT(self->status_page), (gpointer *)&self->status_page);

  GtkWidget *empty_refresh_btn = makeButton("view-refresh-symbolic", tr("Обновить"),
                                             NULL, G_CALLBACK(onRefreshClicked), self);
  adw_status_page_set_child(ADW_STATUS_PAGE(self->status_page), empty_refresh_btn);

  self->sidebar_list = gtk_list_box_new();
  gtk_list_box_set_selection_mode(GTK_LIST_BOX(self->sidebar_list), GTK_SELECTION_SINGLE);
  gtk_widget_add_css_class(self->sidebar_list, "boxed-list");
  g_object_add_weak_pointer(G_OBJECT(self->sidebar_list), (gpointer *)&self->sidebar_list);

  gtk_list_box_bind_model(GTK_LIST_BOX(self->sidebar_list),
                          G_LIST_MODEL(self->device_store),
                          createSidebarRow, self, NULL);
  g_signal_connect(self->sidebar_list, "row-selected", G_CALLBACK(onRowSelected), self);

  self->nav_list = gtk_list_box_new();
  gtk_list_box_set_selection_mode(GTK_LIST_BOX(self->nav_list), GTK_SELECTION_SINGLE);
  gtk_widget_add_css_class(self->nav_list, "boxed-list");
  g_object_add_weak_pointer(G_OBJECT(self->nav_list), (gpointer *)&self->nav_list);

  static const struct {
    const char *title;
    const char *icon;
    const char *page;
  } nav_items[] = {
    { "Обзор",  "applications-system-symbolic", "general"  },
    { "Музыка", "folder-music-symbolic",        "music"    },
    { "Фильмы", "folder-videos-symbolic",       "movies"   },
    { "ТВ-шоу", "tv-symbolic",                  "tvshows"  },
    { "Фото",   "folder-pictures-symbolic",     "photos"   },
    { "Файлы",  "folder-symbolic",              "files"    },
  };
  for (gsize i = 0; i < G_N_ELEMENTS(nav_items); i++)
    gtk_list_box_append(GTK_LIST_BOX(self->nav_list),
                        makeNavRow(nav_items[i].icon, tr(nav_items[i].title), nav_items[i].page));
  g_signal_connect(self->nav_list, "row-selected", G_CALLBACK(onNavSelected), self);

  GtkWidget *nav_label = gtk_label_new(tr("Разделы"));
  gtk_widget_set_halign(nav_label, GTK_ALIGN_START);
  gtk_widget_add_css_class(nav_label, "dim-label");
  gtk_widget_add_css_class(nav_label, "heading");
  gtk_widget_set_margin_start(nav_label, 6);

  GtkWidget *sidebar_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 12);
  gtk_widget_set_margin_top(sidebar_box, 12);
  gtk_widget_set_margin_bottom(sidebar_box, 12);
  gtk_widget_set_margin_start(sidebar_box, 12);
  gtk_widget_set_margin_end(sidebar_box, 12);
  gtk_box_append(GTK_BOX(sidebar_box), self->sidebar_list);
  gtk_box_append(GTK_BOX(sidebar_box), nav_label);
  gtk_box_append(GTK_BOX(sidebar_box), self->nav_list);

  GtkWidget *scrolled_s = gtk_scrolled_window_new();
  gtk_scrolled_window_set_child(GTK_SCROLLED_WINDOW(scrolled_s), sidebar_box);

  self->sidebar_stack = gtk_stack_new();
  gtk_stack_set_transition_type(GTK_STACK(self->sidebar_stack), GTK_STACK_TRANSITION_TYPE_CROSSFADE);
  gtk_stack_add_named(GTK_STACK(self->sidebar_stack), self->status_page, "status");
  gtk_stack_add_named(GTK_STACK(self->sidebar_stack), scrolled_s, "devices");
  gtk_stack_set_visible_child_name(GTK_STACK(self->sidebar_stack), "status");
  g_object_add_weak_pointer(G_OBJECT(self->sidebar_stack), (gpointer *)&self->sidebar_stack);

  GtkWidget *sidebar_header = adw_header_bar_new();
  GtkWidget *sidebar_title = adw_window_title_new("Apple Devices", NULL);
  adw_header_bar_pack_start(ADW_HEADER_BAR(sidebar_header), sidebar_title);
  self->refresh_btn = gtk_button_new_from_icon_name("view-refresh-symbolic");
  gtk_widget_set_tooltip_text(self->refresh_btn, tr("Обновить список устройств (Ctrl+R)"));
  adw_header_bar_pack_end(ADW_HEADER_BAR(sidebar_header), self->refresh_btn);
  g_object_add_weak_pointer(G_OBJECT(self->refresh_btn), (gpointer *)&self->refresh_btn);

  GtkWidget *sidebar_tb = adw_toolbar_view_new();
  adw_toolbar_view_add_top_bar(ADW_TOOLBAR_VIEW(sidebar_tb), sidebar_header);
  adw_toolbar_view_set_content(ADW_TOOLBAR_VIEW(sidebar_tb), self->sidebar_stack);

  GtkWidget *settings_row = adw_action_row_new();
  adw_preferences_row_set_title(ADW_PREFERENCES_ROW(settings_row), tr("Настройки приложения"));
  GtkIconTheme *theme = gtk_icon_theme_get_for_display(gdk_display_get_default());
  if (gtk_icon_theme_has_icon(theme, "preferences-system-symbolic")) {
    GtkWidget *gear = gtk_image_new_from_icon_name("preferences-system-symbolic");
    gtk_image_set_pixel_size(GTK_IMAGE(gear), 16);
    adw_action_row_add_prefix(ADW_ACTION_ROW(settings_row), gear);
  }
  g_signal_connect(settings_row, "activated", G_CALLBACK(onSettingsActivated), self);

  GtkWidget *settings_list = gtk_list_box_new();
  gtk_list_box_set_selection_mode(GTK_LIST_BOX(settings_list), GTK_SELECTION_SINGLE);
  gtk_widget_add_css_class(settings_list, "boxed-list");
  gtk_widget_set_margin_top(settings_list, 6);
  gtk_widget_set_margin_bottom(settings_list, 12);
  gtk_widget_set_margin_start(settings_list, 12);
  gtk_widget_set_margin_end(settings_list, 12);
  gtk_list_box_append(GTK_LIST_BOX(settings_list), settings_row);
  self->settings_list = settings_list;
  g_object_add_weak_pointer(G_OBJECT(self->settings_list), (gpointer *)&self->settings_list);
  g_signal_connect(settings_list, "row-selected",
                   G_CALLBACK(onSettingsRowSelected), self);
  g_signal_connect(settings_list, "row-activated",
                   G_CALLBACK(onSettingsRowActivated), self);
  adw_toolbar_view_add_bottom_bar(ADW_TOOLBAR_VIEW(sidebar_tb), settings_list);

  AdwNavigationPage *sidebar_page = adw_navigation_page_new(sidebar_tb, tr("Устройства"));

  /* === Правая панель === */
  GtkWidget *empty_page = adw_status_page_new();
  adw_status_page_set_title(ADW_STATUS_PAGE(empty_page), tr("Устройство не выбрано"));
  adw_status_page_set_description(ADW_STATUS_PAGE(empty_page),
                                  tr("Выберите устройство в списке слева, чтобы увидеть информацию."));

  self->row_device = adw_action_row_new();
  adw_preferences_row_set_use_markup(ADW_PREFERENCES_ROW(self->row_device), FALSE);
  adw_preferences_row_set_title(ADW_PREFERENCES_ROW(self->row_device), tr("Устройство"));

  self->row_model = adw_action_row_new();
  adw_preferences_row_set_use_markup(ADW_PREFERENCES_ROW(self->row_model), FALSE);
  adw_preferences_row_set_title(ADW_PREFERENCES_ROW(self->row_model), tr("Модель"));

  self->row_os = adw_action_row_new();
  adw_preferences_row_set_use_markup(ADW_PREFERENCES_ROW(self->row_os), FALSE);
  adw_preferences_row_set_title(ADW_PREFERENCES_ROW(self->row_os), tr("Версия ОС"));

  self->row_serial = adw_action_row_new();
  adw_preferences_row_set_use_markup(ADW_PREFERENCES_ROW(self->row_serial), FALSE);
  adw_preferences_row_set_title(ADW_PREFERENCES_ROW(self->row_serial), tr("Серийный номер"));

  self->row_udid = adw_action_row_new();
  adw_preferences_row_set_use_markup(ADW_PREFERENCES_ROW(self->row_udid), FALSE);
  adw_preferences_row_set_title(ADW_PREFERENCES_ROW(self->row_udid), tr("Идентификатор (UDID)"));

  self->row_battery = adw_action_row_new();
  adw_preferences_row_set_use_markup(ADW_PREFERENCES_ROW(self->row_battery), FALSE);
  adw_preferences_row_set_title(ADW_PREFERENCES_ROW(self->row_battery), tr("Батарея"));
  adw_action_row_set_subtitle(ADW_ACTION_ROW(self->row_battery), "—");

  GtkWidget *group_info = adw_preferences_group_new();
  adw_preferences_group_set_title(ADW_PREFERENCES_GROUP(group_info), tr("Об устройстве"));
  adw_preferences_group_add(ADW_PREFERENCES_GROUP(group_info), self->row_device);
  adw_preferences_group_add(ADW_PREFERENCES_GROUP(group_info), self->row_model);
  adw_preferences_group_add(ADW_PREFERENCES_GROUP(group_info), self->row_os);
  adw_preferences_group_add(ADW_PREFERENCES_GROUP(group_info), self->row_serial);
  adw_preferences_group_add(ADW_PREFERENCES_GROUP(group_info), self->row_udid);
  adw_preferences_group_add(ADW_PREFERENCES_GROUP(group_info), self->row_battery);

  // Приватность: маскировать серийный номер и UDID в UI и логах
  AdwSwitchRow *privacy_row = ADW_SWITCH_ROW(adw_switch_row_new());
  adw_preferences_row_set_title(ADW_PREFERENCES_ROW(privacy_row),
                                tr("Скрывать личные данные"));
  adw_action_row_set_subtitle(ADW_ACTION_ROW(privacy_row),
                              tr("Серийный номер и UDID будут замаскированы."));
  // Начальное состояние ставим ДО подключения сигнала, чтобы не словить
  // ложное срабатывание notify::active при построении UI
  adw_switch_row_set_active(privacy_row, self->hide_personal_data);
  g_signal_connect(privacy_row, "notify::active",
                   G_CALLBACK(onHidePersonalChanged), self);
  adw_preferences_group_add(ADW_PREFERENCES_GROUP(group_info), GTK_WIDGET(privacy_row));

  GtkWidget *sw_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 8);
  gtk_box_append(GTK_BOX(sw_box),
               makeButton("software-update-available-symbolic", tr("Проверить обновления"),
                           NULL, G_CALLBACK(onCheckUpdatesClicked), self));
  gtk_box_append(GTK_BOX(sw_box),
               makeButton("system-reboot-symbolic", tr("Восстановить iPhone…"),
                           NULL, G_CALLBACK(onRestoreFirmwareClicked), self));

  GtkWidget *group_software = adw_preferences_group_new();
  adw_preferences_group_set_title(ADW_PREFERENCES_GROUP(group_software), tr("Программное обеспечение"));
  adw_preferences_group_set_description(ADW_PREFERENCES_GROUP(group_software),
                                        tr("Проверка обновлений и восстановление прошивки — в разработке."));
  adw_preferences_group_add(ADW_PREFERENCES_GROUP(group_software), sw_box);

  GtkWidget *bk_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 8);
  GtkWidget *backup_btn = makeButton("document-save-symbolic", tr("Создать резервную копию"),
                                      "suggested-action", G_CALLBACK(onBackupClicked), self);
  gtk_box_append(GTK_BOX(bk_box), backup_btn);
  gtk_box_append(GTK_BOX(bk_box),
               makeButton("document-save-as-symbolic", tr("Восстановить из копии"),
                           NULL, G_CALLBACK(onRestoreClicked), self));

  GtkWidget *group_backup = adw_preferences_group_new();
  adw_preferences_group_set_title(ADW_PREFERENCES_GROUP(group_backup), tr("Резервные копии"));
  adw_preferences_group_set_description(ADW_PREFERENCES_GROUP(group_backup),
                                        tr("Кнопки-заглушки: функции в разработке."));
  adw_preferences_group_add(ADW_PREFERENCES_GROUP(group_backup), bk_box);

  GtkWidget *info_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 18);
  gtk_box_append(GTK_BOX(info_box), group_info);
  gtk_box_append(GTK_BOX(info_box), group_software);
  gtk_box_append(GTK_BOX(info_box), group_backup);

  GtkWidget *info_clamp = adw_clamp_new();
  adw_clamp_set_maximum_size(ADW_CLAMP(info_clamp), 640);
  adw_clamp_set_child(ADW_CLAMP(info_clamp), info_box);
  gtk_widget_set_margin_top(info_clamp, 12);
  gtk_widget_set_margin_bottom(info_clamp, 12);
  gtk_widget_set_margin_start(info_clamp, 12);
  gtk_widget_set_margin_end(info_clamp, 12);

  GtkWidget *info_scroll = gtk_scrolled_window_new();
  gtk_scrolled_window_set_child(GTK_SCROLLED_WINDOW(info_scroll), info_clamp);

  /* === Страница «Музыка» === */
  self->music_store = g_list_store_new(MUSIC_TRACK_TYPE);
  self->tag_cache = g_hash_table_new_full(g_str_hash, g_str_equal, g_free, g_object_unref);

  self->music_list = gtk_list_box_new();
  gtk_list_box_set_selection_mode(GTK_LIST_BOX(self->music_list), GTK_SELECTION_SINGLE);
  gtk_widget_add_css_class(self->music_list, "boxed-list");

  self->music_filter_obj = GTK_CUSTOM_FILTER(gtk_custom_filter_new(
      musicFilterMatch, self, NULL));
  self->music_sorter = GTK_CUSTOM_SORTER(gtk_custom_sorter_new(
      (GCompareDataFunc)musicSortCompare, self, NULL));
  GtkFilterListModel *music_filter_model = gtk_filter_list_model_new(
      G_LIST_MODEL(self->music_store), GTK_FILTER(self->music_filter_obj));
  GtkSortListModel *music_sort_model = gtk_sort_list_model_new(
      G_LIST_MODEL(music_filter_model), GTK_SORTER(self->music_sorter));
  g_object_add_weak_pointer(G_OBJECT(self->music_filter_obj),
                            (gpointer *)&self->music_filter_obj);
  g_object_add_weak_pointer(G_OBJECT(self->music_sorter),
                            (gpointer *)&self->music_sorter);

  gtk_list_box_bind_model(GTK_LIST_BOX(self->music_list),
                          G_LIST_MODEL(music_sort_model),
                          createMusicRow, self, NULL);
  g_signal_connect(self->music_list, "row-selected", G_CALLBACK(onMusicRowSelected), self);

  GtkWidget *music_scroll = gtk_scrolled_window_new();
  gtk_scrolled_window_set_child(GTK_SCROLLED_WINDOW(music_scroll), self->music_list);

  self->music_status = adw_status_page_new();
  adw_status_page_set_icon_name(ADW_STATUS_PAGE(self->music_status), "folder-music-symbolic");
  adw_status_page_set_title(ADW_STATUS_PAGE(self->music_status), tr("Медиатека не загружена"));
  adw_status_page_set_description(ADW_STATUS_PAGE(self->music_status),
                                  tr("Подключите устройство."));
  g_object_add_weak_pointer(G_OBJECT(self->music_status), (gpointer *)&self->music_status);

  GtkWidget *music_no_results = adw_status_page_new();
  adw_status_page_set_icon_name(ADW_STATUS_PAGE(music_no_results), "edit-find-symbolic");
  adw_status_page_set_title(ADW_STATUS_PAGE(music_no_results), tr("Ничего не найдено"));
  adw_status_page_set_description(ADW_STATUS_PAGE(music_no_results),
                                  tr("Попробуйте изменить поисковый запрос."));

  self->music_stack = gtk_stack_new();
  gtk_stack_set_transition_type(GTK_STACK(self->music_stack), GTK_STACK_TRANSITION_TYPE_CROSSFADE);
  gtk_stack_add_named(GTK_STACK(self->music_stack), self->music_status, "empty");
  gtk_stack_add_named(GTK_STACK(self->music_stack), music_scroll, "list");
  gtk_stack_add_named(GTK_STACK(self->music_stack), music_no_results, "no-results");
  gtk_stack_set_visible_child_name(GTK_STACK(self->music_stack), "empty");
  g_object_add_weak_pointer(G_OBJECT(self->music_stack), (gpointer *)&self->music_stack);

  self->music_import_btn = makeButton("list-add-symbolic", tr("Импорт"), NULL,
                                       G_CALLBACK(onMusicImportClicked), self);
  self->music_export_btn = makeButton("document-save-symbolic", tr("Экспорт"), NULL,
                                       G_CALLBACK(onMusicExportClicked), self);
  self->music_delete_btn = makeButton("user-trash-symbolic", tr("Удалить"), "destructive-action",
                                       G_CALLBACK(onMusicDeleteClicked), self);
  self->music_refresh_btn = makeButton("view-refresh-symbolic", tr("Обновить"), NULL,
                                        G_CALLBACK(onMusicRefreshClicked), self);

  GtkWidget *music_actions = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 8);
  gtk_box_append(GTK_BOX(music_actions), self->music_import_btn);
  gtk_box_append(GTK_BOX(music_actions), self->music_export_btn);
  gtk_box_append(GTK_BOX(music_actions), self->music_delete_btn);
  gtk_box_append(GTK_BOX(music_actions), self->music_refresh_btn);

  self->music_search = gtk_search_entry_new();
  gtk_search_entry_set_placeholder_text(GTK_SEARCH_ENTRY(self->music_search),
                                        tr("Поиск по трекам"));
  gtk_widget_set_hexpand(self->music_search, TRUE);
  g_signal_connect(self->music_search, "search-changed",
                   G_CALLBACK(onMusicSearchChanged), self);

  static const char *const sort_names[] = {
    "Как на устройстве", "По названию", "По исполнителю", "По альбому",
    "По длительности",
  };
  GtkStringList *sort_model = gtk_string_list_new(NULL);
  for (gsize i = 0; i < G_N_ELEMENTS(sort_names); i++)
    gtk_string_list_append(sort_model, tr(sort_names[i]));
  self->music_sort = gtk_drop_down_new(G_LIST_MODEL(sort_model), NULL);
  gtk_drop_down_set_selected(GTK_DROP_DOWN(self->music_sort), 0);
  gtk_widget_set_valign(self->music_sort, GTK_ALIGN_CENTER);
  g_signal_connect(self->music_sort, "notify::selected",
                   G_CALLBACK(onMusicSortChanged), self);

  GtkWidget *music_tools = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 8);
  gtk_box_append(GTK_BOX(music_tools), self->music_search);
  gtk_box_append(GTK_BOX(music_tools), self->music_sort);

  GtkWidget *music_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 12);
  gtk_widget_set_margin_top(music_box, 12);
  gtk_widget_set_margin_bottom(music_box, 12);
  gtk_widget_set_margin_start(music_box, 12);
  gtk_widget_set_margin_end(music_box, 12);
  gtk_box_append(GTK_BOX(music_box), music_actions);
  gtk_box_append(GTK_BOX(music_box), music_tools);
  gtk_box_append(GTK_BOX(music_box), self->music_stack);
  gtk_widget_set_vexpand(self->music_stack, TRUE);

  /* === Страница «Настройки» === */
  GtkWidget *settings_group = adw_preferences_group_new();
  adw_preferences_group_set_title(ADW_PREFERENCES_GROUP(settings_group), tr("Общие"));
  adw_preferences_group_set_description(ADW_PREFERENCES_GROUP(settings_group),
                                        tr("Язык применится после перезапуска приложения."));

  AdwComboRow *lang_row = ADW_COMBO_ROW(adw_combo_row_new());
  adw_preferences_row_set_title(ADW_PREFERENCES_ROW(lang_row), tr("Язык"));
  const char *const lang_names[] = { "Русский", "English" };
  GtkStringList *lang_model = gtk_string_list_new(NULL);
  for (gsize i = 0; i < G_N_ELEMENTS(lang_names); i++)
    gtk_string_list_append(lang_model, lang_names[i]);
  adw_combo_row_set_model(lang_row, G_LIST_MODEL(lang_model));
  adw_combo_row_set_selected(lang_row, (appLanguage && appLanguage[0] == 'e') ? 1 : 0);
  g_signal_connect(lang_row, "notify::selected", G_CALLBACK(onLanguageChanged), self);
  adw_preferences_group_add(ADW_PREFERENCES_GROUP(settings_group), GTK_WIDGET(lang_row));

  GtkWidget *settings_clamp = adw_clamp_new();
  adw_clamp_set_maximum_size(ADW_CLAMP(settings_clamp), 600);
  adw_clamp_set_child(ADW_CLAMP(settings_clamp), GTK_WIDGET(settings_group));
  gtk_widget_set_valign(settings_clamp, GTK_ALIGN_FILL);
  gtk_widget_set_vexpand(settings_clamp, FALSE);
  gtk_widget_set_margin_top(settings_clamp, 12);
  gtk_widget_set_margin_bottom(settings_clamp, 12);
  gtk_widget_set_margin_start(settings_clamp, 12);
  gtk_widget_set_margin_end(settings_clamp, 12);

  GtkWidget *settings_scroll = gtk_scrolled_window_new();
  gtk_scrolled_window_set_child(GTK_SCROLLED_WINDOW(settings_scroll), settings_clamp);

  self->content_stack = gtk_stack_new();
  gtk_stack_set_transition_type(GTK_STACK(self->content_stack), GTK_STACK_TRANSITION_TYPE_CROSSFADE);
  gtk_stack_add_named(GTK_STACK(self->content_stack), empty_page, "empty");
  gtk_stack_add_named(GTK_STACK(self->content_stack), info_scroll, "general");
  gtk_stack_add_named(GTK_STACK(self->content_stack), music_box, "music");
  gtk_stack_add_named(GTK_STACK(self->content_stack), settings_scroll, "settings");
  gtk_stack_add_named(GTK_STACK(self->content_stack),
                      makeStubPage("folder-videos-symbolic", tr("Фильмы"),
                                     tr("Просмотр и синхронизация фильмов появятся позже.")),
                      "movies");
  gtk_stack_add_named(GTK_STACK(self->content_stack),
                      makeStubPage("tv-symbolic", tr("ТВ-шоу"),
                                     tr("Просмотр и синхронизация ТВ-шоу появятся позже.")),
                      "tvshows");
  gtk_stack_add_named(GTK_STACK(self->content_stack),
                      makeStubPage("folder-pictures-symbolic", tr("Фото"),
                                     tr("Просмотр и синхронизация фотографий появятся позже.")),
                      "photos");
  gtk_stack_add_named(GTK_STACK(self->content_stack),
                      makeStubPage("folder-symbolic", tr("Файлы"),
                                     tr("Обмен файлами с устройством (AFC) появится позже.")),
                      "files");
  gtk_stack_set_visible_child_name(GTK_STACK(self->content_stack), "empty");
  g_object_add_weak_pointer(G_OBJECT(self->content_stack), (gpointer *)&self->content_stack);

  self->header_icon = gtk_image_new_from_icon_name("phone-apple-iphone-symbolic");
  gtk_image_set_pixel_size(GTK_IMAGE(self->header_icon), 24);

  self->header_title = adw_window_title_new(tr("Устройство не выбрано"), NULL);

  self->battery_icon = gtk_image_new();
  gtk_image_set_pixel_size(GTK_IMAGE(self->battery_icon), 16);
  self->battery_label = gtk_label_new(NULL);
  self->battery_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 6);
  gtk_box_append(GTK_BOX(self->battery_box), self->battery_icon);
  gtk_box_append(GTK_BOX(self->battery_box), self->battery_label);
  gtk_widget_set_margin_start(self->battery_box, 12);
  gtk_widget_set_visible(self->battery_box, FALSE);

  GtkWidget *title_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 10);
  gtk_box_append(GTK_BOX(title_box), self->header_icon);
  gtk_box_append(GTK_BOX(title_box), self->header_title);
  gtk_box_append(GTK_BOX(title_box), self->battery_box);

  GtkWidget *content_header = adw_header_bar_new();
  adw_header_bar_set_title_widget(ADW_HEADER_BAR(content_header), title_box);

  // Меню приложения: «О программе» (GNOME HIG — гамбургер в правом углу)
  GMenu *app_menu = g_menu_new();
  g_menu_append(app_menu, tr("О программе"), "win.about");
  GtkMenuButton *menu_btn = GTK_MENU_BUTTON(gtk_menu_button_new());
  gtk_menu_button_set_icon_name(menu_btn, "open-menu-symbolic");
  gtk_menu_button_set_menu_model(menu_btn, G_MENU_MODEL(app_menu));
  gtk_widget_set_tooltip_text(GTK_WIDGET(menu_btn), tr("Главное меню"));
  g_object_unref(app_menu);
  adw_header_bar_pack_end(ADW_HEADER_BAR(content_header), GTK_WIDGET(menu_btn));

  self->storage_area = gtk_drawing_area_new();
  gtk_widget_set_size_request(self->storage_area, -1, 26);
  gtk_widget_set_hexpand(self->storage_area, TRUE);
  gtk_widget_set_valign(self->storage_area, GTK_ALIGN_CENTER);
  gtk_drawing_area_set_draw_func(GTK_DRAWING_AREA(self->storage_area),
                                 storageBarDraw, self, NULL);
  // Подсказка с точным размером сегмента под курсором
  GtkEventController *storage_motion = gtk_event_controller_motion_new();
  g_signal_connect(storage_motion, "motion", G_CALLBACK(onStorageMotion), self);
  gtk_widget_add_controller(self->storage_area, storage_motion);
  g_object_add_weak_pointer(G_OBJECT(self->storage_area), (gpointer *)&self->storage_area);

  GtkWidget *storage_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 12);
  gtk_widget_set_margin_top(storage_box, 10);
  gtk_widget_set_margin_bottom(storage_box, 10);
  gtk_widget_set_margin_start(storage_box, 12);
  gtk_widget_set_margin_end(storage_box, 12);
  gtk_box_append(GTK_BOX(storage_box), self->storage_area);
  GtkWidget *sync_btn = gtk_button_new_with_label(tr("Синхронизировать"));
  g_signal_connect(sync_btn, "clicked", G_CALLBACK(onSyncClicked), self);
  gtk_box_append(GTK_BOX(storage_box), sync_btn);

  GtkWidget *content_tb = adw_toolbar_view_new();
  adw_toolbar_view_add_top_bar(ADW_TOOLBAR_VIEW(content_tb), content_header);
  adw_toolbar_view_set_content(ADW_TOOLBAR_VIEW(content_tb), self->content_stack);
  adw_toolbar_view_add_bottom_bar(ADW_TOOLBAR_VIEW(content_tb), storage_box);

  AdwNavigationPage *content_page = adw_navigation_page_new(content_tb, tr("Информация"));

  self->split = adw_navigation_split_view_new();
  adw_navigation_split_view_set_sidebar(ADW_NAVIGATION_SPLIT_VIEW(self->split), sidebar_page);
  adw_navigation_split_view_set_content(ADW_NAVIGATION_SPLIT_VIEW(self->split), content_page);
  adw_navigation_split_view_set_min_sidebar_width(ADW_NAVIGATION_SPLIT_VIEW(self->split), 240);
  adw_navigation_split_view_set_max_sidebar_width(ADW_NAVIGATION_SPLIT_VIEW(self->split), 300);
  g_object_add_weak_pointer(G_OBJECT(self->split), (gpointer *)&self->split);

  GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);

  self->toast_overlay = adw_toast_overlay_new();
  adw_toast_overlay_set_child(ADW_TOAST_OVERLAY(self->toast_overlay), self->split);
  gtk_widget_set_vexpand(self->toast_overlay, TRUE);
  g_object_add_weak_pointer(G_OBJECT(self->toast_overlay), (gpointer *)&self->toast_overlay);
  gtk_box_append(GTK_BOX(main_box), self->toast_overlay);

  GtkWidget *log_frame = gtk_frame_new(tr("Логи отладки"));
  gtk_widget_set_margin_start(log_frame, 12);
  gtk_widget_set_margin_end(log_frame, 12);
  gtk_widget_set_margin_bottom(log_frame, 12);

  self->log_view = gtk_text_view_new();
  gtk_text_view_set_editable(GTK_TEXT_VIEW(self->log_view), FALSE);
  gtk_text_view_set_monospace(GTK_TEXT_VIEW(self->log_view), TRUE);
  gtk_text_view_set_wrap_mode(GTK_TEXT_VIEW(self->log_view), GTK_WRAP_WORD_CHAR);
  g_object_add_weak_pointer(G_OBJECT(self->log_view), (gpointer *)&self->log_view);

  GtkWidget *scrolled_log = gtk_scrolled_window_new();
  gtk_scrolled_window_set_child(GTK_SCROLLED_WINDOW(scrolled_log), self->log_view);
  gtk_widget_set_size_request(scrolled_log, -1, 160);

  gtk_frame_set_child(GTK_FRAME(log_frame), scrolled_log);
  gtk_box_append(GTK_BOX(main_box), log_frame);

  adw_application_window_set_content(ADW_APPLICATION_WINDOW(window), main_box);
  g_object_add_weak_pointer(G_OBJECT(window), (gpointer *)&self->window);

  g_signal_connect(self->refresh_btn, "clicked", G_CALLBACK(onRefreshClicked), self);

  GSimpleAction *refresh_action = g_simple_action_new("refresh", NULL);
  g_signal_connect(refresh_action, "activate", G_CALLBACK(onRefreshAction), self);
  g_action_map_add_action(G_ACTION_MAP(window), G_ACTION(refresh_action));
  g_object_unref(refresh_action);

  GSimpleAction *about_action = g_simple_action_new("about", NULL);
  g_signal_connect(about_action, "activate", G_CALLBACK(onAboutAction), self);
  g_action_map_add_action(G_ACTION_MAP(window), G_ACTION(about_action));
  g_object_unref(about_action);

  const char *refresh_accels[] = {"<Ctrl>R", NULL};
  gtk_application_set_accels_for_action(GTK_APPLICATION(app), "win.refresh", refresh_accels);

  gtk_window_present(window);

  logMessage(tr("Программа запущена. Запускаем автосканирование USB..."));
  idevice_error_t ev_err = idevice_event_subscribe(deviceEventCb, self);
  if (ev_err != IDEVICE_E_SUCCESS)
    logMessage(tr("Не удалось подписаться на события USB (код %d) — обновляйте список кнопкой."), ev_err);
  startScan(self);

  signal(SIGSEGV, signalHandler);
  signal(SIGABRT, signalHandler);
}

static void
apple_application_class_init(AppleApplicationClass *klass)
{
  GApplicationClass *app_class = G_APPLICATION_CLASS(klass);
  app_class->activate = apple_application_activate;
}

static void
apple_application_init(AppleApplication *self)
{
  (void)self;
  appSettingsLoad(self);
  g_set_application_name("Apple Devices");
}

G_DEFINE_FINAL_TYPE(AppleApplication, apple_application, ADW_TYPE_APPLICATION)

AppleApplication *
apple_application_new(void)
{
  return g_object_new(APPLE_TYPE_APPLICATION,
                      "application-id", "com.saitexna.appleDevices",
                      "flags", G_APPLICATION_DEFAULT_FLAGS,
                      NULL);
}
