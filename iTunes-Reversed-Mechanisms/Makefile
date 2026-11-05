# libirm — C-фаза iTunes-Reversed-Mechanisms
# Порядок модулей зафиксирован в docs/00-roadmap.md:
#   bplist → mux → lockdown → pair → tls → afc/notify → sync → backup → transcode.
CC      ?= cc
CFLAGS  ?= -std=c11 -O2 -Wall -Wextra -Wpedantic
# Портирование на Linux (apple-devices): glibc раскрывает gmtime_r,
# program_invocation_short_name и прочие POSIX/GNUBITS только с эти макросом.
CPPFLAGS += -D_GNU_SOURCE
# TLS-слой (E04 §3-6): реальная реализация включена всегда в C-фазе;
# без -DIRM_OPENSSL tls.c собирается в заглушки (см. PORTING.md).
CPPFLAGS += -DIRM_OPENSSL=1
CPPFLAGS += -Ilibirm/include

LIB     = libirm/libirm.a
LIB_HDRS = libirm/include/libirm/bplist.h libirm/include/libirm/mux.h \
	   libirm/include/libirm/xmlplist.h libirm/include/libirm/lockdown.h \
	   libirm/include/libirm/pairing.h libirm/include/libirm/tls.h \
	   libirm/include/libirm/devicelink.h libirm/include/libirm/afc.h \
	   libirm/include/libirm/grappa.h
LIB_SRCS = libirm/src/bplist.c libirm/src/mux.c libirm/src/xmlplist.c \
	   libirm/src/lockdown.c libirm/src/pairing.c libirm/src/tls.c \
	   libirm/src/devicelink.c libirm/src/afc.c libirm/src/grappa.c
LIB_OBJS = $(LIB_SRCS:%.c=%.o)

# TLS (E04 §3-6) — OpenSSL из системы (pkg-config openssl).
OPENSSL_CFLAGS := $(shell pkg-config --cflags openssl 2>/dev/null)
OPENSSL_LIBS   := $(shell pkg-config --libs openssl 2>/dev/null)

# Vendored SQLite (music-id: якерь из ЛОКАЛЬНОЙ копии MediaLibrary.sqlitedb).
# Собирается с -w: файл в ~271 тыс. строк, чужие предупреждения не адресны.
SQLITE_DIR ?= ../vendor/sqlite
CPPFLAGS   += -I$(SQLITE_DIR)
SQLITE_SRC := $(SQLITE_DIR)/sqlite3.c
SQLITE_OBJ := build/sqlite3.o

$(SQLITE_OBJ): $(SQLITE_SRC) $(SQLITE_DIR)/sqlite3.h
	@mkdir -p build
	$(CC) -O2 -std=c11 -w -DSQLITE_THREADSAFE=0 \
	      -DSQLITE_OMIT_LOAD_EXTENSION=1 -c -o $@ $<

# GTK4-приложение заливки (irm-fill, шаги 9g/9i/9j): pkg-config gtk4+
# libadwaita-1 + taglib_c (теги источника для вставки).
GTK_CFLAGS := $(shell pkg-config --cflags gtk4 libadwaita-1 taglib_c 2>/dev/null)
GTK_LIBS   := $(shell pkg-config --libs gtk4 libadwaita-1 taglib_c 2>/dev/null)

TEST_BINS   = tests/test_bplist tests/test_mux tests/test_xml tests/test_lockdown \
	      tests/test_xmlw tests/test_dl

all: $(LIB) irmctl irm-fill

$(LIB): $(LIB_OBJS)
	ar rcs $@ $^

libirm/src/%.o: libirm/src/%.c $(LIB_HDRS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(OPENSSL_CFLAGS) -c -o $@ $<

tests/%: tests/%.c $(LIB) $(LIB_HDRS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(OPENSSL_CFLAGS) -o $@ $< $(LIB) -lm $(OPENSSL_LIBS)

irmctl: tools/irmctl.c $(LIB) $(LIB_HDRS) $(SQLITE_OBJ)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(OPENSSL_CFLAGS) -o $@ $< $(LIB) \
	      $(SQLITE_OBJ) -lm $(OPENSSL_LIBS)

# GTK4-обёртка заливки (irm-fill, шаги 9g/9i/9j; теги — 9j).
ifeq ($(GTK_LIBS),)
irm-fill:
	@echo "irm-fill: gtk4/libadwaita-1/taglib_c не найдены (pkg-config)"; exit 1
else
irm-fill: tools/irm-fill.c
	$(CC) $(CFLAGS) $(GTK_CFLAGS) -o $@ $< $(GTK_LIBS)
endif

test: $(LIB) $(TEST_BINS)
	./tests/test_bplist
	./tests/test_xml
	./tests/test_lockdown
	./tests/test_xmlw
	./tests/test_dl

# Дым против РЕАЛЬНОГО демона (usbmuxd): требуется живой сокет.
smoke: $(TEST_BINS) irmctl
	./tests/test_mux
	./irmctl list

clean:
	rm -f $(LIB) libirm/src/*.o tests/test_bplist tests/test_mux \
	      tests/test_xml tests/test_lockdown tests/test_xmlw tests/test_dl \
	      tests/bplist.sample.bin irmctl irm-fill build/sqlite3.o

.PHONY: all test smoke clean
