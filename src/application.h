#pragma once

#include <adwaita.h>

G_BEGIN_DECLS

#define APPLE_TYPE_APPLICATION (apple_application_get_type())
G_DECLARE_FINAL_TYPE(AppleApplication, apple_application,
                     APPLE, APPLICATION, AdwApplication)

#define DEVICE_TYPE_INFO (device_info_get_type())
G_DECLARE_FINAL_TYPE(DeviceInfo, device_info, DEVICE, INFO, GObject)

#define MUSIC_TRACK_TYPE (music_track_get_type())
G_DECLARE_FINAL_TYPE(MusicTrack, music_track, MUSIC, TRACK, GObject)

/* Корень медиатеки на устройстве (через AFC). */
#define MUSIC_REMOTE_ROOT "/iTunes_Control/Music"

/* Структура приложения — определена здесь, чтобы модули
 * (deviceScanner, medialib, uiWidgets) могли обращаться к полям. */
struct _AppleApplication {
  AdwApplication parent_instance;
  GtkWindow *window;

  /* Левая панель: устройства + разделы */
  GtkWidget *split;
  GtkWidget *sidebar_stack;
  GtkWidget *status_page;
  GtkWidget *sidebar_list;
  GtkWidget *nav_list;
  GtkWidget *settings_list;
  GtkWidget *refresh_btn;

  /* Правая панель */
  GtkWidget *content_stack;
  GtkWidget *header_icon;
  GtkWidget *header_title;
  GtkWidget *battery_box;
  GtkWidget *battery_icon;
  GtkWidget *battery_label;
  GtkWidget *row_device;
  GtkWidget *row_model;
  GtkWidget *row_os;
  GtkWidget *row_serial;
  GtkWidget *row_udid;
  GtkWidget *row_battery;
  GtkWidget *toast_overlay;

  /* Логи */
  GtkWidget *log_view;

  /* Данные */
  GListStore *device_store;
  DeviceInfo *selected;
  gboolean scanning;
  gboolean rescan_pending;

  /* Музыка */
  GListStore *music_store;
  GtkWidget *music_stack;
  GtkWidget *music_status;
  GtkWidget *music_list;
  GtkWidget *music_import_btn;
  GtkWidget *music_export_btn;
  GtkWidget *music_delete_btn;
  GtkWidget *music_refresh_btn;
  MusicTrack *selected_track;
  gboolean music_busy;
  GHashTable *tag_cache;
  GtkWidget *music_search;
  GtkWidget *music_sort;
  char *music_filter;
  guint music_sort_mode;
  guint music_visible;
  GtkCustomFilter *music_filter_obj;
  GtkCustomSorter *music_sorter;

  /* Диаграмма накопителя */
  GtkWidget *storage_area;
  guint64 storage_total;
  guint64 storage_used;
  double storage_used_frac;
  gboolean storage_demo;
};

AppleApplication *apple_application_new(void);

G_END_DECLS
