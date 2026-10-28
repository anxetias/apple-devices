#include "application.h"
#include <libimobiledevice/libimobiledevice.h>
#include <libimobiledevice/lockdown.h>
#include <libimobiledevice/afc.h>
#include <tag_c.h>
#include <sqlite3.h>
#include <pango/pangocairo.h>
#include <glib/gstdio.h>
#include <signal.h>
#include <execinfo.h>
#include <unistd.h>

/* Диаграмма накопителя */
#define DEMO_TOTAL_GB 128  // «объём накопителя» для демо-данных
#define DEMO_USED_PCT 47   // «занято» для демо-данных

/* Музыка: корень медиатеки на устройстве (через AFC) и расширения аудио */
#define MUSIC_REMOTE_ROOT "/iTunes_Control/Music"
// Хранилище обложек реальной синхронизации: файлы <xx>/<sha1> внутри
// Originals, где xx — первые два символа хеша (бакет)
#define ARTWORK_REMOTE_ROOT "/iTunes_Control/iTunes/Artwork/Originals"
static const char *const AUDIO_EXTENSIONS[] = {
  ".mp3", ".m4a", ".aac", ".flac", ".wav", ".ogg", ".oga", ".opus", ".aiff", ".aif", ".wma", NULL
};

/* Самообъявление типа устройства — нужно полю AppleApplication ниже */
#define DEVICE_TYPE_INFO (device_info_get_type())
G_DECLARE_FINAL_TYPE(DeviceInfo, device_info, DEVICE, INFO, GObject)

/* Тип трека медиатеки — нужен полю AppleApplication ниже */
#define MUSIC_TRACK_TYPE (music_track_get_type())
G_DECLARE_FINAL_TYPE(MusicTrack, music_track, MUSIC, TRACK, GObject)

struct _AppleApplication {
  AdwApplication parent_instance;
  GtkWindow *window;

  /* Левая панель: устройства + разделы */
  GtkWidget *split;         // AdwNavigationSplitView
  GtkWidget *sidebar_stack; // статус / список устройств
  GtkWidget *status_page;   // «Устройства не найдены»
  GtkWidget *sidebar_list;  // GtkListBox с устройствами (bind_model)
  GtkWidget *nav_list;      // GtkListBox с разделами (Обзор, Музыка...)
  GtkWidget *settings_list; // GtkListBox со строкой «Настройки приложения»
  GtkWidget *refresh_btn;

  /* Правая панель */
  GtkWidget *content_stack;   // «Устройство не выбрано» / Обзор / разделы
  GtkWidget *header_icon;     // иконка устройства в шапке
  GtkWidget *header_title;    // AdwWindowTitle: имя + ёмкость
  GtkWidget *battery_box;     // иконка + % батареи в шапке
  GtkWidget *battery_icon;
  GtkWidget *battery_label;
  GtkWidget *row_device;
  GtkWidget *row_model;
  GtkWidget *row_os;
  GtkWidget *row_serial;
  GtkWidget *row_udid;
  GtkWidget *row_battery;
  GtkWidget *toast_overlay; // AdwToastOverlay

  /* Логи */
  GtkWidget *log_view;

  /* Данные */
  GListStore *device_store; // постоянный store — владелец данных сайдбара
  DeviceInfo *selected;     // выбранное устройство (заимствовано из store)
  gboolean scanning;
  gboolean rescan_pending;  // устройство подключили, пока шло сканирование

  /* Музыка (раздел «Музыка») */
  GListStore *music_store;    // треки выбранного устройства
  GtkWidget *music_stack;     // статус / список треков
  GtkWidget *music_status;    // AdwStatusPage («Загружаем…», «Медиатека пуста»)
  GtkWidget *music_list;      // GtkListBox с треками
  GtkWidget *music_import_btn;
  GtkWidget *music_export_btn;
  GtkWidget *music_delete_btn;
  GtkWidget *music_refresh_btn;
  MusicTrack *selected_track; // выбранный трек (заимствован из music_store)
  gboolean music_busy;        // идёт любая музыкальная операция
  GHashTable *tag_cache;      // кэш тегов на сеанс: "путь|размер" -> MusicTrack
  GtkWidget *music_search;    // GtkSearchEntry — поиск по трекам
  GtkWidget *music_sort;      // GtkDropDown — режим сортировки
  char *music_filter;         // текст поиска в casefold (NULL — без фильтра)
  guint music_sort_mode;      // 0=как на устройстве, 1=название, 2=исполнитель, 3=альбом, 4=длительность
  guint music_visible;        // сколько треков проходит фильтр
  GtkCustomFilter *music_filter_obj; // фильтр модели треков (владеет filter model)
  GtkCustomSorter *music_sorter;     // сортировка модели треков

  /* Диаграмма накопителя (нижняя панель) */
  GtkWidget *storage_area;
  guint64 storage_total;    // байт, 0 = данных нет
  guint64 storage_used;     // байт занято
  double storage_used_frac; // 0..1
  gboolean storage_demo;    // данные демо-подменяются
};

G_DEFINE_FINAL_TYPE(AppleApplication, apple_application, ADW_TYPE_APPLICATION)

// Глобальная ссылка для логгера (костыль для простоты, в реальном проекте — через контекст приложения)
static AppleApplication *global_app = NULL;

/* --- Логирование --- */

// Добавляет сообщение в лог-виджет.
// ВАЖНО: вызывать только из главного потока (GTK не потокобезопасен).
static void
append_log_to_view(const char *msg)
{
  if (!global_app || !global_app->log_view || !global_app->split) {
    // Виджетов нет (не созданы или окно уже уничтожено) — печатаем только в stdout
    return;
  }

  GtkTextBuffer *buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(global_app->log_view));
  GtkTextIter end;
  gtk_text_buffer_get_end_iter(buffer, &end);

  // Добавляем время
  GDateTime *now = g_date_time_new_now_local();
  char *time_str = g_date_time_format(now, "%H:%M:%S");
  gtk_text_buffer_insert(buffer, &end, time_str, -1);
  g_free(time_str);
  g_date_time_unref(now);

  gtk_text_buffer_insert(buffer, &end, " ", -1);
  gtk_text_buffer_insert(buffer, &end, msg, -1);
  gtk_text_buffer_insert(buffer, &end, "\n", -1);

  // Автоскролл вниз
  GtkTextMark *mark = gtk_text_buffer_create_mark(buffer, NULL, &end, FALSE);
  gtk_text_view_scroll_mark_onscreen(GTK_TEXT_VIEW(global_app->log_view), mark);
  gtk_text_buffer_delete_mark(buffer, mark);
}

// GSource-callback: выполняется в главном потоке,
// владение msg не берём — память освободит GDestroyNotify (g_free).
static gboolean
log_message_idle(gpointer data)
{
  append_log_to_view(data);
  return G_SOURCE_REMOVE;
}

// Потокобезопасное логирование: из фонового потока сообщение передаётся
// в главный цикл через g_main_context_invoke.
static void
log_message(const char *format, ...)
{
  va_list args;
  va_start(args, format);
  char *msg = g_strdup_vprintf(format, args);
  va_end(args);

  g_print("%s\n", msg);

  if (!global_app || !global_app->log_view || !global_app->split) {
    g_free(msg);
    return;
  }

  GMainContext *ctx = g_main_context_default();
  if (g_main_context_is_owner(ctx)) {
    append_log_to_view(msg); // Мы в главном потоке
    g_free(msg);
  } else {
    g_main_context_invoke_full(NULL, G_PRIORITY_DEFAULT_IDLE,
                               log_message_idle, msg, g_free);
  }
}

/* --- Язык интерфейса (ru по умолчанию, en выбирается в настройках) --- */

// Текущий язык: NULL или "ru" — русский, "en" — английский.
// Меняется только при старте (из файла настроек), чтобы UI не смешивал языки.
static char *app_language = NULL;

typedef struct {
  const char *ru;
  const char *en;
} TrEntry;

// Таблица переводов: msgid — исходная русская строка
static const TrEntry TR_TABLE[] = {
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
};

// Перевод строки интерфейса: для en — из таблицы, для ru — как есть.
// Чистая функция без выделения памяти (безопасна и в обработчике сигналов).
static const char *
tr(const char *ru)
{
  if (!app_language || app_language[0] != 'e')
    return ru; // русский — исходные строки
  for (gsize i = 0; i < G_N_ELEMENTS(TR_TABLE); i++)
    if (g_strcmp0(TR_TABLE[i].ru, ru) == 0)
      return TR_TABLE[i].en;
  return ru; // перевода нет — возвращаем оригинал
}

// Путь к файлу настроек: ~/.config/apple-devices/settings.ini
static char *
app_settings_path(void)
{
  return g_build_filename(g_get_user_config_dir(), "apple-devices", "settings.ini", NULL);
}

// Загрузка языка из настроек (один раз при старте, до построения UI)
static void
app_settings_load(void)
{
  char *path = app_settings_path();
  GKeyFile *kf = g_key_file_new();
  if (g_key_file_load_from_file(kf, path, G_KEY_FILE_NONE, NULL)) {
    char *lang = g_key_file_get_string(kf, "general", "language", NULL);
    if (lang && (g_strcmp0(lang, "ru") == 0 || g_strcmp0(lang, "en") == 0)) {
      g_free(app_language);
      app_language = lang; // забираем владение строкой
    } else {
      g_free(lang);
    }
  }
  g_key_file_free(kf);
  g_free(path);
}

// Сохранение выбранного языка в настройки
static void
app_settings_save_language(const char *lang)
{
  char *dir = g_build_filename(g_get_user_config_dir(), "apple-devices", NULL);
  g_mkdir_with_parents(dir, 0755);
  g_free(dir);

  char *path = app_settings_path();
  GKeyFile *kf = g_key_file_new();
  g_key_file_set_string(kf, "general", "language", lang);
  gsize len = 0;
  char *data = g_key_file_to_data(kf, &len, NULL);
  g_file_set_contents(path, data, (gssize)len, NULL);
  g_free(data);
  g_key_file_free(kf);
  g_free(path);
}

// Всплывающее уведомление + запись в лог (для заглушек и результатов операций)
static void
show_stub_toast(AppleApplication *self, const char *what)
{
  char *msg = g_strdup_printf(tr("Заглушка: %s ещё не реализовано"), what);
  log_message("%s", msg);
  if (self->toast_overlay)
    adw_toast_overlay_add_toast(ADW_TOAST_OVERLAY(self->toast_overlay), adw_toast_new(msg));
  g_free(msg);
}

// GSource-callback: обновляет подпись статуса музыки в главном потоке
static gboolean
music_progress_idle(gpointer data)
{
  if (global_app && global_app->music_status)
    adw_status_page_set_description(ADW_STATUS_PAGE(global_app->music_status), data);
  return G_SOURCE_REMOVE;
}

// Прогресс сканирования медиатеки из фонового потока (потокобезопасно)
static void
music_progress(const char *format, ...)
{
  va_list args;
  va_start(args, format);
  char *msg = g_strdup_vprintf(format, args);
  va_end(args);
  g_main_context_invoke_full(NULL, G_PRIORITY_DEFAULT_IDLE, music_progress_idle, msg, g_free);
}

// Обработчик сигналов (для отлова Segfault). Только async-signal-safe операции.
static void
signal_handler(int sig)
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

  write(STDERR_FILENO, banner, pos);
  backtrace_symbols_fd(array, size, STDERR_FILENO);
  _exit(1);
}

/* --- GObject для данных устройства --- */

struct _DeviceInfo {
  GObject parent_instance;
  char *name;
  char *version;
  char *udid;
  char *product_type; // "iPhone12,1", "iPad13,18", "Watch6,10"...
  char *serial_number;
  guint64 total_capacity; // байт, 0 если неизвестно
  guint64 disk_usage;     // байт занято, 0 если неизвестно
  int battery_percent;    // 0..100, -1 если неизвестно
};

G_DEFINE_TYPE(DeviceInfo, device_info, G_TYPE_OBJECT)

static void
device_info_finalize(GObject *object)
{
  DeviceInfo *self = DEVICE_INFO(object);
  g_free(self->name);
  g_free(self->version);
  g_free(self->udid);
  g_free(self->product_type);
  g_free(self->serial_number);
  G_OBJECT_CLASS(device_info_parent_class)->finalize(object);
}

static void
device_info_class_init(DeviceInfoClass *klass)
{
  GObjectClass *object_class = G_OBJECT_CLASS(klass);
  object_class->finalize = device_info_finalize;
}

static void
device_info_init(DeviceInfo *self)
{
  self->battery_percent = -1;
}

/* --- GObject для трека медиатеки --- */

struct _MusicTrack {
  GObject parent_instance;
  char *path;        // путь на устройстве (AFC), например /iTunes_Control/Music/F00/x.m4a
  char *title;
  char *artist;
  char *album;
  guint duration;    // длительность, секунды
  guint64 size;      // размер файла, байт
  guint scan_order;  // порядок при скане (для сортировки «как на устройстве»)
  GBytes *cover;     // байты встроенной обложки (jpeg/png), NULL если нет
  char *cover_mime;  // "image/jpeg" / "image/png"
};

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

// Копирует теги и обложку из одного трека в другой (для кэша)
static void
music_track_copy_tags(MusicTrack *dst, const MusicTrack *src)
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

/* --- Иконки устройств ---
 * По HIG: в списках используются символические иконки из установленной темы,
 * наличие каждой проверяем через gtk_icon_theme_has_icon. */

// Имя иконки по ProductType из lockdown
static const char *
device_icon_from_product_type(const char *product_type)
{
  if (!product_type)
    return NULL;

  if (g_str_has_prefix(product_type, "iPhone"))
    return "phone-apple-iphone-symbolic";
  if (g_str_has_prefix(product_type, "iPad"))
    return "computer-apple-ipad-symbolic";
  if (g_str_has_prefix(product_type, "iPod"))
    return "multimedia-player-apple-ipod-touch-symbolic";
  if (g_str_has_prefix(product_type, "AppleTV"))
    return "tv-symbolic";
  if (g_str_has_prefix(product_type, "Watch"))
    return "phone-symbolic"; // иконки часов в теме нет — ближайший fallback

  return NULL;
}

// Fallback по имени устройства ("iPad (Pavel)" и т.п.)
static const char *
device_icon_from_name(const char *name)
{
  if (!name)
    return NULL;

  if (g_strstr_len(name, -1, "iPad"))
    return "computer-apple-ipad-symbolic";
  if (g_strstr_len(name, -1, "iPhone"))
    return "phone-apple-iphone-symbolic";
  if (g_strstr_len(name, -1, "iPod"))
    return "multimedia-player-apple-ipod-touch-symbolic";

  return NULL;
}

// Как называется ОС для этого типа устройства (для подзаголовков)
static const char *
os_label_for_product_type(const char *product_type)
{
  if (!product_type)
    return "iOS";

  if (g_str_has_prefix(product_type, "iPad"))
    return "iPadOS";
  if (g_str_has_prefix(product_type, "Watch"))
    return "watchOS";
  if (g_str_has_prefix(product_type, "AppleTV"))
    return "tvOS";

  return "iOS";
}

// Выбираем максимально конкретную иконку, проверяя, что она есть в теме.
static const char *
device_icon_for(const DeviceInfo *info)
{
  GtkIconTheme *theme = gtk_icon_theme_get_for_display(gdk_display_get_default());

  const char *candidates[] = {
    device_icon_from_product_type(info->product_type),
    device_icon_from_name(info->name),
    "phone-symbolic",
    "computer-symbolic",
  };

  for (guint i = 0; i < G_N_ELEMENTS(candidates); i++) {
    if (candidates[i] && gtk_icon_theme_has_icon(theme, candidates[i]))
      return candidates[i];
  }

  return NULL;
}

// Иконка батареи по проценту: battery-level-0..100 с шагом 10.
// buf — буфер вызывающего для имени иконки (возвращаем указатель на него
// или на статичное имя из темы).
static const char *
battery_icon_for(int percent, char *buf, gsize buf_len)
{
  GtkIconTheme *theme = gtk_icon_theme_get_for_display(gdk_display_get_default());

  int level = ((percent + 5) / 10) * 10;
  if (level < 0)
    level = 0;
  if (level > 100)
    level = 100;

  g_snprintf(buf, buf_len, "battery-level-%d-symbolic", level);
  if (gtk_icon_theme_has_icon(theme, buf))
    return buf;

  return gtk_icon_theme_has_icon(theme, "battery-symbolic") ? "battery-symbolic" : NULL;
}

/* --- Чтение plist-значений --- */

// Число из plist-узла (int/uint/real/string), -1 если значения нет
static int
plist_to_int(plist_t node)
{
  if (!node)
    return -1;

  switch (plist_get_node_type(node)) {
  case PLIST_UINT: {
    uint64_t v = 0;
    plist_get_uint_val(node, &v);
    return (int)v;
  }
  case PLIST_REAL: {
    double d = 0;
    plist_get_real_val(node, &d);
    return (int)d;
  }
  case PLIST_STRING: {
    char *s = NULL;
    plist_get_string_val(node, &s);
    int v = s ? (int)g_ascii_strtoll(s, NULL, 10) : -1;
    g_free(s);
    return v;
  }
  default:
    return -1;
  }
}

/* --- Диаграмма накопителя (нижняя панель, сегменты с подписями) ---

   Объём и занятое место берутся из lockdown (TotalDiskCapacity/DiskUsage),
   а на новых iOS — через AFC (FSTotalBytes/FSFreeBytes, media-раздел).
   Если данных нет — демо-значения, честно помеченные «(демо)». */

// Скруглённый прямоугольник (путь)
static void
rounded_rect_path(cairo_t *cr, double x, double y, double w, double h, double r)
{
  cairo_new_sub_path(cr);
  cairo_arc(cr, x + w - r, y + r, r, -G_PI / 2, 0);
  cairo_arc(cr, x + w - r, y + h - r, r, 0, G_PI / 2);
  cairo_arc(cr, x + r, y + h - r, r, G_PI / 2, G_PI);
  cairo_arc(cr, x + r, y + r, r, G_PI, 3 * G_PI / 2);
  cairo_close_path(cr);
}

// Подпись сегмента: текст шрифтом темы по центру, если влезает в сегмент
static void
draw_segment_label(cairo_t *cr, PangoContext *pctx, double cx, double cy,
                   const char *text, const GdkRGBA *color, double max_w)
{
  PangoLayout *layout = pango_layout_new(pctx);
  PangoAttrList *attrs = pango_attr_list_new();
  pango_attr_list_insert(attrs, pango_attr_size_new(11 * PANGO_SCALE));
  pango_layout_set_attributes(layout, attrs);
  pango_attr_list_unref(attrs); // layout держит свой ref
  pango_layout_set_text(layout, text, -1);

  int tw = 0, th = 0;
  pango_layout_get_pixel_size(layout, &tw, &th);
  if (tw <= max_w) {
    cairo_set_source_rgba(cr, color->red, color->green, color->blue, color->alpha);
    cairo_move_to(cr, cx - tw / 2.0, cy - th / 2.0);
    pango_cairo_show_layout(cr, layout);
  }
  g_object_unref(layout);
}

static void
storage_bar_draw(GtkDrawingArea *area, cairo_t *cr, int width, int height, gpointer user_data)
{
  AppleApplication *self = APPLE_APPLICATION(user_data);

  double r = 6.0;
  if (r > height / 2.0)
    r = height / 2.0;

  // Дорожка (фон / свободное место)
  rounded_rect_path(cr, 0.5, 0.5, width - 1.0, height - 1.0, r);
  cairo_set_source_rgba(cr, 0.5, 0.5, 0.5, 0.25);
  cairo_fill(cr);

  if (self->storage_total == 0)
    return; // данных нет — рисуем только дорожку

  // Занятая часть — акцентный цвет, обрезаем по скруглённой дорожке
  double used_w = width * CLAMP(self->storage_used_frac, 0.0, 1.0);
  cairo_save(cr);
  rounded_rect_path(cr, 0.5, 0.5, width - 1.0, height - 1.0, r);
  cairo_clip(cr);
  cairo_rectangle(cr, 0, 0, used_w, height);
  cairo_set_source_rgba(cr, 0.208, 0.518, 0.894, 1.0); // #3584e4, Adwaita blue
  cairo_fill(cr);
  cairo_restore(cr);

  // Подписи на сегментах (шрифт темы, цвет темы для свободной части)
  PangoContext *pctx = gtk_widget_get_pango_context(GTK_WIDGET(area));
  GdkRGBA fg;
  gtk_widget_get_color(GTK_WIDGET(area), &fg);
  GdkRGBA white = {1.0, 1.0, 1.0, 1.0};

  char *txt = g_strdup_printf(tr("Занято · %s%s"),
                              g_format_size(self->storage_used),
                              self->storage_demo ? tr(" (демо)") : "");
  draw_segment_label(cr, pctx, used_w / 2.0, height / 2.0, txt, &white, used_w - 12);
  g_free(txt);

  txt = g_strdup_printf(tr("Свободно · %s"),
                        g_format_size(self->storage_total - self->storage_used));
  draw_segment_label(cr, pctx, used_w + (width - used_w) / 2.0, height / 2.0,
                     txt, &fg, width - used_w - 12);
  g_free(txt);
}

/* ---------------------------------------------- */

