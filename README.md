[README на русском](README.ru.md)

# Apple Devices

A native GNOME application for managing Apple devices — iPhone, iPad, iPod
touch — over USB, built with **GTK4 / libadwaita** on top of the open
**libimobiledevice** stack.

> Manage your iPhone's music library from Linux — with covers, without
> reboots, and without fighting the device.

## Features

- **Device overview** — model, iOS version, serial number, battery level
  and a storage usage chart.
- **Music library** — browse the tracks stored on the device with live
  search and sorting (by name, artist, album, duration).
- **Import with cover art** — import audio files together with their
  embedded covers. Covers are written into the device's artwork store and
  appear in the built-in Music app **immediately** — no respring, no reboot.
- **Export and delete** — copy tracks back to the computer, remove them
  from the library.
- **Safety first** — a backup of the device media library database is taken
  **before every write** (`~/.local/share/apple-devices/backups/`).
- **USB hotplug** — connecting or unplugging a device updates the UI
  automatically, no refresh button needed.
- **Bilingual UI** — Russian and English, following the GNOME HIG:
  Adwaita styling, symbolic icons, responsive layouts.
- **Debug log** — every operation is logged at the bottom of the window.

Supported audio formats: MP3, AAC/M4A, FLAC, WAV, OGG, OPUS, AIFF.

## How it works

The app talks to the device through the services that iOS itself exposes
over USB (usbmuxd → lockdownd → AFC). Files are placed into
`/iTunes_Control`, and the device's media library database
(`MediaLibrary.sqlitedb`) is updated so tracks and artwork appear as if
they had always been there — the same approach used by well-known
third-party tools. Apple's closed MobileSync protocol is **not** used;
nothing is reverse-engineered beyond what the device openly serves.

Cover art follows the device's own artwork pipeline: each cover gets a
token, and the image file is stored under
`iTunes_Control/iTunes/Artwork/Originals/<xx>/<sha1-of-token>` — a layout
measured on a real device and verified against the system's own lookups.

## Requirements

- Linux with a GNOME-compatible desktop (GTK4 ≥ 4.10, libadwaita ≥ 1.4)
- libimobiledevice, usbmuxd
- TagLib ≥ 1.12
- An Apple device running iOS; on first connection confirm the
  **"Trust this computer?"** prompt on the device

## Install

### From the .deb package (Debian/Ubuntu)

```bash
sudo apt install ./apple-devices_1.0.0-1_amd64.deb
```

### From source

```bash
meson setup build --buildtype=release
meson compile -C build
sudo meson install -C build
```

To uninstall: `sudo ninja -C build uninstall`.

## Usage notes

- **Close the Music app on the device before importing** — the library
  database is edited directly, and an open Music app may rewrite it.
- After an import, covers and tracks appear in the device Music app right
  away; if the app was open during the import, just reopen it.
- Every database write is preceded by an automatic backup — if anything
  goes wrong, the previous state is in `~/.local/share/apple-devices/backups/`.

## Packaging

A Debian package can be built with the bundled script:

```bash
./scripts/build-deb.sh
```

It compiles the app, stages the install tree, computes shared-library
dependencies with `dpkg-shlibdeps` and produces
`apple-devices_<version>-1_<arch>.deb`.

## Limitations & roadmap

- Playlists are read from the device; editing them from the app is planned
  (the on-device `container`/`container_item` schema is already mapped).
- The sync indicator in the iOS status bar reflects Apple's closed
  MobileSync protocol and is intentionally out of scope.
- Cover color analysis (background/text colors used by iOS for some views)
  is approximated with neutral values.

## AI-assisted development

For full transparency: the code in this repository was written by an AI
assistant — **GLM**, a model by Z.ai — working in interactive sessions
together with the author. The author directed the work, made the product
decisions, and tested every feature on a real iPhone over USB. Nothing
non-obvious here (the media database layout, the artwork token hashing)
was assumed — it was measured and verified on actual hardware.

## License

[GPL-3.0-or-later](LICENSE) — see [LICENSE](LICENSE) for details.
