# E10 (v1) — Транскодинг аудио при синке (AMPDevicesAgent)

Корпуса: `analysis/ampdevices-decomp/` (`functions/`, файл `<entry>_<name>.c`),
strings `analysis/ampdevices-prep/AMPDevicesAgent.strings.txt`.
Транскодер живёт **в AMPDevicesAgent/Dulcimer-слое** — НЕ на устройстве и
не в медиа-домене: решение «копировать vs транскодить» принимает хост до
отправки файла по sync-каналу (E07).

## 1. Модель решения (TrackData-слой)

Флаги add-file в TrackData-сообщениях (strings-контекст + assert в 100483d00):
```
kTrackDataAddFileTranscodeFile | kTrackDataAddFileUnzipFile | kTrackDataAddFileZipFile
params.u.canAcceptLocation.addFileOptions;
fileItem->copyFileOptions & kCopyFileItemTranscodeFile
fileItem->u.track.transcodeStatus == kIOPendingStatus
```
Статусы canAccept (таблица 0x43=67 записей enum → sCanAcceptStatusStrings, 10035f712):
```
NoProblem, RequiresTranscoding, RequiresFiltering, RequiresUnzipping,
PartialPlaylist, FileNotFound, UnsupportedTrackType, UnsupportedFileType(NoWarning),
UnsupportedAudioFormat/VideoFormat, UnsupportedSampleRate, UnsupportedBitRate,
VariableBitRateNotSupported, NotAuthorized/AuthorizedButMissingKey (Audible, DRM),
AppleUserLimitExceeded …
```
→ Хост-модель делает «аудит трека»: формат/сэмплрейт/битрейт/VBR + тип защиты;
если RequiresTranscoding → copyFileOptions gets TranscodeFile + enc-prefs из
pref («Transcode 128/192/256», setTranscodeSongs/setTranscodeBitRate — UI-опции).

Кодеки, декларируемые хостом (strings-аккаунты `*AudioCodecInfo`):
```
AAC(enh?), AppleLossless, MP3 (mp3AudioCodecInfo), WAV (waveAudioCodecInfo),
AIFF, FLAC, USAC, EnhancedAC3,
видео: H.264 (LC/SD/HD), MPEG4, HEVC; losslessAudioCodecInfo
```
(в iPhone-контексте «RequiresTranscoding» в основном получает FLAC → AAC/ALAC,
неподдерживаемый AAC-профиль HE/USAC на старых девайсах, mp3 с защитой и т.д.)

## 2. Механика транскода: CoreAudio AudioCodec (не afconvert: прямاپодобный API)

### 2.1 Классы JR‑энкодеров
C++-синглтоны агентского фреймворка (методы с магиями):
```
kAACEncoderMagic = 0x61616365 ('aace')       // 1002cd30e/1002cd474/1002cd8e2: кто есть
клacc с mMagic==kAACEncoderPrefsVersion  (prefs.version check)
kAACEncoder bug in AAC-HE: magic 0x61616368 ('aach')  (10021d24a 'init')
kJRAudioConverterMagic (упаковка конвертера). 'aacp' variants etc.
```
Фабрика-диспетчер (10021e1f7) — switch по берегинe ключа:
```
0x41707052 ('AppR') / 0x636c7220 ('clr ') / 0x70727174 ('prqt') → callback refs (напр. 10021e1f7)
0x696e6974 ('init') → FUN_1001c34b7(0x13890001/2) init-флаги → создаёт AACEncoder c magic
   'aace'; приоритет 0x90000000a.
```
Имя настройки: «iTunesPlus» копируется в поле компрессора (исторически = 256 kbps VBR-high).

### 2.2 Параметрика конвертера (AudioConverter-путь 1003dc014)
```
PCM-magic 0x6c70636c ('lpcm') проверяется в both format-структурах (32 б = AudioFormatInfo)
memcmp форматов 0x28 → если равны, конвертер не создаётся (pass-through)
AudioConverterNew(in[ASBD], out[ASBD], &conv)
параметры VBR: kAudioConverterCodecQuality (0x646d6763 'dmgc') = quality prop
идентичность ctx через GetProperty 0x61636964 ('acid') = ASBD-сверка
(«/dBGecko» нет; формат mSampleRate double, channels/bitrate/我们 bitsFromChannelBitmap)
```