// Фоновый поток: без обращений к виджетам GTK. UI обновляется в колбэке.
static void
scan_devices_thread(GTask *task, gpointer source_object, gpointer task_data, GCancellable *cancellable)
{
  (void)source_object;
  (void)cancellable;

  GListStore *store = G_LIST_STORE(task_data);
  char **devices = NULL;
  int count = 0;

  log_message(tr("Начинаем сканирование USB..."));

  if (idevice_get_device_list(&devices, &count) < 0) {
    log_message(tr("Ошибка: idevice_get_device_list вернула ошибку."));
    g_task_return_boolean(task, FALSE);
    return;
  }

  log_message(tr("Найдено устройств в системе: %d"), count);

  for (int i = 0; i < count; i++) {
    idevice_t device = NULL;
    lockdownd_client_t client = NULL;

    log_message(tr("Обработка UDID: %s"), devices[i]);

    if (idevice_new(&device, devices[i]) != IDEVICE_E_SUCCESS) {
      log_message(tr("  -> Ошибка: idevice_new не смог создать устройство."));
      continue;
    }

    if (lockdownd_client_new_with_handshake(device, &client, "AppleDeviceManager") == LOCKDOWN_E_SUCCESS) {
      log_message(tr("  -> Handshake успешен."));
      plist_t node_name = NULL;
      plist_t node_ver = NULL;
      plist_t node_type = NULL;
      plist_t node_serial = NULL;
      plist_t node_total = NULL;
      plist_t node_disk = NULL;
      plist_t node_batt = NULL;
      char *name_str = NULL;
      char *ver_str = NULL;
      char *type_str = NULL;
      char *serial_str = NULL;

      lockdownd_get_value(client, NULL, "DeviceName", &node_name);
      lockdownd_get_value(client, NULL, "ProductVersion", &node_ver);
      lockdownd_get_value(client, NULL, "ProductType", &node_type);
      lockdownd_get_value(client, NULL, "SerialNumber", &node_serial);
      lockdownd_get_value(client, NULL, "TotalDiskCapacity", &node_total);
      lockdownd_get_value(client, NULL, "DiskUsage", &node_disk);
      lockdownd_get_value(client, "com.apple.mobile.battery", "BatteryCurrentCapacity", &node_batt);

      DeviceInfo *info = g_object_new(DEVICE_TYPE_INFO, NULL);
      info->udid = g_strdup(devices[i]);

      if (node_name) {
        plist_get_string_val(node_name, &name_str);
        info->name = g_strdup(name_str ? name_str : "Unknown Device");
        g_free(name_str);
        plist_free(node_name);
      } else {
        info->name = g_strdup("Unknown Device");
      }

      if (node_ver) {
        plist_get_string_val(node_ver, &ver_str);
        info->version = g_strdup(ver_str ? ver_str : "N/A");
        g_free(ver_str);
        plist_free(node_ver);
      } else {
        info->version = g_strdup("N/A");
      }

      if (node_type) {
        plist_get_string_val(node_type, &type_str); // NULL, если значения нет
        info->product_type = g_strdup(type_str);
        g_free(type_str);
        plist_free(node_type);
      }

      if (node_serial) {
        plist_get_string_val(node_serial, &serial_str);
        info->serial_number = g_strdup(serial_str);
        g_free(serial_str);
        plist_free(node_serial);
      }

      if (node_total) {
        // Значение может прийти и числом, и строкой — обрабатываем оба варианта
        if (plist_get_node_type(node_total) == PLIST_UINT) {
          plist_get_uint_val(node_total, &info->total_capacity);
        } else {
          char *s = NULL;
          plist_get_string_val(node_total, &s);
          if (s)
            info->total_capacity = g_ascii_strtoull(s, NULL, 10);
          g_free(s);
        }
        plist_free(node_total);
      }

      if (node_disk) {
        if (plist_get_node_type(node_disk) == PLIST_UINT) {
          plist_get_uint_val(node_disk, &info->disk_usage);
        } else {
          char *s = NULL;
          plist_get_string_val(node_disk, &s);
          if (s)
            info->disk_usage = g_ascii_strtoull(s, NULL, 10);
          g_free(s);
        }
        plist_free(node_disk);
      }

      // Фоллбек: новые iOS не отдают TotalDiskCapacity/DiskUsage через
      // lockdown. Берём данные через AFC (сервис файлового обмена):
      // FSTotalBytes/FSFreeBytes — media-раздел с пользовательскими данными,
      // примерно то, что iOS показывает в «Настройки → Хранилище».
      if (info->total_capacity == 0) {
        afc_client_t afc = NULL;
        lockdownd_service_descriptor_t afc_service = NULL;

        // Поднимаем сервис AFC через уже установленный lockdown-сеанс
        if (lockdownd_start_service(client, "com.apple.afc", &afc_service) == LOCKDOWN_E_SUCCESS &&
            afc_client_new(device, afc_service, &afc) == AFC_E_SUCCESS) {
          char **afc_keys = NULL;
          if (afc_get_device_info(afc, &afc_keys) == AFC_E_SUCCESS && afc_keys) {
            guint64 fs_total = 0;
            guint64 fs_free = 0;

            // Массив — NULL-терминированный список пар «ключ, значение»
            for (char **kv = afc_keys; kv[0] && kv[1]; kv += 2) {
              if (g_strcmp0(kv[0], "FSTotalBytes") == 0)
                fs_total = g_ascii_strtoull(kv[1], NULL, 10);
              else if (g_strcmp0(kv[0], "FSFreeBytes") == 0)
                fs_free = g_ascii_strtoull(kv[1], NULL, 10);
            }

            if (fs_total > 0) {
              info->total_capacity = fs_total;
              info->disk_usage = fs_total > fs_free ? fs_total - fs_free : 0;
              log_message(tr("  -> Накопитель (AFC, media-раздел): занято %"
                          G_GUINT64_FORMAT " из %" G_GUINT64_FORMAT " байт"),
                          info->disk_usage, info->total_capacity);
            }

            // Память под строки выделял сам libimobiledevice (malloc) —
            // освобождаем парным free()
            for (char **kv = afc_keys; *kv; kv++)
              free(*kv);
            free(afc_keys);
          } else {
            log_message(tr("  -> AFC: не удалось получить информацию о разделе."));
          }
          afc_client_free(afc);
        } else {
          log_message(tr("  -> AFC: сервис не открылся (нужен Trust?)."));
        }

        if (afc_service)
          lockdownd_service_descriptor_free(afc_service);
      }

      // Уровень батареи (домен com.apple.mobile.battery)
      info->battery_percent = plist_to_int(node_batt);
      if (node_batt)
        plist_free(node_batt);
      if (info->battery_percent >= 0) {
        if (info->battery_percent > 100)
          info->battery_percent = 100;
        log_message(tr("  -> Батарея: %d%%"), info->battery_percent);
      }

      log_message(tr("  -> Имя: %s, Версия: %s"), info->name, info->version);
      log_message(tr("  -> Тип: %s"), info->product_type ? info->product_type : "N/A");
      if (info->total_capacity > 0)
        log_message(tr("  -> Накопитель: занято %" G_GUINT64_FORMAT
                    " из %" G_GUINT64_FORMAT " байт"),
                    info->disk_usage, info->total_capacity);
      else
        log_message(tr("  -> Накопитель: данные недоступны — будет показан демо-режим."));
      g_list_store_append(store, info);
      g_object_unref(info);

      lockdownd_client_free(client);
    } else {
      log_message(tr("  -> Ошибка: не удалось установить соединение (Trust?)."));
    }
    idevice_free(device);
  }
  idevice_device_list_free(devices);
  log_message(tr("Сканирование завершено."));
  g_task_return_boolean(task, TRUE);
}

/* --- Музыка: работа с медиатекой через AFC ---

   Музыка на устройстве лежит в /iTunes_Control/Music (media-раздел, сервис
   com.apple.afc). Реализовано на уровне файлов: экспорт (скачивание),
   импорт (загрузка), удаление и правка тегов/обложек через TagLib.
   ВАЖНО: стоковая iOS не перестраивает библиотеку «Музыки» по содержимому
   папки — файлы, добавленные через AFC, видны на накопителе, но не в
   приложении «Музыка» (для этого нужен полный sync-протокол iTunes). */

// Сеанс AFC: собственное подключение на каждую операцию (просто и надёжно)
typedef struct {
  idevice_t device;
  lockdownd_client_t lockdown;
  lockdownd_service_descriptor_t svc;
  afc_client_t afc;
} AfcSession;

static void
afc_session_close(AfcSession *s)
{
  if (s->afc)
    afc_client_free(s->afc);
  if (s->svc)
    lockdownd_service_descriptor_free(s->svc);
  if (s->lockdown)
    lockdownd_client_free(s->lockdown);
  if (s->device)
    idevice_free(s->device);
  memset(s, 0, sizeof *s);
}

static int
afc_session_open(AfcSession *s, const char *udid)
{
  memset(s, 0, sizeof *s);

  if (idevice_new(&s->device, udid) != IDEVICE_E_SUCCESS)
    return -1;
  if (lockdownd_client_new_with_handshake(s->device, &s->lockdown, "AppleDeviceManager") != LOCKDOWN_E_SUCCESS) {
    afc_session_close(s);
    return -1;
  }
  if (lockdownd_start_service(s->lockdown, "com.apple.afc", &s->svc) != LOCKDOWN_E_SUCCESS ||
      afc_client_new(s->device, s->svc, &s->afc) != AFC_E_SUCCESS) {
    afc_session_close(s);
    return -1;
  }
  return 0;
}

// Скачивает файл с устройства в локальный путь. 0 — успех.
static int
afc_download_file(afc_client_t afc, const char *remote, const char *local)
{
  uint64_t handle = 0;
  if (afc_file_open(afc, remote, AFC_FOPEN_RDONLY, &handle) != AFC_E_SUCCESS)
    return -1;

  FILE *f = fopen(local, "wb");
  if (!f) {
    afc_file_close(afc, handle);
    return -1;
  }

  char buf[65536];
  uint32_t got = 0;
  int rc = 0;
  while (afc_file_read(afc, handle, buf, sizeof buf, &got) == AFC_E_SUCCESS && got > 0) {
    if (fwrite(buf, 1, got, f) != got) {
      rc = -1;
      break;
    }
  }
  if (ferror(f))
    rc = -1;

  fclose(f);
  afc_file_close(afc, handle);
  return rc;
}

// Загружает локальный файл на устройство (каталог должен существовать). 0 — успех.
static int
afc_upload_file(afc_client_t afc, const char *local, const char *remote)
{
  FILE *f = fopen(local, "rb");
  if (!f)
    return -1;

  uint64_t handle = 0;
  if (afc_file_open(afc, remote, AFC_FOPEN_WRONLY, &handle) != AFC_E_SUCCESS) {
    fclose(f);
    return -1;
  }

  char buf[65536];
  size_t n;
  int rc = 0;
  while ((n = fread(buf, 1, sizeof buf, f)) > 0) {
    uint32_t written = 0;
    if (afc_file_write(afc, handle, buf, (uint32_t)n, &written) != AFC_E_SUCCESS || written != n) {
      rc = -1;
      break;
    }
  }

  fclose(f);
  afc_file_close(afc, handle);
  return rc;
}

/* --- База медиатеки iPhone (MediaLibrary.sqlitedb) ---
   Файл доступен через AFC и является обычной базой SQLite. iOS читает её
   при старте mediaserverd, поэтому правки подхватываются после перезагрузки
   устройства. Схема разобрана на живом устройстве (iOS 27): трек = строка в
   item + item_extra + сопутствующие таблицы; внешних ключей нет, целостность
   поддерживаем сами. PID-схема: item — простые числа, артист 0x2000000+n,
   жанр 0x3000000+n, альбом 0x4000000+n, альбом-артист 0x7000000+n. */

#define MEDIALIB_DB_PATH "/iTunes_Control/iTunes/MediaLibrary.sqlitedb"
#define MEDIALIB_DB_WAL  MEDIALIB_DB_PATH "-wal"
#define MEDIALIB_DB_SHM  MEDIALIB_DB_PATH "-shm"

// Строка трека в базе: всё, что нужно для каскадного удаления
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

// Скачать базу (+wal/shm) во временную папку. Возвращает путь к db (g_free), при ошибке NULL.
static char *
medialib_download(afc_client_t afc, const char *tmpdir, GError **error)
{
  char *db_path = g_build_filename(tmpdir, "MediaLibrary.sqlitedb", NULL);
  char *wal_path = g_strconcat(db_path, "-wal", NULL);
  char *shm_path = g_strconcat(db_path, "-shm", NULL);

  if (afc_download_file(afc, MEDIALIB_DB_PATH, db_path) != 0) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "не удалось скачать базу медиатеки");
    g_free(db_path);
    g_free(wal_path);
    g_free(shm_path);
    return NULL;
  }
  // wal/shm могут отсутствовать — не фатально
  if (afc_download_file(afc, MEDIALIB_DB_WAL, wal_path) != 0)
    g_unlink(wal_path);
  if (afc_download_file(afc, MEDIALIB_DB_SHM, shm_path) != 0)
    g_unlink(shm_path);

  g_free(wal_path);
  g_free(shm_path);
  return db_path;
}

// Резервная копия базы на комп: ~/.local/share/apple-devices/backups/.
// Возвращает путь к копии (g_free) или NULL при ошибке.
static char *
medialib_backup(const char *db_path)
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

// Выполнить SQL с одним 64-битным параметром. FALSE — ошибка (в error).
static gboolean
db_run_n(sqlite3 *db, const char *sql, gint64 v, GError **error)
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

// SELECT COUNT(*) с одним 64-битным параметром; -1 при ошибке.
static gint64
db_count_n(sqlite3 *db, const char *sql, gint64 v)
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

// Собрать текстовые значения столбца SELECT'а с одним 64-битным параметром.
static GPtrArray *
db_collect_text_n(sqlite3 *db, const char *sql, gint64 v)
{
  GPtrArray *arr = g_ptr_array_new_with_free_func(g_free);
  sqlite3_stmt *stmt = NULL;
  if (sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) != SQLITE_OK)
    return arr; // пустой список при ошибке — не фатально для обложек
  sqlite3_bind_int64(stmt, 1, v);
  while (sqlite3_step(stmt) == SQLITE_ROW) {
    const unsigned char *txt = sqlite3_column_text(stmt, 0);
    if (txt)
      g_ptr_array_add(arr, g_strdup((const char *)txt));
  }
  sqlite3_finalize(stmt);
  return arr;
}

// Найти файловый трек в базе по папке + имени файла + размеру.
// 1 — найден (row заполнена), 0 — не найден, -1 — ошибка.
static int
medialib_find_track(sqlite3 *db, const char *base_path, const char *location,
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

// Каскадное удаление трека из базы (в транзакции). Все связи вычищаются:
// строки трека, обложки-токены, опустевшие альбом/артисты/жанр/композитор
// и их ключи сортировки. FALSE — ошибка (в error), база откатывается.
static gboolean
medialib_delete_track(sqlite3 *db, const MedialibTrackRow *t, GError **error)
{
  GError *err = NULL;
  gint64 pid = t->item_pid;
  GPtrArray *tokens = NULL; // токены обложек удаляемых сущностей

  sqlite3_exec(db, "BEGIN IMMEDIATE", NULL, NULL, NULL);

  // 1) Строки трека во всех таблицах с item_pid
  static const char *tables[] = {
    "item_extra", "item_state", "item_stats", "item_playback", "item_store",
    "item_video", "item_search", "item_kvs", "container_item", "container_seed",
    "chapter", "lyrics", "booklet", "item",
  };
  for (size_t i = 0; i < G_N_ELEMENTS(tables); i++) {
    char *sql = g_strdup_printf("DELETE FROM %s WHERE item_pid=?", tables[i]);
    gboolean ok = db_run_n(db, sql, pid, &err);
    g_free(sql);
    if (!ok)
      goto fail;
  }

  // Ключи сортировки удаляемых сущностей (для чистки sort_map)
  gint64 kill_orders[8];
  int n_orders = 0;
  if (t->title_order)
    kill_orders[n_orders++] = t->title_order;

  // 2) Токены обложек трека: собираем и удаляем
  tokens = db_collect_text_n(db,
      "SELECT artwork_token FROM artwork_token WHERE entity_pid=? AND entity_type=0", pid);
  if (!db_run_n(db, "DELETE FROM artwork_token WHERE entity_pid=? AND entity_type=0", pid, &err))
    goto fail;

  // 3) Альбом опустел — удаляем его (и альбом-артиста, если опустел)
  if (db_count_n(db, "SELECT COUNT(*) FROM item WHERE album_pid=?", t->album_pid) == 0) {
    if (t->album_order)
      kill_orders[n_orders++] = t->album_order;
    GPtrArray *alb_tokens = db_collect_text_n(db,
        "SELECT artwork_token FROM artwork_token WHERE entity_pid=? AND entity_type=4",
        t->album_pid);
    for (guint i = 0; i < alb_tokens->len; i++)
      g_ptr_array_add(tokens, g_ptr_array_index(alb_tokens, i));
    // владение строками передаём tokens, сам массив просто удаляем
    alb_tokens->len = 0;
    g_ptr_array_unref(alb_tokens);

    if (!db_run_n(db, "DELETE FROM artwork_token WHERE entity_pid=? AND entity_type=4",
                  t->album_pid, &err) ||
        !db_run_n(db, "DELETE FROM album WHERE album_pid=?", t->album_pid, &err))
      goto fail;

    if (t->album_artist_pid &&
        db_count_n(db, "SELECT COUNT(*) FROM album WHERE album_artist_pid=?",
                   t->album_artist_pid) == 0) {
      if (t->album_artist_order)
        kill_orders[n_orders++] = t->album_artist_order;
      if (!db_run_n(db, "DELETE FROM album_artist WHERE album_artist_pid=?",
                    t->album_artist_pid, &err))
        goto fail;
    }
  }

  // 4) Артист опустел
  if (t->item_artist_pid &&
      db_count_n(db, "SELECT COUNT(*) FROM item WHERE item_artist_pid=?",
                 t->item_artist_pid) == 0) {
    if (t->item_artist_order)
      kill_orders[n_orders++] = t->item_artist_order;
    if (!db_run_n(db, "DELETE FROM item_artist WHERE item_artist_pid=?",
                  t->item_artist_pid, &err))
      goto fail;
  }

  // 5) Жанр опустел (genre_id=0 — «нет жанра», не трогаем)
  if (t->genre_id &&
      db_count_n(db, "SELECT COUNT(*) FROM item WHERE genre_id=?", t->genre_id) == 0) {
    if (t->genre_order)
      kill_orders[n_orders++] = t->genre_order;
    if (!db_run_n(db, "DELETE FROM genre WHERE genre_id=?", t->genre_id, &err))
      goto fail;
  }

  // 6) Композитор опустел
  if (t->composer_pid &&
      db_count_n(db, "SELECT COUNT(*) FROM item WHERE composer_pid=?",
                 t->composer_pid) == 0) {
    if (t->composer_order)
      kill_orders[n_orders++] = t->composer_order;
    if (!db_run_n(db, "DELETE FROM composer WHERE composer_pid=?", t->composer_pid, &err))
      goto fail;
  }

  // 7) Ключи сортировки удалённых сущностей
  for (int i = 0; i < n_orders; i++)
    if (!db_run_n(db, "DELETE FROM sort_map WHERE name_order=?", kill_orders[i], &err))
      goto fail;

  // 8) Обложки, осиротевшие после удаления токенов
  for (guint i = 0; i < tokens->len; i++) {
    const char *tok = g_ptr_array_index(tokens, i);
    if (db_count_n(db, "SELECT COUNT(*) FROM artwork_token WHERE artwork_token=?",
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

// Залить базу обратно: удалить на устройстве db+wal+shm, залить новый db.
static gboolean
medialib_upload(afc_client_t afc, const char *db_path, GError **error)
{
  // wal/shm удаляем молча (могут отсутствовать)
  afc_remove_path(afc, MEDIALIB_DB_WAL);
  afc_remove_path(afc, MEDIALIB_DB_SHM);
  if (afc_remove_path(afc, MEDIALIB_DB_PATH) != AFC_E_SUCCESS) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "не удалось удалить базу на устройстве");
    return FALSE;
  }
  if (afc_upload_file(afc, db_path, MEDIALIB_DB_PATH) != 0) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "не удалось загрузить базу на устройство");
    return FALSE;
  }
  return TRUE;
}

// Удалить временную папку с базой (db/wal/shm)
static void
medialib_cleanup_tmpdir(const char *tmpdir, const char *db_path)
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

// Вычистить трек из базы «Музыки». Возвращает: 1 — вычищено, 0 — записи в
// базе не было (файл не из синка), -1 — ошибка (база не тронута).
static int
music_clean_medialib(AfcSession *s, MusicTrack *track)
{
  // Полный путь AFC: /iTunes_Control/Music/F77/ZYDG.mp3
  // В базе: base_location.path = "iTunes_Control/Music/F77" (без ведущего /),
  // item_extra.location = "ZYDG.mp3"
  const char *full = track->path;
  const char *slash = strrchr(full, '/');
  if (!slash)
    return -1;
  char *base_path = g_strndup(full + 1, (gsize)(slash - full - 1));
  const char *location = slash + 1;

  log_message(tr("Музыка: чистим запись в базе «Музыки»…"));

  GError *err = NULL;
  int result = -1;
  char *tmpdir = g_dir_make_tmp("apple-devices-XXXXXX", NULL);
  char *db_path = tmpdir ? medialib_download(s->afc, tmpdir, &err) : NULL;
  if (!db_path) {
    log_message(tr("Музыка: не удалось скачать базу медиатеки: %s"), err->message);
    g_clear_error(&err);
    g_free(base_path);
    g_free(tmpdir);
    return -1;
  }

  // Резервная копия — до любых правок
  char *backup = medialib_backup(db_path);
  if (backup)
    log_message(tr("Музыка: резервная копия базы: %s"), backup);
  else
    log_message(tr("Музыка: резервная копия не создана — продолжаем без неё."));

  sqlite3 *db = NULL;
  if (sqlite3_open_v2(db_path, &db, SQLITE_OPEN_READWRITE, NULL) != SQLITE_OK) {
    log_message(tr("Музыка: не удалось открыть базу: %s"),
                db ? sqlite3_errmsg(db) : "sqlite3_open failed");
    if (db)
      sqlite3_close(db);
    g_free(backup);
    medialib_cleanup_tmpdir(tmpdir, db_path);
    g_free(db_path);
    g_free(tmpdir);
    g_free(base_path);
    return -1;
  }

  MedialibTrackRow row;
  int found = medialib_find_track(db, base_path, location, (gint64)track->size, &row);
  if (found < 0) {
    log_message(tr("Музыка: ошибка поиска записи в базе."));
  } else if (found == 0) {
    log_message(tr("Музыка: записи в медиатеке нет (файл не из синка) — база не тронута."));
    result = 0;
  } else if (medialib_delete_track(db, &row, &err)) {
    log_message(tr("Музыка: запись вычищена из базы (ID %lld)."),
                (long long)row.item_pid);
    result = 1;
  } else {
    log_message(tr("Музыка: не удалось вычистить запись: %s"), err->message);
    g_clear_error(&err);
  }

  sqlite3_close(db);

  // Заливаем обратно только если базу правили
  if (result == 1 && !medialib_upload(s->afc, db_path, &err)) {
    log_message(tr("Музыка: не удалось загрузить базу на устройство: %s"), err->message);
    g_clear_error(&err);
    result = -1;
  }

  g_free(backup);
  medialib_cleanup_tmpdir(tmpdir, db_path);
  g_free(db_path);
  g_free(tmpdir);
  g_free(base_path);
  return result;
}

/* --- Синхронизация импорта с базой «Музыки» (MediaLibrary.sqlitedb) ---
   Импортированный трек дописывается в базу медиатеки iPhone, поэтому он
   появляется в приложении «Музыка» после его перезапуска — без перезагрузки
   iPhone и без синхронизации с iTunes/Finder. На каждый трек заводятся
   строки в item, item_extra, item_state, item_stats, item_search и
   item_playback; при необходимости — новые артист/альбом-артист/альбом/жанр
   и их имена в sort_map. Схема снята с живой базы устройства (iOS 27):
   внешних ключей нет, целостность поддерживаем сами; строку item_state
   создаёт триггер item_state_insert_sync (после INSERT в item), мы только
   дозаполняем поля, триггером не задеваемые. container_item не
   нужен (это история воспроизведения), обложки в базу не пишутся — они
   лежат в закрытой ArtworkDB, недоступной через AFC (честное ограничение). */

/* --- Порядок имён (sort_map) ---
   name_order = ранг × 2^32; ранги идут плотными блоками по секциям:
   кириллица А–Щ = 0–25, Ъ = 26, Ы/Ь = 27, Э = 28, Ю = 29, Я = 30,
   латиница A–Z = 32–57, цифры и прочее = 58, пустое имя = 59. Внутри
   секции порядок задаёт collation-ключ: первичные веса символов сняты с
   живой базы (кириллица и латиница чередуются: а=0x06, a=0x2b, е=0x28…).
   Числовые серии сравниваются по значению и стоят раньше букв («100 …»
   перед «В…»), пробел — низкий вес, прочая пунктуация пропускается
   (в базе «(515)» и «515)» дают одинаковый ключ). Для новых имён sort_key
   не заполняется (пустой blob) — порядок задаёт name_order; остаточные
   неточности весов дают лишь косметическое смещение внутри секции. */

#define SORT_ORDER_STEP ((gint64)1 << 32)

// Первичные веса кириллических букв А..Я (Ё сортируется как Е).
static const guchar cyr_weights[32] = {
  0x06, 0x0c, 0x0e, 0x10, 0x1a, 0x28, 0x2c, 0x3a, 0x46, 0x4e, 0x54, 0x62,
  0x72, 0x78, 0x8a, 0x8e, 0x96, 0x9c, 0xa2, 0xac, 0xb4, 0xb6, 0xc0, 0xc8,
  0xda, 0xe0, 0xe2, 0xe6, 0xe8, 0xee, 0xf4, 0xfa,
};

// Секция имени (старший блок рангов). 59 — пустое/неопределимое имя.
static int
sort_section_of(const char *name)
{
  const char *p = name;
  while (*p == '#' || *p == '@') p++; // ведущие служебные символы не значимы
  if (!*p)
    return 59;
  gunichar c = g_utf8_get_char(p);
  if (c == 0x451 || c == 0x401) // ё/Ё — как е/Е
    c = 0x415;
  c = g_unichar_toupper(c);
  if (c >= 0x410 && c <= 0x42F) { // А..Я
    int idx = (int)(c - 0x410);
    if (idx == 28) // Ь делит секцию 27 с Ы
      idx = 27;
    else if (idx >= 29) // Э..Я сдвигаются на секцию вниз
      idx--;
    return idx;
  }
  if (c >= 'A' && c <= 'Z')
    return 32 + (int)(c - 'A');
  return 58;
}

// Первичный вес одного символа (0 — символ не значим для порядка).
static guint32
sort_char_weight(gunichar c)
{
  if (c == 0x451 || c == 0x401) // ё/Ё — как е/Е
    c = 0x435;
  gunichar lo = g_unichar_tolower(c);
  if (lo >= 0x430 && lo <= 0x44F) // а..я
    return cyr_weights[lo - 0x430];
  if (lo >= 'a' && lo <= 'z')
    return 0x2b + 2 * (guint32)(lo - 'a'); // a..z = 0x2b..0x5d, шаг 2
  if (lo == ' ')
    return 0x03; // пробел — низкий вес
  if (lo >= 0x80)
    return 0x100 + (guint32)(lo & 0xFF); // прочие скрипты — грубо, в конце
  return 0; // пунктуация пропускается
}

typedef struct {
  int kind;  // 0 — вес символа, 1 — числовая серия
  gint64 a;  // вес символа или значение серии
} SortTok;

// Ключ имени: последовательность токенов. Подряд идущие ASCII-цифры
// сворачиваются в одну числовую серию («02» < «100» по значению).
static SortTok *
sort_build_key(const char *name, gsize *len)
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
    guint32 w = sort_char_weight(c);
    if (w) {
      SortTok t = {0, (gint64)w};
      g_array_append_vals(arr, &t, 1);
    }
    p = g_utf8_next_char(p);
  }
  *len = arr->len;
  return (SortTok *)g_array_free(arr, FALSE);
}

