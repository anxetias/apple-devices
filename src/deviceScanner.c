#include "deviceScanner.h"

#include <libimobiledevice/lockdown.h>
#include <libimobiledevice/afc.h>
#include <glib.h>

/* === deviceScanner.c === */

G_DEFINE_TYPE(DeviceInfo, device_info, G_TYPE_OBJECT)

/* --- GObject для данных устройства --- */

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

const char *
deviceInfoGetName(DeviceInfo *self)
{
  return self->name;
}

const char *
deviceInfoGetVersion(DeviceInfo *self)
{
  return self->version;
}

const char *
deviceInfoGetUdid(DeviceInfo *self)
{
  return self->udid;
}

const char *
deviceInfoGetProductType(DeviceInfo *self)
{
  return self->product_type;
}

const char *
deviceInfoGetSerialNumber(DeviceInfo *self)
{
  return self->serial_number;
}

guint64
deviceInfoGetTotalCapacity(DeviceInfo *self)
{
  return self->total_capacity;
}

guint64
deviceInfoGetDiskUsage(DeviceInfo *self)
{
  return self->disk_usage;
}

int
deviceInfoGetBatteryPercent(DeviceInfo *self)
{
  return self->battery_percent;
}

/* --- Иконки устройств --- */

static const char *
deviceIconFromProductType(const char *productType)
{
  if (!productType)
    return NULL;
  if (g_str_has_prefix(productType, "iPhone"))
    return "phone-apple-iphone-symbolic";
  if (g_str_has_prefix(productType, "iPad"))
    return "computer-apple-ipad-symbolic";
  if (g_str_has_prefix(productType, "iPod"))
    return "multimedia-player-apple-ipod-touch-symbolic";
  if (g_str_has_prefix(productType, "AppleTV"))
    return "tv-symbolic";
  if (g_str_has_prefix(productType, "Watch"))
    return "phone-symbolic";
  return NULL;
}

static const char *
deviceIconFromName(const char *name)
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

const char *
osLabelForProductType(const char *productType)
{
  if (!productType)
    return "iOS";
  if (g_str_has_prefix(productType, "iPad"))
    return "iPadOS";
  if (g_str_has_prefix(productType, "Watch"))
    return "watchOS";
  if (g_str_has_prefix(productType, "AppleTV"))
    return "tvOS";
  return "iOS";
}

const char *
deviceIconFor(const DeviceInfo *info)
{
  GtkIconTheme *theme = gtk_icon_theme_get_for_display(gdk_display_get_default());

  const char *candidates[] = {
    deviceIconFromProductType(info->product_type),
    deviceIconFromName(info->name),
    "phone-symbolic",
    "computer-symbolic",
  };

  for (guint i = 0; i < G_N_ELEMENTS(candidates); i++) {
    if (candidates[i] && gtk_icon_theme_has_icon(theme, candidates[i]))
      return candidates[i];
  }
  return NULL;
}

const char *
batteryIconFor(int percent, char *buf, gsize bufLen)
{
  GtkIconTheme *theme = gtk_icon_theme_get_for_display(gdk_display_get_default());

  int level = ((percent + 5) / 10) * 10;
  if (level < 0)
    level = 0;
  if (level > 100)
    level = 100;

  g_snprintf(buf, bufLen, "battery-level-%d-symbolic", level);
  if (gtk_icon_theme_has_icon(theme, buf))
    return buf;
  return gtk_icon_theme_has_icon(theme, "battery-symbolic") ? "battery-symbolic" : NULL;
}

/* --- Чтение plist-значений --- */

int
plistToInt(plist_t node)
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

/* --- Фоновый поток: сканирование USB --- */

