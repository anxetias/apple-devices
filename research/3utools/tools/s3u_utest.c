/* Юнит-тест sync3u (БЕЗ устройства): фрейм, cig-area, dense-UDID,
 * декларация. Эталонные байты/структура — из server3u.py/gen_decl.py
 * (ветка 3utools-research). Результат декларации валидирует внешний
 * python (plistlib). Не входит в сборку приложения. */
const char *tr(const char *ru) { return ru; }
void logMessage(const char *format, ...) { (void)format; }

#include "sync3u.c"

#include <stdio.h>

static int nFail = 0;
static void expect(int ok, const char *name)
{
  printf("%-4s %s\n", ok ? "OK" : "FAIL", name);
  if (!ok)
    nFail++;
}

static void bufToHex(const unsigned char *p, size_t n, char *out)
{
  static const char hex[] = "0123456789abcdef";
  for (size_t i = 0; i < n; i++) {
    out[i * 2] = hex[p[i] >> 4];
    out[i * 2 + 1] = hex[p[i] & 0xf];
  }
  out[n * 2] = 0;
}

int main(void)
{
  char ud[25];
  size_t udLen = 0;
  expect(s3uUdidDense("00008030-001C3128119A402E", ud, &udLen) &&
             udLen == 24 && strcmp(ud, "00008030001C3128119A402E") == 0,
         "s3uUdidDense (с дефисами)");

  unsigned char area[28];
  putU32LE(area, 24);
  memcpy(area + 4, "00008030001C3128119A402E", 24);
  size_t flen = 0;
  unsigned char *f = s3uFrameBuild(S3U_CODE_STEP2, area, sizeof(area), &flen);
  expect(f && flen == 40, "s3uFrameBuild step2 (длина 40)");
  if (f) {
    char hexbuf[81];
    bufToHex(f, flen, hexbuf);
    expect(strcmp(hexbuf,
                  "91784635d264355e1c000000180000003030303038"
                  "30333030303143333132383131394134303245") == 0,
           "s3uFrameBuild step2 (байты == python-референс)");
    free(f);
  }

  guint32 K = 0x11223344;
  static const unsigned char A[84] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
    19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35,
    36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52,
    53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69,
    70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83,
  };
  static const unsigned char B[8] = { 'D', 'E', 'C', 'L', '!', 0, 1, 0 };
  size_t clen = 0;
  unsigned char *ca = s3uCigAreaBuild(K, A, sizeof(A), B, sizeof(B), &clen);
  expect(ca && clen == 104, "s3uCigAreaBuild (длина 104)");
  if (ca) {
    char hexbuf[209];
    bufToHex(ca, clen, hexbuf);
    expect(
        strcmp(hexbuf,
               "4433221154000000"
               "000102030405060708090a0b0c0d0e0f101112131415161718191a1b"
               "1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363"
               "738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152"
               "5308000000"
               "4445434c21000100") == 0,
        "s3uCigAreaBuild (байты == python-референс)");
    free(ca);
  }

  MedialibMeta m;
  memset(&m, 0, sizeof(m));
  m.title = g_strdup("UT Title");
  m.artist = g_strdup("UT Artist");
  m.album = g_strdup("UT Album");
  m.genre = g_strdup("UT Genre");
  m.duration_ms = 201978;
  m.track_number = 1;
  m.year = 0;
  m.bit_rate = 0; /* → дефолт 320, как в эталоне */
  m.has_cover = FALSE;
  size_t dlen = 0;
  GError *derr = NULL;
  unsigned char *decl =
      s3uBuildDeclaration(&m, 777300001250340, 677, &dlen, &derr);
  expect(decl && dlen > 400, "s3uBuildDeclaration (собралась)");
  if (decl) {
    FILE *fp = fopen("/tmp/opencode/decl_c.bin", "wb");
    if (fp) {
      fwrite(decl, 1, dlen, fp);
      fclose(fp);
    }
    free(decl);
  }
  g_clear_error(&derr);
  g_free(m.title);
  g_free(m.artist);
  g_free(m.album);
  g_free(m.genre);
  printf("итог: %s\n", nFail ? "ЕСТЬ FAIL" : "все ок");
  return nFail ? 1 : 0;
}

/* Заглушка: файлов не заливаем (модульный тест не выходит на AFC). */
int afcUploadFile(afc_client_t afc, const char *local, const char *remote)
{
  (void)afc; (void)local; (void)remote;
  return -1;
}
