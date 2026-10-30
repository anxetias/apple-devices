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
#include <string>
#include <vector>

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
                        std::vector<std::string> *,
                        int (*)(char *, char **));
typedef int (*auth_fn)(const char *, bin_t *, bin_t **,
                       std::vector<std::string> *,
                       int (*)(const char *, char **));
static cig_fn real_cig;
static step2_fn real_step2;
static auth_fn real_auth;

static const char MANGLED_CIG[] =
    "_Z18get_media_sync_cigiPKcjR5bin_tS2_S2_RSt6vectorINSt7__cxx1112basic_"
    "stringIcSt11char_traitsIcESaIcEEESaIS9_EE";
static const char MANGLED_STEP2[] =
    "_Z15get_step_2_dataPKcS0_RjR5bin_tRSt6vectorINSt7__cxx1112basic_string"
    "IcSt11char_traitsIcESaIcEEESaISA_EEPFiS0_PPcE";
static const char MANGLED_AUTH[] =
    "_Z20get_auth_server_dataPKcP8PackTypePS2_RSt6vectorINSt7__cxx1112basic"
    "_stringIcSt11char_traitsIcESaIcEEESaISA_EEPFiS0_PPcE";

static void resolve(void)
{
  real_cig = (cig_fn)dlsym(RTLD_NEXT, MANGLED_CIG);
  real_step2 = (step2_fn)dlsym(RTLD_NEXT, MANGLED_STEP2);
  real_auth = (auth_fn)dlsym(RTLD_NEXT, MANGLED_AUTH);
  if (!real_cig || !real_step2 || !real_auth) {
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
      if (!real_auth)
        real_auth = (auth_fn)dlsym(h, MANGLED_AUTH);
    }
  }
}

static void log_vec(FILE *f, const std::vector<std::string> &vec)
{
  size_t n = vec.size();
  fprintf(f, "    vec=%zu\n", n);
  for (size_t i = 0; i < n && i < 8; i++)
    fprintf(f, "    vec[%zu]=%.200s\n", i, vec[i].c_str());
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
                                       bin_t *, bin_t *,
                                       std::vector<std::string> &)
    asm("_Z18get_media_sync_cigiPKcjR5bin_tS2_S2_RSt6vectorINSt7__cxx1112"
        "basic_stringIcSt11char_traitsIcESaIcEEESaIS9_EE");
extern "C" int hook_get_step_2_data(const char *, const char *, unsigned *,
                                    bin_t *, std::vector<std::string> &,
                                    int (*)(char *, char **))
    asm("_Z15get_step_2_dataPKcS0_RjR5bin_tRSt6vectorINSt7__cxx1112basic_"
        "stringIcSt11char_traitsIcESaIcEEESaISA_EEPFiS0_PPcE");

extern "C" int hook_get_media_sync_cig(int mode, const char *url, unsigned K,
                                       bin_t *A, bin_t *B, bin_t *cig,
                                       std::vector<std::string> &vec)
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
  f = logf();
  if (f) {
    fprintf(f, "    vec_in=%zu\n", vec.size());
    log_vec(f, vec);
    fclose(f);
  }
  int rc = -999;
  if (real_cig)
    rc = real_cig(mode, url, K, A, B, cig, &vec);
  f = logf();
  if (f) {
    fprintf(f, "    rc=%d cig.size=%u\n", rc, cig ? cig->size : 0);
    log_vec(f, vec);
    fclose(f);
  }
  dump_bin("cig", seq, cig);
  return rc;
}

extern "C" int hook_get_step_2_data(const char *a, const char *udid,
                                    unsigned *anchor, bin_t *bin,
                                    std::vector<std::string> &vec,
                                    int (*cb)(char *, char **))
{
  if (!real_step2)
    resolve();
  int rc = -999;
  if (real_step2)
    rc = real_step2(a, udid, anchor, bin, &vec, cb);
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
    log_vec(f, vec);
    fclose(f);
  }
  dump_bin("hostgrappa", seq, bin);
  return rc;
}

static void hexdump(FILE *f, const void *p, size_t n)
{
  const unsigned char *b = (const unsigned char *)p;
  fprintf(f, "    @%p:", p);
  for (size_t i = 0; i < n; i++)
    fprintf(f, " %02x", b[i]);
  fprintf(f, "\n");
}

