#include "afcUtils.h"
#include "application.h"

#include <libimobiledevice/afc.h>
#include <glib.h>
#include <glib/gstdio.h>
#include <stdio.h>
#include <string.h>
#include <tag_c.h>

/* === afcUtils.c === */

/* Сеанс AFC: определение структуры из deviceScanner.h. */
struct AfcSession {
  idevice_t device;
  lockdownd_client_t lockdown;
  lockdownd_service_descriptor_t svc;
  afc_client_t afc;
};

void afcSessionClose(AfcSession *s)
{
  if (!s)
    return;
  if (s->afc)
    afc_client_free(s->afc);
  if (s->svc)
    lockdownd_service_descriptor_free(s->svc);
  if (s->lockdown)
    lockdownd_client_free(s->lockdown);
  if (s->device)
    idevice_free(s->device);
  memset(s, 0, sizeof(*s));
}

int afcSessionOpen(AfcSession *s, const char *udid)
{
  memset(s, 0, sizeof(*s));

  if (idevice_new(&s->device, udid) != IDEVICE_E_SUCCESS)
    return -1;
  if (lockdownd_client_new_with_handshake(s->device, &s->lockdown,
                                          "AppleDeviceManager") != LOCKDOWN_E_SUCCESS) {
    afcSessionClose(s);
    return -1;
  }
  if (lockdownd_start_service(s->lockdown, "com.apple.afc", &s->svc) != LOCKDOWN_E_SUCCESS ||
      afc_client_new(s->device, s->svc, &s->afc) != AFC_E_SUCCESS) {
    afcSessionClose(s);
    return -1;
  }
  return 0;
}

/* Скачивает файл с устройства в локальный путь. 0 — успех. */
int afcDownloadFile(afc_client_t afc, const char *remote, const char *local)
{
  uint64_t handle = 0;
  if (afc_file_open(afc, remote, AFC_FOPEN_RDONLY, &handle) != AFC_E_SUCCESS)
    return -1;

  FILE *f = fopen(local, "wb");
  if (!f) {
    afc_file_close(afc, handle);
    return -1;
  }

  char buf[65536];
  uint32_t got = 0;
  int rc = 0;
  while (afc_file_read(afc, handle, buf, sizeof buf, &got) == AFC_E_SUCCESS && got > 0) {
    if (fwrite(buf, 1, got, f) != got) {
      rc = -1;
      break;
    }
  }
  if (ferror(f))
    rc = -1;

  fclose(f);
  afc_file_close(afc, handle);
  return rc;
}

/* Загружает локальный файл на устройство (каталог должен существовать). 0 — успех. */
int afcUploadFile(afc_client_t afc, const char *local, const char *remote)
{
  FILE *f = fopen(local, "rb");
  if (!f)
    return -1;

  uint64_t handle = 0;
  if (afc_file_open(afc, remote, AFC_FOPEN_WRONLY, &handle) != AFC_E_SUCCESS) {
    fclose(f);
    return -1;
  }

  char buf[65536];
  size_t n;
  int rc = 0;
  while ((n = fread(buf, 1, sizeof buf, f)) > 0) {
    uint32_t written = 0;
    if (afc_file_write(afc, handle, buf, (uint32_t)n, &written) != AFC_E_SUCCESS ||
        written != n) {
      rc = -1;
      break;
    }
  }

  fclose(f);
  afc_file_close(afc, handle);
  return rc;
}

gboolean hasAudioExtension(const char *name)
{
  char *lower = g_ascii_strdown(name, -1);
  gboolean ok = FALSE;
  /* AUDIO_EXTENSIONS определено в application.c; дублируем список здесь
   * чтобы afcUtils не зависел от application.c. Для единообразия список
   * совпадает с тем, что в application.c. */
  static const char *const audio_extensions[] = {
    ".mp3", ".m4a", ".aac", ".flac", ".wav", ".ogg", ".oga", ".opus",
    ".aiff", ".aif", ".wma", NULL
  };
  for (int i = 0; audio_extensions[i]; i++) {
    if (g_str_has_suffix(lower, audio_extensions[i])) {
      ok = TRUE;
      break;
    }
  }
  g_free(lower);
  return ok;
}

