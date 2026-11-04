# Сводка evidence (лидгер)

Записи нумеруются E01, E02, ... — по одной теме/вопросу на файл (см. шаблон в docs/03-re-method.md).

По мере REA-работы сюда добавим индекс: E01 usbmuxd-сообщения, E02 device-mode-mux,
E03 lockdownd __services, E04 lockdown TLS, E05 pair-рекорд, E06 ATC-музыка, E07 офлайн-библиотека,
E08 backup-схема, E09 restore/ASR, E10 аудио-конверсия.

- E01: docs/evidence/E01-usbmuxd-strings-imports.md (строки + импорты framebuffer'а демона)
- E01b: docs/evidence/E01b-usbmuxd-wire-formats.md (wire-форматы, декомпиляция) [Done: Q1,Q3; Q2 в основном]
- E03: docs/evidence/E03-sync-orchestration.md (оркестрация синка: helper fork-chain AMS, /tmp/MobileSync_lock, com.apple.itunes.lock_sync + notification_proxy порядок) [Done: ATC — live-тест]
- E06: docs/evidence/E06-devicelink-wire-protocol.md (DeviceLink.framework: фрейминг DL поверх сервисов, version-exchange, DLSendFile/DLRequestFile, AES-256-CBC auth-blob) [Done: wire-слой mobilesync/backup2]
- E02: docs/evidence/E02-connection-layers.md (MobileDevice: AMDeviceConnect, lockdown-checkin bplist00 wire, SecureStartService полный путь, AMDServiceConnection raw io, полная таблица kAMD* 219 кодов → analysis/amd-errors.tsv) [Done: Q2 wire-детали]
- E04: docs/evidence/E04-lockdown-tls.md (lockssl_handshake: SSLv23_method, options по версии iOS, клиентский серт+ключ из pair-рекорда, verify(3) depth 0, pinning memcmp DER) [Done: Q4 (TLS1.3 — live.)
- E05: docs/evidence/E05-pairing.md (CreatePairingMaterial: RSA2048 root/host/ключи, 3 X509v3 серта (sha1, NID 87/82/83), PairingGoo-рекорд, Pair-сообщение, EscrowBag/ExtendedResponse, SavePairRecord→usbmuxd) [Done: Q5 (детали live)]