static void dump_vec_file(int seq, const std::vector<std::string> &vec)
{
  if (vec.empty())
    return;
  char path[512];
  snprintf(path, sizeof(path), "%s/hook_vec_%d.txt", g_dir, seq);
  int fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, 0644);
  if (fd < 0)
    return;
  for (size_t i = 0; i < vec.size(); i++) {
    std::string s = vec[i];
    s += "\n";
    ssize_t rc = write(fd, s.data(), s.size());
    (void)rc;
  }
  close(fd);
}

/* PackType может иметь другую раскладку, чем bin_t cig-пути; пробуем обе
   (size@0,data@8 и data@0,size@8) + сырой hexdump заголовка в лог */
static void dump_smart(const char *kind, int seq, const void *p)
{
  if (!p || (uintptr_t)p < 0x1000)
    return;
  FILE *f = logf();
  if (f) {
    hexdump(f, p, 48);
    fclose(f);
  }
  const bin_t *b = (const bin_t *)p;
  char path[512];
  /* раскладка 1: u32 size @0, void* data @8 */
  if (b->size > 0 && b->size < (1u << 22) && b->data &&
      ((uintptr_t)b->data & 3) == 0) {
    snprintf(path, sizeof(path), "%s/hook_%s_%d.bin", g_dir, kind, seq);
    int fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd >= 0) {
      ssize_t rc = write(fd, b->data, b->size);
      (void)rc;
      close(fd);
    }
  }
  /* раскладка 2: void* data @0, u32 size @8 */
  uint64_t d2 = *(const uint64_t *)p;
  uint32_t s2 = *(const uint32_t *)((const char *)p + 8);
  if (s2 > 0 && s2 < (1u << 22) && d2 > 0x10000 && ((d2 & 3) == 0)) {
    snprintf(path, sizeof(path), "%s/hook_%s_alt_%d.bin", g_dir, kind, seq);
    int fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd >= 0) {
      ssize_t rc = write(fd, (const void *)d2, s2);
      (void)rc;
      close(fd);
    }
  }
  /* раскладка 3: сырой фрейм сервера inline:
     [u32 magic 0x35467891][u32 ...][u32 len@12][payload@16] */
  uint32_t m0 = *(const uint32_t *)p;
  if (m0 == 0x35467891u) {
    uint32_t flen = *(const uint32_t *)((const char *)p + 12);
    if (flen < (1u << 22)) {
      snprintf(path, sizeof(path), "%s/hook_%s_frame_%d.bin", g_dir, kind,
               seq);
      int fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, 0644);
      if (fd >= 0) {
        ssize_t rc = write(fd, p, 16 + (size_t)flen);
        (void)rc;
        close(fd);
      }
    }
  }
  /* раскладка 4: полный фрейм: u32 area_len @8 ⇒ [16 + area_len] байт
     (запросы: payload_len; ответы: payload + хвост) */
  uint32_t a8 = *(const uint32_t *)((const char *)p + 8);
  if (a8 >= 4 && a8 < (1u << 22)) {
    snprintf(path, sizeof(path), "%s/hook_%s_full_%d.bin", g_dir, kind, seq);
    int fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd >= 0) {
      ssize_t rc = write(fd, p, 16 + (size_t)a8);
      (void)rc;
      close(fd);
    }
  }
}
extern "C" int hook_get_auth_server_data(const char *, bin_t *, bin_t **,
                                         std::vector<std::string> &,
                                         int (*)(const char *, char **))
    asm("_Z20get_auth_server_dataPKcP8PackTypePS2_RSt6vectorINSt7__cxx1112"
        "basic_stringIcSt11char_traitsIcESaIcEEESaISA_EEPFiS0_PPcE");

/* get_auth_server_data(url, req, resp, vec, cb) — через неё идут оба
   серверных POST (step2 и cig): точные тела запроса/ответа сервера 3u
   для минимального HTTP-клиента */
extern "C" int hook_get_auth_server_data(const char *, bin_t *, bin_t **,
                                         std::vector<std::string> &,
                                         int (*)(const char *, char **))
    asm("_Z20get_auth_server_dataPKcP8PackTypePS2_RSt6vectorINSt7__cxx1112"
        "basic_stringIcSt11char_traitsIcESaIcEEESaISA_EEPFiS0_PPcE");

