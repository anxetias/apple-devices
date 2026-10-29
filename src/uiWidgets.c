#include "uiWidgets.h"
#include "application.h"
#include "deviceScanner.h"
#include "medialib.h"

#include <glib.h>
#include <string.h>

/* === uiWidgets.c === */

GtkWidget *makeButton(const char *icon_name, const char *label,
                      const char *css_class, GCallback cb,
                      AppleApplication *self)
{
  (void)self;
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

GtkWidget *makeStubPage(const char *icon_name, const char *title,
                        const char *desc)
{
  GtkWidget *page = adw_status_page_new();
  GtkIconTheme *theme = gtk_icon_theme_get_for_display(gdk_display_get_default());
  if (icon_name && gtk_icon_theme_has_icon(theme, icon_name))
    adw_status_page_set_icon_name(ADW_STATUS_PAGE(page), icon_name);
  adw_status_page_set_title(ADW_STATUS_PAGE(page), title);
  adw_status_page_set_description(ADW_STATUS_PAGE(page), desc);
  return page;
}

GtkWidget *createSidebarRow(gpointer item, gpointer user_data)
{
  (void)user_data;
  DeviceInfo *info = DEVICE_INFO(item);

  GtkWidget *row = adw_action_row_new();
  adw_preferences_row_set_use_markup(ADW_PREFERENCES_ROW(row), FALSE);
  adw_preferences_row_set_title(ADW_PREFERENCES_ROW(row), info->name);

  const char *icon_name = deviceIconFor(info);
  if (icon_name) {
    GtkWidget *prefix_icon = gtk_image_new_from_icon_name(icon_name);
    gtk_image_set_pixel_size(GTK_IMAGE(prefix_icon), 24);
    adw_action_row_add_prefix(ADW_ACTION_ROW(row), prefix_icon);
  }

  char *subtitle = g_strdup_printf("%s %s",
                                   osLabelForProductType(info->product_type),
                                   info->version);
  adw_action_row_set_subtitle(ADW_ACTION_ROW(row), subtitle);
  g_free(subtitle);

  g_object_set_data(G_OBJECT(row), "device-info", info);
  return row;
}

GtkWidget *makeNavRow(const char *icon_name, const char *title,
                      const char *page)
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

GtkWidget *createMusicRow(gpointer item, gpointer user_data)
{
  (void)user_data;
  MusicTrack *t = MUSIC_TRACK(item);

  GtkWidget *row = adw_action_row_new();
  adw_preferences_row_set_use_markup(ADW_PREFERENCES_ROW(row), FALSE);

  GtkWidget *cover_img = gtk_image_new();
  gtk_image_set_pixel_size(GTK_IMAGE(cover_img), 40);
  musicTrackSetCoverImage(GTK_IMAGE(cover_img), t);
  adw_action_row_add_prefix(ADW_ACTION_ROW(row), cover_img);

  char *title = musicTrackDisplayTitle(t);
  adw_preferences_row_set_title(ADW_PREFERENCES_ROW(row), title);
  g_free(title);

  char *sub = musicTrackSubtitle(t);
  adw_action_row_set_subtitle(ADW_ACTION_ROW(row), sub);
  g_free(sub);

  g_object_set_data(G_OBJECT(row), "track", t);
  g_object_set_data(G_OBJECT(row), "cover-img", cover_img);

  return row;
}

char *musicTrackSubtitle(const MusicTrack *t)
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

char *musicTrackDisplayTitle(const MusicTrack *t)
{
  if (t->title && *t->title)
    return g_strdup(t->title);
  return g_path_get_basename(t->path);
}

void musicTrackSetCoverImage(GtkImage *img, const MusicTrack *t)
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

gboolean musicTrackMatches(MusicTrack *t, const char *filter_fold)
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

gboolean musicFilterMatch(gpointer item, gpointer user_data)
{
  AppleApplication *self = APPLE_APPLICATION(user_data);
  return musicTrackMatches(MUSIC_TRACK(item), self->music_filter);
}

// Сравнение текстовых полей сортировки: пустые — в конец, без учёта регистра
static gint
musicCmpText(const char *a, const char *b)
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

gint musicSortCompare(gpointer a, gpointer b, gpointer user_data)
{
  AppleApplication *self = APPLE_APPLICATION(user_data);
  MusicTrack *ta = MUSIC_TRACK(a);
  MusicTrack *tb = MUSIC_TRACK(b);

  switch (self->music_sort_mode) {
  case 1: // по названию
    return musicCmpText(ta->title, tb->title);
  case 2: // по исполнителю, затем по названию
  case 3: { // по альбому, затем по названию
    const char *fa = self->music_sort_mode == 2 ? ta->artist : ta->album;
    const char *fb = self->music_sort_mode == 2 ? tb->artist : tb->album;
    gint c = musicCmpText(fa, fb);
    return c ? c : musicCmpText(ta->title, tb->title);
  }
  case 4: // по длительности, затем по названию
    if (ta->duration != tb->duration)
      return ta->duration < tb->duration ? -1 : 1;
    return musicCmpText(ta->title, tb->title);
  default: // как на устройстве — порядок скана
    if (ta->scan_order != tb->scan_order)
      return ta->scan_order < tb->scan_order ? -1 : 1;
    return 0;
  }
}

void musicApplyFilter(AppleApplication *self)
{
  if (!self->music_list || !self->music_stack)
    return;

  g_free(self->music_filter);
  const char *q = self->music_search
                      ? gtk_editable_get_text(GTK_EDITABLE(self->music_search))
                      : "";
  self->music_filter = (*q) ? g_utf8_casefold(q, -1) : NULL;

  self->music_visible = 0;
  guint n = g_list_model_get_n_items(G_LIST_MODEL(self->music_store));
  for (guint i = 0; i < n; i++) {
    MusicTrack *t = g_list_model_get_item(G_LIST_MODEL(self->music_store), i);
    if (musicTrackMatches(t, self->music_filter))
      self->music_visible++;
    g_object_unref(t);
  }

  gtk_filter_changed(GTK_FILTER(self->music_filter_obj), GTK_FILTER_CHANGE_DIFFERENT);

  gboolean no_results = self->music_filter && n > 0 && self->music_visible == 0;
  const char *cur = gtk_stack_get_visible_child_name(GTK_STACK(self->music_stack));
  if (no_results && g_strcmp0(cur, "list") == 0)
    gtk_stack_set_visible_child_name(GTK_STACK(self->music_stack), "no-results");
  else if (!no_results && g_strcmp0(cur, "no-results") == 0)
    gtk_stack_set_visible_child_name(GTK_STACK(self->music_stack), "list");
}

void updateMusicButtons(AppleApplication *self)
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

void onMusicRowSelected(GtkListBox *list, GtkListBoxRow *row, AppleApplication *self)
{
  (void)list;
  self->selected_track = row ? MUSIC_TRACK(g_object_get_data(G_OBJECT(row), "track")) : NULL;
  updateMusicButtons(self);
}

void onNavSelected(GtkListBox *list, GtkListBoxRow *row, AppleApplication *self)
{
  (void)list;
  if (!row || !self->content_stack)
    return;
  if (!self->selected)
    return;
  const char *page = g_object_get_data(G_OBJECT(row), "page");
  if (page) {
    gtk_stack_set_visible_child_name(GTK_STACK(self->content_stack), page);
    if (self->settings_list)
      gtk_list_box_unselect_all(GTK_LIST_BOX(self->settings_list));
  }
}

void onRowSelected(GtkListBox *list, GtkListBoxRow *row, AppleApplication *self)
{
  (void)list;
  if (!self->content_stack)
    return;

  if (!row) {
    self->selected = NULL;
    self->storage_total = 0;
    self->storage_used = 0;
    self->storage_used_frac = 0;
    self->storage_n_cats = 0;
    self->storage_measuring = FALSE;
    gtk_stack_set_visible_child_name(GTK_STACK(self->content_stack), "empty");
    if (self->settings_list)
      gtk_list_box_unselect_all(GTK_LIST_BOX(self->settings_list));
    g_list_store_remove_all(self->music_store);
    self->selected_track = NULL;
    updateMusicButtons(self);
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

  adw_action_row_set_subtitle(ADW_ACTION_ROW(self->row_device), info->name);
  adw_action_row_set_subtitle(ADW_ACTION_ROW(self->row_model),
                              info->product_type ? info->product_type : "—");
  char *os = g_strdup_printf("%s %s", osLabelForProductType(info->product_type), info->version);
  adw_action_row_set_subtitle(ADW_ACTION_ROW(self->row_os), os);
  g_free(os);
  // Серийный номер и UDID — с учётом приватного режима
  updatePrivacyRows(self);
  if (info->battery_percent >= 0) {
    char *bt = g_strdup_printf("%d%%", info->battery_percent);
    adw_action_row_set_subtitle(ADW_ACTION_ROW(self->row_battery), bt);
    g_free(bt);
  } else {
    adw_action_row_set_subtitle(ADW_ACTION_ROW(self->row_battery), "—");
  }

  // Хранилище: реальные значения; если данных нет или они противоречивы —
  // честно показываем «недоступно» вместо выдуманных чисел
  guint64 total = info->total_capacity;
  guint64 used = info->disk_usage;
  if (used > total)
    total = 0;
  self->storage_total = total;
  self->storage_used = used;
  self->storage_used_frac = total > 0 ? (double)used / (double)total : 0;

  // Шапка: иконка, имя, «модель · всего (свободно)», батарея
  if (self->header_title) {
    adw_window_title_set_title(ADW_WINDOW_TITLE(self->header_title), info->name);
    char *sub;
    if (total > 0)
      sub = g_strdup_printf(tr("%s · %s (%s свободно)%s"),
                            info->product_type ? info->product_type : "—",
                            g_format_size(total),
                            g_format_size(total - used),
                            "");
    else
      sub = g_strdup(info->product_type ? info->product_type : "—");
    adw_window_title_set_subtitle(ADW_WINDOW_TITLE(self->header_title), sub);
    g_free(sub);
  }
  if (self->header_icon) {
    const char *icon_name = deviceIconFor(info);
    if (icon_name)
      gtk_image_set_from_icon_name(GTK_IMAGE(self->header_icon), icon_name);
  }
  if (self->battery_box) {
    if (info->battery_percent >= 0) {
      char bbuf[64];
      const char *bicon = batteryIconFor(info->battery_percent, bbuf, sizeof bbuf);
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

  if (self->nav_list) {
    GtkListBoxRow *first = gtk_list_box_get_row_at_index(GTK_LIST_BOX(self->nav_list), 0);
    if (first && gtk_list_box_get_selected_row(GTK_LIST_BOX(self->nav_list)) != first)
      gtk_list_box_select_row(GTK_LIST_BOX(self->nav_list), first);
  }
  gtk_stack_set_visible_child_name(GTK_STACK(self->content_stack), "general");
  if (self->storage_area)
    gtk_widget_queue_draw(self->storage_area);

  // Подгружаем медиатеку этого устройства
  startMusicScan(self, info->udid);

  // Измеряем категории накопителя (музыка, фото) в фоне
  startStorageScan(self, info->udid);
}

void onBackupClicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;
  showStubToast(self, tr("резервное копирование"));
}

void onRestoreClicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;
  showStubToast(self, tr("восстановление из копии"));
}

void onCheckUpdatesClicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;
  showStubToast(self, tr("проверка обновлений"));
}

void onRestoreFirmwareClicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;
  showStubToast(self, tr("восстановление прошивки"));
}

