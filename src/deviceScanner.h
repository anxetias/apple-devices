#pragma once

#include "application.h"
#include <libimobiledevice/libimobiledevice.h>
#include <libimobiledevice/lockdown.h>
#include <libimobiledevice/afc.h>

/* === deviceScanner.h ===
 * Работа с устройствами: lockdown, idevice, получение информации об устройстве.
 */

/* Определение структуры DeviceInfo — нужно для доступа к полям из других модулей. */
struct _DeviceInfo {
  GObject parent_instance;
  char *name;
  char *version;
  char *udid;
  char *product_type;
  char *serial_number;
  guint64 total_capacity;
  guint64 disk_usage;
  int battery_percent;
};

/* Геттеры полей DeviceInfo. */
const char *deviceInfoGetName(DeviceInfo *self);
const char *deviceInfoGetVersion(DeviceInfo *self);
const char *deviceInfoGetUdid(DeviceInfo *self);
const char *deviceInfoGetProductType(DeviceInfo *self);
const char *deviceInfoGetSerialNumber(DeviceInfo *self);
guint64     deviceInfoGetTotalCapacity(DeviceInfo *self);
guint64     deviceInfoGetDiskUsage(DeviceInfo *self);
int         deviceInfoGetBatteryPercent(DeviceInfo *self);

/* Иконка устройства по ProductType / имени; проверка наличия в теме
 * через gtk_icon_theme_has_icon (HIG). */
const char *deviceIconFor(const DeviceInfo *info);

/* Иконка батареи по проценту. buf — буфер вызывающего для имени иконки. */
const char *batteryIconFor(int percent, char *buf, gsize buf_len);

/* Подпись ОС для типа устройства (iOS / iPadOS / watchOS / tvOS). */
const char *osLabelForProductType(const char *product_type);

/* Число из plist-узла (int/uint/real/string), -1 если значения нет. */
int plistToInt(plist_t node);

/* Маска UDID для приватного режима: первые 4 символа + «…» + последние 4.
 * Возвращает новую строку (освободить g_free) или NULL. */
char *deviceMaskUdid(const char *udid);

/* Фоновый поток сканирования USB (вызывается через GTask). */
void scanDevicesThread(GTask *task, gpointer source_object,
                       gpointer task_data, GCancellable *cancellable);

/* Восстановить выделение после пересканирования. */
void restoreSelection(AppleApplication *self, const char *prev_udid);

/* Сеанс AFC: собственное подключение на каждую операцию. */
struct AfcSession {
  idevice_t device;
  lockdownd_client_t lockdown;
  lockdownd_service_descriptor_t svc;
  afc_client_t afc;
};
typedef struct AfcSession AfcSession;

void afcSessionClose(AfcSession *s);
int  afcSessionOpen(AfcSession *s, const char *udid);

/* Скачать / загрузить файл через AFC. 0 — успех. */
int afcDownloadFile(afc_client_t afc, const char *remote, const char *local);
int afcUploadFile(afc_client_t afc, const char *local, const char *remote);
