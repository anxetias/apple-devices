/* libirm — AFC (Apple File Conduit) клиент — фрейминг CFA6LPAA поверх туннеля.
 *
 * Факты wire (E14 §1; подтверждены рабочей реализацией idevice 0.1.68,
 * на которой end-to-end работает rustunes на iPhone17,2/iOS 27.0.1):
 *   пакет      = header 40Б + header_payload + payload;
 *   header     = [LE u64 magic][LE u64 entire_len][LE u64 header_payload_len]
 *                [LE u64 packet_num][LE u64 operation];
 *   magic      = "CFA6LPAA" (u64 LE 0x4141504c36414643);
 *   entire_len = 40 + len(header_payload) + len(payload);
 *   header_payload_len = 40 + len(header_payload);
 *   packet_num = счётчик пакетов (с нуля), инкремент на КАЖДЫЙ отправляемый;
 *   ответ      = ОДИН пакет: op=Status(0x0001) с code:LE u64 в header_payload
 *                (0 = успех, иначе AFC-код ошибки), ИЛИ op=Data(0x0002)
 *                с данными в payload (ListDir/Info/DevInfo/Read) или в
 *                header_payload (FileOpenRes: fd LE u64).
 *   ops        : ReadDir=0x0003 (путь; ответ Data = список имён \0),
 *                GetFileInfo=0x000a (путь; ответ Data = КЛЮЧ\0ЗНАЧ\0...
 *                — пары чередуются), GetDevInfo=0x000b (пустой
 *                header_payload; ответ Data, те же пары),
 *                MakeDir=0x0009 (путь), FileOpen=0x000d
 *                (mode:LE u64 + путь → FileOpenRes с fd),
 *                Read=0x000f (fd:LE u64 + n:LE u64 → Data payload; пустой
 *                payload = EOF), Write=0x0010 (fd:LE u64; данные в payload,
 *                чанки не более 1 МиБ), FileClose=0x0014 (fd:LE u64),
 *                RenamePath=0x0018 ("из\0в\0").
 *   режимы open: RdOnly=1, Rw=2, WrOnly=3 (O_WRONLY|O_CREAT|O_TRUNC),
 *                Wr=4, Append=5, RdAppend=6.
 * Транспорт (fd) — уже открытый туннель lockdown-StartService (com.apple.afc);
 * tls != 0 → I/O через irm_tls_*; AFC на USB обычно без TLS
 * (EnableServiceSSL=false — live-факт E14 §2). Экземпляр НЕ владеет fd.
 */
#ifndef LIBIRM_AFC_H
#define LIBIRM_AFC_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define IRM_AFC_MAGIC 0x4141504c36414643ull /* "CFA6LPAA" */
#define IRM_AFC_HDR_LEN 40
#define IRM_AFC_MAX_PACKET (16u * 1024u * 1024u)

/* Opcodes (E14 §1). */
#define IRM_AFC_OP_STATUS 0x00000001ull
#define IRM_AFC_OP_DATA 0x00000002ull
#define IRM_AFC_OP_READDIR 0x00000003ull
#define IRM_AFC_OP_GETFILEINFO 0x0000000aull
#define IRM_AFC_OP_GETDEVINFO 0x0000000bull
#define IRM_AFC_OP_MAKEDIR 0x00000009ull
#define IRM_AFC_OP_REMOVEPATH 0x00000008ull
#define IRM_AFC_OP_FILEOPEN 0x0000000dull
#define IRM_AFC_OP_OPENRES 0x0000000eull
#define IRM_AFC_OP_READ 0x0000000full
#define IRM_AFC_OP_WRITE 0x00000010ull
#define IRM_AFC_OP_CLOSE 0x00000014ull
#define IRM_AFC_OP_RENAME 0x00000018ull

/* AfcFopenMode (E14 §1, idevice 0.1.68 opcode.rs). */
#define IRM_AFC_RDONLY 1
#define IRM_AFC_RDWR 2
#define IRM_AFC_WONLY 3 /* O_WRONLY|O_CREAT|O_TRUNC */
#define IRM_AFC_WPLUS 4
#define IRM_AFC_APPEND 5
#define IRM_AFC_RDAPPEND 6

/* Верхняя граница Write-чанка (как в libimobiledevice/idevice: 1 МиБ). */
#define IRM_AFC_WRITE_CHUNK (1024u * 1024u)

typedef struct irm_afc irm_afc_t;

/* Открыть AFC-канал: fd — туннель к порту com.apple.afc (mux Connect +
 * lockdown StartService; TLS-апгрейд при необходимости — СНАРУЖИ, как
 * atc_serve_open в irmctl). tls != 0 → I/O через irm_tls_*. timeout —
 * SO_RCVTIMEO в сек (raw-режим; 0 = без ограничения).
 * Владение fd остаётся у вызывающего (irm_afc_free НЕ закрывает fd). */
irm_afc_t *irm_afc_new(int fd, int tls, int timeout_sec);

/* Закрыть экземпляр (fd НЕ закрывается). */
void irm_afc_free(irm_afc_t *a);

/* Инфо об устройстве-ФС: kvs — ЧЕРЕДУЮЩИЕСЯ строки «ключ», «значение»
 * («Model», «iPhone12,1», «FSTotalBytes», ...; n чётно). Владение
 * у вызывающего (free каждого элемента + массив). 0 — успех. */
int irm_afc_devinfo(irm_afc_t *a, char ***kvs, size_t *n);

/* Список каталога: names — массив имён (каждый элемент malloc). 0 — успех. */
int irm_afc_dir_list(irm_afc_t *a, const char *path, char ***names,
		     size_t *n);

/* Атрибутика пути: kvs — ЧЕРЕДУЮЩИЕСЯ строки «ключ», «значение» (n чётно,
 * idevice 0.1.68 parse_kv_payload: as_chunks::<2>): «st_size», «123»,
 * «st_ifmt», «NSFileTypeRegular» и пр. 0 — успех. */
int irm_afc_file_info(irm_afc_t *a, const char *path, char ***kvs,
		      size_t *n);

/* Короткая форма: размер и признак каталога (st_size/st_ifmt).
 * Объект не найден → -1 (irm_afc_status_name/irm_afc_error уточняет). */
int irm_afc_size_info(irm_afc_t *a, const char *path, size_t *size,
		      int *is_dir);

/* Файл целиком: open RdOnly → Read-чанки до EOF. out исходящ malloc,
 * out_len — размер. 0 — успех. */
int irm_afc_read_full(irm_afc_t *a, const char *path, uint8_t **out,
		      size_t *out_len);

/* Запись НОВОГО файла (WrOnly = создаётся/truncate). Контроль размера
 * read-back остаётся за вызывающим (E14 §2, см. fsync семантику). */
int irm_afc_write_full(irm_afc_t *a, const char *path, const uint8_t *b,
		       size_t n);

/* Создать каталог (рекурсии нет — родителя создаём отдельно). */
int irm_afc_mkdir(irm_afc_t *a, const char *path);

/* Удаление пути (файл/каталог; op 0x0008 — префлайт-очистка Airlock). */
int irm_afc_remove(irm_afc_t *a, const char *path);

/* Переименование/перемещение (Airlock → постоянный путь, E14 §3). */
int irm_afc_rename(irm_afc_t *a, const char *from, const char *to);

/* Текст последней ошибки (статическая строка; "ok" при успехе). */
const char *irm_afc_error(void);

/* Имя AFC-кода ошибки (0..36, таблица перевода E14 §1). */
const char *irm_afc_status_name(unsigned code);

#ifdef __cplusplus
}
#endif
#endif /* LIBIRM_AFC_H */
