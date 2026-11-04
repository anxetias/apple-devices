# Портировочная заготовка (apple-devices): libirm как статическая библиотека.
# Подключать из КОРНЕВОГО meson.build apple-devices (когда mux доведём до
# Linux-usbmuxd):
#
#   subdir('iTunes-Reversed-Mechanisms')
#   # дальше: irm_dep доступен цели apple-devices
#
# Автономные сборки идут Makefile'ом friend-а (make / make test).
# НЕ самостоятельный проект: файла project() здесь нет.

irm_cargs = []
if host_machine.system() == 'linux'
  # glibc без -D_GNU_SOURCE прячет POSIX (см. PORTING.md)
  irm_cargs += ['-D_GNU_SOURCE']
endif
# TLS-слой (E04): OpenSSL из системы; без -DIRM_OPENSSL tls.c — заглушки.
irm_openssl = dependency('openssl', required: true)
irm_cargs += ['-DIRM_OPENSSL=1']

irm_inc = include_directories('libirm/include')
irm_src = files(
  'libirm/src/bplist.c',
  'libirm/src/xmlplist.c',
  'libirm/src/mux.c',
  'libirm/src/lockdown.c',
  'libirm/src/pairing.c',
  'libirm/src/tls.c',
  'libirm/src/devicelink.c',
)

irm_static = static_library(
  'irm',
  irm_src,
  c_args: irm_cargs,
  include_directories: irm_inc,
  dependencies: irm_openssl,
  install: false,
)

irm_dep = declare_dependency(
  link_with: irm_static,
  include_directories: irm_inc,
  dependencies: irm_openssl,
  compile_args: irm_cargs,
)
