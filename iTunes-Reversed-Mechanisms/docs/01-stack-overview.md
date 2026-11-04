# 01 — Обзор стека Apple (эпоха Apple Music)

Куда делись все функции iTunes:

| Функция | macOS 15 | Windows 10/11 |
|---|---|---|
| Синк/бэкап/restore/обновления устройства | **Finder** (и `Apple Devices`-эквивалент: AMPDevices-стек) | **Apple Devices** (AMPDevices, от 2024-02 заменяет iTunes) |
| Медиатека, синк музыки | **Apple Music** (Music.app) | **Apple Music** |
| ТВ/фильмы | Apple TV | Apple TV |
| Подкасты/аудиокниги | Подкасты / Книги | пока остался iTunes для Windows |

Важно: Windows-версии Apple Music / Apple Devices **включают копию Apple Application Support**
и компонентов MobileDevice — значит, на Windows мы можем реверсить те же `MobileDevice.framework`
компоненты в поставке Apple Devices (у пользователяих путь: `C:\Program Files\Apple\Music\...` /
`C:\Program Files\Common Files\Apple\Apple Application Support\AMDeviceSupport.dll` и пр.).

## Слои стека (снизу вверх)

1. **USB устройства**
   - Нормальный режим: интерфейс Apple Mobile Device USB (usbmuxd-переговорщик).
   - **Recovery Mode**: «Apple Mobile Device (Recovery Mode)» — bulk-интерфейс, протокол iBoot
     контрол-запросов (команды getval/setenv/bootx/..., загрузка ramdisk, «goodbye»).
   - **DFU Mode**: «Apple Mobile Device (DFU Mode)» — image4-протокол.dfutelemetry, iboot DFU.
2. **usbmuxd** (mux): localhost-демон, превращение TCP-соединений в прямые подключения к портам
   устройства. macOS: `/var/run/usbmuxd` (unix-socket; на машине: srw-rw-rw-). Windows: TCP 127.0.0.1:27015.
   Бинарник macOS: `MobileDevice.framework/Versions/Current/Resources/usbmuxd`.
3. **lockdownd** (порт `62078` внутри устройства): аутентификация, паринг, старт прочих сервисов.
4. **Сервисы** (стартуются через lockdown StartService — каждый на своём порте, через тот же mux):
   afc, house_arrest, installation_proxy, notification_proxy, syslog_relay, os_trace_relay,
   crashreportcopymobile, diagnostics_relay, file_relay, mobilebackup2, mobilesync,
   mobile_image_mounter, misagent, MCInstall, screenshotr, webinspector, streaming_zip_conduit,
   carkit, companion_proxy, remotepairing и др. (+ shim/remote-варианты для Wi-Fi/remote-режима).
5. **Движки на компьютере**: MobileDevice.framework (AMDevice* API), AppleMobileDeviceHelper,
   AppleMobileSync (движок синка), Backup.framework, AMPDevices (новый слой «Devices», общие
   фреймворки между Finder(window AMPDesktopUI) и Apple Devices для Windows), Music (медиатека).

## Известные «замечательные» точки реверсинга

- Внутри бинарника **lockdownd устройства** есть секция `__TEXT __services` — plist со всеми
  сервисами и признаками (EnableServiceSSL и т.д.). Даёт «карту вселенной» сервисов на конкретной iOS.
- Внутри **usbmuxd** хоста — точные plist-сообщения mux-протокола.
- **AppleMobileSync.app** — двигатель синка музыки/фото/книг на устройство (историческое имя
  движка «iTunes-mobile sync»).
- Внутри **recovery-режима** ↔ интерфейс «Apple Mobile Device (Recovery Mode)»: команды USB control
  transfer (libirecovery).