/* Рекурсивно собирает пути аудиофайлов в out (строки с владением g_free). */
void afcCollectAudio(afc_client_t afc, const char *dir, GPtrArray *out)
{
  char **entries = NULL;
  if (afc_read_directory(afc, dir, &entries) != AFC_E_SUCCESS || !entries)
    return;

  for (char **e = entries; *e && *e[0]; e++) {
    if (g_strcmp0(*e, ".") == 0 || g_strcmp0(*e, "..") == 0)
      continue;

    char *path = g_build_filename(dir, *e, NULL);
    char **fi = NULL;
    gboolean is_dir = FALSE;

    if (afc_get_file_info(afc, path, &fi) == AFC_E_SUCCESS && fi) {
      for (char **kv = fi; kv[0] && kv[1]; kv += 2) {
        if (g_strcmp0(kv[0], "st_ifmt") == 0) {
          is_dir = (g_strcmp0(kv[1], "S_IFDIR") == 0 ||
                    g_strcmp0(kv[1], "Directory") == 0);
          break;
        }
      }
      afc_dictionary_free(fi);
    }

    if (is_dir) {
      afcCollectAudio(afc, path, out);
      g_free(path);
    } else if (hasAudioExtension(*e)) {
      g_ptr_array_add(out, path);
    } else {
      g_free(path);
    }
  }

  afc_dictionary_free(entries);
}

/* --- Открытый AFC-хэндл для частичного чтения --- */

/* Рекурсивный размер каталога через AFC (только чтение). Служебные
 * каталоги «.»/«..» пропускаются; max_depth ограничивает вложенность. */
guint64
afcDirSize(afc_client_t afc, const char *path, int max_depth)
{
  guint64 total = 0;
  char **entries = NULL;
  if (afc_read_directory(afc, path, &entries) != AFC_E_SUCCESS || !entries)
    return 0;

  for (char **e = entries; *e && *e[0]; e++) {
    if (g_strcmp0(*e, ".") == 0 || g_strcmp0(*e, "..") == 0)
      continue;

    char *full = g_build_filename(path, *e, NULL);
    char **fi = NULL;

    if (afc_get_file_info(afc, full, &fi) == AFC_E_SUCCESS && fi) {
      const char *size = NULL;
      const char *ftype = NULL;
      for (char **kv = fi; kv[0] && kv[1]; kv += 2) {
        if (g_strcmp0(kv[0], "st_size") == 0)
          size = kv[1];
        else if (g_strcmp0(kv[0], "st_ifmt") == 0)
          ftype = kv[1];
      }

      if (ftype && (g_strcmp0(ftype, "S_IFDIR") == 0 ||
                    g_strcmp0(ftype, "Directory") == 0)) {
        if (max_depth > 0)
          total += afcDirSize(afc, full, max_depth - 1);
      } else if (size) {
        total += g_ascii_strtoull(size, NULL, 10);
      }
      afc_dictionary_free(fi);
    }
    g_free(full);
  }

  afc_dictionary_free(entries);
  return total;
}

int afcFileOpenH(AfcFile *f, afc_client_t afc, const char *path)
{
  f->afc = afc;
  f->bytes = 0;
  return afc_file_open(afc, path, AFC_FOPEN_RDONLY, &f->handle) == AFC_E_SUCCESS ? 0 : -1;
}

void afcFileCloseH(AfcFile *f)
{
  if (f->handle) {
    afc_file_close(f->afc, f->handle);
    f->handle = 0;
  }
}