// Сравнение ключей: <0 / 0 / >0. Числовая серия стоит раньше буквенного
// веса («100 …» перед «В…»); префикс короче — меньше.
static int
sort_key_cmp(const SortTok *a, gsize na, const SortTok *b, gsize nb)
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

// Выполнить SQL без параметров. FALSE — ошибка (в error).
static gboolean
db_exec_sql(sqlite3 *db, const char *sql, GError **error)
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

// Скалярный запрос без параметров (текст внутри экранируется %Q заранее):
// TRUE и *out — строка получена; FALSE без ошибки — строк нет.
static gboolean
db_scalar_sql(sqlite3 *db, const char *sql, gint64 *out, GError **error)
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

/* Классы сущностей в entity_revision (снято с живой базы). */
#define ML_CLASS_ITEM         0
#define ML_CLASS_CONTAINER    1
#define ML_CLASS_ARTIST       2
#define ML_CLASS_GENRE        3
#define ML_CLASS_ALBUM        4
#define ML_CLASS_COMPOSER     5
#define ML_CLASS_ALBUM_ARTIST 7

// Активная ревизия сущности. Приложение «Музыка» показывает только те
// сущности, у которых в entity_revision есть строка с deleted=0 (живая
// база: у всех видимых треков она есть; трек без строки или с надгробием
// deleted=2 от старых удалений не виден, хотя его альбом в сетке поднимается
// как «недавно добавленный»). revision = MAX+1; INSERT OR REPLACE чинит
// и отсутствующие строки, и надгробия.
static gboolean
medialib_touch_revision(sqlite3 *db, gint64 pid, int entity_class, GError **error)
{
  gint64 rev = 0;
  if (!db_scalar_sql(db, "SELECT IFNULL(MAX(revision),0)+1 FROM entity_revision",
                     &rev, error))
    return FALSE;
  char *sql = sqlite3_mprintf(
      "INSERT OR REPLACE INTO entity_revision"
      "(revision, entity_pid, deleted, class, revision_type)"
      " VALUES(%lld, %lld, 0, %d, 0)",
      (long long)rev, (long long)pid, entity_class);
  gboolean ok = db_exec_sql(db, sql, error);
  sqlite3_free(sql);
  return ok;
}

// Гарантировать имя в sort_map: вернуть его name_order (существующий или
// выделенный между соседями). -1 — ошибка. Для новых имён sort_key остаётся
// пустым — порядок задаёт name_order.
static gint64
medialib_ensure_sort_name(sqlite3 *db, const char *name, GError **error)
{
  if (!name || !*name)
    return 0; // пустое имя — ранг 0 (строка '' в sort_map)

  gint64 existing = 0;
  char *sql = sqlite3_mprintf(
      "SELECT name_order FROM sort_map WHERE name=%Q", name);
  gboolean found = db_scalar_sql(db, sql, &existing, error);
  sqlite3_free(sql);
  if (!found && *error)
    return -1;
  if (found)
    return existing;

  int my_sec = sort_section_of(name);
  gsize my_len = 0;
  SortTok *my_key = sort_build_key(name, &my_len);

  // Соседи по порядку: prev/next — ближайшие ранги вокруг нового имени.
  // Секции берём из базы (реальные блоки рангов), внутри секции сравниваем
  // ключи нашим компаратором.
  gint64 prev = 0, next = 0; // next == 0 — соседа сверху нет
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
        SortTok *okey = sort_build_key(oname ? oname : "", &olen);
        int c = sort_key_cmp(okey, olen, my_key, my_len);
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
    order = prev + SORT_ORDER_STEP; // плотное место в конце
  else
    order = prev + (next - prev) / 2; // дробный ранг между соседями
  if (order <= prev || (next != 0 && order >= next)) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "не удалось выделить name_order для «%s»", name);
    return -1;
  }

  sql = sqlite3_mprintf(
      "INSERT INTO sort_map(name, name_order, name_section, sort_key) "
      "VALUES(%Q, %lld, %d, x'')",
      name, (long long)order, my_sec);
  ok = db_exec_sql(db, sql, error);
  sqlite3_free(sql);
  return ok ? order : -1;
}

// Гарантировать base_location для папки импорта; вернуть её id (или -1).
static gint64
medialib_ensure_base_location(sqlite3 *db, GError **error)
{
  gint64 id = 0;
  char *sql = sqlite3_mprintf(
      "SELECT base_location_id FROM base_location WHERE path=%Q",
      "iTunes_Control/Music/Imported");
  gboolean found = db_scalar_sql(db, sql, &id, error);
  sqlite3_free(sql);
  if (!found && *error)
    return -1;
  if (found)
    return id;

  // Новый каталог после F99: id = MAX+1 (база 3839 не критична, но честно
  // повторяет схему нумерации каталогов синка)
  id = 0;
  if (!db_scalar_sql(db,
      "SELECT IFNULL(MAX(base_location_id),3839)+1 FROM base_location",
      &id, error))
    return -1;
  sql = sqlite3_mprintf(
      "INSERT INTO base_location(base_location_id, path) "
      "VALUES(%lld, 'iTunes_Control/Music/Imported')",
      (long long)id);
  gboolean ok = db_exec_sql(db, sql, error);
  sqlite3_free(sql);
  return ok ? id : -1;
}

// Найти или создать артиста (item_artist). Возвращает pid или -1.
// grouping_key не заполняем (NULL) — это производная от collation-ключа
// информация, воспроизвести её точно мы не можем.
static gint64
medialib_ensure_artist(sqlite3 *db, const char *name, gint64 item_pid,
                       GError **error)
{
  if (!name || !*name)
    name = "Unknown Artist";

  gint64 pid = 0;
  char *sql = sqlite3_mprintf(
      "SELECT item_artist_pid FROM item_artist WHERE item_artist=%Q", name);
  gboolean found = db_scalar_sql(db, sql, &pid, error);
  sqlite3_free(sql);
  if (!found && *error)
    return -1;
  if (found) // существующий артист: обновляем ревизию на всякий случай
    return medialib_touch_revision(db, pid, ML_CLASS_ARTIST, error) ? pid : -1;

  pid = 0;
  if (!db_scalar_sql(db,
      "SELECT IFNULL(MAX(item_artist_pid),33554432)+1 FROM item_artist",
      &pid, error)) // 33554432 = 0x2000000 — база PID артистов
    return -1;
  gint64 order = medialib_ensure_sort_name(db, name, error);
  if (order < 0)
    return -1;
  sql = sqlite3_mprintf(
      "INSERT INTO item_artist(item_artist_pid, item_artist, sort_item_artist,"
      " representative_item_pid) VALUES(%lld, %Q, %Q, %lld)",
      (long long)pid, name, name, (long long)item_pid);
  gboolean ok = db_exec_sql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;
  return medialib_touch_revision(db, pid, ML_CLASS_ARTIST, error) ? pid : -1;
}

// Найти или создать альбом-артиста (album_artist). Возвращает pid или -1.
static gint64
medialib_ensure_album_artist(sqlite3 *db, const char *name, gint64 item_pid,
                             GError **error)
{
  if (!name || !*name)
    name = "Unknown Artist";

  gint64 pid = 0;
  char *sql = sqlite3_mprintf(
      "SELECT album_artist_pid FROM album_artist WHERE album_artist=%Q", name);
  gboolean found = db_scalar_sql(db, sql, &pid, error);
  sqlite3_free(sql);
  if (!found && *error)
    return -1;
  if (found)
    return medialib_touch_revision(db, pid, ML_CLASS_ALBUM_ARTIST, error) ? pid : -1;

  pid = 0;
  if (!db_scalar_sql(db,
      "SELECT IFNULL(MAX(album_artist_pid),117440512)+1 FROM album_artist",
      &pid, error)) // 117440512 = 0x7000000 — база PID альбом-артистов
    return -1;
  gint64 order = medialib_ensure_sort_name(db, name, error);
  if (order < 0)
    return -1;
  // У album_artist есть собственные колонки порядка (sort_order/name_order)
  sql = sqlite3_mprintf(
      "INSERT INTO album_artist(album_artist_pid, album_artist,"
      " sort_album_artist, representative_item_pid, sort_order,"
      " sort_order_section, name_order) VALUES(%lld, %Q, %Q, %lld, %lld, %d, %lld)",
      (long long)pid, name, name, (long long)item_pid,
      (long long)order, sort_section_of(name), (long long)order);
  gboolean ok = db_exec_sql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;
  return medialib_touch_revision(db, pid, ML_CLASS_ALBUM_ARTIST, error) ? pid : -1;
}

// Найти или создать альбом (album). Возвращает pid или -1.
static gint64
medialib_ensure_album(sqlite3 *db, const char *name, gint64 album_artist_pid,
                      gint64 item_pid, GError **error)
{
  if (!name || !*name)
    name = "Unknown Album";

  gint64 pid = 0;
  char *sql = sqlite3_mprintf(
      "SELECT album_pid FROM album WHERE album=%Q", name);
  gboolean found = db_scalar_sql(db, sql, &pid, error);
  sqlite3_free(sql);
  if (!found && *error)
    return -1;
  if (found)
    return medialib_touch_revision(db, pid, ML_CLASS_ALBUM, error) ? pid : -1;

  pid = 0;
  if (!db_scalar_sql(db,
      "SELECT IFNULL(MAX(album_pid),67108864)+1 FROM album",
      &pid, error)) // 67108864 = 0x4000000 — база PID альбомов
    return -1;
  gint64 order = medialib_ensure_sort_name(db, name, error);
  if (order < 0)
    return -1;
  // keep_local_status=2 и album_type=1 — как у файловых альбомов в базе
  sql = sqlite3_mprintf(
      "INSERT INTO album(album_pid, album, sort_album, album_artist_pid,"
      " representative_item_pid, keep_local_status, album_type)"
      " VALUES(%lld, %Q, %Q, %lld, %lld, 2, 1)",
      (long long)pid, name, name, (long long)album_artist_pid,
      (long long)item_pid);
  gboolean ok = db_exec_sql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;
  return medialib_touch_revision(db, pid, ML_CLASS_ALBUM, error) ? pid : -1;
}

// Найти или создать жанр (genre). Возвращает id или -1.
static gint64
medialib_ensure_genre(sqlite3 *db, const char *name, gint64 item_pid,
                      GError **error)
{
  gint64 id = 0;
  char *sql = sqlite3_mprintf(
      "SELECT genre_id FROM genre WHERE genre=%Q", name);
  gboolean found = db_scalar_sql(db, sql, &id, error);
  sqlite3_free(sql);
  if (!found && *error)
    return -1;
  if (found)
    return medialib_touch_revision(db, id, ML_CLASS_GENRE, error) ? id : -1;

  id = 0;
  if (!db_scalar_sql(db,
      "SELECT IFNULL(MAX(genre_id),50331648)+1 FROM genre",
      &id, error)) // 50331648 = 0x3000000 — база ID жанров
    return -1;
  sql = sqlite3_mprintf(
      "INSERT INTO genre(genre_id, genre, representative_item_pid)"
      " VALUES(%lld, %Q, %lld)",
      (long long)id, name, (long long)item_pid);
  gboolean ok = db_exec_sql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;
  return medialib_touch_revision(db, id, ML_CLASS_GENRE, error) ? id : -1;
}

/* --- Метаданные импортируемого трека --- */

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

static void
medialib_meta_free(gpointer p)
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

