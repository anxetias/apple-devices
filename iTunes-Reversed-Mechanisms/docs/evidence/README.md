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
- E11: docs/evidence/E11-atc-probe.md (LIVE 04.11: session-TLS по E04 на iPhone12,1/iOS 27.2 — HostCert+HostKey с первой попытки, pinning DeviceCertificate; фрейминг ATC [LE32 len][bplist00], сервер сам открывает обмен: Capabilities/InstalledAssets/AssetMetrics (Music._Count=3), Id-счётчик 9→10→11; StartService без сессии = SessionInactive) [Done: Q-session-TLS, Q-ATC-framing; Q1-Q4 открыты; обновление — см. E12]
- E12: docs/evidence/E12-atc-client-protocol.md (клиентская сторона ATC из дизасма AMPDevicesAgent: Dulcimer-handler, ATHostConnection*, состояния Idle→…→Finished, RequestingSync = маска 1=Media|2=Ringtone|8=Book|0x10=Application|0x20=Keybag|0x40=Photo|0x80=Data + анкеры «{Dataclass:»<uint32 decimal>»}»+HostInfo, ReadyForSync требует DataclassAnchors, FinishedSyncingMetadata = SyncTypes{ATSyncNoSync/Delta/Reset/PrepOnly}+Anchors+PurgeDataBytes, Grappa = подпись .cig сайдфайлов; LIVE atc-talk run1–3: HostInfo принят → SyncAllowed (ManualSync/AutoSync/PurgeAllowed/AppRemoval/AppInstallation+DisabledAssetTypes[Photo,Movie,TVEpisode,HomeVideo]/SupportsFavorites), наш Ping→Pong, серверный IdleExit закрывает idle-сессию, Id-счётчик сервера глобальный 13→33) [Done: Q1-Q2 (частично Q2); открыто: R1 wire RequestingSync, R2 выбор Delta/Reset сервером, R3 atc2, Q3 (критерий шага 9)]
