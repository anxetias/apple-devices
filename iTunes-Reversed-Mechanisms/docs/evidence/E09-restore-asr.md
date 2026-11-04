# E09 (v1) — Restore: DFU / Recovery / RestoreMode + ASR-протокол (MobileDevice)

Корпус: `analysis/mobiledevice-decomp/functions/` (MobileDevice.framework, REA/Ghidra).
Файл-схема: `functions/0x<addr>.c`. Семантика Progress-стейджей даётся тем, что видит код —
не пересказ документации.

Продолжение E08 (бэкап-администрация): тут только **полное восстановление прошивки**
и соседний ASR-канал доставки образов.

## 1. Три режима восстановления

Экспортер MobileDevice (все `_AMRestore*` из индекса):
`PerformDFURestore(0xebd73)`, `PerformPortDFURestore`, `PerformRecoveryModeRestore(0xef304)`,
`PerformRestoreModeRestore(0xcd81c/0xceea9 V2)`, `PerformTADRestore(0xc6acc)`;
«высший уровень» — `_AMRestorableDeviceRestore` / `_AMRestorableDevice{PutIntoDFU,RebootToRecovery,
RegisterForNotifications,…}` (state-machine поверх всех режимов).

### 1.1 DFU (_AMRestorePerformDFURestore 0xebd73)

```
1. options = копия; если AuthInstall-контекст (dev+0xa8) не создан:
   progress(stage 45=0x2d,-1) → _AMDFUModeDeviceCopyAuthInstallPreflightOptions(dev, options)
2. personalised bundle: PersonalizedRestoreBundlePath + _AMRAuthInstallAlignOptionsToPersonalizedBundle
   legacy-путь: RestoreBundlePath → _AMRestoreCreatePathsForBundle → FirmwareDirectory
3. путь к DFU-файлу — из build identity или по шаблонам:
   "%@/dfu/WTF.%@.RELEASE.dfu", "%@/dfu/WTF.%@.%@.dfu",
   "%@/dfu/FIRMWARE.%@.RELEASE.dfu", "%@/dfu/FIRMWARE.%@.%@.dfu",
   "%@/dfu/%@.%@.%@.dfu"; legacy iPod 1222r1: "%@/dfu/WTF.s5l8900xall.RELEASE.dfu"
   (ProductID форматируется "%X"; сначала пробуют "%@"-ряд, при отсутствии — FIRMWARE-ряд)
4. персонализация: AMAuthInstallCreate → ConfigureUsingOptions → в preflight-дикт:
   ECID (Integer64), ChipID, ApBoardID (BoardID), ApSecurityDomain,
   ApProductionMode/ApSecurityMode/ApInRomDFU (bool), UIDMode (cf_UIDMode==1),
   AprNonce/Nonce + SepNonce (строками-hex из USB-проб), IBFL (fusing bits);
   EnablePersonalization → ApImg3PersonalizeFile / ApImg4PersonalizeFile
5. TSS-тикета при IBFL&2: _AMRAuthInstallCopyTicketData
6. __AMRUSBDeviceOpen → __createDFUDataFromFile(path,ticket) →
   _AMRPerformDFUDataDownload(usbd, data, _dfuProgressCallBack, self)
7. opt OnlyPersonalizeDFUFile==true и !PreserveBundle → _unlink(путь DFU-файла)
8. ошибка 99 = юзер requested cancel (flag dev+0xa4 от AbortRestore)
```

**DFU wire** (`_AMRPerformDFUDataDownload` 0xf4156):
```
iface = __AMRUSBDeviceGetInterface(dev, 0xfe, 1)   // DFU-interface
GetDFUInformation → (blockSize=u16, state, phase)
DFUGetState: state==10(0x0A=bad) → CLEARSTATUS (class request 0x21 bRequest=4)
             state==2 (idle) else → DFUAbort
потом: for блоками blockSize: DFUTransferOneBlock(..., blockNo, ptr, n, request=5 /*DFU_DNLOAD*/)
     последним: request=7 = ZLP (Zero Length Packet); err 0x7d6 на ZLP → API-конфликт, FATAL только не 0
балансирование: Abort + GetState, progress-callback на каждый блок = (sent*100)/len
```
„no DFU interface“ → код 0x7d2 (2002).

