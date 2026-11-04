# 04 — usbmuxd (транспортный слой)

Назначение: мультиплексор, через который программа с хоста открывает TCP-соединения к портам служб
устройства. Для устаревших подключений также обслуживает эвенты подключения/отключения устройств.

## Транспорт к демону (внешний интерфейс)

- macOS/Linux: Unix domain socket `/var/run/usbmuxd`.
- Windows: TCP `127.0.0.1:27015` (демон Apple).
- Режим «без демона» («device-mode», наш libsembly): мы сами говорим по USB bulk-интерфейсу
  устройства и реализуем mux-фрейминг + TCP-over-USB. Точный фрейминг — цель REA (E01).

## Два суб-протокола демона

1. **Legacy (бинарный)**: заголовок {uint32 length, uint32 version=0, uint32 type, uint32 payload...},
   типы LISTEN(3)/CONNECT(2)/... — нужен для ретро-совместимости. 🔎
2. **Современный (plist)**: заголовок {uint32 length, uint32 version=1, uint32 type? — маркер plist},
   тело = **binary plist (bplist00)**:
   - `Listen` `{MessageType:"Listen", ProtocolVersion:"1", ClientVersionString:...}` →
     reply `{MessageType:"Result", Number:0, status}`; далее события
     `DeviceAdd/DeviceRemove/Attached/Removed/P_WRONG/...?` 🔎
   - `ListDevices` `{MessageType:"ListDevices"}` → `{DeviceList:[{DeviceID, Properties:{ProductType,
     SerialNumber, ConnectionType, ...}}]}` 🔎
   - `Connect` `{MessageType:"Connect", DeviceID:n, PortNumber:n}` → Result (Error/Success);
     после него сокет становится **двусторонним TUNNEL-портом к сервису устройства** (lockdownd = 62078). 🔎
   - UrlScheme/шифт «Connected/Disconnected» от демона при уходе misc. 🔎

## Известные нюансы (для проверки)

- Есть «**port bytes**»-легенда: в plist-режиме порт передаётся как plain uint32, в legacy — как
  соберж swapped-пары. 🔎 сверка с демоном.
- Property «Paired» на DeviceAdd/Attached указывает, есть ли паринг-рекорд. 🔎
- При **DFU/Recovery-режиме** устройство тоже видно через usbmuxd (ConnectionType=Wired,
  но порт-connect не применим: recovery идёт мимо mux, напрямую USB-control). 🔎

## Реализация в C (libirm:й `mux`)

Два бэкенда одного интерфейса `irm_mux_t`:
- `mux_backend_daemon` — клиент системного usbmuxd (unixSocket/с TCP 27015);
- `mux_backend_libusb` — own mux (статический REA-производный протокол).
API: `irm_list_devices()`, `irm_open_port(udid, port) -> irm_stream_t*`.
