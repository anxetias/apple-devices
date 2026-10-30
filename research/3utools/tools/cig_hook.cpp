/* cig_hook.cpp — LD_PRELOAD-хук libidm: перехват get_media_sync_cig и
   get_step_2_data (вызовы идут через PLT ⇒ межпозиционируются прелоадом).
   Даёт точный триплет (K=anchor, A=Grappa устройства, B=декларация) и
   результат .cig БЕЗ гонок со сканером памяти.
   bin_t (PackType): u32 size @0, void* data @8 — из дизасма
   _get_media_sync_cig @0x812d0.
   Сборка: g++ -shared -fPIC -O1 cig_hook.cpp -o cig_hook.so -ldl -lpthread
   Включение: CIG_HOOK_DIR=/tmp/opencode (по умолчанию /tmp/opencode) */
#include <dlfcn.h>
#include <fcntl.h>
#include <pthread.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

typedef struct {
  uint32_t size;
  uint32_t pad;
  void *data;
} bin_t;

static pthread_mutex_t g_mtx = PTHREAD_MUTEX_INITIALIZER;
static int g_seq = 0;
static char g_dir[256] = "/tmp/opencode";

typedef int (*cig_fn)(int, const char *, unsigned, bin_t *, bin_t *, bin_t *,
                      void *);
typedef int (*step2_fn)(const char *, const char *, unsigned *, bin_t *,
                        void *, void *);
static cig_fn real_cig;
static step2_fn real_step2;

static const char MANGLED_CIG[] =
    "_Z18get_media_sync_cigiPKcjR5bin_tS2_S2_RSt6vectorINSt7__cxx1112basic_"
    "stringIcSt11char_traitsIcESaIcEEESaIS9_EE";
static const char MANGLED_STEP2[] =
    "_Z15get_step_2_dataPKcS0_RjR5bin_tRSt6vectorINSt7__cxx1112basic_string"
    "IcSt11char_traitsIcESaIcEEESaISA_EEPFiS0_PPcE";

static void resolve(void)
{
  real_cig = (cig_fn)dlsym(RTLD_NEXT, MANGLED_CIG);
  real_step2 = (step2_fn)dlsym(RTLD_NEXT, MANGLED_STEP2);
  if (!real_cig || !real_step2) {
    /* libidm может быть dlopen'нута локально — ищем по хендлу */
    const char *names[] = {"libidm.so", "libidm.so.1", NULL};
    for (int i = 0; names[i]; i++) {
      void *h = dlopen(names[i], RTLD_LAZY | RTLD_NOLOAD);
      if (!h)
        continue;
      if (!real_cig)
        real_cig = (cig_fn)dlsym(h, MANGLED_CIG);
      if (!real_step2)
        real_step2 = (step2_fn)dlsym(h, MANGLED_STEP2);
    }
  }
}

static double now_s(void)
{
  struct timespec ts;
  clock_gettime(CLOCK_REALTIME, &ts);
  return (double)ts.tv_sec + (double)ts.tv_nsec / 1e9;
}

static FILE *logf(void)
{
  char path[512];
  snprintf(path, sizeof(path), "%s/cig_calls.log", g_dir);
  return fopen(path, "a");
}

static void dump_bin(const char *kind, int seq, const bin_t *b)
{
  if (!b || !b->data || b->size == 0 || b->size > (1u << 24))
    return;
  char path[512];
  snprintf(path, sizeof(path), "%s/hook_%s_%d.bin", g_dir, kind, seq);
  int fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, 0644);
  if (fd < 0)
    return;
  ssize_t rc = write(fd, b->data, b->size);
  (void)rc;
  close(fd);
}

__attribute__((constructor)) static void on_load(void)
{
  const char *d = getenv("CIG_HOOK_DIR");
  if (d && *d)
    snprintf(g_dir, sizeof(g_dir), "%s", d);
  char path[512];
  snprintf(path, sizeof(path), "%s/hook_loaded.txt", g_dir);
  FILE *f = fopen(path, "a");
  if (f) {
    fprintf(f, "loaded t=%.3f pid=%d\n", now_s(), (int)getpid());
    fclose(f);
  }
  resolve();
}

/* метки asm дают точные mangled-имена libidm — иначе PLT нас не видит */
extern "C" int hook_get_media_sync_cig(int, const char *, unsigned, bin_t *,
                                       bin_t *, bin_t *, void *)
    asm("_Z18get_media_sync_cigiPKcjR5bin_tS2_S2_RSt6vectorINSt7__cxx1112"
        "basic_stringIcSt11char_traitsIcESaIcEEESaIS9_EE");
extern "C" int hook_get_step_2_data(const char *, const char *, unsigned *,
                                    bin_t *, void *, void *)
    asm("_Z15get_step_2_dataPKcS0_RjR5bin_tRSt6vectorINSt7__cxx1112basic_"
        "stringIcSt11char_traitsIcESaIcEEESaISA_EEPFiS0_PPcE");

extern "C" int hook_get_media_sync_cig(int mode, const char *url, unsigned K,
                                       bin_t *A, bin_t *B, bin_t *cig,
                                       void *v)
{
  pthread_mutex_lock(&g_mtx);
  int seq = ++g_seq;
  double t = now_s();
  pthread_mutex_unlock(&g_mtx);
  if (!real_cig)
    resolve();
  FILE *f = logf();
  if (f) {
    fprintf(f,
            "=== cig #%d t=%.3f mode=%d url=%s K=%u (0x%08x) A.size=%u "
            "B.size=%u\n",
            seq, t, mode, url ? url : "(null)", K, K, A ? A->size : 0,
            B ? B->size : 0);
    fclose(f);
  }
  dump_bin("A", seq, A);
  dump_bin("B", seq, B);
  int rc = -999;
  if (real_cig)
    rc = real_cig(mode, url, K, A, B, cig, v);
  f = logf();
  if (f) {
    fprintf(f, "    rc=%d cig.size=%u\n", rc, cig ? cig->size : 0);
    fclose(f);
  }
  dump_bin("cig", seq, cig);
  return rc;
}

extern "C" int hook_get_step_2_data(const char *a, const char *udid,
                                    unsigned *anchor, bin_t *bin, void *v,
                                    void *cb)
{
  if (!real_step2)
    resolve();
  int rc = -999;
  if (real_step2)
    rc = real_step2(a, udid, anchor, bin, v, cb);
  pthread_mutex_lock(&g_mtx);
  int seq = ++g_seq;
  pthread_mutex_unlock(&g_mtx);
  FILE *f = logf();
  if (f) {
    fprintf(f,
            "=== step2 #%d t=%.3f a=%s udid=%s rc=%d anchor=%u (0x%08x) "
            "bin.size=%u\n",
            seq, now_s(), a ? a : "(null)", udid ? udid : "(null)", rc,
            anchor ? *anchor : 0, anchor ? *anchor : 0, bin ? bin->size : 0);
    fclose(f);
  }
  dump_bin("hostgrappa", seq, bin);
  return rc;
}