### 1.2 Recovery mode (_AMRestorePerformRecoveryModeRestore 0xef304)

```
1. opts copy; iBoot build style лог
2. если !dev+0x38 (не „u-boot“-вариант?):
   progress(3) → __sendControlPacket(dev,0,0,0,&cmd=0xc,...)   // id по коду
3. progress(4) → __getMaxFileTransferSize(dev):
     sendCommandToDevice("getenv ramdisk-size") → parse hex → default 0x10000000 (256 MiB)
   progress(45=0x2d) → _AMRecoveryModeDeviceCopyAuthInstallPreflightOptions (+ replace opts)
4. PersonalizedRestoreBundlePath align / legacy paths; resolveBundlePathOptions
5. bootstrap-only check (_AMRestoreDeviceIsBootstrapOnly)
6. env var radio_error; если не задан: лог „radio error not set“ (!! зависимость от окружения)
7. портал отправки (порядок):
   sendTicketToDevice (iboot: "ticket" + ap-ticket)
   sendiBootFirmwareToDevice  (DisableiBootFirmware opt; SetAutoBoot(false);
                               __setArgs (setenv boot-args); компоненты iBootData,
                               RestoreANS, RestoreDCP — pushAndPop из dict)
   bootstrapRestore; sendBootImageToDevice; sendDeviceTreeToDevice;
   sendRestoreSEPToDevice → progress(7) → sendFileToDevice → bootDevice / membootDevice
```

**Recovery USB pipe wire** (`__sendControlPacket` 0xf1b07):
```
структура: {0x1234 (BE u16 magic), len u8 = arglen, cmd u8} + args (до 8 б)
через AMRUSBInterfaceWritePipe(dev->iface, ep = dev+0x3a, buf, arglen+4)
ответ: AMRUSBInterfaceReadPipe(ep = dev+0x39, out, outLen)   // e.g. "PWNED?"
```
iboot-команды (строки): `getenv %@`, `setenv boot-args %@`, `setenv auto-boot true/false`,
`setenv filesize %lld`, `memboot` (в memboot: setArgs → progress(9) → sendCommand "memboot" c
path-аргументом), `ticket`, `saveenv`. `__getenvramdisk_size` — команда «getenv ramdisk-size».
ёмкость file transfer: 0x10000000 = 256 М in absence of reply.

### 1.3 Restore mode (OS/ramrod) — _AMRestorePerformRestoreModeRestoreWithError 0xcd875

```
1. options align/PersonalizedBundle; отмена предыдущего подключения (disconnectFromDevice)
2. _initConnectionTypes(dev, options)   // RAMROD_TYPE / RESTORED_TYPE (строки "cf_ASR...):
   CFEqual(kTypeKey, RAMROD_TYPE) / CFEqual(kTypeKey, RESTORED_TYPE)
3. если нет conn (dev+0x70==0/78==-1):
   progress(3,-1) → _AMRestoreModeDeviceConnectToPortInternal(dev, 0xF27E, timeout=0.0, flags=0xf)
  _port 0xF27E = 62078 (тот же «локдаунный» порт; на restore OS отвечает ramrod)
   progress(4,-1)
4. SavedDebugInfo value-query через сокет: {USBLog?, PanicLog?, PreviousExitStatus?}
5. RestoreBundlePath → FirmwareDirectory
6. _queryDeviceCapabilities(mes): type/iBoot build/proto; SupportedMessageTypes,
   SupportedDataTypes, SupportedAsyncDataTypes, SupportedHostProtocols
   → ложатся в options dict
7. PurpleReverseProxy (SOCKS): _AMRestoreReverseProxyContextCreate +
   _RPCreateSocksProxyWithCallback(0x43a); опции PRPLogLevel; (вин-инфра: disables etx)
8. boardconfig/SystemPartitionPadding/Manifest.SEP.Info.RequiredCapacity→TZ0RequiredCapacity
9. progress(45=0x2d) → _AMRAuthInstallPersonalizeBundle(amai, opts)
10. _performRestore(options)   — ОС-цикл (см. §3)
```
```
«Первое сообщение неапгрейд → считаем Mux socket»; «Bad protocol upgrade message»,
«Device asked for legacy protocol», «Unexpected protocol %@»
options-флаги канала: DisableRestoreModeUSBMux, DisableRestoreModeIPv6, HostHasFixFor99053849,
RestoreModeIPv6{SendBuffer,RecvBuffer,Address}, ASRConnectionAttempts
```
Ошибка «Incompatible protocol versions between host and device — you may need to update
your host tools» — трогает и restore.mode. `_AMRestoreGetSupportedPayloadVersion`.

