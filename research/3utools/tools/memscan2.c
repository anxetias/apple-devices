/* memscan2.c — комбинированный захват для взлома .cig (шаг 5).
   Цепочка: memscan2 (предок) -> strace -f (AFC-записи декларации/.cig)
   -> sh -> run.sh -> 3uTools (LD_PRELOAD ssl_dump.so пишет atc-канал).
   Родитель сканирует /proc/<pid 3uTools>/mem (yama ptrace_scope=1
   разрешает чтение памяти только предкам) на магии серверного протокола:
     запрос  91 78 46 35 d0 64 00 00 [u32 K][u32 lenA][A][u32 lenB][B]
     ответ   91 78 46 35 d1 ...
   Дополнительно: триггер-файл /tmp/opencode/memscan2_hunt.hex — если
   появился, ищем в памяти указанные hex-байты и дампим контекст
   (запасной способ найти буфер ответа, если магия не сработала).
   Находки -> /tmp/opencode/memscan2_<тег>_0x<адрес>_<n>.bin
   Запуск: memscan2 <секунд>   (по умолчанию 900) */
#define _GNU_SOURCE
#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>

#define CTX_BEFORE 512
#define CTX_AFTER  16384
#define MAX_SEEN   512
#define MAX_PIDS   8

static double g_t0;

static double now_s(void)
{
  struct timespec ts;
  clock_gettime(CLOCK_MONOTONIC, &ts);
  return (double)ts.tv_sec + (double)ts.tv_nsec / 1e9;
}

typedef struct {
  unsigned long start, end;
} region_t;

/* уже замеченные находки: (адрес, тег) + время последнего дампа */
static struct {
  unsigned long addr;
  char tag;
  double t;
} seen[MAX_SEEN];
static int nseen = 0;
static int ndumps = 0;

/* активная охота по триггер-файлу */
static unsigned char hunt[64];
static size_t hlen = 0;

static int parse_maps(pid_t pid, region_t **out, int *nout, long *nskipped)
{
  char path[64];
  snprintf(path, sizeof(path), "/proc/%d/maps", pid);
  FILE *f = fopen(path, "r");
  if (!f)
    return -1;
  region_t *regs = NULL;
  int n = 0, cap = 0;
  char line[512];
  long skipped = 0;
  while (fgets(line, sizeof(line), f)) {
    unsigned long a, b;
    char perms[8] = {0};
    if (sscanf(line, "%lx-%lx %7s", &a, &b, perms) != 3)
      continue;
    if (perms[0] != 'r' || perms[1] != 'w')
      continue;
    if (strstr(line, "/dev/") || strstr(line, "/sys/"))
      continue;
    if (b - a > (512ul << 20)) {
      skipped++;
      continue;
    }
    if (n == cap) {
      cap = cap ? cap * 2 : 128;
      region_t *nr = realloc(regs, (size_t)cap * sizeof(region_t));
      if (!nr)
        break;
      regs = nr;
    }
    regs[n].start = a;
    regs[n].end = b;
    n++;
  }
  fclose(f);
  *out = regs;
  *nout = n;
  *nskipped = skipped;
  return 0;
}

static int get_ppid(pid_t pid)
{
  char path[64];
  snprintf(path, sizeof(path), "/proc/%d/status", pid);
  FILE *f = fopen(path, "r");
  if (!f)
    return -1;
  char line[256];
  int ppid = -1;
  while (fgets(line, sizeof(line), f)) {
    if (sscanf(line, "PPid:%d", &ppid) == 1)
      break;
  }
  fclose(f);
  return ppid;
}

/* pid — потомок ancestor? (по цепочке PPid, до 32 уровней) */
static int is_descendant(pid_t pid, pid_t ancestor)
{
  for (int depth = 0; pid > 1 && depth < 32; depth++) {
    pid_t p = (pid_t)get_ppid(pid);
    if (p == ancestor)
      return 1;
    if (p <= 1)
      return 0;
    pid = p;
  }
  return 0;
}

