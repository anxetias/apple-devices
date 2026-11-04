# E07 (v1) — AMPDevicesAgent: оркестрация lock_sync (Dulcimer-синк)

Корпус: `analysis/ampdevices-decomp/functions/` (21 180 функций, Ghidra 12.1.4 headless +
`dump_decomp.java`; файлы `<entry>_<имя>.c`, entry БЕЗ 0x-префикса; index
`analysis/ampdevices-decomp/decompile-index.json`). Все адреса ниже — из этого корпуса
(псевдокод; ObjC-методы остались FUN_*). Это современный (macOS 13–15) движок медиа-синка,
который и Finder, и Music используют через AMPDevices.framework
(`Support/AMPDevicesAgent` 18 МБ universal; рядом `Support/AMPDeviceDiscoveryAgent`,
XPC-хелпер UI `XPCServices/com.apple.amp.devicesui.xpc`).

Объект-контекст синка — «Dulcimer» handlerData: магия поля = `0x64756c63` («dulc»),
варианта-assertion: `DulcimerHandlerDataIsValid(handlerData)` /
`handlerData->magic == kDulcimerHandlerDataMagic` (видно в 1004ed4f6).
Внутренние поля handlerData (используемые в lock-пути):
```
+0x15204  int  reentrancy counter (sync-lock «глубина»)
+0x14cc0  long iTunesSyncLockFileRefNum         (JRFile ref, 0 = нет)
+0x14cc8  int  «залочен/ожидание» флаг (0/1)
+0x15210  notificationProxyConnection (AMDServiceConnection к com.apple.mobile.notification_proxy)
+0x6b40   объект «файл-сервиса» (коннект на имя файла;开封 по ссылке)
+0x7168   некий запрет (-0x3a2) …
+0x3a2    char флаг запрета
```

## 1. Канал уведомлений: notification_proxy (точный формат)

`_AMDSecurePostNotification` — реализован в MobileDevice.framework (`0x155afc`,
corpus analysis/mobiledevice-decomp):
```
dict = {}
dict["Command"]  = "PostNotification"
dict["Name"]     = <имя нотификации>
dict["UserInfo"] = <dict>  (только если передано, param_3 != NULL)
AMDServiceConnectionSendMessage(conn, dict, 100 /*kCFPropertyListBinaryFormat_v1_0*/)
ошибка нет коннекта → 0xe8000003, ошибка send → 0xe800002d (kAMDSendMessageError)
```
`_AMDServiceConnectionSendMessage` (MobileDevice `0x10e723`):
```
CFPropertyListWrite(dict, format=100 → bplist00) в буфер
отправка: [BE32 длина payload] + payload   (прямо через AMDServiceConnectionSend)
```
⇒ **формат такой же, как lockdown-checkin (E02 §2): [BE32][bplist00]**. Слой единый —
бplist-фрейминг на сервисных соединениях lockdown/notification_proxy,
XML-фрейминг только на DeviceLink-сервисах (E06).

Имена нотификаций (AMPDevicesAgent):
```
com.apple.itunes-mobdev.syncWillStart
com.apple.itunes-mobdev.syncLockRequest
com.apple.itunes-mobdev.syncDidStart
com.apple.itunes-mobdev.syncFailedToStart
com.apple.itunes-mobdev.syncDidFinish
```

## 2. ГЛОБАЛЬНЫЙ ЛОК СИНКА МАКА: awards-логика в Dulcimer — возьмём локомацию через JR/PCF