int afcReadRangeH(AfcFile *f, uint64_t offset, uint32_t len, char *buf,
                  uint32_t *got)
{
  if (afc_file_seek(f->afc, f->handle, (int64_t)offset, SEEK_SET) != AFC_E_SUCCESS)
    return -1;

  uint32_t total = 0;
  while (total < len) {
    uint32_t chunk = 0;
    if (afc_file_read(f->afc, f->handle, buf + total, len - total, &chunk) != AFC_E_SUCCESS) {
      if (total == 0)
        return -1;
      break;
    }
    if (chunk == 0)
      break;
    total += chunk;
  }
  *got = total;
  f->bytes += total;
  return 0;
}

/* --- Разбор ID3v2 / MPEG / MP4 / FLAC для умного частичного скачивания --- */

guint32 id3v2TotalSize(const char *buf, guint32 n)
{
  if (n < 10 || memcmp(buf, "ID3", 3) != 0)
    return 0;
  guint32 size = 10 + (((guint32)(buf[6] & 0x7F) << 21) | ((guint32)(buf[7] & 0x7F) << 14) |
                       ((guint32)(buf[8] & 0x7F) << 7) | (guint32)(buf[9] & 0x7F));
  if (buf[5] & 0x10)
    size += 10;
  return size;
}

const char *fileExtLower(const char *path)
{
  const char *dot = strrchr(path, '.');
  if (!dot)
    return NULL;
  static char ext[16];
  char *lower = g_ascii_strdown(dot, -1);
  g_strlcpy(ext, lower, sizeof ext);
  g_free(lower);
  return ext;
}

static const guint16 mpegBitrate[2][3][15] = {
  { // MPEG1
    {0,32,64,96,128,160,192,224,256,288,320,352,384,416,448},
    {0,32,48,56,64,80,96,112,128,160,192,224,256,320,384},
    {0,32,40,48,56,64,80,96,112,128,160,192,224,256,320},
  },
  { // MPEG2 / 2.5
    {0,32,48,56,64,80,96,112,128,144,160,176,192,224,256},
    {0,8,16,24,32,40,48,56,64,80,96,112,128,144,160},
    {0,8,16,24,32,40,48,56,64,80,96,112,128,144,160},
  },
};
static const guint32 mpegSamplerate[3][4] = {
  {44100,48000,32000,0},
  {22050,24000,16000,0},
  {11025,12000,8000,0},
};

guint32 mpegFirstFrame(const char *buf, guint32 from, guint32 len,
                       char *frame, guint32 frame_cap)
{
  if (from + 4 > len)
    return 0;

  for (guint32 off = from; off + 4 <= len; off++) {
    const guchar *b = (const guchar *)buf + off;
    if (b[0] != 0xFF || (b[1] & 0xE0) != 0xE0)
      continue;

    guint ver_bits = (b[1] >> 3) & 3;
    guint layer_bits = (b[1] >> 1) & 3;
    guint br_idx = (b[2] >> 4) & 0xF;
    guint sr_idx = (b[2] >> 2) & 3;
    if (ver_bits == 1 || layer_bits == 0 || br_idx == 0 || br_idx == 15 || sr_idx == 3)
      continue;

    guint br_row = ver_bits == 3 ? 0 : 1;
    guint br_col = 3 - layer_bits;
    guint sr_row = ver_bits == 3 ? 0 : (ver_bits == 2 ? 1 : 2);
    guint bitrate = mpegBitrate[br_row][br_col][br_idx];
    guint32 sr = mpegSamplerate[sr_row][sr_idx];
    if (bitrate == 0 || sr == 0)
      continue;

    guint32 samples = layer_bits == 1 ? (ver_bits == 3 ? 1152 : 576)
                      : layer_bits == 2 ? 1152 : 384;
    guint32 slot = layer_bits == 3 ? 4 : 1;
    guint32 pad = (b[2] >> 1) & 1;
    guint64 frame_len = (guint64)samples / 8 * bitrate * 1000 / sr + (guint64)pad * slot;
    if (frame_len < 24 || off + frame_len > len || frame_len > frame_cap)
      continue;

    memcpy(frame, buf + off, (size_t)frame_len);
    return (guint32)frame_len;
  }
  return 0;
}