// Читать теги локального файла для вставки в базу. location — имя файла,
// под которым трек лежит на устройстве. FALSE — файл не читается.
static gboolean
medialib_read_meta(const char *local_path, const char *location, MedialibMeta *m,
                   GError **error)
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
  // Обложка: извлекаем байты встроенной картинки — они будут загружены в
  // Artwork-хранилище устройства (iTunes/Artwork/Originals) и прописаны
  // в таблице artwork базы медиатеки, как это делает реальная синхронизация
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
  taglib_tag_free_strings(); // строки taglib_tag_* освобождаются здесь
  taglib_file_free(tf);

  // Пустые теги — честные заглушки, как у треков без метаданных
  if (!m->title || !*m->title) {
    g_free(m->title);
    m->title = g_path_get_basename(location);
    char *dot = strrchr(m->title, '.');
    if (dot)
      *dot = 0; // имя файла без расширения
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

// Дозаписать сателлитные строки трека: item_store, item_video, lyrics,
// chapter. В живой базе они есть у КАЖДОГО файлового трека реальной
// синхронизации (240/240), а без item_store «Музыка» трек не показывает.
// Идемпотентно: item_pid — PRIMARY KEY во всех четырёх таблицах, поэтому
// INSERT OR IGNORE. item_store вставляется с sync_id != 0 и
// sync_in_my_library = 1: триггер on_insert_item_setInMyLibraryColumn при
// sync_id != 0 пишет item.in_my_library = sync_in_my_library, а
// item_state_store_insert_sync дозаполняет item_state (store_playlist_id,
// adam_id, playback_endpoint_type и т. д.) — ровно как реальный синк.
static gboolean
medialib_ensure_item_satellites(sqlite3 *db, gint64 item_pid, GError **error)
{
  // sync_id у реальных треков — случайное положительное 64-битное число;
  // в GLib есть только 32-битный g_rand_int, собираем из двух выборок
  GRand *r = g_rand_new();
  gint64 sync_id = ((gint64)g_rand_int(r) << 32) | (gint64)g_rand_int(r);
  g_rand_free(r);
  if (sync_id == 0)
    sync_id = 1; // sync_id = 0 триггер считает признаком «не в библиотеке»

  char *sql = sqlite3_mprintf(
      "INSERT OR IGNORE INTO item_store(item_pid, sync_id, sync_in_my_library)"
      " VALUES(%lld, %lld, 1)",
      (long long)item_pid, (long long)sync_id);
  gboolean ok = db_exec_sql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return FALSE;

  // Пустые строки-заглушки только с item_pid — как у реальных файловых треков
  static const char *bare[] = { "item_video", "lyrics", "chapter", NULL };
  for (int i = 0; bare[i]; i++) {
    sql = sqlite3_mprintf("INSERT OR IGNORE INTO %s(item_pid) VALUES(%lld)",
                          bare[i], (long long)item_pid);
    ok = db_exec_sql(db, sql, error);
    sqlite3_free(sql);
    if (!ok)
      return FALSE;
  }
  return TRUE;
}

// Вставить трек в базу. 1 — вставлен (*out_pid = новый item_pid),
// 0 — дубликат (пропускаем), -1 — ошибка. Вызывается внутри транзакции.
static int
medialib_insert_track(sqlite3 *db, const MedialibMeta *m, gint64 base_loc,
                      gint64 date_added, double date_downloaded,
                      gint64 *out_pid, GError **error)
{
  // Дубликат: совпадают имя файла и размер — трек уже импортирован
  gint64 dup = 0;
  char *sql = sqlite3_mprintf(
      "SELECT COUNT(*) FROM item_extra WHERE location=%Q AND file_size=%lld",
      m->location, (long long)m->file_size);
  gboolean ok = db_scalar_sql(db, sql, &dup, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;
  if (dup > 0) {
    // Трек уже в базе: обновляем ревизии — так чинятся треки, вставленные
    // до появления entity_revision-логики (без активной ревизии «Музыка»
    // их не показывает). ensure_* идемпотентны: найдут существующие
    // сущности и обновят их ревизии.
    gint64 old_pid = 0;
    sql = sqlite3_mprintf(
        "SELECT item_pid FROM item_extra WHERE location=%Q AND file_size=%lld"
        " LIMIT 1", m->location, (long long)m->file_size);
    gboolean f = db_scalar_sql(db, sql, &old_pid, error);
    sqlite3_free(sql);
    if (!f)
      return -1;
    if (!medialib_touch_revision(db, old_pid, ML_CLASS_ITEM, error))
      return -1;
    gint64 artist_pid = medialib_ensure_artist(db, m->artist, old_pid, error);
    if (artist_pid < 0)
      return -1;
    gint64 album_artist_pid = medialib_ensure_album_artist(db, m->artist, old_pid, error);
    if (album_artist_pid < 0)
      return -1;
    if (medialib_ensure_album(db, m->album, album_artist_pid, old_pid, error) < 0)
      return -1;
    if (m->genre && medialib_ensure_genre(db, m->genre, old_pid, error) < 0)
      return -1;
    // Дозаполняем то, чего не было в старых сборках: сателлитные строки
    // (item_store и др.) и даты в правильной эпохе. Чинит треки, вставленные
    // раньше без item_store и с датой «из будущего», при повторном импорте
    if (!medialib_ensure_item_satellites(db, old_pid, error))
      return -1;
    sql = sqlite3_mprintf(
        "UPDATE item SET date_added=%lld, date_downloaded=%f WHERE item_pid=%lld",
        (long long)date_added, date_downloaded, (long long)old_pid);
    if (!db_exec_sql(db, sql, error))
      return -1;
    sqlite3_free(sql);
    sql = sqlite3_mprintf(
        "UPDATE item_stats SET date_accessed=%f WHERE item_pid=%lld",
        date_downloaded, (long long)old_pid);
    if (!db_exec_sql(db, sql, error))
      return -1;
    sqlite3_free(sql);
    // Косметика старых треков без фильтра — идемпотентно, чинит сразу все
    if (!db_exec_sql(db,
        "UPDATE item_playback SET relative_volume=0 WHERE relative_volume IS NULL",
        error))
      return -1;
    if (!db_exec_sql(db,
        "UPDATE item_extra SET description='' WHERE description IS NULL",
        error))
      return -1;
    return 0;
  }

  gint64 item_pid = 0;
  if (!db_scalar_sql(db, "SELECT IFNULL(MAX(item_pid),0)+1 FROM item",
                     &item_pid, error))
    return -1;

  // Сущности (при отсутствии создаются)
  gint64 artist_pid = medialib_ensure_artist(db, m->artist, item_pid, error);
  if (artist_pid < 0)
    return -1;
  gint64 album_artist_pid = medialib_ensure_album_artist(db, m->artist, item_pid, error);
  if (album_artist_pid < 0)
    return -1;
  gint64 album_pid = medialib_ensure_album(db, m->album, album_artist_pid, item_pid, error);
  if (album_pid < 0)
    return -1;
  gint64 genre_id = 0, genre_order = 0;
  int genre_sec = 59;
  if (m->genre) {
    genre_id = medialib_ensure_genre(db, m->genre, item_pid, error);
    if (genre_id < 0)
      return -1;
    genre_order = medialib_ensure_sort_name(db, m->genre, error);
    if (genre_order < 0)
      return -1;
    genre_sec = sort_section_of(m->genre);
  }

  // Порядки имён (sort_map общий для всех типов имён)
  gint64 title_order = medialib_ensure_sort_name(db, m->title, error);
  if (title_order < 0)
    return -1;
  gint64 artist_order = medialib_ensure_sort_name(db, m->artist, error);
  if (artist_order < 0)
    return -1;
  gint64 album_order = medialib_ensure_sort_name(db, m->album, error);
  if (album_order < 0)
    return -1;

  int title_sec = sort_section_of(m->title);
  int artist_sec = sort_section_of(m->artist);
  int album_sec = sort_section_of(m->album);

  // item: date_downloaded в живой базе REAL; даты — эпоха Core Data (с 2001)
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
  ok = db_exec_sql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;
  // Активная ревизия item — без неё «Музыка» трек не показывает
  if (!medialib_touch_revision(db, item_pid, ML_CLASS_ITEM, error))
    return -1;

  // item_extra: integrity не заполняем (NULL) — Apple считает свой хеш
  // файла, воспроизвести его мы не можем; на воспроизведение не влияет
  sql = sqlite3_mprintf(
      "INSERT INTO item_extra(item_pid, title, sort_title, total_time_ms, year,"
      " location, file_size, description, media_kind, comment, grouping,"
      " version, display_version, classical_work, classical_movement)"
      " VALUES(%lld, %Q, %Q, %f, %d, %Q, %lld, '', 1, '', '', '', '', '', '')",
      (long long)item_pid, m->title, m->title,
      (double)m->duration_ms, m->year, m->location, (long long)m->file_size);
  ok = db_exec_sql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;

  // item_state создаётся триггером item_state_insert_sync (AFTER INSERT ON
  // item): он переносит persistent_id, media_type, in_my_library →
  // is_library_added, keep_local/keep_local_status → keep_local_*,
  // has_non_purgeable_asset = (base_location_id >= 250). Второй триггер
  // (item_state_extra_insert_sync) дописывает title/location из item_extra.
  // как у файловых треков синка; остальные поля триггер заполняет сам)
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
  ok = db_exec_sql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;

  sql = sqlite3_mprintf(
      "INSERT INTO item_stats(item_pid, date_accessed) VALUES(%lld, %f)",
      (long long)item_pid, date_downloaded);
  ok = db_exec_sql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;

  sql = sqlite3_mprintf(
      "INSERT INTO item_search(item_pid, search_title, search_album,"
      " search_artist, search_album_artist, search_composer)"
      " VALUES(%lld, %lld, %lld, %lld, %lld, 0)",
      (long long)item_pid, (long long)title_order, (long long)album_order,
      (long long)artist_order, (long long)artist_order);
  ok = db_exec_sql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;

  // item_playback обязательна (240/240 строк в живой базе); минимум —
  // аудиоформат (301 у всех файлов синка), битрейт и relative_volume=0
  sql = sqlite3_mprintf(
      "INSERT INTO item_playback(item_pid, audio_format, bit_rate,"
      " relative_volume) VALUES(%lld, 301, %d, 0)",
      (long long)item_pid, m->bit_rate);
  ok = db_exec_sql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;

  // Сателлитные строки реальной синхронизации — есть у каждого файлового
  // трека в живой базе (240/240): item_store (случайный sync_id и
  // sync_in_my_library=1 — триггер подтверждает in_my_library=1) и пустые
  // item_video/lyrics/chapter
  if (!medialib_ensure_item_satellites(db, item_pid, error))
    return -1;

  *out_pid = item_pid;
  return 1;
}

// Записать artwork_token/best_artwork_token для item (artwork_type=1 —
// как у реальных файловых треков; album-строки пишут type=6 отдельно)
static gboolean
medialib_set_item_artwork(sqlite3 *db, gint64 item_pid, gint64 token, GError **error)
{
  char *sql = sqlite3_mprintf(
      "INSERT OR REPLACE INTO artwork_token(entity_pid, artwork_token,"
      " artwork_source_type, artwork_type, entity_type, artwork_variant_type)"
      " VALUES(%lld, %lld, 300, 1, 0, 0)",
      (long long)item_pid, (long long)token);
  gboolean ok = db_exec_sql(db, sql, error);
  sqlite3_free(sql);
  if (!ok)
    return FALSE;
  sql = sqlite3_mprintf(
      "INSERT OR REPLACE INTO best_artwork_token(entity_pid, entity_type,"
      " artwork_type, available_artwork_token, fetchable_artwork_token,"
      " fetchable_artwork_source_type, artwork_variant_type)"
      " VALUES(%lld, 0, 1, %lld, '', 0, 0)",
      (long long)item_pid, (long long)token);
  ok = db_exec_sql(db, sql, error);
  sqlite3_free(sql);
  return ok;
}

// Самоисправление relative_path у файловых обложек (artwork_source_type=300).
// Имя файла = SHA-1 строки токена (бакет = первые 2 символа, имя = остальные
// 38); формула подтверждена на всех 377 реальных строках. Наши первые токены
// (481/482) были записаны с SHA-1 содержимого картинки — миграция чинит такие
// строки при каждом импорте. Возвращает число исправленных строк, -1 при ошибке
static int
medialib_fix_artwork_paths(sqlite3 *db)
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
    gboolean ok = db_exec_sql(db, sql, &err);
    sqlite3_free(sql);
    if (!ok) {
      g_warning("medialib: fix_artwork_paths: %s", err ? err->message : "?");
      g_clear_error(&err);
      continue; // чиним остальные, неудачу одной строки не считаем фатальной
    }
    fixed++;
  }
  sqlite3_finalize(st);
  return fixed;
}

