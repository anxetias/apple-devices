/* memscan.c — запускает 3uTools своим ребёнком (yama ptrace_scope=1
   разрешает предкам читать потомков) и во время импорта сканирует его
   rw-память на буферы серверного протокола .cig:
   запрос  : 91 78 46 35 d0 64 00 00 [u32 K][u32 A.size][A][u32 B.size][B]
   ответ   : 91 78 46 35 d1 ... (cig где-то рядом)
   Находки дампятся в /tmp/opencode/memscan_<магия>_<смещ>.bin.
   Запуск: memscan <секунды> ; внутри fork+exec run.sh */
#define _GNU_SOURCE
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>

static double now_s(void)
{
  struct timespec ts;
  clock_gettime(CLOCK_MONOTONIC, &ts);
  return (double)ts.tv_sec + (double)ts.tv_nsec / 1e9;
}

/* одна rw-область из maps: начало, конец */
typedef struct {
  unsigned long start, end;
} region_t;

static int parse_maps(pid_t pid, region_t **out, int *nout)
{
  char path[64];
  snprintf(path, sizeof(path), "/proc/%d/maps", pid);
  FILE *f = fopen(path, "r");
  if (!f)
    return -1;
  region_t *regs = NULL;
  int n = 0, cap = 0;
  char line[512];
  while (fgets(line, sizeof(line), f)) {
    unsigned long a, b;
    char perms[8] = {0};
    if (sscanf(line, "%lx-%lx %7s", &a, &b, perms) != 3)
      continue;
    if (perms[0] != 'r' || perms[1] != 'w')
      continue;
    /* пропускаем device-память и огромные дыры */
    if (strstr(line, "/dev/") || b - a > (512ul << 20))
      continue;
    if (n == cap) {
      cap = cap ? cap * 2 : 64;
      regs = realloc(regs, (size_t)cap * sizeof(region_t));
    }
    regs[n].start = a;
    regs[n].end = b;
    n++;
  }
  fclose(f);
  *out = regs;
  *nout = n;
  return 0;
}

/* ищем паттерн в области, дампим контекст при находке (без дублей) */
static int scan_region(int memfd, const region_t *r, const unsigned char *pat,
                       size_t plen, const char *tag, char *seen,
                       size_t seen_cap, int *ndumps)
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
  int hits = 0;
  for (size_t i = 0; i + plen <= (size_t)rd; i++) {
    if (memcmp(buf + i, pat, plen))
      continue;
    unsigned long addr = r->start + i;
    char key[64];
    snprintf(key, sizeof(key), "%s:%lx", tag, addr);
    if (strstr(seen, key))
      continue;
    strncat(seen, key, seen_cap - strlen(seen) - 2);
    strncat(seen, "|", seen_cap - strlen(seen) - 1);
    size_t ctx = 4096;
    if (i + ctx > (size_t)rd)
      ctx = (size_t)rd - i;
    char out[128];
    snprintf(out, sizeof(out), "/tmp/opencode/memscan_%s_%lx.bin", tag, addr);
    FILE *o = fopen(out, "wb");
    if (o) {
      fwrite(buf + i, 1, ctx, o);
      fclose(o);
    }
    printf("[%.1f] %s @0x%lx -> %s (%zu Б)\n", now_s(), tag, addr, out, ctx);
    fflush(stdout);
    (*ndumps)++;
    hits++;
    i += plen; /* не сравниваем наложение */
  }
  free(buf);
  return hits;
}

int main(int argc, char **argv)
{
  double budget = (argc > 1) ? atof(argv[1]) : 420.0;
  pid_t child = fork();
  if (child == 0) {
    /* ребёнок: запускаем 3uTools (GUI) */
    execl("/bin/sh", "sh", "-c",
          "cd /opt/apps/com.3u.3utools && exec ./run.sh", (char *)NULL);
    _exit(127);
  }
  printf("3uTools запущен как ребёнок pid=%d; сканирую %.0f с\n",
         (int)child, budget);
  fflush(stdout);
  sleep(12); /* даём GUI подняться */
  double t0 = now_s();
  const unsigned char req_magic[] = {0x91, 0x78, 0x46, 0x35, 0xd0, 0x64,
                                     0x00, 0x00};
  const unsigned char resp_magic[] = {0x91, 0x78, 0x46, 0x35, 0xd1};
  char seen[8192] = {0};
  int ndumps = 0;
  while (now_s() - t0 < budget) {
    region_t *regs = NULL;
    int n = 0;
    if (parse_maps(child, &regs, &n) != 0) {
      printf("процесс %d недоступен (закрыт?)\n", child);
      break;
    }
    int memfd = open("/proc/self/mem", O_RDONLY); /* заглушка, ниже real */
    (void)memfd;
    char mpath[64];
    snprintf(mpath, sizeof(mpath), "/proc/%d/mem", child);
    int fd = open(mpath, O_RDONLY);
    if (fd < 0) {
      printf("mem открыть не удалось\n");
      free(regs);
      break;
    }
    int req_hits = 0, resp_hits = 0;
    for (int i = 0; i < n; i++) {
      req_hits += scan_region(fd, &regs[i], req_magic, sizeof(req_magic),
                              "req", seen, sizeof(seen), &ndumps);
      resp_hits += scan_region(fd, &regs[i], resp_magic, sizeof(resp_magic),
                               "resp", seen, sizeof(seen), &ndumps);
    }
    close(fd);
    free(regs);
    if (req_hits || resp_hits)
      printf("[%.1f] свип: req=%d resp=%d (всего дампов %d)\n", now_s(),
             req_hits, resp_hits, ndumps);
    usleep(700000);
  }
  printf("сканирование завершено, дампов: %d; жду ребёнка...\n", ndumps);
  /* не убиваем 3u — пусть пользователь закроет сам; просто ждём чуть */
  sleep(2);
  return 0;
}
