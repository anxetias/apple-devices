app_sources = files(
  'main.c',
  'application.c',
  'deviceScanner.c',
  'medialib.c',
  'afcUtils.c',
  'uiWidgets.c',
  'sync3u.c',
)

# SQLite (amalgamation) — для правки базы медиатеки iPhone (MediaLibrary.sqlitedb).
# Статически вшиваем в приложение: внешней зависимости нет.
sqlite_lib = static_library('sqlite3',
  '../vendor/sqlite/sqlite3.c',
  include_directories: include_directories('../vendor/sqlite'),
  c_args: ['-w', '-DSQLITE_OMIT_LOAD_EXTENSION=1'],
)

executable('apple-devices',
  app_sources,
  include_directories: include_directories('../vendor/sqlite'),
  link_with: sqlite_lib,
  dependencies: [gtk_dep, adw_dep, imob_dep, tag_dep,
                 # sync3u: собственный HTTPS-клиент к серверу 3uTools (a2-s.3u.com)
                 dependency('openssl')],
  c_args: ['-Wall', '-Wextra',
           # Версия проекта — единый источник правды (для окна «О программе»)
           '-DAPP_VERSION="@0@"'.format(meson.project_version())],
  install: true,
)
