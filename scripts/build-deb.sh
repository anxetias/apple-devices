#!/usr/bin/env bash
# Сборка .deb-пакета apple-devices.
#
# План: компиляция в release → установка в staging-каталог → вычисление
# зависимостей от разделяемых библиотек (dpkg-shlibdeps) → DEBIAN/control
# и postinst → dpkg-deb --build.
#
# Требования: meson, ninja, dpkg-dev, gcc. Запускать из корня проекта.
set -euo pipefail

cd "$(dirname "$0")/.."

# Версия берём из meson.build — единственное место, где она определяется
VERSION=$(grep -oP "^\\s*version:\\s*'\\K[^']+" meson.build | head -1)
if [ -z "$VERSION" ]; then
  echo "ошибка: не удалось прочитать версию из meson.build" >&2
  exit 1
fi
DEB_VERSION="${VERSION}-1"
ARCH=$(dpkg --print-architecture)
BUILD=build-deb
STAGE=$(mktemp -d /tmp/apple-devices-deb.XXXXXX)
OUT="apple-devices_${DEB_VERSION}_${ARCH}.deb"

echo "==> версия ${DEB_VERSION}, архитектура ${ARCH}"

# 1. Компиляция (release, префикс /usr)
if [ ! -f "$BUILD/build.ninja" ]; then
  meson setup "$BUILD" --prefix=/usr --buildtype=release
else
  meson configure "$BUILD" --prefix=/usr >/dev/null
fi
meson compile -C "$BUILD"

# 2. Установка в staging
meson install -C "$BUILD" --destdir "$STAGE" >/dev/null
echo "==> установлено в staging:"
(cd "$STAGE" && find . -type f | sort | sed 's/^/     /')

BIN="$STAGE/usr/bin/apple-devices"
if [ ! -x "$BIN" ]; then
  echo "ошибка: бинарник не найден в staging" >&2
  exit 1
fi

# 3. Зависимости от разделяемых библиотек — честные, по ELF-зависимостям.
# dpkg-shlibdeps требует контекст исходного пакета (ищет debian/control
# в текущем каталоге), поэтому даём ему минимальный временный
TMPCTX=$(mktemp -d)
mkdir -p "$TMPCTX/debian"
cat > "$TMPCTX/debian/control" <<EOF
Source: apple-devices
Section: utils
Priority: optional
Maintainer: Saitexna <anxetias@users.noreply.github.com>
Standards-Version: 4.6.0

Package: apple-devices
Architecture: any
Depends: \${shlibs:Depends}, \${misc:Depends}
Description: Manage Apple devices over USB - GNOME application
 Transient control file used only by dpkg-shlibdeps during packaging.
EOF
echo "==> dpkg-shlibdeps…"
SHLIBS=$( (cd "$TMPCTX" && dpkg-shlibdeps -O "$BIN" 2>/dev/null) | sed -n 's/^shlibs:Depends=//p' | head -1)
rm -rf "$TMPCTX"
[ -n "$SHLIBS" ] || SHLIBS="libc6 (>= 2.34)"
# usbmuxd нужен для связи с устройством, но не тянется автоматически
DEPENDS="${SHLIBS}, usbmuxd"
echo "==> Depends: $DEPENDS"

# 4. Метаданные пакета
mkdir -p "$STAGE/DEBIAN"
cat > "$STAGE/DEBIAN/control" <<EOF
Package: apple-devices
Version: ${DEB_VERSION}
Section: utils
Priority: optional
Architecture: ${ARCH}
Maintainer: Saitexna <anxetias@users.noreply.github.com>
Homepage: https://github.com/anxetias/apple-devices
Depends: ${DEPENDS}
Description: Manage Apple devices over USB - GNOME application
 Apple Devices is a GTK4/libadwaita application for managing Apple
 devices (iPhone, iPad, iPod touch) connected over USB, built on the
 open libimobiledevice stack. It browses the on-device music library,
 imports tracks with embedded cover art (covers appear in the device
 Music app immediately), exports and deletes tracks, and shows device
 information. A database backup is taken before every write.
EOF

cat > "$STAGE/DEBIAN/postinst" <<'EOF'
#!/bin/sh
# Обновить кэши desktop-файлов и иконок (мягко: утилита может отсутствовать)
set -e
if command -v update-desktop-database >/dev/null 2>&1; then
  update-desktop-database -q /usr/share/applications || true
fi
if command -v gtk-update-icon-cache >/dev/null 2>&1; then
  gtk-update-icon-cache -q -f /usr/share/icons/hicolor || true
fi
exit 0
EOF
chmod 755 "$STAGE/DEBIAN/postinst"

# 5. Сборка пакета (root-owner-group: файлы в пакете принадлежат root,
#    даже если собираем без sudo)
echo "==> dpkg-deb --build…"
dpkg-deb --build --root-owner-group "$STAGE" "$OUT"
rm -rf "$STAGE"

echo "==> готово: $OUT"
dpkg-deb --info "$OUT" | head -12