/* MP3: ID3v2 + первые килобайты аудио + реплики первого фрейма + ID3v1. */
int musicBuildMp3(AfcFile *f, const char *path, guint64 size, FILE *out)
{
  (void)path;
  char head[10];
  uint32_t got = 0;
  if (afcReadRangeH(f, 0, 10, head, &got) != 0 || got < 10)
    return -1;

  guint32 id3 = id3v2TotalSize(head, 10);
  guint64 head_len = id3 ? (guint64)id3 + 8192 : 8192;
  if (head_len > size)
    head_len = size;

  char *buf = g_malloc(head_len);
  if (afcReadRangeH(f, 0, (uint32_t)head_len, buf, &got) != 0 || got == 0) {
    g_free(buf);
    return -1;
  }
  guint32 head_got = got;
  fwrite(buf, 1, got, out);

  char frame[4096];
  guint32 frame_len = 0;
  if (head_got > 4)
    frame_len = mpegFirstFrame(buf, id3 < head_got ? id3 : 0, head_got,
                               frame, sizeof frame);

  char tail[128];
  guint64 rest = size > head_got ? size - head_got : 0;
  gboolean have_tail = rest >= 128 &&
                       afcReadRangeH(f, size - 128, 128, tail, &got) == 0 &&
                       got == 128;
  if (have_tail)
    rest -= 128;

  while (frame_len > 0 && rest >= frame_len) {
    fwrite(frame, 1, frame_len, out);
    rest -= frame_len;
  }
  static char zeros[1 << 16];
  while (rest > 0) {
    size_t chunk = rest < sizeof zeros ? (size_t)rest : sizeof zeros;
    fwrite(zeros, 1, chunk, out);
    rest -= chunk;
  }
  if (have_tail)
    fwrite(tail, 1, 128, out);
  g_free(buf);
  return 0;
}

guint64 m4aScanAtoms(const char *buf, guint32 len, guint64 base,
                     gint64 *moov_off, gint64 *moov_size,
                     gint64 *mdat_off, gint64 *mdat_size)
{
  guint64 pos = 0;
  while (pos + 8 <= len) {
    guint64 asize = (guint32)(((guchar)buf[pos] << 24) | ((guchar)buf[pos + 1] << 16) |
                              ((guchar)buf[pos + 2] << 8) | (guchar)buf[pos + 3]);
    const char *type = buf + pos + 4;
    guint64 hdr = 8;
    if (asize == 1) {
      if (pos + 16 > len)
        break;
      asize = ((guint64)(guchar)buf[pos + 8] << 56) | ((guint64)(guchar)buf[pos + 9] << 48) |
              ((guint64)(guchar)buf[pos + 10] << 40) | ((guint64)(guchar)buf[pos + 11] << 32) |
              ((guint64)(guchar)buf[pos + 12] << 24) | ((guint64)(guchar)buf[pos + 13] << 16) |
              ((guint64)(guchar)buf[pos + 14] << 8) | (guint64)(guchar)buf[pos + 15];
      hdr = 16;
    } else if (asize == 0) {
      if (!memcmp(type, "mdat", 4) && *mdat_off < 0) {
        *mdat_off = (gint64)(base + pos);
        *mdat_size = -1;
      }
      break;
    }
    if (asize < hdr)
      break;

    if (!memcmp(type, "moov", 4) && *moov_off < 0) {
      *moov_off = (gint64)(base + pos);
      *moov_size = (gint64)asize;
    } else if (!memcmp(type, "mdat", 4) && *mdat_off < 0) {
      *mdat_off = (gint64)(base + pos);
      *mdat_size = (gint64)asize;
    }
    pos += asize;
  }
  return base + pos;
}