// Загрузить встроенную обложку трека в Artwork-хранилище устройства и
// прописать её в базе. Схема — точная копия реальной синхронизации:
// файл /iTunes_Control/iTunes/Artwork/Originals/<xx>/<sha1> (xx — первые
// два символа хеша, как бакет в живой базе), токен — сквозной счётчик
// (MAX+1; у реальных строк '100'…'480'), один токен делят item и его
// альбом; у item-строк artwork_token/best_artwork_token artwork_type=1,
// у альбомных — 6, в строке artwork — 6 (как у реального item 1).
// interest_data — JSON ColorAnalysis: настоящие цвета Apple не вычислить,
// пишем нейтральные (влияет только на цвет текста поверх обложки).
// 1 — записано, 0 — нечего записывать, -1 — ошибка.
static int
medialib_attach_artwork(afc_client_t afc, sqlite3 *db, const char *tmpdir,
                        gint64 item_pid, gint64 album_pid, const MedialibMeta *m,
                        GError **error)
{
  // Наследование токена альбома: если у альбома уже есть файловая обложка
  // (от реальной синхронизации или нашего прошлого импорта), трек получает
  // ЕЁ токен — artworkd такой токен знает и покажет обложку сразу, без
  // перезагрузки. Работает и для треков без встроенной обложки: трек
  // показывает обложку своего альбома, как в библиотеках после синка
  if (album_pid > 0) {
    char *sql = sqlite3_mprintf(
        "SELECT artwork_token FROM artwork_token WHERE entity_pid=%lld"
        " AND entity_type=4 AND artwork_source_type=300 LIMIT 1",
        (long long)album_pid);
    gint64 album_token = 0;
    GError *lookup_err = NULL;
    gboolean found = db_scalar_sql(db, sql, &album_token, &lookup_err);
    sqlite3_free(sql);
    if (!found && lookup_err) {
      g_propagate_error(error, lookup_err);
      return -1;
    }
    g_clear_error(&lookup_err);
    if (found && album_token > 0)
      return medialib_set_item_artwork(db, item_pid, album_token, error) ? 1 : -1;
  }

  if (!m->cover_data || m->cover_len == 0)
    return 0;

  // Токен: сквозной счётчик по всем строкам artwork (реальные '100'…'480')
  gint64 token = 0;
  char *sql = sqlite3_mprintf(
      "SELECT IFNULL(MAX(CAST(artwork_token AS INTEGER)),99)+1 FROM artwork");
  gboolean ok = db_scalar_sql(db, sql, &token, error);
  sqlite3_free(sql);
  if (!ok)
    return -1;

  // Имя файла обложки = SHA-1 от СТРОКИ токена: бакет — первые 2 символа
  // хеша, имя файла — оставшиеся 38 (вместе они и есть полный SHA-1).
  // Подтверждено на всех 377 реальных строках artwork и логом «Музыки»:
  // токен 474 → 16/25434ceb…, 291 → 37/17862a00…, 481 → 29/78e0c34d… —
  // именно там «Музыка» искала обложку токена 481. SHA-1 содержимого
  // картинки в имени не участвует — раньше мы ошибочно хешировали байты
  // обложки, и «Музыка» отвечала «Image did not exist at URL»
  char sha1[41];
  char *tok_str = g_strdup_printf("%lld", (long long)token);
  GChecksum *ck = g_checksum_new(G_CHECKSUM_SHA1);
  g_checksum_update(ck, (const guchar *)tok_str, (gssize)strlen(tok_str));
  g_snprintf(sha1, sizeof sha1, "%s", g_checksum_get_string(ck));
  g_checksum_free(ck);
  g_free(tok_str);
  char *rel_path = g_strdup_printf("%.2s/%.38s", sha1, sha1 + 2);

  // Файл обложки: во временную папку, затем на устройство через AFC.
  // Каталог-бакет может уже существовать — ошибку игнорируем
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
  char *dir = g_strdup_printf(ARTWORK_REMOTE_ROOT "/%.2s", sha1);
  afc_make_directory(afc, dir); // существующий каталог — не ошибка
  g_free(dir);
  char *remote = g_strdup_printf(ARTWORK_REMOTE_ROOT "/%s", rel_path);
  int up = afc_upload_file(afc, tmp_path, remote);
  g_free(remote);
  g_free(tmp_path);
  if (up != 0) {
    g_set_error(error, G_IO_ERROR, G_IO_ERROR_FAILED,
                "не удалось загрузить обложку на устройство");
    g_free(rel_path);
    return -1;
  }

  // Строка artwork: type 6 — обложка из файла, как у реальных треков.
  // interest_data пишем BLOB-литералом X'…': у всех 384 реальных строк
  // тип хранения BLOB, наши первые две были TEXT — выравниваем
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
  ok = db_exec_sql(db, sql, error);
  sqlite3_free(sql);
  if (!ok) {
    g_free(rel_path);
    return -1;
  }

  // item: artwork_type=1 — как у реального файлового трека (item 1)
  if (!medialib_set_item_artwork(db, item_pid, token, error)) {
    g_free(rel_path);
    return -1;
  }

  // Альбом: токен ставим, только если у альбома ещё нет своей файловой
  // обложки — не затираем обложку, поставленную реальной синхронизацией
  if (album_pid > 0) {
    gint64 has = 0;
    sql = sqlite3_mprintf(
        "SELECT COUNT(*) FROM artwork_token WHERE entity_pid=%lld"
        " AND entity_type=4 AND artwork_source_type=300",
        (long long)album_pid);
    ok = db_scalar_sql(db, sql, &has, error);
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
      ok = db_exec_sql(db, sql, error);
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
      ok = db_exec_sql(db, sql, error);
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

// Дописать импортированные треки в базу медиатеки. Один цикл на весь
// импорт: скачать базу → бэкап → транзакция → вставить → залить обратно.
// Возвращает число вставленных треков, -1 — ошибка (база не тронута).
static int
music_sync_medialib_add(afc_client_t afc, GPtrArray *metas)
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

  // Обложки: у треков без встроенной картинки обложку даст альбом
  // (наследование токена), поэтому предупреждение только про полную неудачу
  // не нужно — считаем для статистики
  guint no_cover = 0;
  for (guint i = 0; i < metas->len; i++)
    if (!((MedialibMeta *)metas->pdata[i])->has_cover)
      no_cover++;
  if (no_cover)
    log_message(tr("Музыка: у %u трека(ов) нет встроенной обложки — попробуем унаследовать обложку альбома."),
                no_cover);

  log_message(tr("Музыка: добавляем треки в базу медиатеки…"));

  tmpdir = g_dir_make_tmp("apple-devices-XXXXXX", NULL);
  db_path = tmpdir ? medialib_download(afc, tmpdir, &err) : NULL;
  if (!db_path) {
    log_message(tr("Музыка: не удалось скачать базу медиатеки: %s"), err->message);
    g_clear_error(&err);
    goto fail;
  }

  // Резервная копия — до любых правок
  backup = medialib_backup(db_path);
  if (backup)
    log_message(tr("Музыка: резервная копия базы: %s"), backup);
  else
    log_message(tr("Музыка: резервная копия не создана — продолжаем без неё."));

  if (sqlite3_open_v2(db_path, &db, SQLITE_OPEN_READWRITE, NULL) != SQLITE_OK) {
    log_message(tr("Музыка: не удалось открыть базу: %s"),
                db ? sqlite3_errmsg(db) : "sqlite3_open failed");
    goto fail;
  }

  if (!db_exec_sql(db, "BEGIN IMMEDIATE", &err))
    goto fail;

  base_loc = medialib_ensure_base_location(db, &err);
  if (base_loc < 0)
    goto rollback;

  now = (double)g_get_real_time() / G_USEC_PER_SEC;
  // Эпоха Core Data: секунды с 2001-01-01 = unix − 978307200. Раньше здесь
  // было «+» — даты уходили на ~62 года в будущее, поэтому альбомы
  // всплывали наверх «недавно добавленных»
  date_added = (gint64)now - 978307200;
  date_downloaded = now - 978307200.0;

  // Самоисправление путей обложек старых импортов (см. комментарий функции):
  // «Музыка» путь не читает из базы (вычисляет из токена), но строка должна
  // быть консистентна
  int art_fixed = medialib_fix_artwork_paths(db);
  if (art_fixed > 0)
    log_message(tr("Музыка: исправлено путей обложек от прошлых импортов: %d."),
                art_fixed);

  for (guint i = 0; i < metas->len; i++) {
    MedialibMeta *m = metas->pdata[i];
    int rc = medialib_insert_track(db, m, base_loc, date_added, date_downloaded,
                                   &new_pid, &err);
    if (rc < 0)
      goto rollback;
    if (rc > 0) {
      added++;
      log_message(tr("Музыка: трек добавлен в базу (ID %lld)."), (long long)new_pid);
    } else {
      log_message(tr("Музыка: трек уже есть в медиатеке — обновляю ревизию («%s»)."), m->title);
    }
  }

  // Обложки: файлы через AFC и токены в базе. Каждая обложка — в своём
  // savepoint: неудача одной обложки не откатывает весь импорт (треки
  // важнее обложек). Загруженный файл при откате остаётся на устройстве —
  // путь это хеш содержимого, осиротевший файл безвреден.
  // Пас идёт по ВСЕМ трекам, не только с встроенной обложкой: трек без
  // картинки наследует токен альбома (medialib_attach_artwork сам
  // разберётся, что делать). medialib_attach_artwork возвращает три
  // состояния: -1 ошибка, 0 нечего делать, 1 обложка записана/наследована
  int art_attached = 0;
  for (guint i = 0; i < metas->len; i++) {
    MedialibMeta *m = metas->pdata[i];
    if (!db_exec_sql(db, "SAVEPOINT artwork", &err))
      goto rollback;
    gint64 t_pid = 0, al_pid = 0;
    GError *lookup_err = NULL;
    gboolean pok;
    int arc = 0;
    sql = sqlite3_mprintf(
        "SELECT item_pid FROM item_extra WHERE location=%Q AND file_size=%lld"
        " LIMIT 1", m->location, (long long)m->file_size);
    pok = db_scalar_sql(db, sql, &t_pid, &lookup_err);
    sqlite3_free(sql);
    if (pok) {
      sql = sqlite3_mprintf("SELECT album_pid FROM item WHERE item_pid=%lld",
                            (long long)t_pid);
      pok = db_scalar_sql(db, sql, &al_pid, &lookup_err);
      sqlite3_free(sql);
    }
    if (pok)
      arc = medialib_attach_artwork(afc, db, tmpdir, t_pid, al_pid, m, &err);
    if (!pok && lookup_err) {
      // настоящая ошибка базы (не пустой результат) — откатываем импорт
      log_message(tr("Музыка: ошибка базы при записи обложки: %s"), lookup_err->message);
      g_error_free(lookup_err);
      goto rollback;
    }
    g_clear_error(&lookup_err);
    if (arc < 0) {
      // обложка не записалась (ошибка AFC/SQL) — трек остаётся,
      // откатываем только savepoint и продолжаем
      db_exec_sql(db, "ROLLBACK TO artwork", NULL);
      db_exec_sql(db, "RELEASE artwork", NULL);
      g_clear_error(&err);
      log_message(tr("Музыка: обложку для «%s» записать не удалось — трек добавлен без неё."),
                  m->title);
      continue;
    }
    if (!db_exec_sql(db, "RELEASE artwork", NULL))
      goto rollback;
    art_attached += arc;
  }
  if (art_attached)
    log_message(tr("Музыка: обложки привязаны к трекам (%u шт.)."),
                (guint)art_attached);

  if (!db_exec_sql(db, "COMMIT", &err))
    goto fail;

  sqlite3_close(db);
  db = NULL;

  if (!medialib_upload(afc, db_path, &err)) {
    log_message(tr("Музыка: не удалось загрузить базу на устройство: %s"), err->message);
    g_clear_error(&err);
    goto fail;
  }

  result = added;
  goto fail;

rollback:
  db_exec_sql(db, "ROLLBACK", NULL); // ошибку отката игнорируем — закрываем базу
  sqlite3_close(db);
  db = NULL;

fail:
  if (db)
    sqlite3_close(db);
  g_free(backup);
  medialib_cleanup_tmpdir(tmpdir, db_path);
  g_free(db_path);
  g_free(tmpdir);
  return result;
}

static gboolean
has_audio_extension(const char *name)
{
  char *lower = g_ascii_strdown(name, -1);
  gboolean ok = FALSE;
  for (int i = 0; AUDIO_EXTENSIONS[i]; i++) {
    if (g_str_has_suffix(lower, AUDIO_EXTENSIONS[i])) {
      ok = TRUE;
      break;
    }
  }
  g_free(lower);
  return ok;
}

// Рекурсивно собирает пути аудиофайлов в out (строки с владением g_free)
static void
afc_collect_audio(afc_client_t afc, const char *dir, GPtrArray *out)
{
  char **entries = NULL;
  if (afc_read_directory(afc, dir, &entries) != AFC_E_SUCCESS || !entries)
    return;

  for (char **e = entries; *e && *e[0]; e++) {
    if (g_strcmp0(*e, ".") == 0 || g_strcmp0(*e, "..") == 0)
      continue;

    char *path = g_build_filename(dir, *e, NULL);
    char **fi = NULL;
    gboolean is_dir = FALSE;

    if (afc_get_file_info(afc, path, &fi) == AFC_E_SUCCESS && fi) {
      for (char **kv = fi; kv[0] && kv[1]; kv += 2) {
        if (g_strcmp0(kv[0], "st_ifmt") == 0) {
          // iOS отдаёт "S_IFDIR", старые прошивки — "Directory"
          is_dir = (g_strcmp0(kv[1], "S_IFDIR") == 0 ||
                    g_strcmp0(kv[1], "Directory") == 0);
          break;
        }
      }
      afc_dictionary_free(fi);
    }

    if (is_dir) {
      afc_collect_audio(afc, path, out);
      g_free(path);
    } else if (has_audio_extension(*e)) {
      g_ptr_array_add(out, path); // владение передаём массиву
    } else {
      g_free(path);
    }
  }

  afc_dictionary_free(entries);
}

/* --- Теги (TagLib C-биндинг) --- */

// Читает теги и обложку из локального файла в трек
static void
read_track_tags(MusicTrack *t, const char *local_path)
{
  TagLib_File *tf = taglib_file_new(local_path);
  if (!tf)
    return;

  TagLib_Tag *tag = taglib_file_tag(tf);
  if (tag) {
    g_free(t->title);
    t->title = g_strdup(taglib_tag_title(tag));
    g_free(t->artist);
    t->artist = g_strdup(taglib_tag_artist(tag));
    g_free(t->album);
    t->album = g_strdup(taglib_tag_album(tag));
  }

  const TagLib_AudioProperties *ap = taglib_file_audioproperties(tf);
  if (ap)
    t->duration = (guint)taglib_audioproperties_length(ap);

  // Обложка — комплексное свойство PICTURE; хелпер TagLib распаковывает
  // первую картинку (данные указывают внутрь props — копируем до free)
  TagLib_Complex_Property_Attribute ***props = taglib_complex_property_get(tf, "PICTURE");
  if (props) {
    TagLib_Complex_Property_Picture_Data pic;
    taglib_picture_from_complex_property(props, &pic);
    if (pic.data && pic.size > 0) {
      if (t->cover)
        g_bytes_unref(t->cover);
      t->cover = g_bytes_new(pic.data, pic.size);
      g_free(t->cover_mime);
      t->cover_mime = g_strdup(pic.mimeType);
    }
    taglib_complex_property_free(props);
  }

  taglib_tag_free_strings(); // строки taglib_tag_* освобождаются здесь
  taglib_file_free(tf);
}

/* --- Строки для списка треков --- */

// Подзаголовок строки: «Исполнитель — Альбом · 3:45»
static char *
music_track_subtitle(const MusicTrack *t)
{
  const char *artist = (t->artist && *t->artist) ? t->artist : NULL;
  const char *album = (t->album && *t->album) ? t->album : NULL;

  char *dur = g_strdup_printf("%u:%02u", t->duration / 60, t->duration % 60);
  char *sub = NULL;
  if (artist && album)
    sub = g_strdup_printf("%s — %s · %s", artist, album, dur);
  else if (artist || album)
    sub = g_strdup_printf("%s · %s", artist ? artist : album, dur);
  else
    sub = g_strdup(dur);
  g_free(dur);
  return sub;
}

// Заголовок строки: тег Title или имя файла
static char *
music_track_display_title(const MusicTrack *t)
{
  if (t->title && *t->title)
    return g_strdup(t->title);
  return g_path_get_basename(t->path);
}

// Ставит обложку трека в GtkImage (или иконку-заглушку)
static void
music_track_set_cover_image(GtkImage *img, const MusicTrack *t)
{
  GdkTexture *tex = NULL;
  if (t->cover)
    tex = gdk_texture_new_from_bytes(t->cover, NULL);

  if (tex) {
    gtk_image_set_from_paintable(img, GDK_PAINTABLE(tex));
    g_object_unref(tex);
  } else {
    gtk_image_set_from_icon_name(img, "folder-music-symbolic");
  }
}

/* --- Сканирование медиатеки --- */

/* --- Умное частичное чтение тегов ---
   Скачивать трек целиком ради тегов медленно (сотни МБ через USB). Теги и
   обложки лежат в начале файла (ID3v2 у mp3, атом moov у m4a, блоки у flac),
   а длительность TagLib вычисляет по полному размеру файла. Поэтому
   скачиваем только теговые структуры, а аудио-данные заменяем нулями или
   фейковым атомом с корректным заголовком — TagLib видит валидный файл. */

/* Открытый AFC-хэндл: один open на файл вместо open/close на каждый диапазон.
   Для m4a с moov в конце это срезает число AFC-операций с ~18 до 1 на файл. */
typedef struct {
  afc_client_t afc;
  uint64_t handle;
  guint64 bytes; // сколько байт реально прочитано из устройства (статистика)
} AfcFile;

static int
afc_file_open_h(AfcFile *f, afc_client_t afc, const char *path)
{
  f->afc = afc;
  f->bytes = 0;
  return afc_file_open(afc, path, AFC_FOPEN_RDONLY, &f->handle) == AFC_E_SUCCESS ? 0 : -1;
}

static void
afc_file_close_h(AfcFile *f)
{
  if (f->handle) {
    afc_file_close(f->afc, f->handle);
    f->handle = 0;
  }
}

// Прочитать len байт с offset из открытого файла. 0 — успех (got — сколько).
static int
afc_read_range_h(AfcFile *f, uint64_t offset, uint32_t len, char *buf, uint32_t *got)
{
  if (afc_file_seek(f->afc, f->handle, (int64_t)offset, SEEK_SET) != AFC_E_SUCCESS)
    return -1;

  uint32_t total = 0;
  while (total < len) {
    uint32_t chunk = 0;
    if (afc_file_read(f->afc, f->handle, buf + total, len - total, &chunk) != AFC_E_SUCCESS) {
      if (total == 0)
        return -1;
      break; // частично прочитали — отдаём что есть
    }
    if (chunk == 0)
      break; // конец файла
    total += chunk;
  }
  *got = total;
  f->bytes += total;
  return 0;
}

// Размер ID3v2-тега в начале mp3 (synchsafe-целое), 0 если тега нет
static guint32
id3v2_total_size(const char *buf, guint32 n)
{
  if (n < 10 || memcmp(buf, "ID3", 3) != 0)
    return 0;
  guint32 size = 10 + (((guint32)(buf[6] & 0x7F) << 21) | ((guint32)(buf[7] & 0x7F) << 14) |
                       ((guint32)(buf[8] & 0x7F) << 7) | (guint32)(buf[9] & 0x7F));
  if (buf[5] & 0x10) // флаг футера (ID3v2.4): +10 байт в конце тега
    size += 10;
  return size;
}

// Расширение файла в нижнем регистре (".mp3") или NULL
static const char *
file_ext_lower(const char *path)
{
  const char *dot = strrchr(path, '.');
  if (!dot)
    return NULL;
  static char ext[16];
  char *lower = g_ascii_strdown(dot, -1);
  g_strlcpy(ext, lower, sizeof ext);
  g_free(lower);
  return ext;
}

// Таблицы MPEG-заголовка (битрейты кбит/с и частоты), для разбора первого фрейма
static const guint16 mpeg_bitrate[2][3][15] = {
  { // MPEG1
    {0,32,64,96,128,160,192,224,256,288,320,352,384,416,448},   // Layer I
    {0,32,48,56,64,80,96,112,128,160,192,224,256,320,384},      // Layer II
    {0,32,40,48,56,64,80,96,112,128,160,192,224,256,320},       // Layer III
  },
  { // MPEG2 / 2.5
    {0,32,48,56,64,80,96,112,128,144,160,176,192,224,256},
    {0,8,16,24,32,40,48,56,64,80,96,112,128,144,160},
    {0,8,16,24,32,40,48,56,64,80,96,112,128,144,160},
  },
};
static const guint32 mpeg_samplerate[3][4] = {
  {44100,48000,32000,0}, // MPEG1
  {22050,24000,16000,0}, // MPEG2
  {11025,12000,8000,0},  // MPEG2.5
};

// Найти первый валидный MPEG-фрейм в буфере (так же, как TagLib) и скопировать
// его целиком в frame (не больше frame_cap). Возвращает длину фрейма или 0.
static guint32
mpeg_first_frame(const char *buf, guint32 from, guint32 len,
                 char *frame, guint32 frame_cap)
{
  if (from + 4 > len)
    return 0;

  for (guint32 off = from; off + 4 <= len; off++) {
    const guchar *b = (const guchar *)buf + off;
    if (b[0] != 0xFF || (b[1] & 0xE0) != 0xE0)
      continue; // нет синхроимпульса

    guint ver_bits = (b[1] >> 3) & 3;   // 0=2.5, 1=reserved, 2=2, 3=1
    guint layer_bits = (b[1] >> 1) & 3; // 1=III, 2=II, 3=I
    guint br_idx = (b[2] >> 4) & 0xF;
    guint sr_idx = (b[2] >> 2) & 3;
    if (ver_bits == 1 || layer_bits == 0 || br_idx == 0 || br_idx == 15 || sr_idx == 3)
      continue;

    guint br_row = ver_bits == 3 ? 0 : 1;  // MPEG1 / (MPEG2 и 2.5)
    guint br_col = 3 - layer_bits;         // биты: 3=I, 2=II, 1=III
    guint sr_row = ver_bits == 3 ? 0 : (ver_bits == 2 ? 1 : 2);
    guint bitrate = mpeg_bitrate[br_row][br_col][br_idx];
    guint32 sr = mpeg_samplerate[sr_row][sr_idx];
    if (bitrate == 0 || sr == 0)
      continue;

    guint32 samples = layer_bits == 1 ? (ver_bits == 3 ? 1152 : 576)
                      : layer_bits == 2 ? 1152 : 384;
    guint32 slot = layer_bits == 3 ? 4 : 1;
    guint32 pad = (b[2] >> 1) & 1;
    guint64 frame_len = (guint64)samples / 8 * bitrate * 1000 / sr + (guint64)pad * slot;
    if (frame_len < 24 || off + frame_len > len || frame_len > frame_cap)
      continue; // фрейм не влезает в буфер — не наш случай

    memcpy(frame, buf + off, (size_t)frame_len);
    return (guint32)frame_len;
  }
  return 0;
}

// MP3: ID3v2 (начало) + первые килобайты аудио, середина — реплики первого
// фрейма (чтобы TagLib нашёл «последний фрейм» и посчитал длительность CBR),
// последние 128 байт — настоящий ID3v1. Размер файла остаётся оригинальным.
static int
music_build_mp3(AfcFile *f, const char *path, guint64 size, FILE *out)
{
  (void)path;
  char head[10];
  uint32_t got = 0;
  if (afc_read_range_h(f, 0, 10, head, &got) != 0 || got < 10)
    return -1;

  guint32 id3 = id3v2_total_size(head, 10);
  guint64 head_len = id3 ? (guint64)id3 + 8192 : 8192;
  if (head_len > size)
    head_len = size;

  char *buf = g_malloc(head_len);
  if (afc_read_range_h(f, 0, (uint32_t)head_len, buf, &got) != 0 || got == 0) {
    g_free(buf);
    return -1;
  }
  guint32 head_got = got;
  fwrite(buf, 1, got, out);

  // Первый валидный фрейм — образец для заполнения середины
  char frame[4096];
  guint32 frame_len = 0;
  if (head_got > 4)
    frame_len = mpeg_first_frame(buf, id3 < head_got ? id3 : 0, head_got,
                                 frame, sizeof frame);

  // Последние 128 байт (ID3v1) — вместо нулей, чтобы теги из хвоста читались.
  // Если хвост уже попал в head (маленький файл) — ничего дописывать не нужно.
  char tail[128];
  guint64 rest = size > head_got ? size - head_got : 0;
  gboolean have_tail = rest >= 128 &&
                       afc_read_range_h(f, size - 128, 128, tail, &got) == 0 &&
                       got == 128;
  if (have_tail)
    rest -= 128;

  // Середина: реплики фрейма — валидные заголовки до самого конца файла
  while (frame_len > 0 && rest >= frame_len) {
    fwrite(frame, 1, frame_len, out);
    rest -= frame_len;
  }
  static char zeros[1 << 16];
  while (rest > 0) {
    size_t chunk = rest < sizeof zeros ? (size_t)rest : sizeof zeros;
    fwrite(zeros, 1, chunk, out);
    rest -= chunk;
  }
  if (have_tail)
    fwrite(tail, 1, 128, out);
  g_free(buf);
  return 0;
}

// MP4: найти атомы верхнего уровня в буфере (buf начинается с offset base).
// Возвращает offset ЗА последним разобранным атомом; size==1 — 64-битный.
static guint64
m4a_scan_atoms(const char *buf, guint32 len, guint64 base,
               gint64 *moov_off, gint64 *moov_size,
               gint64 *mdat_off, gint64 *mdat_size)
{
  guint64 pos = 0;
  while (pos + 8 <= len) {
    guint64 asize = (guint32)(((guchar)buf[pos] << 24) | ((guchar)buf[pos + 1] << 16) |
                              ((guchar)buf[pos + 2] << 8) | (guchar)buf[pos + 3]);
    const char *type = buf + pos + 4;
    guint64 hdr = 8;
    if (asize == 1) { // largesize: реальные 64 бита в следующих 8 байтах
      if (pos + 16 > len)
        break;
      asize = ((guint64)(guchar)buf[pos + 8] << 56) | ((guint64)(guchar)buf[pos + 9] << 48) |
              ((guint64)(guchar)buf[pos + 10] << 40) | ((guint64)(guchar)buf[pos + 11] << 32) |
              ((guint64)(guchar)buf[pos + 12] << 24) | ((guint64)(guchar)buf[pos + 13] << 16) |
              ((guint64)(guchar)buf[pos + 14] << 8) | (guint64)(guchar)buf[pos + 15];
      hdr = 16;
    } else if (asize == 0) { // атом тянется до конца файла
      if (!memcmp(type, "mdat", 4) && *mdat_off < 0) {
        *mdat_off = (gint64)(base + pos);
        *mdat_size = -1; // уточнит вызывающий: до конца файла
      }
      break; // дальше атомов нет
    }
    if (asize < hdr)
      break; // кривой атом — дальше не идём

    if (!memcmp(type, "moov", 4) && *moov_off < 0) {
      *moov_off = (gint64)(base + pos);
      *moov_size = (gint64)asize;
    } else if (!memcmp(type, "mdat", 4) && *mdat_off < 0) {
      *mdat_off = (gint64)(base + pos);
      *mdat_size = (gint64)asize;
    }
    pos += asize;
  }
  return base + pos;
}

// MP4: записать диапазон [start, end) файла в out — из буфера head, что в нём
// лежит, остальное докачать через AFC. 0 — успех, -1 — ошибка.
static int
m4a_write_range(AfcFile *f, const char *head,
                guint64 head_len, guint64 start, guint64 end, FILE *out)
{
  if (end <= start)
    return 0;

  guint64 from_head = end < head_len ? end : head_len;
  if (from_head > start) {
    fwrite(head + start, 1, (size_t)(from_head - start), out);
    start = from_head;
  }
  if (end <= start)
    return 0;

  guint64 len = end - start;
  char *buf = g_malloc(len);
  uint32_t got = 0;
  if (afc_read_range_h(f, start, (uint32_t)len, buf, &got) != 0 || got != len) {
    g_free(buf);
    return -1;
  }
  fwrite(buf, 1, got, out);
  g_free(buf);
  return 0;
}

// MP4: собирает ftyp + moov (целиком) + фейковый mdat. Длительность берётся
// из mvhd внутри moov, поэтому аудио-данные (mdat) не нужны вовсе.
static int
music_build_m4a(AfcFile *f, const char *path, guint64 size, FILE *out)
{
  (void)path;
  const guint32 head_cap = 128 * 1024;
  guint64 head_len = size < head_cap ? size : head_cap;
  char *head = g_malloc(head_len);
  uint32_t got = 0;
  if (afc_read_range_h(f, 0, (uint32_t)head_len, head, &got) != 0 || got < 16) {
    g_free(head);
    return -1;
  }
  head_len = got;

  gint64 moov_off = -1, moov_size = -1, mdat_off = -1, mdat_size = -1;
  m4a_scan_atoms(head, (guint32)head_len, 0, &moov_off, &moov_size, &mdat_off, &mdat_size);

  // mdat без явного размера тянется до конца файла
  if (mdat_off >= 0 && mdat_size < 0)
    mdat_size = (gint64)size - mdat_off;

  // moov не в начале — ищем его после mdat (докачкой заголовков атомов)
  if (moov_off < 0 && mdat_off >= 0 && mdat_size > 0) {
    guint64 off = (guint64)mdat_off + (guint64)mdat_size;
    for (int i = 0; i < 16 && off + 8 <= size; i++) {
      char ah[16];
      if (afc_read_range_h(f, off, 16, ah, &got) != 0 || got < 8)
        break;
      guint64 asize = (guint32)(((guchar)ah[0] << 24) | ((guchar)ah[1] << 16) |
                                ((guchar)ah[2] << 8) | (guchar)ah[3]);
      guint64 hdr = 8;
      if (asize == 1) { // largesize
        if (got < 16)
          break;
        asize = ((guint64)(guchar)ah[8] << 56) | ((guint64)(guchar)ah[9] << 48) |
                ((guint64)(guchar)ah[10] << 40) | ((guint64)(guchar)ah[11] << 32) |
                ((guint64)(guchar)ah[12] << 24) | ((guint64)(guchar)ah[13] << 16) |
                ((guint64)(guchar)ah[14] << 8) | (guint64)(guchar)ah[15];
        hdr = 16;
      }
      if (asize < hdr)
        break;
      if (!memcmp(ah + 4, "moov", 4)) {
        moov_off = (gint64)off;
        moov_size = (gint64)asize;
        break;
      }
      off += asize; // free/skip и прочие служебные — пропускаем
    }
  }

  if (moov_off < 0 || moov_size <= 0 ||
      (guint64)moov_off + (guint64)moov_size > size) {
    g_free(head);
    return 1; // не разобрались — нужен полный файл
  }

  guint64 moov_end = (guint64)moov_off + (guint64)moov_size;
  gboolean mdat_first = mdat_off >= 0 && (guint64)mdat_off < (guint64)moov_off;

  // Сборка валидного MP4 без реального mdat:
  //  - mdat раньше moov: [0, mdat) + фейковый mdat + moov (типичный iTunes-файл)
  //  - moov раньше mdat: [0, moov_end) + фейковый mdat
  //  - mdat нет вовсе:  [0, moov_off) + moov
  // Настоящий mdat (сотни МБ) не скачивается никогда.
  guint64 prefix_end = mdat_first ? (guint64)mdat_off : (guint64)moov_off;
  if (m4a_write_range(f, head, head_len, 0, prefix_end, out) != 0) {
    g_free(head);
    return -1;
  }

  static const char fake_mdat[8] = { 0, 0, 0, 8, 'm', 'd', 'a', 't' };
  if (mdat_first)
    fwrite(fake_mdat, 1, 8, out); // фейковый mdat вместо настоящего

  if (m4a_write_range(f, head, head_len, (guint64)moov_off, moov_end, out) != 0) {
    g_free(head);
    return -1;
  }

  if (!mdat_first && mdat_off >= 0)
    fwrite(fake_mdat, 1, 8, out); // moov был раньше mdat — фейк в конце

  g_free(head);
  return 0;
}

// FLAC: метаданные-блоки (STREAMINFO, VORBIS_COMMENT, PICTURE) в начале
// файла; длительность TagLib берёт из STREAMINFO, аудио-фреймы не нужны
static int
music_build_flac(AfcFile *f, const char *path, guint64 size, FILE *out)
{
  (void)path;
  char magic[4];
  uint32_t got = 0;
  if (afc_read_range_h(f, 0, 4, magic, &got) != 0 || got < 4 ||
      memcmp(magic, "fLaC", 4) != 0)
    return 1; // не FLAC — полный файл
  fwrite(magic, 1, 4, out);

  guint64 off = 4;
  for (int i = 0; i < 256 && off + 4 <= size; i++) {
    char bh[4];
    if (afc_read_range_h(f, off, 4, bh, &got) != 0 || got < 4)
      return -1;
    gboolean last = bh[0] & 0x80;
    guint32 blen = ((guint32)(guchar)bh[1] << 16) | ((guint32)(guchar)bh[2] << 8) |
                   (guint32)(guchar)bh[3];
    if (off + 4 + blen > size)
      break; // блок за пределами файла — кривой тег
    fwrite(bh, 1, 4, out);

    char *block = g_malloc(blen ? blen : 1);
    if (afc_read_range_h(f, off + 4, blen, block, &got) != 0 || got != blen) {
      g_free(block);
      return -1;
    }
    fwrite(block, 1, got, out);
    g_free(block);
    off += 4 + blen;

    if (blen > 16 * 1024 * 1024)
      return 1; // аномально большой блок — полный файл
    if (last)
      break;
  }
  return 0;
}

// Умное частичное скачивание: собирает tmp_path, валидный для TagLib.
// 0 — успех; 1 — формат не разобрать (нужен полный файл); -1 — ошибка.
// Умное частичное скачивание: собирает tmp_path, валидный для TagLib.
// bytes_out (может быть NULL) — сколько байт прочитано из устройства.
// 0 — успех; 1 — формат не разобрать (нужен полный файл); -1 — ошибка.
static int
music_partial_download(afc_client_t afc, const char *path, guint64 size,
                       const char *tmp_path, guint64 *bytes_out)
{
  if (bytes_out)
    *bytes_out = 0;
  if (size == 0)
    return 1;

  const char *ext = file_ext_lower(path);
  if (!ext)
    return 1;

  // Один open на файл: все диапазоны читаем через открытый хэндл
  AfcFile f;
  if (afc_file_open_h(&f, afc, path) != 0)
    return -1;

  FILE *out = fopen(tmp_path, "wb");
  if (!out) {
    afc_file_close_h(&f);
    return -1;
  }

  int rc;
  if (g_strcmp0(ext, ".mp3") == 0)
    rc = music_build_mp3(&f, path, size, out);
  else if (g_strcmp0(ext, ".m4a") == 0 || g_strcmp0(ext, ".m4b") == 0 ||
           g_strcmp0(ext, ".m4p") == 0 || g_strcmp0(ext, ".mp4") == 0)
    rc = music_build_m4a(&f, path, size, out);
  else if (g_strcmp0(ext, ".flac") == 0)
    rc = music_build_flac(&f, path, size, out);
  else
    rc = 1; // ogg/wav/прочие — старый путь с полным файлом

  fclose(out);
  afc_file_close_h(&f);
  if (bytes_out)
    *bytes_out = f.bytes;
  if (rc != 0)
    g_unlink(tmp_path);
  return rc;
}

typedef struct {
  char *udid;
  GListStore *store; // временный store, наполняется в фоновом потоке
  gint64 started_usec; // для замера времени сканирования в логе
  guint64 total_bytes;    // суммарный размер треков на устройстве
  guint64 network_bytes;  // сколько из них реально скачано (умное чтение)
} MusicScanCtx;

static void
music_scan_ctx_free(gpointer data)
{
  MusicScanCtx *ctx = data;
  g_free(ctx->udid);
  g_object_unref(ctx->store);
  g_free(ctx);
}

static void
music_scan_thread(GTask *task, gpointer source_object, gpointer task_data, GCancellable *cancellable)
{
  (void)cancellable;

  MusicScanCtx *ctx = task_data;
  AppleApplication *app = APPLE_APPLICATION(source_object);
  AfcSession s;

  if (afc_session_open(&s, ctx->udid) != 0) {
    log_message(tr("Музыка: не удалось подключиться к устройству (AFC)."));
    g_task_return_boolean(task, FALSE);
    return;
  }
  log_message(tr("Музыка: подключение AFC установлено, сканируем " MUSIC_REMOTE_ROOT "..."));

  GPtrArray *files = g_ptr_array_new_with_free_func(g_free);
  afc_collect_audio(s.afc, MUSIC_REMOTE_ROOT, files);
  log_message(tr("Музыка: найдено аудиофайлов: %u"), files->len);

  for (guint i = 0; i < files->len; i++) {
    const char *path = files->pdata[i];

    // Размер файла — часть ключа кэша
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

    // Прогресс в статус-страницу (каждые 10 файлов, чтобы не мельтешило)
    if (files->len > 0 && (i % 10 == 0 || i == files->len - 1))
      music_progress(tr("Читаем теги: %u из %u…"), i + 1, files->len);

    // Кэш тегов на сеанс: файл не перекачиваем, если уже читали
    char *key = g_strdup_printf("%s|%" G_GUINT64_FORMAT, path, size);
    MusicTrack *cached = app->tag_cache ? g_hash_table_lookup(app->tag_cache, key) : NULL;
    if (cached) {
      music_track_copy_tags(t, cached);
    } else {
      char *tmp_path = NULL;
      int fd = g_file_open_tmp("adevice-music-XXXXXX", &tmp_path, NULL);
      if (fd >= 0) {
        close(fd);
        ctx->total_bytes += size;
        // Умное частичное чтение: качаем только теговые структуры (быстро).
        // 1 — формат не разобрать, тогда полный файл (медленный старый путь).
        guint64 net = 0;
        int pd = music_partial_download(s.afc, path, size, tmp_path, &net);
        ctx->network_bytes += net;
        if (pd == 1) {
          pd = afc_download_file(s.afc, path, tmp_path);
          ctx->network_bytes += size; // полный файл
        }
        if (pd == 0) {
          read_track_tags(t, tmp_path);
          // Кладём в кэш только успешно прочитанное
          if (app->tag_cache && (t->title || t->artist || t->cover))
            g_hash_table_insert(app->tag_cache, g_strdup(key), g_object_ref(t));
        } else {
          log_message(tr("Музыка: не удалось скачать %s"), path);
        }
        g_unlink(tmp_path);
        g_free(tmp_path);
      }
    }
    g_free(key);

    // Для проверки в лог: теги первого трека
    if (i == 0)
      log_message(tr("Музыка: пример тегов: «%s» — %s (альбом: %s, обложка: %s)"),
                  t->title ? t->title : tr("(нет)"),
                  t->artist ? t->artist : tr("(нет)"),
                  t->album ? t->album : tr("(нет)"),
                  t->cover ? tr("есть") : tr("нет"));

    g_list_store_append(ctx->store, t);
    g_object_unref(t);
  }

  g_ptr_array_unref(files);
  afc_session_close(&s);
  log_message(tr("Музыка: сканирование завершено."));
  g_task_return_boolean(task, TRUE);
}

// Активность/доступность кнопок раздела «Музыка»
static void
update_music_buttons(AppleApplication *self)
{
  gboolean has = self->selected_track != NULL;
  if (self->music_import_btn)
    gtk_widget_set_sensitive(self->music_import_btn, !self->music_busy);
  if (self->music_refresh_btn)
    gtk_widget_set_sensitive(self->music_refresh_btn, !self->music_busy);
  if (self->music_export_btn)
    gtk_widget_set_sensitive(self->music_export_btn, !self->music_busy && has);
  if (self->music_delete_btn)
    gtk_widget_set_sensitive(self->music_delete_btn, !self->music_busy && has);
}

static void music_apply_filter(AppleApplication *self); // определена ниже (раздел списка)

static void
on_music_scan_finished(GObject *source_object, GAsyncResult *res, gpointer user_data)
{
  (void)user_data;

  AppleApplication *self = APPLE_APPLICATION(source_object);
  GTask *task = G_TASK(res);
  MusicScanCtx *ctx = g_task_get_task_data(task);

  self->music_busy = FALSE;
  update_music_buttons(self);

  if (!self->music_list || !self->music_stack)
    return; // окно уже закрыто

  if (!g_task_propagate_boolean(task, NULL)) {
    log_message(tr("Музыка: сканирование не удалось."));
    return;
  }

  // Пока шло сканирование, устройство могли сменить — результаты устарели
  if (!self->selected || g_strcmp0(self->selected->udid, ctx->udid) != 0) {
    log_message(tr("Музыка: скан устарел (устройство сменилось) — отброшен."));
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
  music_apply_filter(self); // пересчитать поиск/сортировку под новый список

  if (n > 0) {
    gtk_stack_set_visible_child_name(GTK_STACK(self->music_stack), "list");
  } else {
    adw_status_page_set_title(ADW_STATUS_PAGE(self->music_status), tr("Медиатека пуста"));
    adw_status_page_set_description(ADW_STATUS_PAGE(self->music_status),
                                    tr("В " MUSIC_REMOTE_ROOT " нет аудиофайлов. Загрузите музыку кнопкой «Импорт»."));
    gtk_stack_set_visible_child_name(GTK_STACK(self->music_stack), "empty");
  }
  log_message(tr("Музыка: в списке %u треков."), n);
  log_message(tr("Музыка: сканирование заняло %.1f с."),
              (g_get_monotonic_time() - ctx->started_usec) / 1000000.0);
  if (ctx->total_bytes > 0)
    log_message(tr("Музыка: скачано %s из %s (умное частичное чтение тегов)."),
                g_format_size(ctx->network_bytes),
                g_format_size(ctx->total_bytes));
}

// Запуск сканирования медиатеки выбранного устройства
static void
start_music_scan(AppleApplication *self, const char *udid)
{
  if (!udid || !self->music_stack)
    return;

  if (self->music_busy) {
    log_message(tr("Музыка: операция уже идёт — сканирование отложено (нажмите «Обновить»)."));
    return;
  }
  self->music_busy = TRUE;
  update_music_buttons(self);
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

  GTask *task = g_task_new(G_OBJECT(self), NULL, on_music_scan_finished, NULL);
  g_task_set_task_data(task, ctx, music_scan_ctx_free);
  g_task_run_in_thread(task, music_scan_thread);

  g_object_unref(task); // только наш ref от g_task_new (см. start_scan)
}

/* --- Список треков --- */

// Строка трека для bind_model. t заимствуется — владеет music_store.
static GtkWidget *
create_music_row(gpointer item, gpointer user_data)
{
  (void)user_data;

  MusicTrack *t = MUSIC_TRACK(item);

  GtkWidget *row = adw_action_row_new();
  // Теги могут содержать «&» и «<» — отключаем Pango-разметку, показываем как есть
  adw_preferences_row_set_use_markup(ADW_PREFERENCES_ROW(row), FALSE);

  // Обложка 40×40 (или иконка-заглушка)
  GtkWidget *cover_img = gtk_image_new();
  gtk_image_set_pixel_size(GTK_IMAGE(cover_img), 40);
  music_track_set_cover_image(GTK_IMAGE(cover_img), t);
  adw_action_row_add_prefix(ADW_ACTION_ROW(row), cover_img);

  char *title = music_track_display_title(t);
  adw_preferences_row_set_title(ADW_PREFERENCES_ROW(row), title);
  g_free(title);

  char *sub = music_track_subtitle(t);
  adw_action_row_set_subtitle(ADW_ACTION_ROW(row), sub);
  g_free(sub);

  // Связки для обновления строки после правки тегов
  g_object_set_data(G_OBJECT(row), "track", t);
  g_object_set_data(G_OBJECT(row), "cover-img", cover_img);

  return row;
}

static void
on_music_row_selected(GtkListBox *list, GtkListBoxRow *row, AppleApplication *self)
{
  (void)list;

  self->selected_track = row ? MUSIC_TRACK(g_object_get_data(G_OBJECT(row), "track")) : NULL;
  update_music_buttons(self);
}

// Сравнение текстовых полей сортировки: пустые — в конец, без учёта регистра
static gint
music_cmp_text(const char *a, const char *b)
{
  gboolean ea = !a || !*a;
  gboolean eb = !b || !*b;
  if (ea && eb)
    return 0;
  if (ea)
    return 1;
  if (eb)
    return -1;
  char *fa = g_utf8_casefold(a, -1);
  char *fb = g_utf8_casefold(b, -1);
  gint r = g_utf8_collate(fa, fb);
  g_free(fa);
  g_free(fb);
  return r;
}

// Подходит ли трек под поисковый запрос (casefold-подстрока в названии,
// исполнителе и альбоме)
static gboolean
music_track_matches(MusicTrack *t, const char *filter_fold)
{
  if (!filter_fold || !filter_fold[0])
    return TRUE;

  char *hay = g_strconcat(t->title ? t->title : "", " ",
                          t->artist ? t->artist : "", " ",
                          t->album ? t->album : "", NULL);
  char *fold = g_utf8_casefold(hay, -1);
  gboolean ok = strstr(fold, filter_fold) != NULL;
  g_free(hay);
  g_free(fold);
  return ok;
}

// Матч трека для GtkCustomFilter (item — MusicTrack из модели)
static gboolean
music_filter_match(gpointer item, gpointer user_data)
{
  AppleApplication *self = APPLE_APPLICATION(user_data);
  return music_track_matches(MUSIC_TRACK(item), self->music_filter);
}

// Сравнение треков для GtkCustomSorter
static gint
music_sort_compare(gpointer a, gpointer b, gpointer user_data)
{
  AppleApplication *self = APPLE_APPLICATION(user_data);
  MusicTrack *ta = MUSIC_TRACK(a);
  MusicTrack *tb = MUSIC_TRACK(b);

  switch (self->music_sort_mode) {
  case 1: // по названию
    return music_cmp_text(ta->title, tb->title);
  case 2: // по исполнителю, затем по названию
  case 3: { // по альбому, затем по названию
    const char *fa = self->music_sort_mode == 2 ? ta->artist : ta->album;
    const char *fb = self->music_sort_mode == 2 ? tb->artist : tb->album;
    gint c = music_cmp_text(fa, fb);
    return c ? c : music_cmp_text(ta->title, tb->title);
  }
  case 4: // по длительности, затем по названию
    if (ta->duration != tb->duration)
      return ta->duration < tb->duration ? -1 : 1;
    return music_cmp_text(ta->title, tb->title);
  default: // как на устройстве — порядок скана
    if (ta->scan_order != tb->scan_order)
      return ta->scan_order < tb->scan_order ? -1 : 1;
    return 0;
  }
}

// Пересчитать фильтр и сортировку списка; переключить страницу при пустом
// результате поиска
static void
music_apply_filter(AppleApplication *self)
{
  if (!self->music_list || !self->music_stack)
    return;

  g_free(self->music_filter);
  const char *q = self->music_search
                      ? gtk_editable_get_text(GTK_EDITABLE(self->music_search))
                      : "";
  self->music_filter = (*q) ? g_utf8_casefold(q, -1) : NULL;

  // Считаем подходящие треки по store (независимо от фильтр-колбэка)
  self->music_visible = 0;
  guint n = g_list_model_get_n_items(G_LIST_MODEL(self->music_store));
  for (guint i = 0; i < n; i++) {
    MusicTrack *t = g_list_model_get_item(G_LIST_MODEL(self->music_store), i);
    if (music_track_matches(t, self->music_filter))
      self->music_visible++;
    g_object_unref(t);
  }

  // Модель пересчитает строки сама (GtkListBox с bind_model не фильтрует сам)
  gtk_filter_changed(GTK_FILTER(self->music_filter_obj), GTK_FILTER_CHANGE_DIFFERENT);

  // «Ничего не найдено» — только когда фильтр активен и список был непуст
  gboolean no_results = self->music_filter && n > 0 && self->music_visible == 0;
  const char *cur = gtk_stack_get_visible_child_name(GTK_STACK(self->music_stack));
  if (no_results && g_strcmp0(cur, "list") == 0)
    gtk_stack_set_visible_child_name(GTK_STACK(self->music_stack), "no-results");
  else if (!no_results && g_strcmp0(cur, "no-results") == 0)
    gtk_stack_set_visible_child_name(GTK_STACK(self->music_stack), "list");
}

static void
on_music_search_changed(GtkSearchEntry *entry, AppleApplication *self)
{
  (void)entry;
  music_apply_filter(self);
}

static void
on_music_sort_changed(GObject *obj, GParamSpec *pspec, AppleApplication *self)
{
  (void)pspec;

  self->music_sort_mode = gtk_drop_down_get_selected(GTK_DROP_DOWN(obj));
  if (self->music_sorter)
    gtk_sorter_changed(GTK_SORTER(self->music_sorter), GTK_SORTER_CHANGE_DIFFERENT);
}

/* --- Импорт музыки --- */

typedef struct {
  char *udid;
  GPtrArray *local_paths; // локальные файлы для загрузки (g_free элементы)
  int db_added; // синхронизация с базой медиатеки: >=0 — добавлено, -1 — ошибка
} MusicImportCtx;

static void
music_import_ctx_free(gpointer data)
{
  MusicImportCtx *ctx = data;
  g_free(ctx->udid);
  g_ptr_array_unref(ctx->local_paths);
  g_free(ctx);
}

static void
music_import_thread(GTask *task, gpointer source_object, gpointer task_data, GCancellable *cancellable)
{
  (void)source_object;
  (void)cancellable;

  MusicImportCtx *ctx = task_data;
  AfcSession s;

  if (afc_session_open(&s, ctx->udid) != 0) {
    log_message(tr("Музыка: импорт не удался — нет подключения (AFC)."));
    g_task_return_int(task, -1);
    return;
  }

  // Каталог для импортируемых файлов; если уже существует — не страшно
  afc_make_directory(s.afc, MUSIC_REMOTE_ROOT "/Imported");

  int done = 0;
  GPtrArray *metas = g_ptr_array_new_with_free_func(medialib_meta_free);
  for (guint i = 0; i < ctx->local_paths->len; i++) {
    const char *lp = ctx->local_paths->pdata[i];
    char *base = g_path_get_basename(lp);
    char *remote = g_build_filename(MUSIC_REMOTE_ROOT, "Imported", base, NULL);

    log_message(tr("Музыка: импорт «%s» -> %s"), base, remote);
    if (afc_upload_file(s.afc, lp, remote) == 0) {
      done++;
      // Метаданные читаем из локального файла — на устройство имя уже загружено
      MedialibMeta *m = g_new0(MedialibMeta, 1);
      GError *merr = NULL;
      if (medialib_read_meta(lp, base, m, &merr)) {
        g_ptr_array_add(metas, m);
      } else {
        log_message(tr("Музыка: не удалось прочитать теги «%s»: %s"), base, merr->message);
        medialib_meta_free(m);
        g_clear_error(&merr);
      }
    } else {
      log_message(tr("Музыка: не удалось загрузить «%s»."), base);
    }

    g_free(base);
    g_free(remote);
  }

  // Дописываем треки в базу медиатеки — один цикл на весь импорт
  ctx->db_added = metas->len > 0 ? music_sync_medialib_add(s.afc, metas) : 0;
  g_ptr_array_unref(metas);

  afc_session_close(&s);
  g_task_return_int(task, done);
}

static void
on_music_import_finished(GObject *source_object, GAsyncResult *res, gpointer user_data)
{
  (void)user_data;

  AppleApplication *self = APPLE_APPLICATION(source_object);
  GTask *task = G_TASK(res);
  MusicImportCtx *ctx = g_task_get_task_data(task);

  int done = g_task_propagate_int(task, NULL);
  self->music_busy = FALSE;
  update_music_buttons(self);

  char *msg = g_strdup_printf(tr("Импортировано файлов: %d"), done);
  log_message("%s", msg);
  if (self->toast_overlay)
    adw_toast_overlay_add_toast(ADW_TOAST_OVERLAY(self->toast_overlay), adw_toast_new(msg));
  g_free(msg);

  // Результат дописывания треков в базу медиатеки
  if (done > 0 && ctx->db_added > 0)
    log_message(tr("Музыка: треки добавлены в базу медиатеки. Перезапустите приложение «Музыка» на iPhone, чтобы они появились."));
  else if (done > 0 && ctx->db_added == 0)
    log_message(tr("Музыка: все треки уже есть в медиатеке."));
  else if (done > 0)
    log_message(tr("Музыка: файлы загружены, но база «Музыки» не обновлена — треки появятся только после перезагрузки iPhone."));

  // Обновляем список, чтобы показать импортированное
  if (done > 0 && self->selected && g_strcmp0(self->selected->udid, ctx->udid) == 0)
    start_music_scan(self, self->selected->udid);
}

static void
on_import_dialog_done(GObject *source, GAsyncResult *res, gpointer user_data)
{
  AppleApplication *self = APPLE_APPLICATION(user_data);

  GListModel *files = gtk_file_dialog_open_multiple_finish(GTK_FILE_DIALOG(source), res, NULL);
  if (!files)
    return; // отмена

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
  update_music_buttons(self);

  MusicImportCtx *ctx = g_new0(MusicImportCtx, 1);
  ctx->udid = g_strdup(self->selected->udid);
  ctx->local_paths = paths;

  GTask *task = g_task_new(G_OBJECT(self), NULL, on_music_import_finished, NULL);
  g_task_set_task_data(task, ctx, music_import_ctx_free);
  g_task_run_in_thread(task, music_import_thread);

  g_object_unref(task);
}

static void
on_music_import_clicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;

  if (!self->selected || self->music_busy)
    return;

  GtkFileDialog *dlg = gtk_file_dialog_new();
  gtk_file_dialog_set_title(dlg, tr("Выберите аудиофайлы для импорта"));
  gtk_file_dialog_open_multiple(dlg, GTK_WINDOW(self->window), NULL,
                                on_import_dialog_done, self);
  g_object_unref(dlg);
}

/* --- Экспорт музыки --- */

typedef struct {
  char *udid;
  MusicTrack *track; // ref
  char *dest;        // локальный путь назначения
} MusicExportCtx;

static void
music_export_ctx_free(gpointer data)
{
  MusicExportCtx *ctx = data;
  g_free(ctx->udid);
  g_object_unref(ctx->track);
  g_free(ctx->dest);
  g_free(ctx);
}

static void
music_export_thread(GTask *task, gpointer source_object, gpointer task_data, GCancellable *cancellable)
{
  (void)source_object;
  (void)cancellable;

  MusicExportCtx *ctx = task_data;
  AfcSession s;

  if (afc_session_open(&s, ctx->udid) != 0) {
    log_message(tr("Музыка: экспорт не удался — нет подключения (AFC)."));
    g_task_return_int(task, -1);
    return;
  }

  log_message(tr("Музыка: экспорт %s -> %s"), ctx->track->path, ctx->dest);
  int rc = afc_download_file(s.afc, ctx->track->path, ctx->dest);
  afc_session_close(&s);
  g_task_return_int(task, rc);
}

static void
on_music_export_finished(GObject *source_object, GAsyncResult *res, gpointer user_data)
{
  (void)user_data;

  AppleApplication *self = APPLE_APPLICATION(source_object);
  GTask *task = G_TASK(res);
  MusicExportCtx *ctx = g_task_get_task_data(task);

  int rc = g_task_propagate_int(task, NULL);
  self->music_busy = FALSE;
  update_music_buttons(self);

  if (rc == 0) {
    char *base = g_path_get_basename(ctx->dest);
    char *msg = g_strdup_printf(tr("Экспортировано: %s"), base);
    log_message("%s", msg);
    if (self->toast_overlay)
      adw_toast_overlay_add_toast(ADW_TOAST_OVERLAY(self->toast_overlay), adw_toast_new(msg));
    g_free(msg);
    g_free(base);
  } else {
    log_message(tr("Музыка: экспорт не удался."));
    if (self->toast_overlay)
      adw_toast_overlay_add_toast(ADW_TOAST_OVERLAY(self->toast_overlay),
                                  adw_toast_new(tr("Не удалось экспортировать файл")));
  }
}

static void
on_export_dialog_done(GObject *source, GAsyncResult *res, gpointer user_data)
{
  MusicTrack *track = MUSIC_TRACK(user_data);
  AppleApplication *self = APPLE_APPLICATION(global_app);

  GFile *dest = gtk_file_dialog_save_finish(GTK_FILE_DIALOG(source), res, NULL);
  if (!dest) {
    g_object_unref(track);
    return; // отмена
  }
  char *dest_path = g_file_get_path(dest);
  g_object_unref(dest);

  if (!dest_path || !self->selected || self->music_busy) {
    g_free(dest_path);
    g_object_unref(track);
    return;
  }

  self->music_busy = TRUE;
  update_music_buttons(self);

  MusicExportCtx *ctx = g_new0(MusicExportCtx, 1);
  ctx->udid = g_strdup(self->selected->udid);
  ctx->track = track; // забираем ref из колбэка диалога
  ctx->dest = dest_path;

  GTask *task = g_task_new(G_OBJECT(self), NULL, on_music_export_finished, NULL);
  g_task_set_task_data(task, ctx, music_export_ctx_free);
  g_task_run_in_thread(task, music_export_thread);

  g_object_unref(task);
}

static void
on_music_export_clicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;

  if (!self->selected_track || self->music_busy)
    return;

  GtkFileDialog *dlg = gtk_file_dialog_new();
  gtk_file_dialog_set_title(dlg, tr("Сохранить файл"));
  char *base = g_path_get_basename(self->selected_track->path);
  gtk_file_dialog_set_initial_name(dlg, base);
  g_free(base);

  // track с ref: освободится в on_export_dialog_done
  gtk_file_dialog_save(dlg, GTK_WINDOW(self->window), NULL,
                       on_export_dialog_done, g_object_ref(self->selected_track));
  g_object_unref(dlg);
}