## 2. ASR-сервер образа (AppleRestore Service) — точный протокол

Запускается на **raw TCP-сокете, подключённом К УСТРОЙСТВУ** (не через lockdown-plist
фрейминг!). Три входа: `_runASRServer(0xcb188)` →
`_ASRServerHandleConnection(0x19dcaa)` (файл)/`...WithProvider(0x19dd8e)`
(lazy-file provider `_ASRProvideDataCallback` 0xcf62a = pread).
Контекст: если не «async» — callback `_restoreImageCallback`, иначе `_asyncRestoreImageCallback`.
Таймаут-оптимизация: `ASRConnectionAttempts` (CFNumber Float); `_asrConnectTimeout(0xcaa4e)`.
Завершение: `_AMRestoreCloseTransferSocket(fd,0|1)` → «closed»/«closed with explicit RST».

### Протокол (Все данные — XML-плисты БЕЗ BE32-префикса; raw stream):
```
1) УСТРОЙСТВО шлёт запрос-дикт (XML, читаем до полного разбора 1024-бactice chunks):
   { "Command": "Initiate", "ChecksumChunks": true/false,
     "ChecksumType": 0|1,            // 0=SHA1, 1=SHA256
     ... }
2) ХОСТ отвечает тем же XML-плей-листом (одной записью):
   { "Version": 1,
     "StreamID": 1,
     "PacketPayloadSize": 1450,      // 0x5AA
     "PacketsPerFEC": 25,            // 0x19
     "FECSliceStride": 40,           // 0x28
     "ChecksumChunkSize": 131072,    // 0x20000 — только при ChecksumChunks=true
     "ChecksumType": 0|1,            // эхо запрошенного; SHA1 len 20 / SHA256 len 32
     "Payload": { "Size": <image size>,     // CFNumber
                  "Port": 1,                // всегда 1 (наблюдено)
                  "Passphrase": "…",        // если задан (ImagePassword)
                  } }
3) OOBData-запрос: { "Command":"OOBData", "OOBOffset":off, "OOBLength":len }
   → если off+len<=size: читаем из файла provider'ом, отвечаем РАВНЫМ XML-наполнением
     (OOB-байты «сырым» потоком, без plist — обёртки нет; for format see code)
   → выходит ошибка 0x21(33) при выходе за размер, 0x16 (22) при мусорном запросе
4) Payload-поток (после Initiate): host птём 128 KiB шлёт РАВНО файл:
   каждый чанк = 131072 байт файла + (если чекс сумма) digest (20/32 б) в конце
   прогресс: percent = 5 + (offset/size)*89  → только при возрастании, кэлбек
     1% "Initialized communication with client"
     5% "Starting to send payload" / "Sending payload" 5..94
   на EOF запрос нул-дикта → return 0 ("Finished") — «Client aborted connection» если offset==0
```
Перевод errno → код ошибки (`_processASRResult` 0xcb316):
```
ECONNRESET(54)|EPIPE(32) → recoverable → 0 (без HostFailsWhenASRFails)  «...possibly recoverable»
EIO(5)                  → 0x450 (1104)   в error domain
EINVAL(22)               → 0x451 (1105)
прочее                   → 0x44c (1100)
HostFailsWhenASRFails==true (option)  → всегда код-ошибка
```
ASR строка-маркер в логе: «ASR progress: %s», «ASRConnectionAttempts».

### Кто вызывает: `_handleImageDataRequest(0xd65f0)` / `_handleAsyncImageDataRequest`
вызывается при DataRequest(DataType=SystemImageData|RecoveryOSASRImage):
```
if streamed (encrypted image): _handleStreamedImageFileRequest → шлёт через «destination port»
    («received streamed image request without destination port», «failed to connect to
    device's transfer port %d»)
else: классический ASR «synchronous» — _runASRServer(imageFile, ImagePassword, ...)
    («received image data request but have no image to restore», код 10)
```