int m4aWriteRange(AfcFile *f, const char *head, guint64 head_len,
                  guint64 start, guint64 end, FILE *out)
{
  if (end <= start)
    return 0;

  guint64 from_head = end < head_len ? end : head_len;
  if (from_head > start) {
    fwrite(head + start, 1, (size_t)(from_head - start), out);
    start = from_head;
  }
  if (end <= start)
    return 0;

  guint64 len = end - start;
  char *buf = g_malloc(len);
  uint32_t got = 0;
  if (afcReadRangeH(f, start, (uint32_t)len, buf, &got) != 0 || got != len) {
    g_free(buf);
    return -1;
  }
  fwrite(buf, 1, got, out);
  g_free(buf);
  return 0;
}

int musicBuildM4a(AfcFile *f, const char *path, guint64 size, FILE *out)
{
  (void)path;
  const guint32 head_cap = 128 * 1024;
  guint64 head_len = size < head_cap ? size : head_cap;
  char *head = g_malloc(head_len);
  uint32_t got = 0;
  if (afcReadRangeH(f, 0, (uint32_t)head_len, head, &got) != 0 || got < 16) {
    g_free(head);
    return -1;
  }
  head_len = got;

  gint64 moov_off = -1, moov_size = -1, mdat_off = -1, mdat_size = -1;
  m4aScanAtoms(head, (guint32)head_len, 0, &moov_off, &moov_size, &mdat_off, &mdat_size);

  if (mdat_off >= 0 && mdat_size < 0)
    mdat_size = (gint64)size - mdat_off;

  if (moov_off < 0 && mdat_off >= 0 && mdat_size > 0) {
    guint64 off = (guint64)mdat_off + (guint64)mdat_size;
    for (int i = 0; i < 16 && off + 8 <= size; i++) {
      char ah[16];
      if (afcReadRangeH(f, off, 16, ah, &got) != 0 || got < 8)
        break;
      guint64 asize = (guint32)(((guchar)ah[0] << 24) | ((guchar)ah[1] << 16) |
                                ((guchar)ah[2] << 8) | (guchar)ah[3]);
      guint64 hdr = 8;
      if (asize == 1) {
        if (got < 16)
          break;
        asize = ((guint64)(guchar)ah[8] << 56) | ((guint64)(guchar)ah[9] << 48) |
                ((guint64)(guchar)ah[10] << 40) | ((guint64)(guchar)ah[11] << 32) |
                ((guint64)(guchar)ah[12] << 24) | ((guint64)(guchar)ah[13] << 16) |
                ((guint64)(guchar)ah[14] << 8) | (guint64)(guchar)ah[15];
        hdr = 16;
      }
      if (asize < hdr)
        break;
      if (!memcmp(ah + 4, "moov", 4)) {
        moov_off = (gint64)off;
        moov_size = (gint64)asize;
        break;
      }
      off += asize;
    }
  }

  if (moov_off < 0 || moov_size <= 0 ||
      (guint64)moov_off + (guint64)moov_size > size) {
    g_free(head);
    return 1;
  }

  guint64 moov_end = (guint64)moov_off + (guint64)moov_size;
  gboolean mdat_first = mdat_off >= 0 && (guint64)mdat_off < (guint64)moov_off;

  guint64 prefix_end = mdat_first ? (guint64)mdat_off : (guint64)moov_off;
  if (m4aWriteRange(f, head, head_len, 0, prefix_end, out) != 0) {
    g_free(head);
    return -1;
  }

  static const char fake_mdat[8] = { 0, 0, 0, 8, 'm', 'd', 'a', 't' };
  if (mdat_first)
    fwrite(fake_mdat, 1, 8, out);

  if (m4aWriteRange(f, head, head_len, (guint64)moov_off, moov_end, out) != 0) {
    g_free(head);
    return -1;
  }

  if (!mdat_first && mdat_off >= 0)
    fwrite(fake_mdat, 1, 8, out);

  g_free(head);
  return 0;
}

