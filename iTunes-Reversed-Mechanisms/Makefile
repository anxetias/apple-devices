# libirm — C-фаза iTunes-Reversed-Mechanisms
# Порядок модулей зафиксирован в docs/00-roadmap.md:
#   bplist → mux → lockdown → pair → tls → afc/notify → sync → backup → transcode.
CC      ?= cc
CFLAGS  ?= -std=c11 -O2 -Wall -Wextra -Wpedantic
# Портирование на Linux (apple-devices): glibc раскрывает gmtime_r,
# program_invocation_short_name и прочие POSIX/GNUBITS только с эти макросом.
CPPFLAGS += -D_GNU_SOURCE
CPPFLAGS += -Ilibirm/include

LIB     = libirm/libirm.a
LIB_HDRS = libirm/include/libirm/bplist.h libirm/include/libirm/mux.h \
	   libirm/include/libirm/xmlplist.h libirm/include/libirm/lockdown.h \
	   libirm/include/libirm/devicelink.h
LIB_SRCS = libirm/src/bplist.c libirm/src/mux.c libirm/src/xmlplist.c \
	   libirm/src/lockdown.c libirm/src/devicelink.c
LIB_OBJS = $(LIB_SRCS:%.c=%.o)

TEST_BINS   = tests/test_bplist tests/test_mux tests/test_xml tests/test_lockdown \
	      tests/test_xmlw tests/test_dl

all: $(LIB) irmctl

$(LIB): $(LIB_OBJS)
	ar rcs $@ $^

libirm/src/%.o: libirm/src/%.c $(LIB_HDRS)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<

tests/%: tests/%.c $(LIB) $(LIB_HDRS)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ $< $(LIB) -lm

irmctl: tools/irmctl.c $(LIB) $(LIB_HDRS)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ $< $(LIB) -lm

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
	      tests/bplist.sample.bin irmctl

.PHONY: all test smoke clean
