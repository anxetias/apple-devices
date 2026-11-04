# E06 — DeviceLink.framework: wire-протокол поверх lockdown-сервисов (mobilesync / mobilebackup2)

Цель: `/System/Library/PrivateFrameworks/DeviceLink.framework/Versions/A/DeviceLink` (universal,
x86_64-срез 362 КБ, sha256 среза 95d4a872…64ae). Полный декомпилят: `analysis/devicelink-decomp/functions/`
(494 функции, Ghidra 12.1.4, REA). Это общий transport-слой, на котором работают
AppleMobileSync (com.apple.mobilesync) и мобильный backup/restore-агент (com.apple.mobilebackup2).
Все наблюдения — из декомпиляции, каждое привязано к адресу.

## 1. Фрейминг сообщений (обе стороны симметричны)

`_StreamHandlerSend` (0x8ca2) / `_StreamHandlerReceive` (0x8e2f):

```
каждое DL-сообщение = [BE32 totalLen][payload bytes]
payload = XML plist-массив-кортеж: ["<DLMessageName>", arg1, arg2, ...]
```

- Формат сериализации: `CFPropertyListWriteToStream(..., format=200, ...)` в
  `_DLCreateMessageDataWithArgs` (0x21ba); 200 = `kCFPropertyListXMLFormat_v1_0`.
  Приём — всегда `CFPropertyListCreateFromXMLData` (`_DLCheckVersionForAccept` 0x5b84,
  `_DLMainThreadMessagePortCallback` 0x6500) → **в DL_payload только XML**, не bplist00.
- Транспорт — не обязательно сырой сокет: `_SocketRecv` (0x9be3) если в socketInfo есть
  AMConnection — читает через `AMDServiceConnectionReceive`, иначе plain `recv(..., MSG_WAITALL)`.
  Отправка аналогично `AMDServiceConnectionSend` / `send`.
- TLV-безопасность: чтение/запись длины и тела строго циклами «прочитать ровно N».

## 2. Версионный обмен DLMessageVersionExchange

`kDLProtocolVersion` = **400** (байты `90 01 00 00` в `__DATA @0x18e70`;账款 host код 0x18e70).

Ход (host = CONNECTING сторона, например к com.apple.mobilebackup2):
1. УСТРОЙСТВО → `["DLMessageVersionExchange", verMajor(deviceDL), verMinor(app)]`
   (host читает первым: `_DLCheckVersionForConnect` 0x5fb2).
