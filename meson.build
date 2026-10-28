project('apple-devices', 'c',
  version: '1.0.0',
  license: 'GPL-3.0-or-later',
  default_options: [
    'warning_level=3',
    'c_std=gnu11',
  ],
)

gtk_dep  = dependency('gtk4', version: '>=4.10')
adw_dep  = dependency('libadwaita-1', version: '>=1.4')
imob_dep = dependency('libimobiledevice-1.0')
tag_dep  = dependency('taglib_c', version: '>=1.12')

add_project_arguments(
  '-DGLIB_VERSION_MIN_REQUIRED=GLIB_VERSION_2_74',
  '-DGLIB_VERSION_MAX_ALLOWED=GLIB_VERSION_2_74',
  language: 'c',
)

subdir('src')

# Данные приложения: launcher, AppStream-метаданные, иконка, man-страница
install_data(
  'data/com.saitexna.appleDevices.desktop',
  install_dir: get_option('datadir') / 'applications',
)
install_data(
  'data/com.saitexna.appleDevices.metainfo.xml',
  install_dir: get_option('datadir') / 'metainfo',
)
install_data(
  'data/com.saitexna.appleDevices.svg',
  install_dir: get_option('datadir') / 'icons' / 'hicolor' / 'scalable' / 'apps',
)
install_data(
  'data/apple-devices.1',
  install_dir: get_option('mandir') / 'man1',
)