/* найти процессы с exe basename "3uTools" среди наших потомков */
static int find_targets(pid_t self, pid_t *out, int maxout)
{
  DIR *d = opendir("/proc");
  if (!d)
    return 0;
  struct dirent *e;
  int n = 0;
  while ((e = readdir(d)) != NULL) {
    if (e->d_name[0] < '0' || e->d_name[0] > '9')
      continue;
    pid_t pid = (pid_t)atoi(e->d_name);
    if (pid == self)
      continue;
    char exepath[64], buf[512];
    snprintf(exepath, sizeof(exepath), "/proc/%d/exe", pid);
    ssize_t r = readlink(exepath, buf, sizeof(buf) - 1);
    if (r <= 0)
      continue;
    buf[r] = 0;
    char *base = strrchr(buf, '/');
    base = base ? base + 1 : buf;
    if (strcmp(base, "3uTools") != 0)
      continue;
    if (!is_descendant(pid, self))
      continue;
    if (n < maxout)
      out[n++] = pid;
  }
  closedir(d);
  return n;
}

/* дубликат? повторный дамп того же адреса разрешён раз в redump_s секунд */
static int is_dup(unsigned long addr, char tag, double t, int redump_s)
{
  for (int i = 0; i < nseen; i++) {
    if (seen[i].addr == addr && seen[i].tag == tag) {
      if (t - seen[i].t >= redump_s) {
        seen[i].t = t;
        return 0;
      }
      return 1;
    }
  }
  if (nseen < MAX_SEEN) {
    seen[nseen].addr = addr;
    seen[nseen].tag = tag;
    seen[nseen].t = t;
    nseen++;
  }
  return 0;
}

/* сбросить дедуп-записи данного тега (при новой охоте) */
static void drop_tag(char tag)
{
  int w = 0;
  for (int i = 0; i < nseen; i++)
    if (seen[i].tag != tag)
      seen[w++] = seen[i];
  nseen = w;
}

static int scan_buf(const unsigned char *buf, ssize_t rd, const region_t *r,
                    const unsigned char *pat, size_t plen, char tag)
{
  int hits = 0;
  double t = now_s();
  for (size_t i = 0; i + plen <= (size_t)rd; i++) {
    if (memcmp(buf + i, pat, plen))
      continue;
    unsigned long addr = r->start + i;
    if (is_dup(addr, tag, t, 20))
      continue;
    size_t from = i > CTX_BEFORE ? i - CTX_BEFORE : 0;
    size_t to = i + CTX_AFTER;
    if (to > (size_t)rd)
      to = (size_t)rd;
    char out[160];
    snprintf(out, sizeof(out), "/tmp/opencode/memscan2_%c_0x%lx_%d.bin",
             tag, addr, ndumps);
    FILE *o = fopen(out, "wb");
    if (o) {
      fwrite(buf + from, 1, to - from, o);
      fclose(o);
    }
    printf("[%.1f] %c @0x%lx -> %s (%zu Б)\n", t - g_t0, tag, addr, out,
           to - from);
    fflush(stdout);
    ndumps++;
    hits++;
    i += plen - 1;
  }
  return hits;
}

static int scan_region(int memfd, const region_t *r)
{
  size_t len = r->end - r->start;
  unsigned char *buf = malloc(len);
  if (!buf)
    return 0;
  ssize_t rd = pread(memfd, buf, len, (off_t)r->start);
  if (rd <= 0) {
    free(buf);
    return 0;
  }
  static const unsigned char req_magic[] = {0x91, 0x78, 0x46, 0x35, 0xd0,
                                            0x64, 0x00, 0x00};
  static const unsigned char resp_magic[] = {0x91, 0x78, 0x46, 0x35, 0xd1};
  int hits = 0;
  hits += scan_buf(buf, rd, r, req_magic, sizeof(req_magic), 'q');
  hits += scan_buf(buf, rd, r, resp_magic, sizeof(resp_magic), 'r');
  if (hlen > 0)
    hits += scan_buf(buf, rd, r, hunt, hlen, 'h');
  free(buf);
  return hits;
}