void onSyncClicked(GtkButton *btn, AppleApplication *self)
{
  (void)btn;
  showStubToast(self, tr("синхронизация"));
}

// Строки «Серийный номер» и «UDID» с учётом приватного режима
void updatePrivacyRows(AppleApplication *self)
{
  if (!self->selected)
    return;

  if (appHidePersonalData()) {
    adw_action_row_set_subtitle(ADW_ACTION_ROW(self->row_serial), "••••••••");
    char *masked = deviceMaskUdid(self->selected->udid);
    adw_action_row_set_subtitle(ADW_ACTION_ROW(self->row_udid), masked);
    g_free(masked);
  } else {
    adw_action_row_set_subtitle(ADW_ACTION_ROW(self->row_serial),
                                self->selected->serial_number
                                    ? self->selected->serial_number : "—");
    adw_action_row_set_subtitle(ADW_ACTION_ROW(self->row_udid),
                                self->selected->udid);
  }
}

// Переключатель «Скрывать личные данные»: сохраняем и сразу маскируем строки
void onHidePersonalChanged(GObject *obj, GParamSpec *pspec, AppleApplication *self)
{
  (void)pspec;

  gboolean active = adw_switch_row_get_active(ADW_SWITCH_ROW(obj));
  self->hide_personal_data = active;
  appSettingsSaveHidePersonalData(active);
  updatePrivacyRows(self);
  logMessage("%s", tr(active ? "Личные данные скрыты."
                             : "Личные данные снова видны."));
}