## 3. Restore-OS message protocol (ramrod поверх mux)

Framing **[BE32 len][XML plist]** — конфирм через `_ramrod_send_message` 0xc91f0:
```
write_buffer(fd, [BE32=0], 4)   // не-байтовый BE32 длины — см. 0xc90c3 send bytes;
RamrodHostMessagePlist: NSPropertyListSerialization
    writePropertyList:toStream:format:200 (XML!) options:0
chunks(list of NSData) потом пишутся в сокет
```
Хост-сообщение №1 (`_performRestore` 0xd12ad):
```
{ "MsgType": <RESTOREDMsgHello>,          // ??? (послвет open protocol upgrade)
  "RestoreOptions": { ..., "PersistentBootArgs": ..., },
  "PersistentBootArgs": …,
  опции:  GreymatterDevelopment=true → DataOnlyOverlayRootsToInstall += "<bundle>/GreyMatter" }
SetBootPartition=0 → RestoreBootArgs урезается от "rd=..." (_AMRestoreCreateBootArgsByRemovingArg)
DevicePasscodeData удаляется из options; BasebandUpdaterOutputPath очищается
устройству шлёт RESTORED🕁️ через _ramrod_send_message на fd из dev+0x78
получатель: массив входящих сокет-сообщений, очередь «restore»/«async-restore»/«socket»;
  внутренний disconnect → MsgType=«___Internal_DeviceDisconnect», результат →
  «___Internal_RestoreResult»
```
Сообщение от устройства содержит `MsgType`; хост-router:
`_handleDataRequestMessage(0xd2b31)` (синхронно) и `_handleAsyncDataRequestMessage(0xcb987)`.
**DataType-словарь 0xd2b31** (запрошены устройством, host отвечает файлом/данными):
```
SystemImageData            → _handleImageDataRequest → ASR-сервер (§2)
HostSystemTime             → host time (UNIX sec) → SetHostTimeOnDevice
SystemImageRootHash        → SystemImageRootHashFile (файл из build/dmg mintscp)
SystemImageCanonicalMetadata → SystemImageCanonicalMetadataFile
DeviceTree                 → DeviceTreeFile (legacy-вариант НЕ поддержан: лог)
KernelCache (KernelCacheType) → KernelCacheFile; «sending kernelcache: %@»
DiagData (Diag to Install) → «DiagData» если есть в buildManifest
NORImageData               → "%@%call_flash%call_flash.%@.%@", NORImagePath/NORImageType,
                             firmware manifest (sep-firmware, sep-patches)
BasebandBootData/BasebandStackData/UpdaterOutputData (BasebandFirmwareManifest…):
     GoldCertID, nonce, fusing profiles; updater output → "%s/updater_output-%s"
BootabilityBundle; SourceBootObject V2..V5 (+BuildIdentity overrides Digest);
FUDData/FUDImageData/FUDImageList (PIC «FUD» fw list);
AuthInstallTrustedCACert (AMAuthInstallTrustedCACertFile);
EANData; FDRTrustData/FDRMemoryCommit (FDRMemoryStorePath); SSOServiceTicket
(AMAuthInstallSsoCreateServiceTicketWithAppId); StockholmPostflight (script file);
при чём: GrapeFWData, NANDFWData, PortMicroFW, PortUSB-CFW, PeppyFW, NitrogenFW,
RamdiskFWData, OpalFWData, S3EOverride, USBCOverride, custom root/overlay
(OverlayRootsToInstall, UpdateVolumeOverlayRoots..., DataOnlyOverlayRootsToInstall).
неизвестное → «Unexpected/unsupported command '>%@' sent by device.  Upgrade your restore tools?»
```
Async-вариант 0xcb987: `DataType` ∈ {SystemImageData, RecoveryOSASRImage,
BasebandData, StreamedImageDecryptionKey, URLAsset} — dispatch_async на «async»-queue.
Root-ticket/RootTicketRequest, Provisioning, RestoreAttestation, BasebandUpdateStatus,
FDRSubmit, FinalizeData — по строкам логов («Failed to handle ... message»).

