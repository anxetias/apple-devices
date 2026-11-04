# E13 — ATC: переговорный слой вскрыт (rustunes + live iOS 27.2)

Дата: 2026-11-04. Живая серия завершает R1/R2 из E12 §5.

## 1. Источник фактов (provenance)

Публичный проект **rustunes** (`github.com/fbiba/rustunes`, Feim Biba, MIT,
2026): независимая реализация ATC-синка для Linux с end-to-end-подтверждением
на iPhone17,2 iOS 27.0.1. Документация `docs/02-atc-sync-protocol.md`
восстанавливает протокол полностью (framing/envelope/session/HostInfo/
операционный файл/.cig-подпись/manifest/asset exchange/completion/errors).
Лицензия MIT — используем протокольные ФАКТЫ (не копируем код); наша
реализация — свой C в libirm/irmctl. Клон репо для справки:
`/tmp/opencode/rustunes/repo` (не в git).

## 2. Что сломало NegotiationFailed{4} (наши 15 вариантов)

Слой лежал в СЕССИИ, не в контенте Params (v1–v16 подбирали не те вещи):

1. **Session-нумерация конверта**: `Ping {Session:1,Command:"Ping"}`
   → телефон отвечает Pong + Capabilities/InstalledAssets/AssetMetrics/
   SyncAllowed; затем `RequestingSync` с **Session=2** (SendSyncRequest
   сначала инкрементирует счётчик хоста; SendPing — нет).
2. **Хост-конверт = 3 ключа**: `{Session, Command, [Params]}` —
   БЕЗ `Type`/`Id` (Type/Id — только в сообщениях телефона).
3. **HostInfo внутри Params.RequestingSync** — точный профиль Apple-хоста
   (AMP 1.6.4.90): `Type:"iTunes"`, `Version:"13.2.4.123"`
   (профи-строка; порог телефона = числовое сравнение ≥ «10.5.0.115»,
   литерал «IGNORE» тоже валиден; иначе SyncFailed{12}+RequiredVersion),
   `WindowsOSVersion:"10.0"`, `SyncHostName` (свободный текст),
   `LibraryID` = **16 UPPERCASE hex-цифр** (`%016llX` = catalog_id XOR
   persistentUserID из iTunesPrefs — НЕ UUID!) — для рукопожатия без
   активного синка сверяется только с «синком в процессе» (расхождение →
   ErrorCode 9), свежий синтетический id проход рукопожатия не ломает
   (ПРИМЕЧАНИЕ: для реального синка — только существующая identity!),
   `SyncedDataclasses:[Media]`, `SyncedAssetTypes:[Music]`,
   `Wakeable: 0` (u64-целое, НЕ bool), `Grappa: data 84B`.
4. **Grappa-запрос 84 байт** в HostInfo — фиксированная публичная
   константа go-tunes (SHA-256
   `6c3f39f3efbf1d2a29a983f58a974c43f1f5b05b529f8ba0c116f9d51842d348`,
   byte18=0x04; у Apple byte18=0x01 — их алгоритм не восстановлен).
5. `Dataclasses:[Media, Book, Keybag]` (порядок Apple), анкеры
   `DataclassAnchors:{Media:"A", VoiceMemo:"1"}` — ДЕСЯТИЧНЫЕ строки,
   ненулевые; A = текущий анкер телефона (MLSyncClientSyncAnchor).

## 3. Live-подтверждение (iPhone12,1 iOS 27.2, наш irmctl)

`irmctl atc-handshake` (E13-код; C по фактам §2), логи traces
`atc-handshake-run{1,2}-2026-11-04b.log`:

```
→ Ping {Session:1, Command:"Ping"}
← Pong (Session 0), Capabilities, InstalledAssets, AssetMetrics,
  SyncAllowed            ← останавливаемся сразу на SyncAllowed
→ RequestingSync {Session:2, Params:{HostInfo{...83-84B Grappa...},
  Dataclasses:[Media,Book,Keybag], DataclassAnchors:{Media:"1",VoiceMemo:"1"}}}
← SyncAllowed (386), InstalledAssets (149),
  ReadyForSync (273): {Type:0, Session:2, Id:228, Params:{
    DataclassAnchors:{Media:"1", Book:"0"},
    DeviceInfo:{Grappa: data 83B}}}
← Ping ×2 → IdleExit     ← телефон ждёт стадинг файлов
```

State телефона до/после закрытия: ничего не применено (не шлём ничего
далее; закрытие = отмена; анкер не движется — rustunes §14.3). Read-only.

ReadyForSync подтверждён кристально просто: переговоры пройдены ЛИЧНО
телефоном iOS 27.2. Издающая сторона и приёмник взаимозаменяемы —
документированный протокол применим и к iPhone12,1.

