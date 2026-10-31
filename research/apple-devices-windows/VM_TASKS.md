# Задачи для Windows VM — исследование официального «Устройства Apple»

Ветка: `research-apple-devices-windows`. Папка чистых артефактов:
`research/apple-devices-windows/traces/vm1/` (и vm2/… для следующих прогонов) —
её содержимое в git НЕ идёт (gitignored). Скрипты — `tools/` (в git).

> Правило: сырые дампы (pcapng, .pml, .csv, .bin, .jsonl) — только в traces/.

## 0. Подготовка (один раз)

0.1. Проверь, что в VM доступны: установленное приложение «Устройства Apple»,
служба AppleMobileDeviceService в состоянии RUNNING (`Get-Service AppleMobileDeviceService`),
Python в PATH, `python -m pip install frida-tools` (если ещё не), Wireshark, ProcMon.

0.2. Дополнительно поставь в VM пакет для AFC-снимков (если уговорим — иначе вернём
девайс на host, там снимок сделает агент):

```powershell
python -m pip install pymobiledevice3
```

0.3. Создай папки и скопируй туда `tools/` (из ветки; любым удобным путём VMShare):

```powershell
New-Item -ItemType Directory -Force C:\tmp\apdl, C:\tmp\frida_capture | Out-Null
```

0.4. Проброс iPhone в VM. Пара/trust — на устройстве «Доверять» (допустимо; для host
не потеряется — пары у lockdown разные). Если потребуется — повтори «Доверять».

> ВАЖНО: ПРЕДОСТАВЬ ведёт ДО проброса в VM пред-снимок с host (S0) — агент снимет
> `/iTunes_Control` + `/Airlock` поверх AFC, пока девайс ещё смотрит на Linux.

## 1. Сценарий S1: обычный импорт, сети ВКЛ, полный сбор

### 1.1 Базовая лента (шум Apple-клиента, не импорт)
Запусти Wireshark, выбери активный интерфейс VM. Фильтр capture НЕ ставь.
Start → жди 5 минут (ничего не делай в VM!) → Stop → сохрани в `net_idle.pcapng`.

### 1.2 Окно импорта
Опять Start (новая capture). Файл будет `net_import.pcapng`. Во время шагов 1.3–1.7
capture вести не выключи.

### 1.3 ProcMon
Инициализация: Ctrl+E — стоп захвата, Ctrl+X — очистить лог, Ctrl+E — после этого
снова включить захваченный трафик. Инвентарь фильтров (Фильтр → Обычный/Include):
 - Include: `Process Name` is `AppleMobileDeviceService.exe`
 - Include: `Process Name` is `AppleDevices.exe` (имя проверить в vm_state.log)
 - (если настоящие имена другие — Replace по факту, пишем всё умышленное в notes.md)

### 1.4 Frida-драйвер (администратор)
```powershell
cd C:\tmp\apdl
$env:FRIDA_DIR="C:\tmp\frida_capture"
$env:NTPipe="0"   # включить NtWriteFile/NtReadFile можно позже, если TCP-сокеты не покажут ATC-канал
python run_hooks.py
```
Драйвер attach'ится ко всем процессам `apple|itunes|mobile|amdevice`, пишет в
`C:\tmp\frida_capture\*.jsonl` (события) и `*.bin` (полные TCP-тела) в формате
`[dir 1][len BE4][payload]`. Оставь консоль открытой.

### 1.5 vm_state до-импорта
```powershell
powershell -ExecutionPolicy Bypass -File C:\tmp\apdl\vm_state.ps1
```

### 1.6 Импорт ровно ОДНОГО трека
В «Устройствах Apple»: выбери любой M4A/MP3, которого раньше не было, импортируй,
дождись завершения (появления трека в списке). Запиши в `notes.md` время начала/конца.

### 1.7 Останов
- ProcMon: Ctrl+E → File → Save… → All Events → CSV (+ сохранённый .pml — исключение; 
  лучше CSV).
- run_hooks.py: Ctrl+C.
- Wireshark: Stop → сохранить как `net_import.pcapng`.
- vm_state.ps1 после импорта (после файл).
- Список DLL (судьба по фридам/PM): `python modules_of.py` → вывод в `modules.log`.

### 1.8 Снимки состояния устройства
Внутри VM (pymobiledevice3): `python vm_afc_pull.py after`.
Если не получилось USB — верни девайс на host, агент снимет как S0, только в `traces/dev_after/`.

## 2. Сценарий S2: импорт при выключенной сети в VM

2.1. Отключи сетевой адаптер VM (в VM Manager'е отвяжи сет, в VM не отключай соотношения).
2.2. ProcMon: чистый запуск Ctrl+X → Ctrl+E; stay running через глобальные отключ.
2.3. run_hooks.py как выше (ок Changemetrics — все процессы как есть).
2.4. vm_state.ps1 (файл `_offline`).
2.5. Импорт ЕЩЁ ОДНОГО нового MP3. Запиши: прошёл/нет, какое окно ошибки, как долго.
2.6. Остан: как в 1.7 (ProcMon save `procmon_offline.csv`, vm_afc_pull.py after → `dev_after_offline/`).
2.7. Работоспособность: вернуть сетевое подключение VM.

> Заметь: если импорт прошёл при выклченной сети — H1 подтверждена сразу ЖЛ.

## 3. Сценарий S3: (отложено) сравнение со старым iTunes

Сравнение с iTunes 12, как исторические наблюдения. Делать дополнительно, если
успеем поставить и настроить. Не приоритет.

## 4. Сценарий S5: (отложено) перехват 3uTools на Windows

Только по отдельному решению. Ограничение: не использовать ресурсы замороженной ветки
`research/3utools/` — тут свежими глазами, нашими Windows-тулзами.

## 5. Артефакты, что нужно вернуть

```
traces/vm1/net_idle.pcapng
traces/vm1/net_import.pcapng
traces/vm1/modules.log            (вывод modules_of.py)
traces/vm1/frida/                 (весь C:\tmp\frida_capture)
traces/vm1/vm_state_*.log
traces/vm1/procmon_import.csv / procmon_import.pml
traces/vm1/procmon_offline.csv / procmon_offline.pml
traces/vm1/dev_after_vm/          (если изнутри VM получилось)
traces/vm1/notes.md               (время импорта, реакции, ошибки)
```

После S0 — если виртые внутри VM не удались: вернуть девайс на host и сообщить
agent'у (он снимет `traces/dev_after/` поверх AFC — read-only, то же правило).

## 6. Если что-то не заводится

- run_hooks.py отказывается attach'ить SYSTEM-процесс (`AppleMobileDeviceService.exe`):
  запусти консоль «От имени администратора». Если совсем нет — присылай хотя бы обычные
  процессы; немного тудой — NTPipe=1.
- Ptrcоброс заблокирован — vm_afc_pull.py недоступен: возвращай девайс на host.
- Wireshark пишет тайминг не в UTC — неважно, ориентир: notes.md время.