/* --- Удаление музыки --- */

typedef struct {
  char *udid;
  MusicTrack *track; // ref
  gboolean clean_db; // вычищать ли запись из базы «Музыки»
} MusicDeleteCtx;

static void
music_delete_ctx_free(gpointer data)
{
  MusicDeleteCtx *ctx = data;
  g_free(ctx->udid);
  g_object_unref(ctx->track);
  g_free(ctx);
}

static void
music_delete_thread(GTask *task, gpointer source_object, gpointer task_data, GCancellable *cancellable)
{
  (void)source_object;
  (void)cancellable;

  MusicDeleteCtx *ctx = task_data;
  AfcSession s;

  if (afc_session_open(&s, ctx->udid) != 0) {
    log_message(tr("Музыка: удаление не удалось — нет подключения (AFC)."));
    g_task_return_int(task, -1);
    return;
  }

  log_message(tr("Музыка: удаление %s"), ctx->track->path);
  int rc = afc_remove_path(s.afc, ctx->track->path);
  if (rc != AFC_E_SUCCESS) {
    afc_session_close(&s);
    g_task_return_int(task, -1);
    return;
  }

  // Чистка записи в базе «Музыки» (по желанию пользователя в диалоге).
  // Коды: 1 — вычищено, 0 — записи не было, -1 — ошибка базы.
  int db_status = 0;
  if (ctx->clean_db)
    db_status = music_clean_medialib(&s, ctx->track);

  afc_session_close(&s);
  g_task_return_int(task, db_status < 0 ? 1 : 0);
}

