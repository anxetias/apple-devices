#pragma once

#include <adwaita.h>

/* === uiWidgets.h ===
 * Вспомогательные виджеты UI: создание строк сайдбара, навигации, треков,
 * кнопок, страниц-заглушек.
 */

#include "application.h"

GtkWidget *makeButton(const char *icon_name, const char *label,
                      const char *css_class, GCallback cb,
                      AppleApplication *self);

GtkWidget *makeStubPage(const char *icon_name, const char *title,
                        const char *desc);

GtkWidget *createSidebarRow(gpointer item, gpointer user_data);
GtkWidget *makeNavRow(const char *icon_name, const char *title,
                      const char *page);
GtkWidget *createMusicRow(gpointer item, gpointer user_data);

char *musicTrackSubtitle(const MusicTrack *t);
char *musicTrackDisplayTitle(const MusicTrack *t);
void musicTrackSetCoverImage(GtkImage *img, const MusicTrack *t);

gboolean musicTrackMatches(MusicTrack *t, const char *filter_fold);
gboolean musicFilterMatch(gpointer item, gpointer user_data);
gint musicSortCompare(gpointer a, gpointer b, gpointer user_data);
void musicApplyFilter(AppleApplication *self);
void updateMusicButtons(AppleApplication *self);
void onMusicRowSelected(GtkListBox *list, GtkListBoxRow *row,
                        AppleApplication *self);
void onNavSelected(GtkListBox *list, GtkListBoxRow *row,
                   AppleApplication *self);
void onRowSelected(GtkListBox *list, GtkListBoxRow *row,
                   AppleApplication *self);
void onMusicSearchChanged(GtkSearchEntry *entry, AppleApplication *self);
void onMusicSortChanged(GObject *obj, GParamSpec *pspec,
                        AppleApplication *self);

/* Заглушки разделов (в разработке). */
void onBackupClicked(GtkButton *btn, AppleApplication *self);
void onRestoreClicked(GtkButton *btn, AppleApplication *self);
void onCheckUpdatesClicked(GtkButton *btn, AppleApplication *self);
void onRestoreFirmwareClicked(GtkButton *btn, AppleApplication *self);
void onSyncClicked(GtkButton *btn, AppleApplication *self);

/* Настройки. */
void onLanguageChanged(GObject *obj, GParamSpec *pspec,
                       AppleApplication *self);
void showSettingsPage(AppleApplication *self);
void onSettingsActivated(AdwActionRow *row, AppleApplication *self);
void onSettingsRowActivated(GtkListBox *list, GtkListBoxRow *row,
                            AppleApplication *self);
void onSettingsRowSelected(GtkListBox *list, GtkListBoxRow *row,
                           AppleApplication *self);