// Выбор языка в настройках: сохраняем в файл, применится после перезапуска
void onLanguageChanged(GObject *obj, GParamSpec *pspec, AppleApplication *self)
{
  (void)pspec;
  (void)self;

  guint idx = adw_combo_row_get_selected(ADW_COMBO_ROW(obj));
  const char *lang = (idx == 1) ? "en" : "ru";
  appSettingsSaveLanguage(lang);
  logMessage("%s", tr("Язык применится после перезапуска приложения."));
}

void onMusicSearchChanged(GtkSearchEntry *entry, AppleApplication *self)
{
  (void)entry;
  musicApplyFilter(self);
}

void onMusicSortChanged(GObject *obj, GParamSpec *pspec, AppleApplication *self)
{
  (void)pspec;
  self->music_sort_mode = gtk_drop_down_get_selected(GTK_DROP_DOWN(obj));
  if (self->music_sorter)
    gtk_sorter_changed(GTK_SORTER(self->music_sorter), GTK_SORTER_CHANGE_DIFFERENT);
}

void showSettingsPage(AppleApplication *self)
{
  // Страница настроек доступна и без выбранного устройства
  if (!self->content_stack)
    return;
  gtk_stack_set_visible_child_name(GTK_STACK(self->content_stack), "settings");
  // Снимаем выделение с разделов навигации: подсвечен только текущий раздел,
  // иначе повторный клик по выделенной строке не сработает (row-selected не меняется)
  if (self->nav_list)
    gtk_list_box_unselect_all(GTK_LIST_BOX(self->nav_list));
  logMessage("%s", tr("Открыта страница настроек."));
}

void onSettingsActivated(AdwActionRow *row, AppleApplication *self)
{
  (void)row;
  showSettingsPage(self);
}

void onSettingsRowActivated(GtkListBox *list, GtkListBoxRow *row, AppleApplication *self)
{
  (void)list;
  (void)row;
  showSettingsPage(self);
}

void onSettingsRowSelected(GtkListBox *list, GtkListBoxRow *row, AppleApplication *self)
{
  (void)list;
  if (!row)
    return;
  showSettingsPage(self);
}
