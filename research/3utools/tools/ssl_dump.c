/* ssl_dump.c — LD_PRELOAD-хук SSL_read/SSL_write: дамп открытого текста
   TLS-сессий 3uTools в бинарный лог (для разбора atc-диалога).
   Формат записи: 1 байт направление ('R'/'W') + 4 байта длины BE + данные.
   Включение: ATC_SSL_DUMP=/путь/к/файлу. Сборка:
   gcc -shared -fPIC -O1 ssl_dump.c -o ssl_dump.so -ldl -lpthread */
#define _GNU_SOURCE
#include <dlfcn.h>
#include <fcntl.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef int (*ssl_rw_t)(void *, void *, int);
typedef int (*ssl_rwex_t)(void *, void *, size_t, size_t *);
static ssl_rw_t real_read, real_write;
static ssl_rwex_t real_read_ex, real_write_ex;
static int logfd = -1;
static pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;
static __thread int in_hook = 0;

static void init(void)
{
  real_read = (ssl_rw_t)dlsym(RTLD_NEXT, "SSL_read");
  real_write = (ssl_rw_t)dlsym(RTLD_NEXT, "SSL_write");
  real_read_ex = (ssl_rwex_t)dlsym(RTLD_NEXT, "SSL_read_ex");
  real_write_ex = (ssl_rwex_t)dlsym(RTLD_NEXT, "SSL_write_ex");
  const char *p = getenv("ATC_SSL_DUMP");
  if (p)
    logfd = open(p, O_WRONLY | O_CREAT | O_APPEND | O_CLOEXEC, 0644);
}

static void rec(char dir, const void *buf, int n)
{
  if (logfd < 0 || n <= 0)
    return;
  unsigned char hdr[5] = {(unsigned char)dir,
                          (unsigned char)((n >> 24) & 0xff),
                          (unsigned char)((n >> 16) & 0xff),
                          (unsigned char)((n >> 8) & 0xff),
                          (unsigned char)(n & 0xff)};
  pthread_mutex_lock(&mtx);
  if (write(logfd, hdr, 5) == 5)
    (void)!write(logfd, buf, (size_t)n);
  pthread_mutex_unlock(&mtx);
}

int SSL_read(void *ssl, void *buf, int num)
{
  if (!real_read && !in_hook)
    init();
  if (!real_read)
    return -1;
  in_hook = 1;
  int r = real_read(ssl, buf, num);
  in_hook = 0;
  if (r > 0)
    rec('R', buf, r);
  return r;
}

int SSL_read_ex(void *ssl, void *buf, size_t num, size_t *read)
{
  if (!real_read_ex && !in_hook)
    init();
  if (!real_read_ex)
    return 0;
  in_hook = 1;
  int r = real_read_ex(ssl, buf, num, read);
  in_hook = 0;
  if (r == 1 && *read > 0)
    rec('R', buf, (int)*read);
  return r;
}

int SSL_write(void *ssl, const void *buf, int num)
{
  if (!real_write && !in_hook)
    init();
  if (!real_write)
    return -1;
  if (num > 0)
    rec('W', buf, num);
  in_hook = 1;
  int r = real_write(ssl, (void *)buf, num);
  in_hook = 0;
  return r;
}

int SSL_write_ex(void *ssl, const void *buf, size_t num, size_t *written)
{
  if (!real_write_ex && !in_hook)
    init();
  if (!real_write_ex)
    return 0;
  if (num > 0)
    rec('W', buf, (int)num);
  in_hook = 1;
  int r = real_write_ex(ssl, (void *)buf, num, written);
  in_hook = 0;
  return r;
}