/* триггер-файл охоты: hex-строка (пробелы игнорируются) */
static void check_hunt_file(void)
{
  struct stat st;
  if (stat("/tmp/opencode/memscan2_hunt.hex", &st) != 0 || st.st_size <= 0)
    return;
  FILE *f = fopen("/tmp/opencode/memscan2_hunt.hex", "r");
  if (!f)
    return;
  char hexs[256] = {0};
  size_t got = fread(hexs, 1, sizeof(hexs) - 1, f);
  fclose(f);
  unsigned char bytes[64];
  size_t nb = 0;
  int have_hi = 0;
  unsigned cur = 0;
  for (size_t i = 0; i < got && nb < sizeof(bytes); i++) {
    char c = hexs[i];
    int v;
    if (c >= '0' && c <= '9')
      v = c - '0';
    else if (c >= 'a' && c <= 'f')
      v = c - 'a' + 10;
    else if (c >= 'A' && c <= 'F')
      v = c - 'A' + 10;
    else
      continue; /* пробелы и прочее игнорируем */
    if (!have_hi) {
      cur = (unsigned)v;
      have_hi = 1;
    } else {
      bytes[nb++] = (unsigned char)((cur << 4) | (unsigned)v);
      have_hi = 0;
    }
  }
  unlink("/tmp/opencode/memscan2_hunt.hex");
  if (nb == 0) {
    printf("[%.1f] охота: не удалось разобрать hex\n", now_s() - g_t0);
    fflush(stdout);
    return;
  }
  memcpy(hunt, bytes, nb);
  hlen = nb;
  drop_tag('h');
  printf("[%.1f] охота активирована: %zu байт\n", now_s() - g_t0, hlen);
  fflush(stdout);
}

int main(int argc, char **argv)
{
  double budget = (argc > 1) ? atof(argv[1]) : 900.0;
  pid_t self = getpid();
  pid_t child = fork();
  if (child == 0) {
    setenv("LD_PRELOAD", "/tmp/opencode/ssl_dump.so", 1);
    setenv("ATC_SSL_DUMP", "/tmp/opencode/atc_3u_dump2.bin", 1);
    execlp("strace", "strace", "-f", "-tt", "-T", "-s", "262144",
           "-e", "trace=write,sendto,sendmsg", "-o",
           "/tmp/opencode/3u_trace4.log", "sh", "-c",
           "cd /opt/apps/com.3u.3utools && exec ./run.sh", (char *)NULL);
    _exit(127);
  }
  printf("ребёнок (strace) pid=%d; бюджет %.0f с\n", (int)child, budget);
  fflush(stdout);
  sleep(15);
  g_t0 = now_s();
  int last_nt = -1;
  double last_ping = 0;
  while (now_s() - g_t0 < budget) {
    check_hunt_file();
    pid_t targets[MAX_PIDS];
    int nt = find_targets(self, targets, MAX_PIDS);
    if (nt != last_nt) {
      printf("[%.1f] цели(%d):", now_s() - g_t0, nt);
      for (int i = 0; i < nt; i++)
        printf(" %d", (int)targets[i]);
      printf("\n");
      fflush(stdout);
      last_nt = nt;
    }
    if (nt == 0) {
      if (kill(child, 0) != 0) {
        printf("3uTools не найден, ребёнок завершён — выходим\n");
        break;
      }
      sleep(2);
      continue;
    }
    int hits = 0;
    for (int ti = 0; ti < nt; ti++) {
      char mpath[64];
      snprintf(mpath, sizeof(mpath), "/proc/%d/mem", targets[ti]);
      int fd = open(mpath, O_RDONLY);
      if (fd < 0) {
        static int warned = 0;
        if (!warned) {
          printf("[%.1f] %s открыть не удалось (errno %d)\n",
                 now_s() - g_t0, mpath, errno);
          warned = 1;
        }
        continue;
      }
      region_t *regs = NULL;
      int n = 0;
      long skipped = 0;
      if (parse_maps(targets[ti], &regs, &n, &skipped) == 0) {
        static int first_dump = 1;
        if (first_dump) {
          printf("[%.1f] mem открыт: %d областей (пропущено >512 МБ: %ld)\n",
                 now_s() - g_t0, n, skipped);
          first_dump = 0;
        }
        for (int i = 0; i < n; i++)
          hits += scan_region(fd, &regs[i]);
        free(regs);
      }
      close(fd);
    }
    if (hits > 0)
      printf("[%.1f] свип: новых попаданий %d, всего дампов %d\n",
             now_s() - g_t0, hits, ndumps);
    double t = now_s();
    if (t - last_ping > 60) {
      printf("[%.1f] жив, дампов %d\n", t - g_t0, ndumps);
      fflush(stdout);
      last_ping = t;
    }
    usleep(600000);
  }
  printf("готово: дампов %d; ребёнок (strace) продолжает работать\n", ndumps);
  return 0;
}