`FUN_1004ed4f6` — «sync lock take» (вход с reentrancy):
```
1. assert DulcimerHandlerDataIsValid; assert magic==dulc
2. reenter = ++handlerData[+0x15204]; если reenter не с нуля — «уже держим» → end waiting log, выход 0
3. handlerData[+0x15208] = clock (FUN_1001ebd46)
4. fun_1004dccf5(handlerData, "")  // некое сообщение (лог "err == (%d)" assert)
5. если (handlerData[+0x7168]==0 || handlerData[+0x3a2]==0) → выход «не заходим в sync-ветку»
6. POST com.apple.itunes-mobdev.syncWillStart      (через +0x15210 notificationProxyConnection)
7. JRFile open("com.apple.itunes.lock_sync" через объект +0x6b40):
      FUN_1001888ba(conn,name,&refnum,0)   // open-or-check (если существует → refnum валиден)
      FUN_100189206(conn,name,&refnum)     // create-or-open-for-update (когда файла нет)
      → успех: refnum лежит в handlerData[+0x14cc0] (iTunesSyncLockFileRefNum)
   деталь XPC-слоя: FUN_10017cc65(&req, 'data', 2(mode), &refnum) — конструирует запрос
   с магией 'fref' (0x66726566), объект-коннект имеет свою магию 0x41464350 ('PCFA')
   или 0x504f5358 ('XSOP'); вызовы через «vtable»+0x130 (lock) / +0x110 (close);
   то есть открытия/блокировки идут через внутренний PCF-файл-сервис агента
   (не прямые flock() — абстракция «JRFile»).
8. duelock: FUN_100188255(refnum, 1)          // lock-excl
      код -0xCA2 = «занято кем-то другим» → в цикле до дедлайна (clock + DAT_10070d3a0)
      постить com.apple.itunes-mobdev.syncLockRequest перед каждой попыткой
      («sync> timed out waiting … lock» при неудаче)
9. успех → POST com.apple.itunes-mobdev.syncDidStart
10. создать "com.apple.itunes.syncing" файл: open→ нет → создать (FUN_100189206)
    («sync> creating com.apple.itunes.syncing file»)
11. на любом фейле ветки 7–10 → POST com.apple.itunes-mobdev.syncFailedToStart
```

`FUN_1004ee22c` — «sync lock release» (симметрия release):
```
1. если --handlerData[+0x15204] != 0 → вложенный sync ещё идёт, выход
2. FUN_1004e7a5c(handlerData)                       // телеметрия/финализация
3. удалить "com.apple.itunes.syncing":
      FUN_1001888ba(conn,"com.apple.itunes.syncing",&ref,0); ok==0 → FUN_100182d4d(&ref) = delete
4. unlock: FUN_1001882eb(handlerData[+0x14cc0])
5. close:  FUN_10017cdfb(handlerData[+0x14cc0]); handlerData[+0x14cc0] = 0
6. POST com.apple.itunes-mobdev.syncDidFinish
```

JR/PCF-файл helpers (сводные адреса ключевых обёрток):
```
FUN_1001888ba(conn,name,&refnum,0) − открыть/подготовить
FUN_100189206(conn,name,&refnum)   − создать/открыть для записи
FUN_100188255(refnum,1)            − lock (excl)      [-0xCA2 = busy]
FUN_1001882eb(refnum)              − unlock
FUN_10017cdfb(refnum)              − close
FUN_100182d4d(&refnum)             − delete
FUN_10017cc65(&req,'data',2,&o)    − низкоуровневый запрос 'fref' в PCF-сервисе
```
Для libirm достаточно заменить этот слой на СВОЙ: обычный `open(O_CREAT|O_RDWR)` +
`flock(fd, LOCK_EX|LOCK_NB)` по loop, имя файла оставляем `com.apple.itunes.lock_sync`,
расположение — по observations live-теста (ранний iTunes-этап ставил его в
`~/Library/…` рядом с isHomeMusicLibrary; точная папка — см. Q ниже).

## 3. Что это даёт libirm (выводы)

1. Нота-pipeline (через наш же notification_proxy-ресурс):
   `syncWillStart → (syncLockRequest при занятости) → syncDidStart → [синк] → syncDidFinish`
   или `syncFailedToStart`. Формат: `[BE32][bplist00]` {Command:"PostNotification", Name, UserInfo?}.
2. Файл-флаги на маке: `<путь из live-теста>/com.apple.itunes.lock_sync` (flock) и
   `com.apple.itunes.syncing` (маркер активного синка; удаляется в конце).
3. Порядок обязан: BEFORE данные на устройство — post WillStart / lock; AFTER — перед unlock
   удалить .syncing, unlock, post DidFinish.
4. Transport-зависимость от AppleTime: время lock-дедлайна берётся из DAT_10070d3a0
   (значение в __DATA, ещё уточнить — вероятно 60–300 с).

## 4. sqlmusiclibrarypostprocesscommands (механика, v2)