Опции обработчика: `_restore_get_supported_*` (0xf3d00/f3de1/f4018/f40ba) — словари
18-22 сообщений/дататипов с bool-флагами (местности sdk), уходят в Restored-options при старте.

## 4. AuthInstall/TSS — обзор (персонализация+тикеты)

Гигантский блок `_AMAuthInstall*` в MobileDevice (TSS/IM4M-персонализация):
```
сервер: https://gs.apple.com               (TSS; строка в корпусе)
CA-проверка: https://www.apple.com/appleca/0
элем кинты: ApECID, ApNonce, ApBoardID, ApSecurityDomain, ApProductionMode/Mode,
   UIDMode, IBFL(production/security fusing bits), SepNonce
выход: personalized bundle (PersonalizedRestoreBundlePath) с im4m/im4p
   (Core: _AMRAuthInstallCopyVariant, CopyPersonalizedBundleURL, PersonalizeBundle,
   CopyBuildIdentity, BundleGetApTicketComponentPath … )
BASEBAND: AMAuthInstallBaseband{SetParametersWithUpdaterOutput,HandleUpdaterStatus},
   Amber/NewBaseband (ICE3/MAV/N41/Fusing/Sso/Provisioning/HttpRequestSendSync) —
   почти 300 функций; детальный разбор — v2.
```
EAN = «EANData» (EAN-DRAM init данные) и «RestoreANS» (Apple NAND Storage image) —
как отдельные компоненты send-очерёдности RecoveryMode.

## 5. Что это даёт libirm

1. **Мы управляем full restore = огромный стек.** Для E09 цели Аудита:
   - DFU SendImage — реализуемо (libusb control: DFU state machine, blockSize, ZLP) — **v3**;
   - RecoveryMode через USB bulk (bin-пайпы, iboot команды) — **средне**;
   - RestoreMode/ASR — самый сложный (TSS персонализация «с нуля» невозможна легально:
     подпись Apple + gs.apple.com).
2. Реалистичная C-стратегия: «backup/restore данных» через mobilebackup2 (E08) покрывает
   пользовательские сценарии; full-restore прошивки для libirm — только диагностика
   (прогресс/логи), без персонализации. Формат подписи TSS — законодательно Apple.
3. Архитектурно нужен ли нам restore? Спорно: «Restore from backup» — уже
   реализуемо (E08 v2); «факт прошивки» — вне нашего проекта.

## 6. Что осталось для v2

- порядок и содержимое Progress-стейджей (байты 3/4/7/9/45 — см растолкование
  из _handle*); список Progress-строк (cf_*) — пока Выход «1..94 - ASR» уже есть.
- ramrod `_receive_socket_message` (вход [BE32][XML]) — чуть глубже.
- Protocol-upgrade message формат (RESTORED_TYPE vs RAMROD_TYPE).
- AMAuthInstall/TSS деталь (v2, отдельной докой E11?, если появится нужда).
- «RestoreBootArgs» точный формат from options: cf_rd_md0nand_enable_reformat_1_progress_restore
  (observed literal в DefaultOptions).

## 7. Источники

- `analysis/mobiledevice-decomp/functions/`: 0xe2231 (DefaultOptions), 0xebd73 (DFU),
  0xf4156 (DFUDataDownload), 0xef304 (Recovery), 0xf1b07 (ControlPacket), 0xf003b (MaxFileTransfer),
  0xf0495/f0637/f11df (ticket/iBoot/memboot), 0xcd858/0xcd875 (RestoreMode),
  0xd12ad (_performRestore), 0xd2b31 (DataRequest sync), 0xcb987 (AsyncDataRequest),
  0xd65f0 (ImageDataRequest), 0xcb188/0x19dcaa/0x19dd8e/0xcf62a (ASR server),
  0xcb316/0xcaa4e/0xcb2ce (ASR result/timeout/close), 0xc91f0/0xe87fb/0xe8336/0xe85b8 (ramrod),
  0xf3d00.. (restored_get_supported_*).
- Бинарник MobileDevice — строки (gs.apple.com, dfu-шаблоны, iboot-команды, ramrod-strings).
- `_AMRestorableDevice*` — полный список экспортов из decompile-index.json.