2. host сравнивает оба числа со своими `_kDLProtocolVersion=400` и своим app-minor (param_1+0x24):
   - minor device > свой → ошибка `DLErrorConnectingProtocolGreater` (мы старее — можем отправить
     своё «наше больше»: `DLErrorAcceptingProtocolGreater` … точнее наоборот, см. строки ниже);
   - ok → host шлёт `["DLMessageVersionExchange", "DLVersionsOk", 400]`.
   Отказные ответы-строки: `DLErrorAcceptingDeviceLinkGreater` (у достигшей стороны DL старше —
   «that's ok», просто предупреждается), `DLErrorConnectingProtocolGreater`,
   `DLErrorAcceptingProtocolGreater`, `Protocol version mismatch.` (при verMajor==0 →
   `DLMessageDisconnect` с «Protocol version mismatch.»).
3. Затем, в общем случае, устройство шлёт `DLMessageDeviceReady` (dispatcher 0x6b52: случай 4).

Если host сам является принимающей стороной (Wi-Fi-модель, endpoint-сервер): туже последовательность
зеркально делает `_DLCheckVersionForAccept` (0x5b84): первым отправляет свою пару
`["DLMessageVersionExchange", 400, minor]`, ждёт «DLVersionsOk»/ошибку от коннектящейся стороны.

## 3. Открытие сервиса (host→device)

`DLConnectToServiceOnDeviceWithOptions` (0xe7d6) собирает options-словарь и вызывает `DLConnect`:
```
{ DLInfoStreamTypeKey:      "TCP" (const DLInfoStreamTypeTCP),
  DLInfoServiceNameKey:     <имя lockdown-сервиса, напр. com.apple.mobilebackup2>,
  DLInfoLockdownOptions:    <dict опций StartService, опционально>,
  DLInfoMobileDeviceRefKey: <AMDeviceRef> }
```
Дальше handler-thread вызывает `_SocketConnectLockdownService` (0x96a4) — точный порядок:
```
AMDeviceConnect(dev)
AMDeviceValidatePairing(dev)   // ошибка → «Cowardly refusing» + code 8
AMDeviceStartSession(dev)
AMDeviceSecureStartService(dev, serviceName, lockdownOptions, &conn)
AMDeviceStopSession(dev)
AMDeviceDisconnect(dev)
```
Коды ошибок при резалте: «unpaired»=8, `0xe8000081`→9, `0xe800001a`→6+3, иначе 6 (см. свитч в 0x96a4);
текст всегда через `AMDCopyErrorText`, маска кода `0x17ffffff`.
Финал: сокет сервиса оказывается в socketInfo(+4=AMConnection) и весь DL-фрейминг идёт через
AMDServiceConnectionSend/Receive.

Полезные ключи DLInfo*: DLInfoPortKey, DLInfoSocketKey (подсовывать свой сокет!), DLInfoHostnameKey,
DLInfoMuxDeviceIdKey, DLInfoLockdownAccept, DLInfoSessionNumberKey (явный номер сессии).

## 4. MessageNames (диспетчер `_DLHandleIncomingMessage` 0x6b52 + строки)

| имя | семантика (host-сторона) |
|---|---|
| DLMessageDeviceReady | готовность; вызывающий колбэк +0x58 |
| DLMessageDisconnect [reason?] | закрыть stream, колбэк disconnect |
| DLMessageProcessMessage [dict] | главный payload-канал (sync/backup-логика), колбэк +0x30 |
| DLMessagePing [payload] | эхо-канал |
| DLRequestFile [src, dst, dict] | запрос файла (host ← device) |
| DLSendFile [dataOrNull, dict] | передача файла (см. §5) |
| DLMessageCreateDirectory [src,dst,progressDict] → DLCreateDirectoryOnComputer |
| DLMessageRemoveDirectory [src,dst,progressDict] |
| DLContentsOfDirectory | листинг (поля DLFileType Directory/Regular/Unknown) |
| DLMessageMoveFiles / DLMessageMoveItems / DLMessageRemoveItems / DLMessageRemoveFiles / DLMessageCopyItem | файловые операции бэкапа |
| DLMessageUploadFiles / DLMessageDownloadFiles | bulk transfer партий файлов |
| DLMessageGetFreeDiskSpace / DLMessagePurgeDiskSpace |
| DLMessageStatusResponse [num, str, str, dict] |ответный статус bulk-операции (0x3cf8/0x41ec) |

Регистрируемый протокол ответа bulk: `__DLBulkOperationContext*` (0x4050/0x412b/0x41d1) аккумулирует
результаты и маркирует прогресс в том же словаре StatusResponse.

## 5. Файловая передача: DLSendFile/DLRequestFile (точные правила)

Реализация отправки `_DLWriteFile`/`_DLWriteFileBytes` (0xf5c — handler-thread dispatch, кейс 0xb):

- сообщение-запрос: `["DLRequestFile", src, dst, dict]` (dict мержится в infodict);
- ответ-поток: серия `["DLSendFile", <CFData piece>, infodict]` — **каждый кусок целиком в одном
  [BE32 len]-фрейме с собственным plist**; infodict повторяется в каждом куске (DLFileSource,
  DLFileDest, DLFileAttributesKey, при шифровании DLFileEncryptionKey только в первом куске —
  дальше поле удаляется);
- размер куска: CFPreferences `ChunkSize` для приложения `com.apple.DeviceLink`, дефолт **0x2000**
  (8192); буфер = chunk+0x10 (+ расширяется при шифровании);
- завершение: перевод финального куска: пустая дата `["DLSendFile", null, infodict со статусом 2]`.
- опционально статус 3 = ошибка (DLFileErrorCode/DLFileErrorString).

Статус в infodict — `DLFileStatusKey` (`printFileTransferStatus` 0xbc3):
```
1 = in-progress (косячит с DLFileAttributesKey.FileSize и DLFileOffsetKey — транспорт ресюмится
    с байтового оффсета!)
2 = completed successfully
3 = failed (DLFileErrorCode, DLFileErrorString)
```
Приём (`_DLHandleSentFilePiece` 0x338f): пишет через `fopen(DLFileDest,"w")`; при статусе 2 —
закрывает файл и криптор. Прогресс логируется каждые 10% (`FileSize/10`).

Атрибуты: DLFileAttributesKey = {DLFileSize, DLFileModificationDate, DLFileType: Directory/Regular/Unknown}.

## 6. Шифрование файлов (AES-256-CBC, auth-blob)

`_createFileAuthBlob` (отправка) / `createFileKeyFromAuthBlob` (0xbefa, приём) + `createDecryptedData`
(0xb79d): CommonCrypto:

- файл-куски: `CCCryptorCreate(op=1 kCCDecrypt/kCCEncrypt, alg=0 kCCAlgorithmAES, options=1
  kCCOptionPKCS7Padding, key=<32 B>, keyLength=0x20, iv=<16 B>)` — т.е. **AES-256-CBC + PKCS7**;
- auth-blob (CFData в DLFileEncryptionKey): разбор в 0xbefa:
  ```
  [0..2)   BE16 restLen (длина содержимого, начиная с байта 2)
  [2]      версия-байт (наблюдал 0x02 … более подробно при живом тесте)
  [3]      второй версия/флаг-байт (0x1e …)
  [4..0x14) IV = 16 байт (копия: CFDataCreate(bytes+4, 0x10))
  [0x14..) AES-256-CBC-PKCS7 ciphertext зашифрованного fileKey
  длина ciphertext = restLen - 0x12 (т.е. всего до конца блоба)
  ```
- расшифровка blob'а — тем же CCCrypt(AES-256-CBC, PKCS7) ключом сессии (param_2);
  на выходе: fileKey (32 B) + out IV (16 B, out-ptr param_3), длина ключа = 0x20;
- финальный криптор на файлах создаётся из расшифрованного fileKey+IV; CCCryptorUpdate по кускам,
  CCCryptorFinal в конце (статус 2);
- строки DLFileEncryptionKey + «Wil not decrypt…» (нет ключа сессии → отказ сохранять файл).

Это тот же механизм, что «encrypted backup»: файлы, помеченные DLFileIsEncrypted, идут в blob'e.
Apache-логика стримится per-piece — можно реализовать в C без Mac CommonCrypto (mbedTLS AES-CBC).

## 7. Номер сессии и многопоточная модель

- `DLConnect` (0x301f): если в info нет DLInfoSessionNumberKey, номер = глобальный счётчик
  `__sConnectionSerial += 0x100` (старшие 24 бита); лог «Next expected session number: %d».
- Внутренний runloop-MachPort-мост (0x6500) использует коды 1..13 (внутренние, не wire!) —
  для C-реализации не нужны, но учтите: **DL-фрейминг не знает этих кодов**, это только
  внутренняя раскладка потоков Apple. Мы всё делаем синхронно, без этого слоя.
- WiFi-вариант (host-сервер): `DLConnectionInfoCreateForEndpoint`, `DLInfoSocketKey`/PortKey,
  accept через SocketStreamHandlerAccept; для USB-тракта нам достаточно §3.

## 8. Выводы для libirm

- Реализуем DL-слой сам: [BE32 len] + XML-plist-bytea; никакого bplist в DL-пейлоаде.
- Старт сервиса: наш AMDevice-эквивалент (Connect/ValidatePairing/StartSession/SecureStartService)
  — потом E02/E04 по MobileDevice именно за этим.
- Ход общения mobilebackup2/mobilesync поверх этого реализуют более высокие уровни
  (AMPDevicesAgent / AppleMobileSync) — это уже далее отдельные E-доки.

## 9. Источники Evidence

- Псевдокод: `analysis/devicelink-decomp/functions/*.c` (494), декомпил Ghidra 12.1.4;
- строки: `analysis/devicelink-decomp/dl.strings.txt` (в оригинале 1000 строк);
- символы: `analysis/devicelink-decomp/dl.symbols.txt` (204).
