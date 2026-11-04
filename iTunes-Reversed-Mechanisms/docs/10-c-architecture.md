# 10 — Архитектура C-библиотеки (libirm)

## Принципы сборки

- **C11**, `-Wall -Wextra -Werror -fvisibility=hidden`, фиксированный ABI-слой `include/irm/`.
- Сборка: **CMake** (плюс простой `Makefile`-обёртка); тесты — CTest.
- Зависимости ядра можно иметь **только вендоред**: `libusb-1.0` и `mbedTLS` (или OpenSSL — выбор
  финализируется E10; приоритет mbedTLS: маленькая, апачская лицензия, TL 1.2/1.3).
- Никаких внешних демонов Apple, никаких Python/скриптов в ядре.

## Слои (сверху вниз)

```
tools/irmctl                      CLI-слой (аналог idevice_*-инструментарий)
---------------------------------------
services/  afc | house_arrest | installation_proxy | notification_proxy |
           mobilebackup2 | mobilesync | diagnostics… + music/ (синк треков)
---------------------------------------
lockdown/  паринг/сессии/TLS/StartService + таблица сервисов
---------------------------------------
plist/     plist XML+bplist (собственные)
core/      ошибки, буферы, кольцевые io, logging
 --------------------------------------
mux/       ВАЖНО ДВА БЭКЕНДА:
           a) mux_daemon — клиент системного usbmuxd (macOS/Linux uds, Win TCP 27015)
           b) mux_libusb — собственный in-process mux над USB bulk («device-mode mux»)
vfs/       ipsw/im4p/im4a/im4c/aea/dmg — для restore-этапа
tone/      аудио-конвертация в AAC/m4a (без ОС-зависимых кодеков)
```

## Поток данных ясен

`irmctl push-music file.mp3` → tone (конверт в m4a) → music/ (план передачи: файлы+
метаданные) → services/afc (+atc?) → mux → TCP-стек устройства → media-демон устройства.

## Нейминг и пометки к пользовательскому DSL

- Все публичные сущности `irm_*`; ошибки `irm_error_t` c описательной строкой.
- Каждый протокол-модуль *обязан* ссылаться на Evidence-ID (doc/evidence/E##) в заголовке.

## Тесты

- Юнит: plist-круг, шелл-парсеры MPS/ID3, error table.
- Интеграционные (с устройством; помечаем `// INT:` и включаем только при наличии девайса).