int musicBuildFlac(AfcFile *f, const char *path, guint64 size, FILE *out)
{
  (void)path;
  char magic[4];
  uint32_t got = 0;
  if (afcReadRangeH(f, 0, 4, magic, &got) != 0 || got < 4 ||
      memcmp(magic, "fLaC", 4) != 0)
    return 1;
  fwrite(magic, 1, 4, out);

  guint64 off = 4;
  for (int i = 0; i < 256 && off + 4 <= size; i++) {
    char bh[4];
    if (afcReadRangeH(f, off, 4, bh, &got) != 0 || got < 4)
      return -1;
    gboolean last = bh[0] & 0x80;
    guint32 blen = ((guint32)(guchar)bh[1] << 16) | ((guint32)(guchar)bh[2] << 8) |
                   (guint32)(guchar)bh[3];
    if (off + 4 + blen > size)
      break;
    fwrite(bh, 1, 4, out);

    char *block = g_malloc(blen ? blen : 1);
    if (afcReadRangeH(f, off + 4, blen, block, &got) != 0 || got != blen) {
      g_free(block);
      return -1;
    }
    fwrite(block, 1, got, out);
    g_free(block);
    off += 4 + blen;

    if (blen > 16 * 1024 * 1024)
      return 1;
    if (last)
      break;
  }
  return 0;
}

int musicPartialDownload(afc_client_t afc, const char *path, guint64 size,
                         const char *tmp_path, guint64 *bytes_out)
{
  if (bytes_out)
    *bytes_out = 0;
  if (size == 0)
    return 1;

  const char *ext = fileExtLower(path);
  if (!ext)
    return 1;

  AfcFile f;
  if (afcFileOpenH(&f, afc, path) != 0)
    return -1;

  FILE *out = fopen(tmp_path, "wb");
  if (!out) {
    afcFileCloseH(&f);
    return -1;
  }

  int rc;
  if (g_strcmp0(ext, ".mp3") == 0)
    rc = musicBuildMp3(&f, path, size, out);
  else if (g_strcmp0(ext, ".m4a") == 0 || g_strcmp0(ext, ".m4b") == 0 ||
           g_strcmp0(ext, ".m4p") == 0 || g_strcmp0(ext, ".mp4") == 0)
    rc = musicBuildM4a(&f, path, size, out);
  else if (g_strcmp0(ext, ".flac") == 0)
    rc = musicBuildFlac(&f, path, size, out);
  else
    rc = 1;

  fclose(out);
  afcFileCloseH(&f);
  if (bytes_out)
    *bytes_out = f.bytes;
  if (rc != 0)
    g_unlink(tmp_path);
  return rc;
}

void readTrackTags(MusicTrack *t, const char *localPath)
{
  TagLib_File *tf = taglib_file_new(localPath);
  if (!tf)
    return;

  TagLib_Tag *tag = taglib_file_tag(tf);
  if (tag) {
    g_free(t->title);
    t->title = g_strdup(taglib_tag_title(tag));
    g_free(t->artist);
    t->artist = g_strdup(taglib_tag_artist(tag));
    g_free(t->album);
    t->album = g_strdup(taglib_tag_album(tag));
  }

  const TagLib_AudioProperties *ap = taglib_file_audioproperties(tf);
  if (ap)
    t->duration = (guint)taglib_audioproperties_length(ap);

  TagLib_Complex_Property_Attribute ***props = taglib_complex_property_get(tf, "PICTURE");
  if (props) {
    TagLib_Complex_Property_Picture_Data pic;
    taglib_picture_from_complex_property(props, &pic);
    if (pic.data && pic.size > 0) {
      if (t->cover)
        g_bytes_unref(t->cover);
      t->cover = g_bytes_new(pic.data, pic.size);
      g_free(t->cover_mime);
      t->cover_mime = g_strdup(pic.mimeType);
    }
    taglib_complex_property_free(props);
  }

  taglib_tag_free_strings();
  taglib_file_free(tf);
}