// Фоновый поток: без обращений к виджетам GTK. UI обновляется в колбэке.
void
scanDevicesThread(GTask *task, gpointer sourceObject,
                  gpointer taskData, GCancellable *cancellable)
{
  (void)sourceObject;
  (void)cancellable;

  GListStore *store = G_LIST_STORE(taskData);
  char **devices = NULL;
  int count = 0;

  logMessage(tr("Начинаем сканирование USB..."));

  if (idevice_get_device_list(&devices, &count) < 0) {
    logMessage(tr("Ошибка: idevice_get_device_list вернула ошибку."));
    g_task_return_boolean(task, FALSE);
    return;
  }

  logMessage(tr("Найдено устройств в системе: %d"), count);

  for (int i = 0; i < count; i++) {
    idevice_t device = NULL;
    lockdownd_client_t client = NULL;

    logMessage(tr("Обработка UDID: %s"), devices[i]);

    if (idevice_new(&device, devices[i]) != IDEVICE_E_SUCCESS) {
      logMessage(tr("  -> Ошибка: idevice_new не смог создать устройство."));
      continue;
    }

    if (lockdownd_client_new_with_handshake(device, &client, "AppleDeviceManager") == LOCKDOWN_E_SUCCESS) {
      logMessage(tr("  -> Handshake успешен."));
      plist_t nodeName = NULL;
      plist_t nodeVer = NULL;
      plist_t nodeType = NULL;
      plist_t nodeSerial = NULL;
      plist_t nodeTotal = NULL;
      plist_t nodeDisk = NULL;
      plist_t nodeBatt = NULL;
      char *nameStr = NULL;
      char *verStr = NULL;
      char *typeStr = NULL;
      char *serialStr = NULL;

      lockdownd_get_value(client, NULL, "DeviceName", &nodeName);
      lockdownd_get_value(client, NULL, "ProductVersion", &nodeVer);
      lockdownd_get_value(client, NULL, "ProductType", &nodeType);
      lockdownd_get_value(client, NULL, "SerialNumber", &nodeSerial);
      lockdownd_get_value(client, NULL, "TotalDiskCapacity", &nodeTotal);
      lockdownd_get_value(client, NULL, "DiskUsage", &nodeDisk);
      lockdownd_get_value(client, "com.apple.mobile.battery", "BatteryCurrentCapacity", &nodeBatt);

      DeviceInfo *info = g_object_new(DEVICE_TYPE_INFO, NULL);
      info->udid = g_strdup(devices[i]);

      if (nodeName) {
        plist_get_string_val(nodeName, &nameStr);
        info->name = g_strdup(nameStr ? nameStr : "Unknown Device");
        g_free(nameStr);
        plist_free(nodeName);
      } else {
        info->name = g_strdup("Unknown Device");
      }

      if (nodeVer) {
        plist_get_string_val(nodeVer, &verStr);
        info->version = g_strdup(verStr ? verStr : "N/A");
        g_free(verStr);
        plist_free(nodeVer);
      } else {
        info->version = g_strdup("N/A");
      }

      if (nodeType) {
        plist_get_string_val(nodeType, &typeStr); // NULL, если значения нет
        info->product_type = g_strdup(typeStr);
        g_free(typeStr);
        plist_free(nodeType);
      }

      if (nodeSerial) {
        plist_get_string_val(nodeSerial, &serialStr);
        info->serial_number = g_strdup(serialStr);
        g_free(serialStr);
        plist_free(nodeSerial);
      }

      if (nodeTotal) {
        // Значение может прийти и числом, и строкой — обрабатываем оба варианта
        if (plist_get_node_type(nodeTotal) == PLIST_UINT) {
          plist_get_uint_val(nodeTotal, &info->total_capacity);
        } else {
          char *s = NULL;
          plist_get_string_val(nodeTotal, &s);
          if (s)
            info->total_capacity = g_ascii_strtoull(s, NULL, 10);
          g_free(s);
        }
        plist_free(nodeTotal);
      }

      if (nodeDisk) {
        if (plist_get_node_type(nodeDisk) == PLIST_UINT) {
          plist_get_uint_val(nodeDisk, &info->disk_usage);
        } else {
          char *s = NULL;
          plist_get_string_val(nodeDisk, &s);
          if (s)
            info->disk_usage = g_ascii_strtoull(s, NULL, 10);
          g_free(s);
        }
        plist_free(nodeDisk);
      }

      // Фоллбек: новые iOS не отдают TotalDiskCapacity/DiskUsage через
      // lockdown. Берём данные через AFC (сервис файлового обмена):
      // FSTotalBytes/FSFreeBytes — media-раздел с пользовательскими данными,
      // примерно то, что iOS показывает в «Настройки → Хранилище».
      if (info->total_capacity == 0) {
        afc_client_t afc = NULL;
        lockdownd_service_descriptor_t afcService = NULL;

        // Поднимаем сервис AFC через уже установленный lockdown-сеанс
        if (lockdownd_start_service(client, "com.apple.afc", &afcService) == LOCKDOWN_E_SUCCESS &&
            afc_client_new(device, afcService, &afc) == AFC_E_SUCCESS) {
          char **afcKeys = NULL;
          if (afc_get_device_info(afc, &afcKeys) == AFC_E_SUCCESS && afcKeys) {
            guint64 fsTotal = 0;
            guint64 fsFree = 0;

            // Массив — NULL-терминированный список пар «ключ, значение»
            for (char **kv = afcKeys; kv[0] && kv[1]; kv += 2) {
              if (g_strcmp0(kv[0], "FSTotalBytes") == 0)
                fsTotal = g_ascii_strtoull(kv[1], NULL, 10);
              else if (g_strcmp0(kv[0], "FSFreeBytes") == 0)
                fsFree = g_ascii_strtoull(kv[1], NULL, 10);
            }

            if (fsTotal > 0) {
              info->total_capacity = fsTotal;
              info->disk_usage = fsTotal > fsFree ? fsTotal - fsFree : 0;
              logMessage(tr("  -> Накопитель (AFC, media-раздел): занято %"
                          G_GUINT64_FORMAT " из %" G_GUINT64_FORMAT " байт"),
                          info->disk_usage, info->total_capacity);
            }

            // Память под строки выделял сам libimobiledevice (malloc) —
            // освобождаем парным free()
            for (char **kv = afcKeys; *kv; kv++)
              free(*kv);
            free(afcKeys);
          } else {
            logMessage(tr("  -> AFC: не удалось получить информацию о разделе."));
          }
          afc_client_free(afc);
        } else {
          logMessage(tr("  -> AFC: сервис не открылся (нужен Trust?)."));
        }

        if (afcService)
          lockdownd_service_descriptor_free(afcService);
      }

      // Уровень батареи (домен com.apple.mobile.battery)
      info->battery_percent = plistToInt(nodeBatt);
      if (nodeBatt)
        plist_free(nodeBatt);
      if (info->battery_percent >= 0) {
        if (info->battery_percent > 100)
          info->battery_percent = 100;
        logMessage(tr("  -> Батарея: %d%%"), info->battery_percent);
      }

      logMessage(tr("  -> Имя: %s, Версия: %s"), info->name, info->version);
      logMessage(tr("  -> Тип: %s"), info->product_type ? info->product_type : "N/A");
      if (info->total_capacity > 0)
        logMessage(tr("  -> Накопитель: занято %" G_GUINT64_FORMAT
                    " из %" G_GUINT64_FORMAT " байт"),
                    info->disk_usage, info->total_capacity);
      else
        logMessage(tr("  -> Накопитель: данные недоступны — будет показан демо-режим."));
      g_list_store_append(store, info);
      g_object_unref(info);

      lockdownd_client_free(client);
    } else {
      logMessage(tr("  -> Ошибка: не удалось установить соединение (Trust?)."));
    }
    idevice_free(device);
  }
  idevice_device_list_free(devices);
  logMessage(tr("Сканирование завершено."));
  g_task_return_boolean(task, TRUE);
}

void restoreSelection(AppleApplication *self, const char *prev_udid)
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
      target = row;
    } else if (g_strcmp0(info->udid, prev_udid) == 0) {
      target = row;
    }
  }

  if (target)
    gtk_list_box_select_row(GTK_LIST_BOX(self->sidebar_list), target);
}
