# 11 — Открытые вопросы (живой трекер)

Формат: [E##-протокол / статус / гипотеза / следующий шаг REA]

| # | Вопрос | Статус | Следующий шаг |
|---|---|---|---|
| Q1 | Точный фрейминг plist-сообщений usbmuxd (поля/байты) | **закрыт → E01b** ✓ | — |
| Q3 | Порядок байтов порта в Connect (plist vs legacy) | **закрыт → E01b** ✓ (SInt16 в plist; ports LE в mux-TCP; legacy мёртв на macOS 15) | — |
| Q2 | device-mode mux поверх USB bulk (без демона) | **большая часть закрыта → E01b** (v1/v2 headers, TCP-фреймы, version-handshake) | выверить window/seq правила и v1-детали на живом USB (live, libusb) |
| Q4 | TLS-параметры сессии lockdown | **закрыт → E04** ✓ (options по версии iOS, client-cert+key из рекорда, pinning memcmp DER; TLS1.3 — live) | live-тест TLS1.3 |
| Q5 | Полный состав паринг-рекорда iOS 17/18 | **закрыт → E05** ✓ (материал/рекорд/Pair-обмен/SavePairRecord→usbmuxd) | — |
| Q6 | Механизм ATC (`com.apple.atc`) для музыки | **наполовину закрыт → E07 v1/v2** (Dulcimer-оркестрация, JR/PCF, ATHostConnectionSendFile*, sync-цикл 0x1004f5a78) | live-синк с реальным устройством: захват DL/ATC-канала (StartService-проба, lsof/dtrace) |
| Q7 | Структура офлайн-библиотеки устройства (iTunes_Control/…), плейлисты | **наполовину закрыт → E07 v2** (PostProcessCommands из домена `com.apple.mobile.iTunes` → sqlite; целевая база — live-вопрос) | live-дампы AFC во время синка + БД в бэкапе |
| Q8 | Таблица сервисов (lockdownd `__services`) для конкретной iOS | открыт | извлечение из IPSW (E03) |
| Q9 | Точная схема Manifest.db/динамика mobilebackup2 | **закрыт → E08 v2** ✓ (AppleMobileBackup-словарь: init Hello/Response, BackupMessage*-канон, mdbackup/mdinfo/mddata/mbbackup, статьи Manifest.db версий 5.0–5.2/6.1, AMS-сигнатуры) | живой прогон (Q13) для сверки |
| Q10 | ASR-транспорт restore: через mux или напрямую USB | **закрыт → E09** ✓ (RestoreMode: mux-коннект порт 62078 + protocol-upgrade; ASR — отдельный raw-сокет с XML-плейлистами, chunk+digest) | — |
| Q11 | Очередь аудио-конверсии (AAC) для деплой-саундс | **закрыт → E10** ✓ (host-side CoreAudio aace/aach, 'brat' bitrate, canAccept RequiresTranscoding; libirm → своя C-кодек-библиотека; транскод — опция) | — |
| Q12 | Точный путь lock-файла (`com.apple.itunes.lock_sync`/`syncing`) на/mac | открыт → E07 v1 | live-тест: lsof во время Finder-синка |
| Q13 | Live-«что реальный синк посылает» (ATC-канал, مغ postgres?) | открыт → E07/E06 | первый live-запуск irm-mux при готовности C-стека |

## Реверс-очередь: СТАТУС

E01/E01b (mux-wire) ✓ · E02 (lockdown-serv) ✓ · E03 (оркестрация Finder) ✓ ·
E04 (TLS) ✓ · E05 (pairing) ✓ · E06 (DeviceLink) ✓ · E07 (sync-lock/синк) v1+v2 ✓ ·
E08 (бэкап) v1 ✓ · E09 (restore/ASR) v1 ✓ · E10 (транскод) v1 ✓

Осталось вторичное: E08 v3 / E09 v2 — только по итогам live-прогонов (сверка словаря).

## Временные правила 💡

- Ничего не закрываем как «понятно», пока нет либо декомпилированного/код-фрагмента с адресом,
  либо реального обмена (дамп), записанного в evidence.
- Live-вопросы решаются только с реальным устройством (iPhone + irm-mux-прототип).