extern "C" int hook_get_auth_server_data(const char *url, bin_t *req,
                                         bin_t **resp,
                                         std::vector<std::string> &vec,
                                         int (*cb)(const char *, char **))
{
  if (!real_auth)
    resolve();
  pthread_mutex_lock(&g_mtx);
  int seq = ++g_seq;
  double t = now_s();
  pthread_mutex_unlock(&g_mtx);
  dump_vec_file(seq, vec);
  FILE *f = logf();
  if (f) {
    fprintf(f, "=== auth #%d t=%.3f url=%s req=%p size=%u\n", seq, t,
            url ? url : "(null)", (void *)req, req ? req->size : 0);
    hexdump(f, req, req ? 48 : 0);
    fprintf(f, "    vec=%zu\n", vec.size());
    log_vec(f, vec);
    fclose(f);
  }
  dump_smart("authreq", seq, req);
  int rc = -999;
  if (real_auth)
    rc = real_auth(url, req, resp, &vec, cb);
  bin_t *r = resp ? *resp : (bin_t *)0;
  f = logf();
  if (f) {
    fprintf(f, "    rc=%d resp=%p size=%u\n", rc, (void *)r, r ? r->size : 0);
    hexdump(f, r, r ? 48 : 0);
    fclose(f);
  }
  dump_smart("authresp", seq, r);
  return rc;
}

/* ============ curl-хуки: точный HTTP на проводе ============ */
/* CURLOPT-номера (из disasm get_auth_server_data):
   10002 URL, 10015 POSTFIELDS, 10009 WRITEDATA, 60 POSTFIELDSIZE,
   10018 USERAGENT, 10023 HTTPHEADER, 10135 COOKIELIST,
   20011 WRITEFUNCTION, 10081 CRLF(64=SSL_VERIFYPEER? нет: 64=0x40) */

typedef void CURLp;
typedef struct curl_slist curl_slist_t;
extern "C" struct curl_slist *hook_slist_append(struct curl_slist *, const char *)
    asm("curl_slist_append");
extern "C" int hook_setopt(CURLp *, unsigned, char *a)
    asm("curl_easy_setopt");
extern "C" CURLp *hook_curl_easy_init(void)
    asm("curl_easy_init");

static FILE *curl_log(void)
{
  return logf();
}

static void curl_dump_blob(unsigned opt, const void *p, size_t n)
{
  char path[512];
  int fd;
  pthread_mutex_lock(&g_mtx);
  int seq2 = ++g_seq;
  pthread_mutex_unlock(&g_mtx);
  snprintf(path, sizeof(path), "%s/hook_curl_%u_%d.bin", g_dir, opt, seq2);
  fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, 0644);
  if (fd >= 0) {
    ssize_t rc = p ? write(fd, p, n) : 0;
    (void)rc;
    close(fd);
  }
  FILE *f = logf();
  if (f) {
    fprintf(f, "### curl opt=%u seq=%d size=%zu file=%s\n", opt, seq2, n,
            path);
    fclose(f);
  }
}

extern "C" struct curl_slist *hook_slist_append(struct curl_slist *list,
                                                const char *data)
{
  if (data) {
    FILE *f = curl_log();
    if (f) {
      fprintf(f, "### slist_append: %.300s\n", data);
      fclose(f);
    }
  }
  typedef struct curl_slist *(*fn_t)(struct curl_slist *, const char *);
  static fn_t real;
  if (!real) {
    real = (fn_t)dlsym(RTLD_NEXT, "curl_slist_append");
    if (!real) {
      void *h = dlopen("libcurl.so.4", RTLD_NOW);
      if (h)
        real = (fn_t)dlsym(h, "curl_slist_append");
    }
  }
  return real ? real(list, data) : list;
}

extern "C" int hook_setopt(CURLp *h, unsigned opt, char *a)
{
  /* ловим только строковые/блочные опции, остальное пропускаем */
  if (opt == 10002 || opt == 10015 || opt == 10018 || opt == 10135) {
    FILE *f = curl_log();
    if (f) {
      fprintf(f, "### opt=%u val=%.300s\n", opt, a ? a : "(null)");
      fclose(f);
    }
    if (opt == 10015 && a) {
      /* тело; окончательную длину даёт POSTFIELDSIZE (60) ниже */
      curl_dump_blob(opt, a, 4096);
    }
  }
  typedef int (*fn_t)(CURLp *, unsigned, ...);
  static fn_t real_setopt;
  if (!real_setopt) {
    real_setopt = (fn_t)dlsym(RTLD_NEXT, "curl_easy_setopt");
    if (!real_setopt) {
      void *hl = dlopen("libcurl.so.4", RTLD_NOW);
      if (hl)
        real_setopt = (fn_t)dlsym(hl, "curl_easy_setopt");
    }
  }
  if (real_setopt) {
    if (opt == 60)
      return real_setopt(h, opt, (long)(intptr_t)a);
    return real_setopt(h, opt, a);
  }
  return 43; /* CURLE_BAD_FUNCTION_ARGUMENT */
}