static void
on_music_delete_finished(GObject *source_object, GAsyncResult *res, gpointer user_data)
{
  (void)user_data;

  AppleApplication *self = APPLE_APPLICATION(source_object);
  GTask *task = G_TASK(res);
  MusicDeleteCtx *ctx = g_task_get_task_data(task);

  int rc = g_task_propagate_int(task, NULL);
  self->music_busy = FALSE;
  update_music_buttons(self);

  if (rc < 0) {
    log_message(tr("Музыка: удаление не удалось."));
    if (self->toast_overlay)
      adw_toast_overlay_add_toast(ADW_TOAST_OVERLAY(self->toast_overlay),
                                  adw_toast_new(tr("Не удалось удалить файл")));
    return;
  }

  if (rc > 0) {
    // Файл удалён, но базу вычистить не удалось — частичный успех
    log_message(tr("Музыка: файл удалён, но база «Музыки» не вычищена (см. лог)."));
    if (self->toast_overlay)
      adw_toast_overlay_add_toast(ADW_TOAST_OVERLAY(self->toast_overlay),
                                  adw_toast_new(tr("Файл удалён, база не вычищена")));
  }

  // Убираем трек из списка (ищем по указателю объекта)
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
  update_music_buttons(self);

  log_message(tr("Музыка: файл удалён с накопителя."));
  if (rc == 0 && ctx->clean_db)
    log_message(tr("Музыка: перезапустите приложение «Музыка» на iPhone, чтобы изменения появились."));
  if (self->toast_overlay)
    adw_toast_overlay_add_toast(ADW_TOAST_OVERLAY(self->toast_overlay),
                                adw_toast_new(tr("Файл удалён с накопителя")));
}

static void
on_delete_confirmed(GObject *source, GAsyncResult *res, gpointer user_data)
{
  MusicTrack *track = MUSIC_TRACK(user_data);
  AppleApplication *self = APPLE_APPLICATION(global_app);

  const char *resp = adw_alert_dialog_choose_finish(ADW_ALERT_DIALOG(source), res);
  gboolean clean_db = (g_strcmp0(resp, "full") == 0);
  if ((!clean_db && g_strcmp0(resp, "file") != 0) || !self->selected || self->music_busy) {
    g_object_unref(track);
    return;
  }

  self->music_busy = TRUE;
  update_music_buttons(self);

  MusicDeleteCtx *ctx = g_new0(MusicDeleteCtx, 1);
  ctx->udid = g_strdup(self->selected->udid);
  ctx->track = track; // забираем ref из колбэка диалога
  ctx->clean_db = clean_db;

  GTask *task = g_task_new(G_OBJECT(self), NULL, on_music_delete_finished, NULL);
  g_task_set_task_data(task, ctx, music_delete_ctx_free);
  g_task_run_in_thread(task, music_delete_thread);

  g_object_unref(task);
}

static void
on_music_delete_clicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;

  if (!self->selected_track || self->music_busy)
    return;

  MusicTrack *track = self->selected_track;
  char *title = music_track_display_title(track);
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

  // Подтверждение через AdwAlertDialog (AdwMessageDialog устарел в 1.9)
  AdwDialog *md = adw_alert_dialog_new(tr("Удалить файл?"), body);
  g_free(body);
  adw_alert_dialog_add_response(ADW_ALERT_DIALOG(md), "cancel", tr("Отмена"));
  adw_alert_dialog_add_response(ADW_ALERT_DIALOG(md), "file", tr("Только файл"));
  adw_alert_dialog_add_response(ADW_ALERT_DIALOG(md), "full",
                                tr("Файл и запись в «Музыке»"));
  adw_alert_dialog_set_response_appearance(ADW_ALERT_DIALOG(md), "full",
                                           ADW_RESPONSE_DESTRUCTIVE);

  // track с ref: освободится в on_delete_confirmed
  adw_alert_dialog_choose(ADW_ALERT_DIALOG(md), GTK_WIDGET(self->window), NULL,
                          on_delete_confirmed, g_object_ref(track));
  adw_dialog_present(md, GTK_WIDGET(self->window));
}

static void
on_music_refresh_clicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;

  if (self->selected)
    start_music_scan(self, self->selected->udid);
}

/* --- Сайдбар --- */

// Виджет строки сайдбара для элемента store (bind_model).
// info заимствуется — владеет ей device_store.
static GtkWidget *
create_sidebar_row(gpointer item, gpointer user_data)
{
  (void)user_data;

  DeviceInfo *info = DEVICE_INFO(item);

  GtkWidget *row = adw_action_row_new();
  // Имя устройства может содержать «&» — отключаем Pango-разметку
  adw_preferences_row_set_use_markup(ADW_PREFERENCES_ROW(row), FALSE);
  adw_preferences_row_set_title(ADW_PREFERENCES_ROW(row), info->name);

  // Иконка устройства (HIG: префикс 16–24 px, символическая из темы)
  const char *icon_name = device_icon_for(info);
  if (icon_name) {
    GtkWidget *prefix_icon = gtk_image_new_from_icon_name(icon_name);
    gtk_image_set_pixel_size(GTK_IMAGE(prefix_icon), 24);
    adw_action_row_add_prefix(ADW_ACTION_ROW(row), prefix_icon);
  }

  char *subtitle = g_strdup_printf("%s %s",
                                   os_label_for_product_type(info->product_type),
                                   info->version);
  adw_action_row_set_subtitle(ADW_ACTION_ROW(row), subtitle);
  g_free(subtitle);

  // Связка «строка -> данные» (заимствовано из device_store)
  g_object_set_data(G_OBJECT(row), "device-info", info);

  return row;
}

// Строка раздела навигации (Обзор, Музыка, Фото...). page — имя страницы GtkStack.
static GtkWidget *
make_nav_row(const char *icon_name, const char *title, const char *page)
{
  GtkWidget *row = adw_action_row_new();
  adw_preferences_row_set_title(ADW_PREFERENCES_ROW(row), title);

  GtkIconTheme *theme = gtk_icon_theme_get_for_display(gdk_display_get_default());
  if (icon_name && gtk_icon_theme_has_icon(theme, icon_name)) {
    GtkWidget *prefix_icon = gtk_image_new_from_icon_name(icon_name);
    gtk_image_set_pixel_size(GTK_IMAGE(prefix_icon), 16);
    adw_action_row_add_prefix(ADW_ACTION_ROW(row), prefix_icon);
  }

  g_object_set_data_full(G_OBJECT(row), "page", g_strdup(page), g_free);
  return row;
}

// Выбор раздела навигации: переключаем страницу контента
static void
on_nav_selected(GtkListBox *list, GtkListBoxRow *row, AppleApplication *self)
{
  (void)list;

  if (!row || !self->content_stack)
    return;
  if (!self->selected)
    return; // устройства нет — остаёмся на пустой странице

  const char *page = g_object_get_data(G_OBJECT(row), "page");
  if (page) {
    gtk_stack_set_visible_child_name(GTK_STACK(self->content_stack), page);
    // Снимаем выделение со строки настроек — текущим стал раздел навигации
    if (self->settings_list)
      gtk_list_box_unselect_all(GTK_LIST_BOX(self->settings_list));
  }
}

// Выбранная строка устройства в сайдбаре: заполняем шапку и правую панель
static void
on_row_selected(GtkListBox *list, GtkListBoxRow *row, AppleApplication *self)
{
  (void)list;

  if (!self->content_stack)
    return; // окно уже уничтожено

  if (!row) {
    self->selected = NULL;
    self->storage_total = 0;
    self->storage_used = 0;
    self->storage_used_frac = 0;
    gtk_stack_set_visible_child_name(GTK_STACK(self->content_stack), "empty");
    // Снимаем выделение со строки настроек, чтобы повторный клик по ней работал
    if (self->settings_list)
      gtk_list_box_unselect_all(GTK_LIST_BOX(self->settings_list));

    // Музыка прошлого устройства больше не актуальна
    g_list_store_remove_all(self->music_store);
    self->selected_track = NULL;
    update_music_buttons(self);

    if (self->header_title) {
      adw_window_title_set_title(ADW_WINDOW_TITLE(self->header_title), tr("Устройство не выбрано"));
      adw_window_title_set_subtitle(ADW_WINDOW_TITLE(self->header_title), NULL);
    }
    if (self->battery_box)
      gtk_widget_set_visible(self->battery_box, FALSE);
    if (self->storage_area)
      gtk_widget_queue_draw(self->storage_area);
    return;
  }

  DeviceInfo *info = g_object_get_data(G_OBJECT(row), "device-info");
  if (!info)
    return;

  self->selected = info;

  // Строки «Об устройстве»
  adw_action_row_set_subtitle(ADW_ACTION_ROW(self->row_device), info->name);
  adw_action_row_set_subtitle(ADW_ACTION_ROW(self->row_model),
                              info->product_type ? info->product_type : "—");
  char *os = g_strdup_printf("%s %s", os_label_for_product_type(info->product_type), info->version);
  adw_action_row_set_subtitle(ADW_ACTION_ROW(self->row_os), os);
  g_free(os);
  adw_action_row_set_subtitle(ADW_ACTION_ROW(self->row_serial),
                              info->serial_number ? info->serial_number : "—");
  adw_action_row_set_subtitle(ADW_ACTION_ROW(self->row_udid), info->udid);
  if (info->battery_percent >= 0) {
    char *bt = g_strdup_printf("%d%%", info->battery_percent);
    adw_action_row_set_subtitle(ADW_ACTION_ROW(self->row_battery), bt);
    g_free(bt);
  } else {
    adw_action_row_set_subtitle(ADW_ACTION_ROW(self->row_battery), "—");
  }

  // Хранилище: реальные значения, иначе демо (честно помечаем)
  guint64 total = info->total_capacity;
  guint64 used = info->disk_usage;
  self->storage_demo = (total == 0 || used > total);
  if (self->storage_demo) {
    total = (guint64)DEMO_TOTAL_GB * 1000000000ULL;
    used = total * DEMO_USED_PCT / 100;
  }
  self->storage_total = total;
  self->storage_used = used;
  self->storage_used_frac = (double)used / (double)total;

  // Шапка: иконка, имя, «модель · всего (свободно)», батарея
  if (self->header_title) {
    adw_window_title_set_title(ADW_WINDOW_TITLE(self->header_title), info->name);
    char *sub = g_strdup_printf(tr("%s · %s (%s свободно)%s"),
                                info->product_type ? info->product_type : "—",
                                g_format_size(total),
                                g_format_size(total - used),
                                self->storage_demo ? tr(" (демо)") : "");
    adw_window_title_set_subtitle(ADW_WINDOW_TITLE(self->header_title), sub);
    g_free(sub);
  }
  if (self->header_icon) {
    const char *icon_name = device_icon_for(info);
    if (icon_name)
      gtk_image_set_from_icon_name(GTK_IMAGE(self->header_icon), icon_name);
  }
  if (self->battery_box) {
    if (info->battery_percent >= 0) {
      char bbuf[64];
      const char *bicon = battery_icon_for(info->battery_percent, bbuf, sizeof bbuf);
      if (bicon)
        gtk_image_set_from_icon_name(GTK_IMAGE(self->battery_icon), bicon);
      char *bt = g_strdup_printf("%d%%", info->battery_percent);
      gtk_label_set_text(GTK_LABEL(self->battery_label), bt);
      g_free(bt);
      gtk_widget_set_visible(self->battery_box, TRUE);
    } else {
      gtk_widget_set_visible(self->battery_box, FALSE);
    }
  }

  // Показываем страницу «Обзор» и синхронизируем навигацию в сайдбаре
  if (self->nav_list) {
    GtkListBoxRow *first = gtk_list_box_get_row_at_index(GTK_LIST_BOX(self->nav_list), 0);
    if (first && gtk_list_box_get_selected_row(GTK_LIST_BOX(self->nav_list)) != first)
      gtk_list_box_select_row(GTK_LIST_BOX(self->nav_list), first);
  }
  gtk_stack_set_visible_child_name(GTK_STACK(self->content_stack), "general");
  if (self->storage_area)
    gtk_widget_queue_draw(self->storage_area);

  // Подгружаем медиатеку этого устройства
  start_music_scan(self, info->udid);
}

// Восстановить выделение после пересканирования: то же устройство по UDID,
// иначе первое
static void
restore_selection(AppleApplication *self, const char *prev_udid)
{
  guint n = g_list_model_get_n_items(G_LIST_MODEL(self->device_store));
  if (n == 0)
    return;

  GtkListBoxRow *target = NULL;

  for (guint i = 0; i < n && !target; i++) {
    GtkListBoxRow *row = gtk_list_box_get_row_at_index(GTK_LIST_BOX(self->sidebar_list), i);
    DeviceInfo *info = row ? g_object_get_data(G_OBJECT(row), "device-info") : NULL;

    if (!info)
      continue;
    if (!prev_udid) {
      target = row; // было ничего не выбрано — берём первую строку
    } else if (g_strcmp0(info->udid, prev_udid) == 0) {
      target = row;
    }
  }

  if (target)
    gtk_list_box_select_row(GTK_LIST_BOX(self->sidebar_list), target);
}

/* --- Действия (заглушки) --- */

static void
on_backup_clicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;
  show_stub_toast(self, tr("резервное копирование"));
}

static void
on_restore_clicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;
  show_stub_toast(self, tr("восстановление из копии"));
}

static void
on_check_updates_clicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;
  show_stub_toast(self, tr("проверка обновлений"));
}

static void
on_restore_firmware_clicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;
  show_stub_toast(self, tr("восстановление прошивки"));
}

static void
on_sync_clicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;
  show_stub_toast(self, tr("синхронизация"));
}

// Выбор языка в настройках: сохраняем в файл, применится после перезапуска
static void
on_language_changed(GObject *obj, GParamSpec *pspec, AppleApplication *self)
{
  (void)pspec;
  (void)self;

  guint idx = adw_combo_row_get_selected(ADW_COMBO_ROW(obj));
  const char *lang = (idx == 1) ? "en" : "ru";
  app_settings_save_language(lang);
  log_message("%s", tr("Язык применится после перезапуска приложения."));
}

// Общий обработчик: переключаем контент на страницу настроек
static void
show_settings_page(AppleApplication *self)
{
  // Страница настроек доступна и без выбранного устройства
  if (!self->content_stack)
    return;
  gtk_stack_set_visible_child_name(GTK_STACK(self->content_stack), "settings");
  // Снимаем выделение с разделов навигации: подсвечен только текущий раздел,
  // иначе повторный клик по выделенной строке не сработает (row-selected не меняется)
  if (self->nav_list)
    gtk_list_box_unselect_all(GTK_LIST_BOX(self->nav_list));
  log_message("%s", tr("Открыта страница настроек."));
}

// Клик/Enter по строке «Настройки приложения» (сигнал AdwActionRow)
static void
on_settings_activated(AdwActionRow *row, AppleApplication *self)
{
  (void)row;
  show_settings_page(self);
}

// Активация строки в списке настроек (GtkListBox::row-activated) —
// дублирующий путь: срабатывает при одиночном клике по строке
static void
on_settings_row_activated(GtkListBox *list, GtkListBoxRow *row, AppleApplication *self)
{
  (void)list;
  (void)row;
  show_settings_page(self);
}

// Выделение строки настроек кликом — основной путь (как у разделов навигации)
static void
on_settings_row_selected(GtkListBox *list, GtkListBoxRow *row, AppleApplication *self)
{
  (void)list;
  if (!row)
    return; // выделение сброшено — не реагируем
  show_settings_page(self);
}

/* --- Сканирование --- */

// Колбэк GTask — выполняется В ГЛАВНОМ потоке.
static void start_scan(AppleApplication *self); // forward: вызывается из on_scan_finished

static void
on_scan_finished(GObject *source_object, GAsyncResult *res, gpointer user_data)
{
  (void)user_data;

  AppleApplication *self = APPLE_APPLICATION(source_object);
  GTask *task = G_TASK(res);

  log_message(tr("Фоновый поток завершен. Обновляем UI..."));
  self->scanning = FALSE;

  if (self->refresh_btn)
    gtk_widget_set_sensitive(self->refresh_btn, TRUE);

  // Сайдбар мог быть уничтожен (окно закрыли, пока шло сканирование)
  if (!self->sidebar_list || !self->sidebar_stack) {
    log_message(tr("Окно уже закрыто — обновление списка пропущено."));
    return;
  }

  if (g_task_propagate_boolean(task, NULL)) {
    GListStore *found = G_LIST_STORE(g_task_get_task_data(task));
    guint n_items = g_list_model_get_n_items(G_LIST_MODEL(found));
    log_message(tr("Устройств найдено: %u"), n_items);

    // Помним, что было выделено, чтобы вернуть выделение после пересканирования
    char *prev_udid = self->selected ? g_strdup(self->selected->udid) : NULL;
    self->selected = NULL;

    // Сайдбар привязан к постоянному store через bind_model: очищаем
    // и наполняем заново — список перерисуется сам (главный поток)
    g_list_store_remove_all(self->device_store);
    for (guint i = 0; i < n_items; i++) {
      DeviceInfo *info = DEVICE_INFO(g_list_model_get_item(G_LIST_MODEL(found), i));
      log_message("  + %s", info->name);
      g_list_store_append(self->device_store, info);
      g_object_unref(info); // владение забрал device_store
    }

    gtk_stack_set_visible_child_name(GTK_STACK(self->sidebar_stack),
                                     n_items > 0 ? "devices" : "status");
    if (n_items == 0) {
      adw_status_page_set_title(ADW_STATUS_PAGE(self->status_page), tr("Устройства не найдены"));
      adw_status_page_set_description(ADW_STATUS_PAGE(self->status_page),
                                      tr("Подключите iPhone, iPad или другое устройство Apple по USB и нажмите «Обновить»."));
    }

    restore_selection(self, prev_udid);
    g_free(prev_udid);
  } else {
    log_message(tr("Ошибка при выполнении фоновой задачи."));

    // Если список ещё пуст — честно покажем ошибку вместо «Ищем устройства…»
    if (self->sidebar_stack && self->status_page && self->sidebar_list &&
        !gtk_widget_get_first_child(self->sidebar_list)) {
      adw_status_page_set_title(ADW_STATUS_PAGE(self->status_page),
                                tr("Не удалось получить список устройств"));
      adw_status_page_set_description(ADW_STATUS_PAGE(self->status_page),
                                      tr("Проверьте подключение к USB (запущен ли usbmuxd?) и нажмите «Обновить»."));
      gtk_stack_set_visible_child_name(GTK_STACK(self->sidebar_stack), "status");
    }
  }

  // Устройство подключили, пока шло сканирование — сканируем ещё раз,
  // иначе подключение останется незамеченным до ручного обновления
  if (self->rescan_pending) {
    self->rescan_pending = FALSE;
    start_scan(self);
  }

  // ВАЖНО: task (== res) здесь НЕ освобождаем (g_object_unref)!
  // GIO сам владеет task-ом: ref держится и снимается после возврата колбэка
  // (complete_in_idle_cb). Лишний unref здесь ранее приводил к double free
  // и SIGSEGV после обновления списка устройств.
}

// Запуск сканирования. Вызывается из кнопки и при старте приложения.
static void
start_scan(AppleApplication *self)
{
  // Защита от повторного запуска
  if (self->scanning) {
    log_message(tr("Сканирование уже идет — запуск проигнорирован."));
    return;
  }
  self->scanning = TRUE;

  if (self->refresh_btn)
    gtk_widget_set_sensitive(self->refresh_btn, FALSE);

  // Пока список пуст — показываем страницу поиска; если устройства уже
  // отображаются, страницу не трогаем, чтобы не мигать при пересканировании
  if (self->sidebar_stack && self->status_page && self->sidebar_list &&
      !gtk_widget_get_first_child(self->sidebar_list)) {
    adw_status_page_set_title(ADW_STATUS_PAGE(self->status_page), tr("Ищем устройства…"));
    adw_status_page_set_description(ADW_STATUS_PAGE(self->status_page),
                                    tr("Подключите устройство Apple по USB-кабелю."));
    gtk_stack_set_visible_child_name(GTK_STACK(self->sidebar_stack), "status");
  }

  GListStore *store = g_list_store_new(DEVICE_TYPE_INFO);

  GTask *task = g_task_new(G_OBJECT(self), NULL, on_scan_finished, NULL);
  g_task_set_task_data(task, store, g_object_unref);
  g_task_run_in_thread(task, scan_devices_thread);

  g_object_unref(task); // ВАЖНО: g_object_unref(task) — только наш ref от g_task_new
}

static void
on_refresh_clicked(GtkButton *btn, gpointer user_data)
{
  (void)btn;
  log_message(tr("Нажата кнопка обновления."));
  start_scan(APPLE_APPLICATION(user_data));
}

// Действие win.refresh — по нему назначается горячая клавиша Ctrl+R (GNOME)
static void
on_refresh_action(GSimpleAction *action, GVariant *parameter, gpointer user_data)
{
  (void)action;
  (void)parameter;
  log_message(tr("Нажата горячая клавиша Ctrl+R."));
  start_scan(APPLE_APPLICATION(user_data));
}

/* --- События usbmuxd: устройство подключили/отключили по USB --- */

// Контекст события, передаваемый в главный поток GTK: колбэк подписки
// приходит из потока usbmuxd, трогать интерфейс оттуда нельзя
typedef struct {
  AppleApplication *self;
  int kind;   // IDEVICE_DEVICE_ADD / IDEVICE_DEVICE_REMOVE / IDEVICE_DEVICE_PAIRED
  char *udid;
} DeviceEventMsg;

