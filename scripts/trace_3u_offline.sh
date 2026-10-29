#!/usr/bin/env bash
# Офлайн-эксперимент с 3uTools (шаг 5, реверс механизма импорта музыки).
#
# Цель: проверить, работает ли импорт музыки 3uTools БЕЗ доступа к серверу
# 3u. Ожидание (по разбору libidm.so): падение на get_step_2_data, atc-
# диалог не начинается, на устройство ничего не пишется. Если импорт
# пройдёт офлайн — у 3u есть локальный резерв, это меняет стратегию.
#
# Порядок действий пользователя:
#   1. Отключить сеть (Wi-Fi и/или кабель). Устройство ДОЛЖНО остаться
#      подключённым по USB — usbmuxd работает локально и сеть не требует.
#   2. Запустить скрипт:  bash scripts/trace_3u_offline.sh
#   3. Дождаться окна 3uTools и нажать импорт музыки (как обычно).
#   4. Закрыть 3uTools — скрипт завершится сам.
#   5. Сообщить агенту: «офлайн-прогон готов».
#
# Если на момент запуска сеть доступна, скрипт откажется работать
# (испортит эксперимент); обход — флаг --force.
#
# Дампы складываются в research/3utools/traces/run_<метка времени>/:
#   env.txt    — снимок сети на момент старта (контроль «офайности»);
#   trace.log  — трасса strace (сеть, read/write, openat, все процессы);
#   stdout.log — stdout/stderr самого 3uTools.
set -euo pipefail

FORCE=0
[ "${1:-}" = "--force" ] && FORCE=1

PROJ="$(cd "$(dirname "$0")/.." && pwd)"
DEST="$PROJ/research/3utools/traces"
APP_DIR=/opt/apps/com.3u.3utools
APP="$APP_DIR/3uTools"

[ -x "$APP" ] || { echo "ошибка: не найден $APP" >&2; exit 1; }

if pgrep -f "$APP_DIR" >/dev/null 2>&1; then
  echo "ошибка: 3uTools уже запущен — закройте его и повторите" >&2
  exit 1
fi

if ! pgrep -x usbmuxd >/dev/null 2>&1; then
  echo "предупреждение: usbmuxd не запущен — устройство не будет видно;" >&2
  echo "                 переподключите iPhone по USB и запустите заново" >&2
fi

STAMP=$(date +%Y%m%d_%H%M%S)
RUN_DIR="$DEST/run_$STAMP"
mkdir -p "$RUN_DIR"

# Снимок состояния сети на момент старта — контроль, что мы действительно офлайн
{
  echo "=== дата: $(date '+%F %T %Z')"
  echo "=== интерфейсы:"
  ip -brief addr 2>/dev/null || ifconfig -a
  echo "=== маршруты:"
  ip route 2>/dev/null
  echo "=== устройство:"
  idevice_id -l 2>&1 || true
  if timeout 3 bash -c 'echo > /dev/tcp/1.1.1.1/53' 2>/dev/null; then
    echo "=== NET: ONLINE (1.1.1.1:53 доступен)"
  else
    echo "=== NET: OFFLINE (1.1.1.1:53 недоступен)"
  fi
} > "$RUN_DIR/env.txt" 2>&1

if grep -q 'NET: ONLINE' "$RUN_DIR/env.txt" && [ "$FORCE" -ne 1 ]; then
  echo "ошибка: сеть доступна — эксперимент будет испорчен." >&2
  echo "        отключите сеть и запустите снова (или добавьте --force)." >&2
  cat "$RUN_DIR/env.txt" >&2
  exit 1
fi

echo "==> дампы: $RUN_DIR"
echo "==> запускаю 3uTools; когда закончитесь — просто закройте окно приложения"

# Запуск: повторяем окружение run.sh (см. /opt/apps/com.3u.3utools/run.sh)
# и вешаем strace на сам бинарник. Флаг -yy добавляет к дескрипторам пути
# сокетов и адреса конечных точек — по трассе видно, какой fd куда
# подключён (usbmuxd / lockdownd / AFC / сервер 3u).
set +e
(
  cd "$APP_DIR"
  export CUR_PATH="$APP_DIR"
  export QT_AUTO_SCREEN_SCALE_FACTOR=0
  export QT_XCB_GL_INTEGRATION=none
  export DISPLAY="${DISPLAY:-:0}"
  strace -f -tt -T -s 4096 -yy \
    -e trace=network,read,write,openat \
    -o "$RUN_DIR/trace.log" \
    ./3uTools >"$RUN_DIR/stdout.log" 2>&1
)
RC=$?
set -e

echo "==> 3uTools завершён (код $RC); содержимое каталога дампа:"
ls -la "$RUN_DIR"
echo "==> готово. Сообщите агенту: «офлайн-прогон готов»."