### 2.3 AAC-энкодер по AudioCodec (лес вызовов)
Create/init: `_AudioCodecInitialize(codec, srcASBD, dstASBD, magic?, 0)` (1002cddb0)
```
AudioComponentInstanceNew(componentRef(+0x2f8=создание aace-клacc before) ...)
AudioCodecSetProperty:
   0x61636266 'acbf'  = «format uses VBR» (bitmap flag) — активирует прошивку 2
   0x73726371 'srcq'  = source quality?
   0x62726174 'brat'  = bitrate (bps)
   0x7067636d 'pgcm'  = equal что битрейт engine
   0x636f7372 'cosr'  = «configuration Opaque» (8/32 byte дуга данных)
   0x69737261 'isra'  = info on sample rates list
   0x63697372 'cisr'  = set current sample rate
   0x6f666d74 'ofmt'  = output format query
`'isra'`-свойство подтверждает «список доступных sample rates» (readonly): массив double,
энкодер подбирает ближайший ≤ target (1002cddb0 0x1002ce32f-блок).
данные в BytesPerFrame=("PCM→AAC" ASBD covered) — всё richly от TES.
AudioCodecAppendInputData(codec, inBytes, &outBytesCount, &inPackets, packetDesc)
AudioCodecProduceOutputPackets(codec, outBytes, &outBytesCount, &outPackets,
                               packetDesc, &codecStatus)
codecStatus: 1=needsMoreInput?, 2=kAudioCodecProduceOutputPacketSuccess,
             4=…? (assert строка: «codecStatus == kAudioCodecProduceOutputPacketSuccess
             || …NeedsMoreInputData»)
```
AAC→stream chunking: input chunks 0x400 (1024 б) (loop with
`0xfa000/%(param+0x28)` = sampleRate «frame counter» — 0x fa000 = 1024000???
  0xFA000 = 1024000; делится на BYTES тут * — «AACSeconds» прогресс «on the fly».
```
Progress расчёт: по числу секунд закодированных (val += 0xFA000/bytesPerSec …)
описывает «AAC progress» по фреймам encoded audio.
```
Комментарии: Fun1002cd474 получает 0x400acidadа/JRAN logger helper «AAC 0x400妈妈的»

### 2.4 Поток-уровень (где Invoke)
Внутри DenActor-слоя: convert-table с инвокацией «AAC add-file»:
```
100404128 — «convert pipeline»: FUN_100108310(keychain?) → перед входом
   ReceiveAACEnc / FUN_10015b1df(+0x2c20 args) = локальный файл reading loop
100418746 — метод transcodeSongs/transcodeBitRate ObjC-property
   (UI/Controller мост: задаёт prefs.)
1003382a2/10060c116/10040503d/100407ed7 — «dispatch layers» (конверт-таблицы).
```
Пайплайн (v1 карта):
```
track file (m4a/mp3/flac/wav) → canAccept-аудит (codec, br, sr, VBR, DRM)
  → если без транскода: добавляем в TrackData as is (kTrackDataAddFileZeroAreOnlyFlags)
  → если транскод: MP3/LAME-tag измерения? (FLAC→PCM→AAC; flag err «LAME» header ready)
  PCM interpolator → AACEncoder(ASBD) → bytes → m4a ДБ/теги... copy to staging
  → стандартный track-send путь (E07 track-cycle).
```
«Lame»-строки 100297013: разбор заголовков mp3 — VBR header parse, `strncmp(buf,"LAME",4)`
— обнаружение LAME-encoder-тега для расчёта длительности VBR (просто «аудит»).

## 3. Выводы для libirm

1. Транскодинг на хосте НУЖЕН только если пользователь видит «RequiresTranscoding»
   / хочет «Transcode 128». Реализация на C (мал.): PCM resampler + AAC-encoder
   → можно использовать **связку libmp3lame (собственный C)** или
   **FFmpeg AAC encoder (aacenc)** как компиляемую C-библиотеку — AppleCoreAudio API нам
   недоступен на Linux/Windows. Это согласуется с «полной OS-независимостью»:
   кодек = наша C-библиотека, интерфейс = «JR»-подобный (ASBD-lite struct).
2. Умная карта: `irm sync --transcode 192` → подсчёт целевых битов (128/192/256),
   where bitrates matching «Transcode 128/192/256» (UI values) — и ILLEGAL ~
   «added to info-pacts»: 0x1F400=128000, 0x3E800=256000, **0x2EE00 = 192000
   джает бит». Найденные 0x1f400/0x3e800 — bitrates 128k/256k (mPrefs Москва).
3. Полная «аудит модель» (codecInfo: mp3AudioCodecInfo/waveAudioCodecInfo/…)
   — Строки repo таблицы: при написании C-tool можно просто пересчитать supported
   list по известному «.isTrueValidFormats» (AAC-HE не для всех, FLAC аутент это m4a).
4. Синк-поток использует фильтры «RequiresUnzipping» (zip) и «RequiresFiltering»
   (DRM-декодер startup? FastLink? — v2 вопрос) — отслеживаемые флаги уже известны.

## 4. Что осталось (v2)

- Точная цепочка: где ReadFile → decode → encode (какая таблица форматов
  читателей — «losslessAudioCodecInfo» FL/ALAC decode bits — вероятно через
  CoreAudio AudioFileType…)/ поле `param_5` layout'а ASBD-структур в Fun 1003dc014.
- Деградация kAudioCodecProduceOutputPacketNeedsMoreInputData,.properties.
- Проверка точных чисел:
    0x646d6763 'dmgc' kAudioConverterCodecQuality, 0x61636964 'acid' ASBD
    (названия свойств, как их называет CoreAudio documentation).
    0x1f400 = 128000 «Transcode 128» + 0x3e800=256000 «Transcode 256» — сверить с UI.

## 5. Источники

- FUN_100404128 (convert pipeline), FUN_100418746 (transcodeSongs/BitRate property);
- AACEncoder: 1002cd30e / 1002cd474 / 1002cd8e2 / 1002cddb0 / 10021d24a ('aach' init) /
  10021e1f7 (фабрика); AudioConverter: 1003dc014 (+ 10015e46f lpcm сверка).
- MP3/LAME-хедер разбор: 100297013, 100298a64.
- strings: «AACEncoder», «transcodeBitRate», «Transcode 128/192/256»,
  «RequiresTranscoding» block, «canAcceptStatus», «kAACEncoderMagic»,
  «kloudLoadTrackOption_TranscodeToAAC» (kiCloudLoadTrackOption_TranscodeToAAC), «CoreAudioNotificationThread».
