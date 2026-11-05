#pragma once

#include <adwaita.h>

/* === irmfill.h ===
 * Конвейер заливки музыки через irmctl (механика 9l из irm-fill):
 * gst-launch-1.0 транскод → gst-discoverer-1.0 → TagLib → TSV →
 * irmctl atc-insert порциями по IRMFILL_CHUNK (дефолт 8).
 * Прогресс — отдельное окно с баром и кнопкой «Отмена» (телефон при
 * отмене не откатывается: уже залитые части остаются). */

typedef struct {
	GtkWindow *parent; /* окна-транзиенты — окно приложения */
	void (*busy_cb)(int busy, gpointer user); /* занять/освободить UI */
	gpointer user;
} IrFillHooks;

/* Открыть диалог выбора аудиофайлов и поднять конвейер (мутит телефон
 * по нажатию владельца). */
void irmfill_activate(IrFillHooks *hooks);

/* Отменить идущий пакет (если он есть). */
void irmfill_cancel(void);

/* Пакет в работе? */
gboolean irmfill_active(void);
