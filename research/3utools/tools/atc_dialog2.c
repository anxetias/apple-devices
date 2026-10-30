/* atc_dialog2.c — репликация atc-диалога 3uTools, шаг 2: ручной
   LE32-фрейминг (property_list_service непригоден — ждёт BE).
   Диалог: пропуск уведомлений (Capabilities/InstalledAssets/AssetMetrics)
   → на SyncAllowed отправить RequestingSync (Grappa хоста = ПУСТОЙ блоб —
   эксперимент «неизвестность №1а») → ждать ReadyForSync (сохранить
   Params.DeviceInfo.Grappa) → FinishedSyncingMetadata → слушать и
   печатать всё 60 с. AFC-записей НЕТ. Запуск: atc_dialog2 [udid] */
#include <libimobiledevice/libimobiledevice.h>
#include <libimobiledevice/lockdown.h>
#include <libimobiledevice/afc.h>
#include <plist/plist.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static unsigned char empty_grappa[1] = {0};

static double now_s(void)
{
  struct timespec ts;
  clock_gettime(CLOCK_MONOTONIC, &ts);
  return (double)ts.tv_sec + (double)ts.tv_nsec / 1e9;
}

static char *get_str(plist_t pl, const char *key)
{
  plist_t n = pl ? plist_dict_get_item(pl, key) : NULL;
  char *s = NULL;
  if (n && plist_get_node_type(n) == PLIST_STRING)
    plist_get_string_val(n, &s);
  return s;
}

static void dump_plist(const char *tag, plist_t pl)
{
  char *xml = NULL;
  uint32_t len = 0;
  printf("---- %s ----\n", tag);
  if (pl && plist_to_xml(pl, &xml, &len) == PLIST_ERR_SUCCESS && xml) {
    uint32_t show = len < 3000 ? len : 3000;
    fwrite(xml, 1, show, stdout);
    if (len > show)
      printf("\n... (обрезано, всего %u)\n", len);
    free(xml);
  } else
    printf("<нет xml>\n");
  fflush(stdout);
}

/* приём сообщения: LE32-префикс + bplist; 0=ок, -1=тайм-бюджет, -2=ошибка */
static int recv_msg(idevice_connection_t conn, plist_t *out, unsigned tmo_ms,
                    double deadline)
{
  unsigned char b4[4] = {0};
  uint32_t got = 0;
  *out = NULL;
  for (;;) {
    double left = deadline - now_s();
    if (left <= 0)
      return -1;
    unsigned t = (tmo_ms < (unsigned)(left * 1000)) ? tmo_ms
                                                   : (unsigned)(left * 1000);
    idevice_error_t r =
        idevice_connection_receive_timeout(conn, (char *)b4, 4, &got, t);
    if (r == IDEVICE_E_SUCCESS && got == 4)
      break;
    if (r == IDEVICE_E_SUCCESS && got == 0)
      continue;
    printf("  префикс: rc=%d got=%u\n", (int)r, got);
    return -2;
  }
  uint32_t len = (uint32_t)b4[0] | ((uint32_t)b4[1] << 8) |
                 ((uint32_t)b4[2] << 16) | ((uint32_t)b4[3] << 24);
  if (len == 0 || len > 8u * 1024u * 1024u) {
    printf("  префикс мусор: %02x %02x %02x %02x\n", b4[0], b4[1], b4[2],
           b4[3]);
    return -2;
  }
  unsigned char *body = malloc(len);
  uint32_t got2 = 0;
  double left = deadline - now_s();
  idevice_error_t r2 = idevice_connection_receive_timeout(
      conn, (char *)body, len, &got2, left > 1 ? (unsigned)(left * 1000) : 1);
  if (r2 != IDEVICE_E_SUCCESS || got2 != len) {
    printf("  тело: rc=%d got=%u из %u\n", (int)r2, got2, len);
    free(body);
    return -2;
  }
  if (got2 < 8 || memcmp(body, "bplist00", 8)) {
    printf("  тело не bplist00\n");
    free(body);
    return -2;
  }
  plist_from_bin((const char *)body, got2, out);
  free(body);
  return *out ? 0 : -2;
}

