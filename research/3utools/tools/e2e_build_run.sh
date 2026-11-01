#!/bin/sh
# Сборка+запуск headless E2E синх-пути 3u (после чистки /tmp):
# исходники лежат рядом. Демо-mp3: gst-launch + settags.c.
# usage: e2e_build_run.sh [адрес src-репо apple-devices]
SRC=${1:-/home/saitexna/apple-devices}
mkdir -p /tmp/opencode/s3u_ut
cd /tmp/opencode/s3u_ut || exit 2
gcc -w -O2 -o /tmp/opencode/s3u_e2e /tmp/opencode/s3u_e2e.c \
  -I"$SRC/src" -I"$SRC/vendor/sqlite" \
  "$SRC/src/sync3u.c" "$SRC/src/medialib.c" "$SRC/src/afcUtils.c" \
  "$SRC/vendor/sqlite/sqlite3.c" \
  $(pkg-config --cflags gtk4 libadwaita-1 glib-2.0 libplist-2.0 \
    libimobiledevice-1.0 openssl taglib_c) \
  $(pkg-config --libs glib-2.0 gobject-2.0 gio-2.0 libplist-2.0 \
    libimobiledevice-1.0 openssl taglib_c) || exit 3
echo "харнесс собран"
# Демо-mp3 (если нет): gst-launch-1.0 -q audiotestsrc num-buffers=1200 ! \
#   "audio/x-raw,rate=44100,channels=1" ! audioconvert ! \
#   lamemp3enc bitrate=128 target=bitrate ! filesink location=raw.mp3
# затем settags (компилируется из e2e_settags.c) на demo1/demo2.