// Обработка события — уже в главном потоке GTK
static gboolean
on_device_event_idle(gpointer user_data)
{
  DeviceEventMsg *msg = user_data;
  AppleApplication *self = msg->self;

  if (msg->kind == IDEVICE_DEVICE_REMOVE) {
    guint n = g_list_model_get_n_items(G_LIST_MODEL(self->device_store));
    for (guint i = 0; i < n; i++) {
      DeviceInfo *info = DEVICE_INFO(g_list_model_get_item(G_LIST_MODEL(self->device_store), i));
      gboolean match = g_strcmp0(info->udid, msg->udid) == 0;
      g_object_unref(info); // владение у store, снимаем только наш ref
      if (match) {
        // Удаление строки снимает выделение: сработает on_row_selected(NULL)
        // и сам почистит шапку, музыку и диаграмму накопителя
        g_list_store_remove(self->device_store, i);
        log_message(tr("Устройство отключено: %s"), msg->udid);
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
    log_message(tr("Устройство подключено: %s — обновляю список…"), msg->udid);
    // Как в Айтюнс: подключение подхватываем автоматически
    if (self->scanning)
      self->rescan_pending = TRUE; // текущее сканирование его не увидело
    else
      start_scan(self);
  }
  // IDEVICE_DEVICE_PAIRED список не меняет — игнорируем

  g_free(msg->udid);
  g_free(msg);
  return G_SOURCE_REMOVE; // одноразовый idle
}

// Колбэк libimobiledevice — приходит из потока usbmuxd
static void
device_event_cb(const idevice_event_t *event, void *user_data)
{
  DeviceEventMsg *msg = g_new0(DeviceEventMsg, 1);
  msg->self = APPLE_APPLICATION(user_data);
  msg->kind = event->event;
  msg->udid = g_strdup(event->udid); // строка события живёт до возврата колбэка
  g_idle_add(on_device_event_idle, msg);
}

/* --- Помощники для сборки интерфейса --- */

// Кнопка с иконкой и подписью (AdwButtonContent). Иконка ставится только
// если она есть в теме. css_class может быть NULL, cb — обработчик clicked.
static GtkWidget *
make_button(const char *icon_name, const char *label,
            const char *css_class, GCallback cb, AppleApplication *self)
{
  GtkWidget *btn = gtk_button_new();
  GtkWidget *content = adw_button_content_new();

  GtkIconTheme *theme = gtk_icon_theme_get_for_display(gdk_display_get_default());
  if (icon_name && gtk_icon_theme_has_icon(theme, icon_name))
    g_object_set(content, "icon-name", icon_name, NULL);
  g_object_set(content, "label", label, NULL);

  gtk_button_set_child(GTK_BUTTON(btn), content);
  if (css_class)
    gtk_widget_add_css_class(btn, css_class);
  if (cb)
    g_signal_connect(btn, "clicked", cb, self);
  return btn;
}

// Страница-заглушка раздела (Музыка, Фото...) — AdwStatusPage
static GtkWidget *
make_stub_page(const char *icon_name, const char *title, const char *desc)
{
  GtkWidget *page = adw_status_page_new();
  GtkIconTheme *theme = gtk_icon_theme_get_for_display(gdk_display_get_default());
  if (icon_name && gtk_icon_theme_has_icon(theme, icon_name))
    adw_status_page_set_icon_name(ADW_STATUS_PAGE(page), icon_name);
  adw_status_page_set_title(ADW_STATUS_PAGE(page), title);
  adw_status_page_set_description(ADW_STATUS_PAGE(page), desc);
  return page;
}

/* --- Сборка окна --- */

static void
apple_application_activate(GApplication *app)
{
  AppleApplication *self = APPLE_APPLICATION(app);
  global_app = self;

  // Повторная активация: показываем уже существующее окно
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

  // Постоянный store устройств — владелец данных сайдбара
  self->device_store = g_list_store_new(DEVICE_TYPE_INFO);

  /* ==== ЛЕВАЯ ПАНЕЛЬ: устройства + разделы ==== */

  // Статусная страница для пустого списка (по HIG: AdwStatusPage)
  self->status_page = adw_status_page_new();
  adw_status_page_set_icon_name(ADW_STATUS_PAGE(self->status_page),
                                "phone-apple-iphone-symbolic");
  adw_status_page_set_title(ADW_STATUS_PAGE(self->status_page), tr("Ищем устройства…"));
  adw_status_page_set_description(ADW_STATUS_PAGE(self->status_page),
                                  tr("Подключите устройство Apple по USB-кабелю."));
  g_object_add_weak_pointer(G_OBJECT(self->status_page), (gpointer *)&self->status_page);

  GtkWidget *empty_refresh_btn = make_button("view-refresh-symbolic", tr("Обновить"),
                                             NULL, G_CALLBACK(on_refresh_clicked), self);
  adw_status_page_set_child(ADW_STATUS_PAGE(self->status_page), empty_refresh_btn);

  // Список устройств с привязкой к store
  self->sidebar_list = gtk_list_box_new();
  gtk_list_box_set_selection_mode(GTK_LIST_BOX(self->sidebar_list), GTK_SELECTION_SINGLE);
  gtk_widget_add_css_class(self->sidebar_list, "boxed-list");
  g_object_add_weak_pointer(G_OBJECT(self->sidebar_list), (gpointer *)&self->sidebar_list);

  gtk_list_box_bind_model(GTK_LIST_BOX(self->sidebar_list),
                          G_LIST_MODEL(self->device_store),
                          create_sidebar_row, self, NULL);
  g_signal_connect(self->sidebar_list, "row-selected", G_CALLBACK(on_row_selected), self);

  // Разделы навигации (как в референсе: General, Music, Movies...)
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
                        make_nav_row(nav_items[i].icon, tr(nav_items[i].title), nav_items[i].page));
  g_signal_connect(self->nav_list, "row-selected", G_CALLBACK(on_nav_selected), self);

  // Заголовок секции навигации (как «Settings» в референсе)
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

  // Страницы сайдбара: статус / список
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

  // Нижняя часть сайдбара: настройки приложения (заглушка)
  GtkWidget *settings_row = adw_action_row_new();
  adw_preferences_row_set_title(ADW_PREFERENCES_ROW(settings_row), tr("Настройки приложения"));
  GtkIconTheme *theme = gtk_icon_theme_get_for_display(gdk_display_get_default());
  if (gtk_icon_theme_has_icon(theme, "preferences-system-symbolic")) {
    GtkWidget *gear = gtk_image_new_from_icon_name("preferences-system-symbolic");
    gtk_image_set_pixel_size(GTK_IMAGE(gear), 16);
    adw_action_row_add_prefix(ADW_ACTION_ROW(settings_row), gear);
  }
  g_signal_connect(settings_row, "activated", G_CALLBACK(on_settings_activated), self);

  GtkWidget *settings_list = gtk_list_box_new();
  // SELECTION_SINGLE + row-selected: тот же механизм, что у разделов навигации
  // (в этой системе активация строки по клику (row-activated) не срабатывает)
  gtk_list_box_set_selection_mode(GTK_LIST_BOX(settings_list), GTK_SELECTION_SINGLE);
  gtk_widget_add_css_class(settings_list, "boxed-list");
  gtk_widget_set_margin_top(settings_list, 6);
  gtk_widget_set_margin_bottom(settings_list, 12);
  gtk_widget_set_margin_start(settings_list, 12);
  gtk_widget_set_margin_end(settings_list, 12);
  gtk_list_box_append(GTK_LIST_BOX(settings_list), settings_row);
  self->settings_list = settings_list;
  g_object_add_weak_pointer(G_OBJECT(settings_list), (gpointer *)&self->settings_list);
  // Основной путь — выделение строки (как у разделов навигации)
  g_signal_connect(settings_list, "row-selected",
                   G_CALLBACK(on_settings_row_selected), self);
  // Дублирующий путь на случай, если сработает активация
  g_signal_connect(settings_list, "row-activated",
                   G_CALLBACK(on_settings_row_activated), self);
  adw_toolbar_view_add_bottom_bar(ADW_TOOLBAR_VIEW(sidebar_tb), settings_list);

  AdwNavigationPage *sidebar_page = adw_navigation_page_new(sidebar_tb, tr("Устройства"));

  /* ==== ПРАВАЯ ПАНЕЛЬ ==== */

  // Страница «Устройство не выбрано»
  GtkWidget *empty_page = adw_status_page_new();
  adw_status_page_set_title(ADW_STATUS_PAGE(empty_page), tr("Устройство не выбрано"));
  adw_status_page_set_description(ADW_STATUS_PAGE(empty_page),
                                  tr("Выберите устройство в списке слева, чтобы увидеть информацию."));

  // Информационные строки (HIG: AdwPreferencesGroup + AdwActionRow).
  // Markup отключён: подзаголовки — данные устройства (имя может содержать «&»)
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

  // Секция «Программное обеспечение» (как Software в референсе)
  GtkWidget *sw_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 8);
  gtk_box_append(GTK_BOX(sw_box),
                 make_button("software-update-available-symbolic", tr("Проверить обновления"),
                             NULL, G_CALLBACK(on_check_updates_clicked), self));
  gtk_box_append(GTK_BOX(sw_box),
                 make_button("system-reboot-symbolic", tr("Восстановить iPhone…"),
                             NULL, G_CALLBACK(on_restore_firmware_clicked), self));

  GtkWidget *group_software = adw_preferences_group_new();
  adw_preferences_group_set_title(ADW_PREFERENCES_GROUP(group_software), tr("Программное обеспечение"));
  adw_preferences_group_set_description(ADW_PREFERENCES_GROUP(group_software),
                                        tr("Проверка обновлений и восстановление прошивки — в разработке."));
  adw_preferences_group_add(ADW_PREFERENCES_GROUP(group_software), sw_box);

  // Секция «Резервные копии» (как Backups в референсе)
  GtkWidget *bk_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 8);
  GtkWidget *backup_btn = make_button("document-save-symbolic", tr("Создать резервную копию"),
                                      "suggested-action", G_CALLBACK(on_backup_clicked), self);
  gtk_box_append(GTK_BOX(bk_box), backup_btn);
  gtk_box_append(GTK_BOX(bk_box),
                 make_button("document-save-as-symbolic", tr("Восстановить из копии"),
                             NULL, G_CALLBACK(on_restore_clicked), self));

  GtkWidget *group_backup = adw_preferences_group_new();
  adw_preferences_group_set_title(ADW_PREFERENCES_GROUP(group_backup), tr("Резервные копии"));
  adw_preferences_group_set_description(ADW_PREFERENCES_GROUP(group_backup),
                                        tr("Кнопки-заглушки: функции в разработке."));
  adw_preferences_group_add(ADW_PREFERENCES_GROUP(group_backup), bk_box);

  // Страница «Обзор»: группы внутри clamp, всё в прокрутке
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

  // ==== Страница «Музыка»: панель действий + список треков ====

  self->music_store = g_list_store_new(MUSIC_TRACK_TYPE);
  // Кэш тегов на сеанс: ключ "путь|размер", значение — MusicTrack
  self->tag_cache = g_hash_table_new_full(g_str_hash, g_str_equal, g_free, g_object_unref);

  self->music_list = gtk_list_box_new();
  gtk_list_box_set_selection_mode(GTK_LIST_BOX(self->music_list), GTK_SELECTION_SINGLE);
  gtk_widget_add_css_class(self->music_list, "boxed-list");

  // Фильтр и сортировка — на уровне модели: GtkListBox с bind_model
  // игнорирует собственные filter/sort функции
  self->music_filter_obj = GTK_CUSTOM_FILTER(gtk_custom_filter_new(
      music_filter_match, self, NULL));
  self->music_sorter = GTK_CUSTOM_SORTER(gtk_custom_sorter_new(
      (GCompareDataFunc)music_sort_compare, self, NULL));
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
                          create_music_row, self, NULL);
  g_signal_connect(self->music_list, "row-selected", G_CALLBACK(on_music_row_selected), self);

  GtkWidget *music_scroll = gtk_scrolled_window_new();
  gtk_scrolled_window_set_child(GTK_SCROLLED_WINDOW(music_scroll), self->music_list);

  self->music_status = adw_status_page_new();
  adw_status_page_set_icon_name(ADW_STATUS_PAGE(self->music_status), "folder-music-symbolic");
  adw_status_page_set_title(ADW_STATUS_PAGE(self->music_status), tr("Медиатека не загружена"));
  adw_status_page_set_description(ADW_STATUS_PAGE(self->music_status),
                                  tr("Подключите устройство."));
  g_object_add_weak_pointer(G_OBJECT(self->music_status), (gpointer *)&self->music_status);

  // Страница «Ничего не найдено» (когда поиск не дал результатов)
  GtkWidget *music_noresults = adw_status_page_new();
  adw_status_page_set_icon_name(ADW_STATUS_PAGE(music_noresults), "edit-find-symbolic");
  adw_status_page_set_title(ADW_STATUS_PAGE(music_noresults), tr("Ничего не найдено"));
  adw_status_page_set_description(ADW_STATUS_PAGE(music_noresults),
                                  tr("Попробуйте изменить поисковый запрос."));

  self->music_stack = gtk_stack_new();
  gtk_stack_set_transition_type(GTK_STACK(self->music_stack), GTK_STACK_TRANSITION_TYPE_CROSSFADE);
  gtk_stack_add_named(GTK_STACK(self->music_stack), self->music_status, "empty");
  gtk_stack_add_named(GTK_STACK(self->music_stack), music_scroll, "list");
  gtk_stack_add_named(GTK_STACK(self->music_stack), music_noresults, "no-results");
  gtk_stack_set_visible_child_name(GTK_STACK(self->music_stack), "empty");
  g_object_add_weak_pointer(G_OBJECT(self->music_stack), (gpointer *)&self->music_stack);

  self->music_import_btn = make_button("list-add-symbolic", tr("Импорт"), NULL,
                                       G_CALLBACK(on_music_import_clicked), self);
  self->music_export_btn = make_button("document-save-symbolic", tr("Экспорт"), NULL,
                                       G_CALLBACK(on_music_export_clicked), self);
  self->music_delete_btn = make_button("user-trash-symbolic", tr("Удалить"), "destructive-action",
                                       G_CALLBACK(on_music_delete_clicked), self);
  self->music_refresh_btn = make_button("view-refresh-symbolic", tr("Обновить"), NULL,
                                        G_CALLBACK(on_music_refresh_clicked), self);

  GtkWidget *music_actions = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 8);
  gtk_box_append(GTK_BOX(music_actions), self->music_import_btn);
  gtk_box_append(GTK_BOX(music_actions), self->music_export_btn);
  gtk_box_append(GTK_BOX(music_actions), self->music_delete_btn);
  gtk_box_append(GTK_BOX(music_actions), self->music_refresh_btn);

  // Поиск + сортировка
  self->music_search = gtk_search_entry_new();
  gtk_search_entry_set_placeholder_text(GTK_SEARCH_ENTRY(self->music_search),
                                        tr("Поиск по трекам"));
  gtk_widget_set_hexpand(self->music_search, TRUE);
  g_signal_connect(self->music_search, "search-changed",
                   G_CALLBACK(on_music_search_changed), self);

  // Названия режимов сортировки (переводятся через tr в месте использования)
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
                   G_CALLBACK(on_music_sort_changed), self);

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

  update_music_buttons(self);

  // ==== Страница «Настройки»: язык интерфейса ====

  GtkWidget *settings_group = adw_preferences_group_new();
  adw_preferences_group_set_title(ADW_PREFERENCES_GROUP(settings_group), tr("Общие"));
  adw_preferences_group_set_description(ADW_PREFERENCES_GROUP(settings_group),
                                        tr("Язык применится после перезапуска приложения."));

  AdwComboRow *lang_row = ADW_COMBO_ROW(adw_combo_row_new());
  adw_preferences_row_set_title(ADW_PREFERENCES_ROW(lang_row), tr("Язык"));
  // Названия языков намеренно не переводятся (каждый на своём языке)
  const char *const lang_names[] = { "Русский", "English" };
  GtkStringList *lang_model = gtk_string_list_new(NULL);
  for (gsize i = 0; i < G_N_ELEMENTS(lang_names); i++)
    gtk_string_list_append(lang_model, lang_names[i]);
  adw_combo_row_set_model(lang_row, G_LIST_MODEL(lang_model));
  // Начальное значение ставим ДО подключения обработчика, чтобы не словить
  // ложное срабатывание notify::selected при построении UI
  adw_combo_row_set_selected(lang_row, (app_language && app_language[0] == 'e') ? 1 : 0);
  g_signal_connect(lang_row, "notify::selected", G_CALLBACK(on_language_changed), self);
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

  // Стек контента: пустая страница / Обзор / разделы-заглушки
  self->content_stack = gtk_stack_new();
  gtk_stack_set_transition_type(GTK_STACK(self->content_stack), GTK_STACK_TRANSITION_TYPE_CROSSFADE);
  gtk_stack_add_named(GTK_STACK(self->content_stack), empty_page, "empty");
  gtk_stack_add_named(GTK_STACK(self->content_stack), info_scroll, "general");
  gtk_stack_add_named(GTK_STACK(self->content_stack), music_box, "music");
  gtk_stack_add_named(GTK_STACK(self->content_stack), settings_scroll, "settings");
  gtk_stack_add_named(GTK_STACK(self->content_stack),
                      make_stub_page("folder-videos-symbolic", tr("Фильмы"),
                                     tr("Просмотр и синхронизация фильмов появятся позже.")),
                      "movies");
  gtk_stack_add_named(GTK_STACK(self->content_stack),
                      make_stub_page("tv-symbolic", tr("ТВ-шоу"),
                                     tr("Просмотр и синхронизация ТВ-шоу появятся позже.")),
                      "tvshows");
  gtk_stack_add_named(GTK_STACK(self->content_stack),
                      make_stub_page("folder-pictures-symbolic", tr("Фото"),
                                     tr("Просмотр и синхронизация фотографий появятся позже.")),
                      "photos");
  gtk_stack_add_named(GTK_STACK(self->content_stack),
                      make_stub_page("folder-symbolic", tr("Файлы"),
                                     tr("Обмен файлами с устройством (AFC) появится позже.")),
                      "files");
  gtk_stack_set_visible_child_name(GTK_STACK(self->content_stack), "empty");
  g_object_add_weak_pointer(G_OBJECT(self->content_stack), (gpointer *)&self->content_stack);

  // Шапка контента: иконка + имя устройства + ёмкость + батарея (как в референсе)
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

  // Нижняя панель контента: сегментная диаграмма накопителя + «Синхронизировать»
  self->storage_area = gtk_drawing_area_new();
  gtk_widget_set_size_request(self->storage_area, -1, 26);
  gtk_widget_set_hexpand(self->storage_area, TRUE);
  gtk_widget_set_valign(self->storage_area, GTK_ALIGN_CENTER);
  gtk_drawing_area_set_draw_func(GTK_DRAWING_AREA(self->storage_area),
                                 storage_bar_draw, self, NULL);
  g_object_add_weak_pointer(G_OBJECT(self->storage_area), (gpointer *)&self->storage_area);

  GtkWidget *storage_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 12);
  gtk_widget_set_margin_top(storage_box, 10);
  gtk_widget_set_margin_bottom(storage_box, 10);
  gtk_widget_set_margin_start(storage_box, 12);
  gtk_widget_set_margin_end(storage_box, 12);
  gtk_box_append(GTK_BOX(storage_box), self->storage_area);
  GtkWidget *sync_btn = gtk_button_new_with_label(tr("Синхронизировать"));
  g_signal_connect(sync_btn, "clicked", G_CALLBACK(on_sync_clicked), self);
  gtk_box_append(GTK_BOX(storage_box), sync_btn);

  GtkWidget *content_tb = adw_toolbar_view_new();
  adw_toolbar_view_add_top_bar(ADW_TOOLBAR_VIEW(content_tb), content_header);
  adw_toolbar_view_set_content(ADW_TOOLBAR_VIEW(content_tb), self->content_stack);
  adw_toolbar_view_add_bottom_bar(ADW_TOOLBAR_VIEW(content_tb), storage_box);

  AdwNavigationPage *content_page = adw_navigation_page_new(content_tb, tr("Информация"));

  /* ==== Сборка окна ==== */

  self->split = adw_navigation_split_view_new();
  adw_navigation_split_view_set_sidebar(ADW_NAVIGATION_SPLIT_VIEW(self->split), sidebar_page);
  adw_navigation_split_view_set_content(ADW_NAVIGATION_SPLIT_VIEW(self->split), content_page);
  adw_navigation_split_view_set_min_sidebar_width(ADW_NAVIGATION_SPLIT_VIEW(self->split), 240);
  adw_navigation_split_view_set_max_sidebar_width(ADW_NAVIGATION_SPLIT_VIEW(self->split), 300);
  g_object_add_weak_pointer(G_OBJECT(self->split), (gpointer *)&self->split);

  GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);

  // Тосты сообщений (HIG: AdwToast)
  self->toast_overlay = adw_toast_overlay_new();
  adw_toast_overlay_set_child(ADW_TOAST_OVERLAY(self->toast_overlay), self->split);
  gtk_widget_set_vexpand(self->toast_overlay, TRUE);
  g_object_add_weak_pointer(G_OBJECT(self->toast_overlay), (gpointer *)&self->toast_overlay);
  gtk_box_append(GTK_BOX(main_box), self->toast_overlay);

  // Нижняя часть: Логи (терминал)
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

  // Кнопка обновления
  g_signal_connect(self->refresh_btn, "clicked", G_CALLBACK(on_refresh_clicked), self);

  // Горячая клавиша Ctrl+R (действие win.refresh)
  GSimpleAction *refresh_action = g_simple_action_new("refresh", NULL);
  g_signal_connect(refresh_action, "activate", G_CALLBACK(on_refresh_action), self);
  g_action_map_add_action(G_ACTION_MAP(window), G_ACTION(refresh_action));
  g_object_unref(refresh_action);

  const char *refresh_accels[] = {"<Ctrl>R", NULL};
  gtk_application_set_accels_for_action(GTK_APPLICATION(app), "win.refresh", refresh_accels);

  gtk_window_present(window);

  log_message(tr("Программа запущена. Запускаем автосканирование USB..."));
  // Подписка на события usbmuxd: подключение/отключение устройства
  // обновляют список сами, без кнопки «Обновить»
  idevice_error_t ev_err = idevice_event_subscribe(device_event_cb, self);
  if (ev_err != IDEVICE_E_SUCCESS)
    log_message(tr("Не удалось подписаться на события USB (код %d) — обновляйте список кнопкой."), ev_err);
  start_scan(self);

  // Устанавливаем обработчик сигналов
  signal(SIGSEGV, signal_handler);
  signal(SIGABRT, signal_handler);
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
  // Язык читаем до построения UI (activate)
  app_settings_load();
  g_set_application_name("Apple Devices");
}

AppleApplication *
apple_application_new(void)
{
  return g_object_new(APPLE_TYPE_APPLICATION,
                      "application-id", "com.saitexna.appleDevices",
                      "flags", G_APPLICATION_DEFAULT_FLAGS,
                      NULL);
}
