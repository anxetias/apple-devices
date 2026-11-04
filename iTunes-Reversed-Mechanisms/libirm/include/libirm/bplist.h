/* libirm — bplist00 writer/reader (kCFPropertyListBinaryFormat_v1_0, format=100).
 *
 * Факты wire:
 *   - lockdown:      [BE32 len][bplist00]  (E02 §2, format=100)
 *   - usbmuxd-клиент: [LE u32 x4][bplist00] (E01b §1)
 *   - DeviceLink/ramrod — XML (это НЕ наш bplist, см. E06/E09)
 * CoreFoundation недоступна вне macOS, поэтому сериализация наша.
 *
 * Поддержка: null, bool, uint (BE 1/2/4/8B), real (f32/f64 BE при чтении, f64 при записи),
 * date (8B double, секунды от 2001-01-01T00:00:00Z), string (ASCII/UTF-16BE),
 * data, array, dict. Парсер принимает любые корректные Apple-кодировки.
 */
#ifndef LIBIRM_BPLIST_H
#define LIBIRM_BPLIST_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum irm_bp_type {
	IRM_BP_NULL = 0,
	IRM_BP_BOOL,
	IRM_BP_UINT,   /* фактическая величина uint64 (BE в бplist) */
	IRM_BP_REAL,   /* double */
	IRM_BP_DATE,   /* double, секунды от 2001-01-01T00:00:00Z */
	IRM_BP_STRING, /* в памяти UTF-8; на проводе ASCII или UTF-16BE */
	IRM_BP_DATA,
	IRM_BP_ARRAY,
	IRM_BP_DICT
} irm_bp_type;

typedef struct irm_bp_node irm_bp_node;

/* --- конструкторы (NULL при OOM) -------------------------------------- */
irm_bp_node *irm_bp_bool(int v);
irm_bp_node *irm_bp_uint(uint64_t v);
irm_bp_node *irm_bp_real(double v);
irm_bp_node *irm_bp_date(double v);
irm_bp_node *irm_bp_string(const char *utf8);            /* NUL-terminated */
irm_bp_node *irm_bp_string_bytes(const char *utf8, size_t n); /* вложенные NUL */
irm_bp_node *irm_bp_data(const void *bytes, size_t n);
irm_bp_node *irm_bp_array(void);
irm_bp_node *irm_bp_dict(void);

void irm_bp_free(irm_bp_node *n);

/* Глубокая копия дерева (строки/данные — копия буфера). NULL при OOM/NULL. */
irm_bp_node *irm_bp_dup(const irm_bp_node *n);

/* dict_set/array_add принимают владение val (val освобождается даже при ошибке).
 * Возврат 0 — успех, -1 — ошибка. */
int irm_bp_dict_set(irm_bp_node *dict, const char *key, irm_bp_node *val);
int irm_bp_array_add(irm_bp_node *arr, irm_bp_node *val);

irm_bp_node *irm_bp_dict_get(const irm_bp_node *dict, const char *key);
irm_bp_node *irm_bp_array_get(const irm_bp_node *arr, size_t idx);
size_t       irm_bp_array_len(const irm_bp_node *arr);

/* Итерация по dict (порядок вставки). NULL-safe; key — UTF-8 строки узлов
 * (владения нет). key_at/val_at — NULL если idx за пределами. */
size_t       irm_bp_dict_count(const irm_bp_node *dict);
const char  *irm_bp_dict_key_at(const irm_bp_node *dict, size_t idx);
irm_bp_node *irm_bp_dict_val_at(const irm_bp_node *dict, size_t idx);

/* --- доступ к значениям (NULL-safe, тип проверяется) ------------------- */
irm_bp_type  irm_bp_type_of(const irm_bp_node *n);
int          irm_bp_bool_value(const irm_bp_node *n);         /* 0/1 */
uint64_t     irm_bp_uint_value(const irm_bp_node *n);
double       irm_bp_real_value(const irm_bp_node *n);         /* и для DATE */
const char  *irm_bp_string_ptr(const irm_bp_node *n, size_t *len); /* UTF-8 */
const void  *irm_bp_data_ptr(const irm_bp_node *n, size_t *len);

/* --- сериализация ------------------------------------------------------ */
/* Пишет bplist00 в malloc-буфер. 0 — успех; при ошибке буфер не выделяется. */
int irm_bp_write(const irm_bp_node *root, uint8_t **out, size_t *outlen);

/* --- парсинг ----------------------------------------------------------- */
/* NULL при ошибке; irm_bp_error() вернёт краткую причину. */
irm_bp_node *irm_bp_read(const uint8_t *buf, size_t len);
const char  *irm_bp_error(void);

#ifdef __cplusplus
}
#endif
#endif /* LIBIRM_BPLIST_H */
