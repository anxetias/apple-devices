# Снимок процессов/служб/DLL Apple в VM — до и после импорта.
# Запуск: powershell -ExecutionPolicy Bypass -File vm_state.ps1
$out = "C:\tmp\vm_state_" + (Get-Date -Format 'yyyyMMdd_HHmmss') + ".log"
"== processes (Apple|iTunes) ==" | Out-File $out
Get-Process | Where-Object { $_.ProcessName -match '(?i)apple|itunes' } |
  Select-Object Id, ProcessName, Path | Format-Table -AutoSize | Out-String -Width 260 |
  Out-File $out -Append

"== services (Apple) ==" | Out-File $out -Append
Get-Service | Where-Object { $_.Name -match '(?i)apple' } |
  Format-Table Name, DisplayName, Status -AutoSize | Out-String -Width 200 |
  Out-File $out -Append

"== loaded modules (Apple-процессы, попытка доступа) ==" | Out-File $out -Append
Get-Process | Where-Object { $_.ProcessName -match '(?i)apple|itunes' } | ForEach-Object {
  $p = $_
  try {
    $p.Modules | ForEach-Object { "$($p.ProcessName),$_" }
  } catch {
    "$($p.ProcessName),<access denied>"
  }
} | Sort-Object -Unique | Out-File $out -Append

"== Apple-related registry ==" | Out-File $out -Append
Get-ChildItem 'HKLM:\SOFTWARE\Apple Inc.' -ErrorAction SilentlyContinue |
  ForEach-Object { $_.Name } | Out-File $out -Append

"Готово: $out"