Устройство отдаёт медиа-домен целиком: `AMDeviceCopyDictionaryValue(dev,
Domain:"com.apple.mobile.iTunes")` (в агенте: `FUN_1005bac96`,0 — assert
"AMDeviceCopyDictionaryValue failed for com.apple.mobile.iTunes domain"; рядом читаются
`FireWireGUID`, `SupportsAirTraffic` и `com.apple.mobile.iTunes.accessories`+`SQLiteDB`).

Внутри домена ожидается ключ `SQLMusicLibraryPostProcessCommands` = dict:
```
{
  "SQLCommands": <dict/list>,
  "Version": <ну-embre>,
  "UserVersionCommandSets": {
      "1":  {"Commands": [ "<SQL>", ... ]},
      "2":  {...}, ..., "26": {...}          // 1..0x1A
  }
}
```
Применение (`FUN_100598b00` — разбор при добавлении device; `FUN_1002ca316` — апдейтер):
```
for ver in 1..26:
    cmds = UserVersionCommandSets[str(ver)]["Commands"]   // CFArray строк
    CFArrayApplyFunction(cmds, cb=FUN_1002ca1de)
в cb: sql = CFString → sqlite3_exec(db_handle, sql, NULL, NULL, NULL)
    db_handle = *(ctx+8)->db [+0x68]
всё в BEGIN IMMEDIATE/DEFERRED/EXCLUSIVE TRANSACTION (FUN_1001d357f: BEGIN %s).
```
⇒ **SQL-команды берутся С УСТРОЙСТВА (plистом через lockdown GetValue) и исполняются на
базе, о которой держит handle агент** (медиа-библиотека: классика iTunes —
`iTunes Library.itlp/.itl`, песочницах `iTunesUMediaLibraryDeletes.plist`).
Точный таргет базы (локальная AMP-библиотека Music/Finder vs проксированная база девайса)
— цель живого теста/глубокого digg'а (см. Q); сам механизм «device диктует PostProcess SQL
и Version» отслежен.

## 5. Остаток синк-цикла (v2-зарисовки, 0x1004f5a78)

В рабочем цикле треков — логи:
```
"sync> file \"%s\", file size = %llu, extra size = %llu"
"sync> track \"%s\", file size = %llu, extra size = %llu"
"sync> deleting %{public}s playlist \"%{public}s\""
"sync> aborting operations due to kTrackDataAbortOperationsMessage"
```
и обёртки состояния: `ATHostConnectionSendFileProgress/ErrorWithParams/SendSyncFailed`
(1006cd682/1006cd67c/1006cd6ac — «Atlanta» host-протокол.sendFile прогресс по DL-каналу).

## 6. Открытые вопросы Q7 (offline-bibliothика) — что осталось

- Таргет PostProcess-базы (локальная AMP-library vs device-proxied sqlite) — live/глубже.
- Полный список доменов `com.apple.mobile.iTunes*`, читаемых агентом (GetValue Casa).
- paths: где пишет `iTunes_Control/…` и/или через AFC: `com.apple.afc`-путь live.

## 7. Следующие слои (в v2)

- `sync> file/track "%s", file size = %llu` и `sync> deleting %{public}s playlist "%{public}s"`
  на 0x1004f5a78 (это большой рабочий цикл треков/плейлистов) — будут поля отладки синка.
- `ATHostConnectionSendFile*` (1006cd67c/1006cd682/1006cd6ac) — протокол «файл/прогресс/файл-ошибка».
- `com.apple.mobile.iTunes.SQLMusicLibraryPostProcessCommands` — Тольк строки; функция
  их использования — цель следующего grep (SQLite PostProcess).
- Где лежит lock-файл (путь) — взять live-тест (drobo наблюдение lsof/strace-dtrace
  на запущенном Finder-синке).

## 8. Источники

- `analysis/ampdevices-decomp/decompile-index.json` + `functions/<entry>_<name>.c`;
  ключевые: 1004ed4f6 (take), 1004ee22c (release), 1004f5a78 (track-cycle), 1004dccf5,
  10017cc65/1001888ba/100189206/100188255/1001882eb/10017cdfb/100182d4d (JR/PCF).
- MobileDevice: `analysis/mobiledevice-decomp/functions/0x155afc.c` (AMDSecurePostNotification),
  `0x10e723.c` (AMDServiceConnectionSendMessage).
- Строки: `analysis/ampdevices-prep/AMPDevicesAgent.strings.txt`.