/* отправка: LE32-префикс + bplist */
static int send_msg(idevice_connection_t conn, plist_t pl)
{
  char *bin = NULL;
  uint32_t len = 0;
  if (plist_to_bin(pl, &bin, &len) != PLIST_ERR_SUCCESS || !bin)
    return -1;
  unsigned char pre[4] = {(unsigned char)(len & 0xff),
                          (unsigned char)((len >> 8) & 0xff),
                          (unsigned char)((len >> 16) & 0xff),
                          (unsigned char)((len >> 24) & 0xff)};
  uint32_t sent = 0;
  if (idevice_connection_send(conn, (const char *)pre, 4, &sent) !=
          IDEVICE_E_SUCCESS ||
      sent != 4) {
    printf("  отправка префикса: rc=%d sent=%u\n", (int)sent, sent);
    free(bin);
    return -2;
  }
  if (idevice_connection_send(conn, bin, len, &sent) != IDEVICE_E_SUCCESS ||
      sent != len) {
    printf("  отправка тела: rc=%d sent=%u из %u\n", (int)sent, sent, len);
    free(bin);
    return -2;
  }
  printf("  <- отправлено %u байт bplist\n", len);
  free(bin);
  return 0;
}

int main(int argc, char **argv)
{
  const char *udid = (argc > 1) ? argv[1] : NULL;
  idevice_t dev = NULL;
  if (idevice_new(&dev, udid) != IDEVICE_E_SUCCESS) {
    printf("устройство не найдено\n");
    return 1;
  }
  lockdownd_client_t ld = NULL;
  char *label = strdup("atc-dialog2");
  if (lockdownd_client_new_with_handshake(dev, &ld, label) != LOCKDOWN_E_SUCCESS) {
    printf("lockdown handshake: отказ\n");
    return 1;
  }
  lockdownd_service_descriptor_t svc = NULL;
  if (lockdownd_start_service(ld, "com.apple.atc", &svc) != LOCKDOWN_E_SUCCESS || !svc) {
    printf("StartService com.apple.atc: отказ\n");
    return 1;
  }
  printf("atc: порт %u ssl_enabled=%u\n", (unsigned)svc->port,
         (unsigned)svc->ssl_enabled);
  idevice_connection_t conn = NULL;
  if (idevice_connect(dev, svc->port, &conn) != IDEVICE_E_SUCCESS) {
    printf("idevice_connect: отказ\n");
    return 1;
  }
  if (svc->ssl_enabled && idevice_connection_enable_ssl(conn) != IDEVICE_E_SUCCESS) {
    printf("enable_ssl: отказ\n");
    return 1;
  }

  /* фаза 1: пропускаем уведомления, ждём SyncAllowed (3u: poll 1000 мс,
     бюджет 120 с; у нас 30 с) */
  double t0 = now_s();
  double deadline = t0 + 30.0;
  plist_t msg = NULL;
  char *cmd = NULL;
  int nmsg = 0;
  for (;;) {
    int rc = recv_msg(conn, &msg, 1000, deadline);
    if (rc == -1) {
      printf("фаза1: SyncAllowed не пришёл за 30 с (сообщений %d)\n", nmsg);
      return 1;
    }
    if (rc == -2) {
      printf("фаза1: ошибка связи\n");
      return 1;
    }
    nmsg++;
    cmd = get_str(msg, "Command");
    printf("[%.1f с] #%d Command=%s\n", now_s() - t0, nmsg, cmd ? cmd : "<нет>");
    if (cmd && strcmp(cmd, "SyncAllowed") == 0) {
      dump_plist("SyncAllowed", msg);
      free(cmd);
      plist_free(msg);
      break;
    }
    free(cmd);
    plist_free(msg);
    msg = NULL;
  }

  /* фаза 2: RequestingSync (структура из send_requesting_sync @0x7f160) */
  plist_t hostinfo = plist_new_dict();
  plist_t carr = plist_new_array();
  plist_array_append_item(carr, plist_new_string("Media")); /* Key→string:
                    в bplist KEY сериализуется как строка — байты равны */
  plist_dict_set_item(hostinfo, "SyncHostName", plist_new_string("ow"));
  plist_dict_set_item(hostinfo, "SyncedDataclasses", carr);
  plist_dict_set_item(hostinfo, "Version", plist_new_string("11.1.0.126"));
  /* эксперимент: если есть /tmp/opencode/host_grappa.bin — шлём его,
     иначе пустой блоб (неизвестность №1а) */
  unsigned char *gbuf = NULL;
  size_t glen = 0;
  FILE *gf = fopen("/tmp/opencode/host_grappa.bin", "rb");
  if (gf) {
    fseek(gf, 0, SEEK_END);
    glen = (size_t)ftell(gf);
    fseek(gf, 0, SEEK_SET);
    gbuf = malloc(glen ? glen : 1);
    if (fread(gbuf, 1, glen, gf) != glen) {
      printf("чтение host_grappa.bin не удалось\n");
      return 1;
    }
    fclose(gf);
    printf("Grappa хоста: из файла, %zu байт\n", glen);
  } else {
    gbuf = empty_grappa;
    printf("Grappa хоста: ПУСТОЙ блоб\n");
  }
  plist_dict_set_item(hostinfo, "Grappa",
                      plist_new_data((const char *)gbuf, glen));
  plist_dict_set_item(hostinfo, "LibraryID",
                      plist_new_string("0000000000000000"));
  plist_t darr = plist_new_array();
  plist_array_append_item(darr, plist_new_string("Media"));
  plist_t anchors = plist_new_dict();
  plist_dict_set_item(anchors, "Media", plist_new_string("1"));
  plist_t params = plist_new_dict();
  plist_dict_set_item(params, "HostInfo", hostinfo);
  plist_dict_set_item(params, "Dataclasses", darr);
  plist_dict_set_item(params, "DataclassAnchors", anchors);
  plist_t req = plist_new_dict();
  plist_dict_set_item(req, "Command", plist_new_string("RequestingSync"));
  plist_dict_set_item(req, "Params", params);
  plist_dict_set_item(req, "Session", plist_new_uint(1));
  dump_plist("отправляем RequestingSync", req);
  int rs = send_msg(conn, req);
  plist_free(req);
  if (rs != 0) {
    printf("фаза2: отправка не удалась (rc=%d)\n", rs);
    return 1;
  }

  /* фаза 3: ждём ReadyForSync (3u: poll 500 мс, бюджет 120 с) */
  t0 = now_s();
  deadline = t0 + 120.0;
  plist_t dev_grappa_plist = NULL;
  for (;;) {
    int rc = recv_msg(conn, &msg, 500, deadline);
    if (rc == -1) {
      printf("фаза3: ReadyForSync не пришёл за 120 с\n");
      return 1;
    }
    if (rc == -2) {
      printf("фаза3: ошибка связи\n");
      return 1;
    }
    cmd = get_str(msg, "Command");
    printf("[%.1f с] #%d Command=%s\n", now_s() - t0, nmsg + 1,
           cmd ? cmd : "<нет>");
    nmsg++;
    if (cmd && strcmp(cmd, "SyncFailed") == 0) {
      dump_plist("SyncFailed — ПОЛНЫЙ", msg);
      free(cmd);
      plist_free(msg);
      return 1;
    }
    if (cmd && strcmp(cmd, "ReadyForSync") == 0) {
      dump_plist("ReadyForSync", msg);
      free(cmd);
      dev_grappa_plist = msg; /* сохраняем для извлечения Grappa */
      break;
    }
    free(cmd);
    plist_free(msg);
    msg = NULL;
  }
  /* B_out = Params.DeviceInfo.Grappa (данные устройства) */
  plist_t prms = plist_dict_get_item(dev_grappa_plist, "Params");
  plist_t dinf = prms ? plist_dict_get_item(prms, "DeviceInfo") : NULL;
  plist_t grp = dinf ? plist_dict_get_item(dinf, "Grappa") : NULL;
  if (grp) {
    char *gd = NULL;
    uint64_t gl = 0;
    plist_get_data_val(grp, &gd, &gl);
    if (gd) {
      FILE *f = fopen("/tmp/opencode/device_grappa.bin", "wb");
      if (f) {
        fwrite(gd, 1, gl, f);
        fclose(f);
      }
      printf("Grappa устройства: %llu байт -> device_grappa.bin: ",
             (unsigned long long)gl);
      for (uint64_t i = 0; i < gl && i < 32; i++)
        printf("%02x ", (unsigned char)gd[i]);
      printf("\n");
      free(gd);
    } else
      printf("Grappa устройства: не строка-данные\n");
  } else
    printf("DeviceInfo.Grappa в ReadyForSync НЕТ\n");
  plist_free(dev_grappa_plist);

  /* фаза 3.5: заливка декларации + .cig через AFC (как 3u: ДО
     FinishedSyncingMetadata). Если /tmp/opencode/decl_test.plist нет —
     пропускаем (чистый диалог без декларации). */
  afc_client_t afc = NULL;
  lockdownd_service_descriptor_t asvc0 = NULL;
  if (lockdownd_start_service(ld, "com.apple.afc", &asvc0) ==
          LOCKDOWN_E_SUCCESS &&
      asvc0) {
    if (afc_client_new(dev, asvc0, &afc) == AFC_E_SUCCESS) {
      FILE *df = fopen("/tmp/opencode/decl_test.plist", "rb");
      if (df) {
        fseek(df, 0, SEEK_END);
        long dsz = ftell(df);
        fseek(df, 0, SEEK_SET);
        afc_make_directory(afc, "/iTunes_Control/Sync");
        afc_make_directory(afc, "/iTunes_Control/Sync/Media");
        uint64_t handle = 0;
        if (afc_file_open(afc, "/iTunes_Control/Sync/Media/"
                                "Sync_00000000.plist",
                          AFC_FOPEN_WRONLY,
                          &handle) == AFC_E_SUCCESS) {
          char *dbuf = malloc((size_t)dsz);
          size_t rd = fread(dbuf, 1, (size_t)dsz, df);
          uint32_t sent = 0;
          afc_file_write(afc, handle, dbuf, (uint32_t)rd, &sent);
          afc_file_close(afc, handle);
          printf("фаза3.5: декларация залита (%ld Б заявлено, %zu прочитано,"
                 " %u записано)\n",
                 dsz, rd, sent);
          free(dbuf);
        } else
          printf("фаза3.5: открыть Sync_00000000.plist не удалось\n");
        fclose(df);
        FILE *cf = fopen("/tmp/opencode/decl_test.cig", "rb");
        if (cf) {
          fseek(cf, 0, SEEK_END);
          long csz = ftell(cf);
          fseek(cf, 0, SEEK_SET);
          fseek(cf, 0, SEEK_SET);
          char *cbuf = malloc((size_t)csz);
          size_t rd = fread(cbuf, 1, (size_t)csz, cf);
          uint64_t handle = 0;
          if (afc_file_open(afc, "/iTunes_Control/Sync/Media/"
                                 "Sync_00000000.plist.cig",
                            AFC_FOPEN_WRONLY,
                            &handle) == AFC_E_SUCCESS) {
            uint32_t sent = 0;
            afc_file_write(afc, handle, cbuf, (uint32_t)rd, &sent);
            afc_file_close(afc, handle);
            printf("фаза3.5: .cig залит (%ld Б, %u записано): ", csz, sent);
            for (long i = 0; i < csz; i++)
              printf("%02x ", (unsigned char)cbuf[i]);
            printf("\n");
          } else
            printf("фаза3.5: открыть .cig не удалось\n");
          free(cbuf);
          fclose(cf);
        } else
          printf("фаза3.5: .cig НЕТ (вариант none)\n");
      } else
        printf("фаза3.5: decl_test.plist нет — диалог без декларации\n");
    } else
      printf("фаза3.5: afc_client_new не удался\n");
    lockdownd_service_descriptor_free(asvc0);
  } else
    printf("фаза3.5: StartService afc не удался\n");

  /* фаза 4: FinishedSyncingMetadata (якорь хоста "1", как 3u) */
  plist_t st = plist_new_dict();
  plist_dict_set_item(st, "Media", plist_new_uint(1));
  plist_t da = plist_new_dict();
  plist_dict_set_item(da, "Media", plist_new_string("1"));
  plist_t p4 = plist_new_dict();
  plist_dict_set_item(p4, "SyncTypes", st);
  plist_dict_set_item(p4, "DataclassAnchors", da);
  plist_t fin = plist_new_dict();
  plist_dict_set_item(fin, "Command",
                      plist_new_string("FinishedSyncingMetadata"));
  plist_dict_set_item(fin, "Params", p4);
  plist_dict_set_item(fin, "Session", plist_new_uint(1));
  dump_plist("отправляем FinishedSyncingMetadata", fin);
  rs = send_msg(conn, fin);
  plist_free(fin);
  if (rs != 0) {
    printf("фаза4: отправка не удалась (rc=%d)\n", rs);
    return 1;
  }

  /* фаза 5: отвечаем на сообщения устройства (AssetManifest ->
     FileProgress/FileComplete; файл уже в /Airlock/Media, как у 3u).
     Путь для первой записи: /iTunes_Control/Music/F00/CIGT.mp3. */
  t0 = now_s();
  deadline = t0 + 120.0;
  int nassets = 0;
  for (;;) {
    int rc = recv_msg(conn, &msg, 1000, deadline);
    if (rc == -1) {
      printf("фаза5: бюджет исчерпан, сообщений: %d\n", nmsg);
      break;
    }
    if (rc == -2) {
      printf("фаза5: связь закрыта устройством\n");
      break;
    }
    nmsg++;
    cmd = get_str(msg, "Command");
    printf("[%.1f с] #%d Command=%s\n", now_s() - t0, nmsg, cmd ? cmd : "<нет>");
    if (cmd && strcmp(cmd, "AssetManifest") == 0) {
      dump_plist("AssetManifest", msg);
      plist_t p5 = plist_dict_get_item(msg, "Params");
      plist_t am = p5 ? plist_dict_get_item(p5, "AssetManifest") : NULL;
      plist_t med = am ? plist_dict_get_item(am, "Media") : NULL;
      uint32_t nent = med ? plist_array_get_size(med) : 0;
      printf("фаза5: записей в Media: %u\n", nent);
      for (uint32_t ei = 0; ei < nent; ei++) {
        plist_t ent = plist_array_get_item(med, ei);
        char *asset_id = NULL;
        plist_t aid = plist_dict_get_item(ent, "AssetID");
        if (aid && plist_get_node_type(aid) == PLIST_STRING)
          plist_get_string_val(aid, &asset_id);
        if (!asset_id) {
          printf("фаза5: запись %u без AssetID\n", ei);
          continue;
        }
        printf("фаза5: устройство запрашивает AssetID=%s\n", asset_id);
        /* файл уже в /Airlock/Media/<AssetID>? (проверка) */
        char remote[256];
        snprintf(remote, sizeof(remote), "/Airlock/Media/%s", asset_id);
        char **finfo = NULL;
        int have_file = 0;
        if (afc && afc_get_file_info(afc, remote, &finfo) ==
                       AFC_E_SUCCESS &&
            finfo) {
          for (char **q = finfo; *q; q += 2) {
            if (q[1] && !strcmp(*q, "st_size")) {
              printf("фаза5: файл в Airlock: %s Б\n", q[1]);
              have_file = 1;
            }
          }
          afc_dictionary_free(finfo);
        }
        if (!have_file)
          printf("фаза5: файла НЕТ в Airlock: %s\n", remote);
        if (!afc) {
          printf("фаза5: AFC-клиента нет — отвечать нечем\n");
          free(asset_id);
          continue;
        }
        /* путь назначения: первая запись -> F00/CIGT.mp3,
           остальные -> F(10+i)/<4 буквы из AssetID>.mp3 */
        char dest[256];
        if (nassets == 0) {
          afc_make_directory(afc, "/iTunes_Control/Music/F00");
          snprintf(dest, sizeof(dest),
                   "/iTunes_Control/Music/F00/CIGT.mp3");
        } else {
          char bkt[8];
          snprintf(bkt, sizeof(bkt), "F%02d", 10 + (int)(nassets % 80));
          char nm[8];
          const char *digits = "ABCDEFGHIJ";
          const char *s = asset_id;
          size_t L = strlen(s);
          for (int k = 0; k < 4; k++) {
            char c = s[(L - 1 + k) % L]; /* последние 4 цифры AssetID */
            nm[k] = (c >= '0' && c <= '9') ? digits[c - '0'] : 'X';
          }
          nm[4] = 0;
          char dirbuf[64];
          snprintf(dirbuf, sizeof(dirbuf), "/iTunes_Control/Music/%s", bkt);
          afc_make_directory(afc, dirbuf);
          snprintf(dest, sizeof(dest), "/iTunes_Control/Music/%s/%s.mp3",
                   bkt, nm);
        }
        printf("фаза5: путь назначения: %s\n", dest);
        /* FileProgress 0.0 */
        plist_t fp = plist_new_dict();
        plist_t fpp = plist_new_dict();
        plist_dict_set_item(fpp, "AssetID", plist_new_string(asset_id));
        plist_dict_set_item(fpp, "AssetProgress", plist_new_real(0.0));
        plist_dict_set_item(fpp, "Dataclass", plist_new_string("Media"));
        plist_dict_set_item(fpp, "OverallProgress", plist_new_real(1.0));
        plist_dict_set_item(fp, "Command", plist_new_string("FileProgress"));
        plist_dict_set_item(fp, "Params", fpp);
        plist_dict_set_item(fp, "Session", plist_new_uint(1));
        send_msg(conn, fp);
        plist_free(fp);
        /* FileProgress 1.0 */
        fp = plist_new_dict();
        fpp = plist_new_dict();
        plist_dict_set_item(fpp, "AssetID", plist_new_string(asset_id));
        plist_dict_set_item(fpp, "AssetProgress", plist_new_real(1.0));
        plist_dict_set_item(fpp, "Dataclass", plist_new_string("Media"));
        plist_dict_set_item(fpp, "OverallProgress", plist_new_real(1.0));
        plist_dict_set_item(fp, "Command", plist_new_string("FileProgress"));
        plist_dict_set_item(fp, "Params", fpp);
        plist_dict_set_item(fp, "Session", plist_new_uint(1));
        send_msg(conn, fp);
        plist_free(fp);
        /* FileComplete */
        plist_t fc = plist_new_dict();
        plist_t fcp = plist_new_dict();
        plist_dict_set_item(fcp, "AssetID", plist_new_string(asset_id));
        plist_dict_set_item(fcp, "AssetPath", plist_new_string(dest));
        plist_dict_set_item(fcp, "Dataclass", plist_new_string("Media"));
        plist_dict_set_item(fc, "Command", plist_new_string("FileComplete"));
        plist_dict_set_item(fc, "Params", fcp);
        plist_dict_set_item(fc, "Session", plist_new_uint(1));
        send_msg(conn, fc);
        plist_free(fc);
        nassets++;
        free(asset_id);
      }
    } else if (cmd && strcmp(cmd, "Ping") == 0) {
      /* устройство пингует — отвечаем Pong (как устройство отвечает нам) */
      plist_t po = plist_new_dict();
      plist_dict_set_item(po, "Command", plist_new_string("Pong"));
      plist_dict_set_item(po, "Session", plist_new_uint(1));
      send_msg(conn, po);
      plist_free(po);
    } else if (cmd && strcmp(cmd, "SyncFinished") == 0) {
      dump_plist("SyncFinished — УСПЕХ", msg);
      free(cmd);
      plist_free(msg);
      break;
    } else if (cmd && strcmp(cmd, "SyncFailed") == 0) {
      dump_plist("SyncFailed", msg);
      free(cmd);
      plist_free(msg);
      break;
    } else {
      dump_plist("сообщение", msg);
    }
    free(cmd);
    plist_free(msg);
    msg = NULL;
  }
  if (afc)
    afc_client_free(afc);

  idevice_disconnect(conn);
  lockdownd_service_descriptor_free(svc);
  lockdownd_client_free(ld);
  idevice_free(dev);
  free(label);
  return 0;
}