### 3.1. Повтор run3 + локальная проверка цепочки подписи

- **Баг-фикс `libirm/src/xmlplist.c::wb_b64`**: рендер data-узла для
  остатка `n % 3 ∈ {1,2}` писал NUL вместо b64-символа (и неверные
  полубиты) — в run2-XML-дампе `DeviceInfo.Grappa` потерялся символ
  (111 vs канонические 112). Точно восстановила байты **hex-печать
  напрямую из разобранного bplist** (`IRM GRAPPA_REPLY(n): …` в
  atc_read_frames_ext при Command=ReadyForSync). Reader-side был
  tolerant, wire не страдал; в юниты xmlw добавлены data-узлы всех
  остатков %3 (0,1,2,3,4,5,6,8,83) — 6/6 OK после пересборки.
- **run3** (traces `atc-handshake-run3-2026-11-04b.log`): свежая сессия —
  снова ReadyForSync, телефонный ответ 83 Б с живой структурой
  `01 01 … (r18=0x40) …` (PS-случайное тело, меняется от запуска к
  запуску).
- **Локальная проверка расчётной подписи** (§11.4 rustunes, чистый
  OpenSSL + XOR): D=AES-128-CBC-nopad-dec(reply[19:83], key=0x95×16,
  IV=reply[2:18]) → 64Б **без PaddingError**; K=ECB(AES, key
  `7776eb98ab6ce602e8e892e41ba7e915`, блок D[1:17]⊕D[39:55]⊕
  `c6c7c4c5cacbc8c9cecfcccdb2b3b0b1`); sidecar 21Б = `01`‖(HMAC-SHA1(K,"
  ")⊕D[18:38]⊕`f9fa…ec`) — все шаги сошлись (sha256 печатались, сырые
  ключи не выведены). Это подтверждение **расчётной способности**, НЕ
  контракт-проверка телефоном (она — только в mutation-фазе на живом
  .cig).
- `GRAPPA_HOST_REQUEST` (наш C) == `HOST_REQUEST` (rustunes
  signing.rs): байт-в-байт (sha256
  `6c3f39f3efbf1d2a29a983f58a974c43f1f5b05b529f8ba0c116f9d51842d348`).

## 4. Что дальше (дорожка реального синка)

- Только после явного согласия пользователя (mutating-фаза!): AFC-стадинг
  `iTunes_Control/Sync/Media/Sync_%08X.plist` + `.plist.cig`
  (подпись §11.4: AES-128-CBC{key=0x95×16, IV=reply[2:18]} на reply[19:83]
  → D; K=ECB(WRAP_KEY, D[1:17]⊕D[39:55]⊕const); tag=HMAC-SHA1(K, ops)⊕
  D[18:38]⊕const; sidecar=01‖tag⊕mask, 21B) → `FinishedSyncingMetadata`
  {Session:2, Params:{DataclassAnchors{Media:"A+1",VoiceMemo:"1"},
  SyncTypes{Media:1,Book:0,Keybag:1}}} → AssetManifest(если ассеты) →
  Airlock-загрузка → FileComplete → SyncFinished.
- Identity/LibraryID: читать `iTunesPrefs` (frpd, 1232B) по AFC:
  catalog_id=LE64@raw[12..20], user_id=LE64@raw[20..28],
  LibraryID=%016llX(catalog_id^user_id). Якорь Media:
  MediaLibrary.sqlitedb `_MLDatabaseProperties.MLSyncClientSyncAnchor`.
- atc2 — молчит даже на HostInfo (Q4 закрыт отрицательно; лог
  traces `atc-talk-atc2-run1-2026-11-04b.log`).
- lk-dump: Media-синк регистрация на телефоне отсутствует
  (data_sync = iCloud-аккаунты календарей/контактов; wireless_lockdown
  без WiFiSyncingLibraries) — R1a-гипотеза ложная, закрыта
  (traces `lk-dump-run1-2026-11-04b.log`).

## 5. Сводка E12 -> E13 ошибок

- E12 §5 «разгадка NegotiationFailed» — ВЫПОЛНЕНО через rustunes:
  причина была в секции протокола, а не в словаре Params.
- Плацдарм обновлён: у нас есть всё, чтобы перейти к AFC-стадингу,
  как только пользователь разрешит mutation-фазу.
- libc-клиент пишем сами (C11/POSIX, свой bplist/LE32-фрейминг уже есть
  в libirm; алгоритм подписи не копируем — реализуем свой, на OpenSSL
  AES/HMAC-SHA1, что уже в зависимостях TLS).
