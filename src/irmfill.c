
/* === irmfill.c ===
 * Перенос механики 9l из iTunes-Reversed-Mechanisms/tools/irm-fill.c
 * в основное приложение (живой факт 05.11: «все прошло окей» — теги и
 * порции строк 1:1). Конвейер: транскод не-.m4a через gst-launch-1.0
 * (AAC-дефолт avenc_aac+mp4mux, IRMFILL_CODEC=alac — откат на ALAC),
 * gst-discoverer-1.0 даёт длительность и сэмплрейт, теги строкой
 * строит TagLib, TSV из 9 колонок уходит в irmctl atc-insert
 * ПОРЦИЯМИ (IRMFILL_CHUNK, дефолт 8). Из irm-fill кочуют проверенные свойства:
 * СТРОГО последовательные транскоды (параллельную убрал владелец —
 * она фиксировала перемешивание тегов), матура порции
 * (pl_flush_mature + маска pl_alive), теги и обложка строки строго
 * из копий job'а. Окно прогресса собирается лениво, живёт между
 * пакетами; кнопка «Отмена» и закрытие окна гасят конвейер, телефон
 * НЕ откатываем — уже залитые части остаются.
 *
 * Слой приложения: лог уходит в logMessage, занятость музыкальных
 * кнопок — через callback busy_cb (ставит music_busy). Домашний
 * UI-заголовок irm-fill (якерь, одиночная заливка) не переносим. */
#include "irmfill.h"
#include "application.h"
#include "transcode.h"
#include <glib/gstdio.h>

#include <errno.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/statvfs.h>
#include <time.h>
#include <unistd.h>

/* === irmfill.c ===
 * Перенос механики 9l из iTunes-Reversed-Mechanisms/tools/irm-fill.c в
 * основное приложение (живой факт 05.11: «все прошло окей» — теги и
 * порции 1:1). Конвейер: транскод не-.m4a через gst-launch-1.0
 * (AAC-дефолт avenc_aac+mp4mux / IRMFILL_CODEC=alac), gst-discoverer-1.0
 * даёт длительность/сэмплрейт, теги строк и TSV строит TagLib, 9
 * колонок уходят в irmctl atc-insert ПОРЦИЯМИ (IRMFILL_CHUNK,
 * дефолт 8). Особенности, кëррируемые из irm-fill: СТРОГО последовательные
 * транскоды (параллельную убрал владелец — фиксировала перемешивание
 * тегов), матура порции (pl_flush_mature + маска pl_alive), теги строки
 * из копий job'а. Оконные функции: ленивое окно прогресса с кнопкой
 * «Отмена»; при отмене телефон НЕ откатываем — уже залитые части
 * остаются. Отдельные украшения ir Tray-fill GUI не переносим.
 *
 * Слой приложения: лог через logMessage, занятость кнопок через
 * callback busy_cb (музыкальные кнопки гасятся на время пакета). */
#include <unistd.h>

#include <taglib/tag_c.h>

/* путь до irmctl можно переопределить окружением */
#define IRMFILL_IRMCTL_ENV "IRMFILL_IRMCTL"
#define IRMFILL_BATCH_MAX 499

/* пакетный job (9n) — объявление здесь, определение ниже */
struct pl_job;

/* ---- состояние приложения (одно окно, максимум один подпроцесс) ---- */

typedef struct {
	GtkWindow *win;
	GtkTextBuffer *log_buf;
	GtkTextView *log_view;
	GtkLabel *la_state;
	GtkLabel *la_title;
	GtkButton *btn_anchor;
	GtkButton *btn_one;
	GtkButton *btn_batch;
	GtkButton *btn_pl;
	GtkButton *btn_clear;
	GtkSpinButton *sp_batch;
	GtkButton *btn_browse;
	GtkEntry *en_fixture;
	GtkEntry *en_libid;
	GtkSpinner *spinner;

	/* окно прогресса пакетной заливки (владелец 05.11): отдельное
	 * окно с прогресс-баром и кнопкой отмены; собирается лениво,
	 * живёт между пакетами (hide, не destroy) */
	GtkWindow *win_prog;
	GtkProgressBar *pb_prog;
	GtkLabel *la_prog;
	GtkButton *btn_prog_cancel;

	/* диалог подтверждения перед пакетом (владелец 06.11):
	 * инфа о загрузке + выбор «перекодировать/как есть» +
	 * «Старт/Отмена»; собирается лениво, живёт между пакетами */
	GtkWindow *win_confirm;
	GtkLabel *la_confirm;
	GtkTextView *tv_confirm;
	GtkCheckButton *ck_trans;

	GSubprocess *proc;
	GDataInputStream *stream;
	GCancellable *cancel;
	char *irmctl;
	int busy;

	/* 9i: автоматический транскод не-.m4a входов */
	char *gst_launch;
	char *gst_discover;
	char *gst_inspect;
	char *tc_src;
	char *tc_dst;
	char pending_cmd[32];

	/* 9m: кодек перекода пакета. AAC — дефолт (пейлоад ~×4 легче,
	 * телефон играет его нативно; провод ~16 МиБ/с — живой замер
	 * 05.11), IRMFILL_CODEC=alac возвращает прежний; битрейт AAC —
	 * IRMFILL_AAC_RATE (дефолт 256000, 64k..320k). */
	gboolean codec_aac;
	unsigned aac_rate;
	char gst_codec[8]; /* «AAC» / «ALAC» для логов */

	/* 9j: теги источника (TagLib) → env для irmctl; пусто = дефолты */
	char tag_title[256];
	char tag_artist[256];
	char tag_album[256];
	char tag_genre[256];

	/* 9k: обложка источника → tmp-файл → IRMA_ATC_ARTWORK */
	char art_path[256];

	/* 9l: пакет разных треков — очередь файлов → per-item теги/
	 * перекод/мета → TSV-плейлист → irmctl (IRMA_ATC_PLAYLIST) */
	gboolean pl_active;
	unsigned pl_idx;
	unsigned pl_skip; /* live-факт: срывы item'ов пропускаем */
	unsigned pl_rows_done; /* доведено до строки/скипа — прогресс
				* окна (владелец 05.11) */
	GPtrArray *pl_files; /* выбранное: gchar* пути источника */
	GPtrArray *pl_pending; /* выбор владельца до подтверждения
				* (диалог «Старт/Отмена») */
	gboolean trans_mode; /* перекодировать в .m4a? (диалог; владелец
			      * 06.11: конверт не обязателен — 3uTools
			      * льёт mp3 как есть) */
	GPtrArray *pl_rows;  /* готовые строки: struct pl_row* */

	/* 9l-live v2 (владелец 12:53): серийный цикл — перекод K треков
	 * → заливка порции → удаление её артефактов → следующий чанк.
	 * pl_chunk_art — артефакты ТОЛЬКО текущей порции (перекоды и
	 * обложки), pl_inflight — ждём rc irmctl этой порции. */
	GPtrArray *pl_chunk_art; /* gchar*: перекоды и обложки порции */
	gchar *pl_chunk_tsv;     /* TSV текущей порции — на уборку */
	unsigned pl_chunk_num;   /* порция, которую заливаем (с 1) */
	unsigned pl_chunk_total; /* план порций: ceil(N/K) */
	gboolean pl_inflight;

	/* 9n: параллельные транскоды пакетной очереди. Готовые job'ы
	 * (транскод закончен или .m4a как есть) ждут финализации в
	 * pl_ready — разбираются сериально (один gst-discover за раз,
	 * теги/обложка идут рабочими полями). pl_running —
	 * запланировано, не доведено до строки/скипа; pl_gen —
	 * поколение пакета: прервавшиеся async-колбэки по нему
	 * узнают, что их job уже не их. */
	unsigned pl_par;           /* влёт транскодов (IRMFILL_PAR) */
	unsigned pl_running;       /* job'ы в полёте (все стадии) */
	unsigned pl_tct;           /* занятые ТРАНСКОД-слоты */
	GPtrArray *pl_ready;       /* FIFO: struct pl_job* (не владеем) */
	struct pl_job *pl_fin_job; /* финализируется сейчас */
	unsigned pl_gen;           /* поколение (для async-колбэков) */

	/* 05.11 (фикс перемешивания тегов): job ещё жив — запланирован,
	 * транкодится, ждёт финализации или в discover. Порция не
	 * уезжает, пока жив хотя бы один job с idx меньше последней
	 * готовой строки — иначе «порция 1: файлы 1..7,9» при не
	 * готовом 8 (живой факт лога 14:58). Индекс 0 пуст. */
	unsigned char pl_alive[IRMFILL_BATCH_MAX + 1];

	/* v3: подпроцессы параллельных транскодов живут ВНЕ ifl.proc
	 * (там — заливающий atc-insert). Список даёт старой семантике
	 * закрытия окна/СТОПа шанс гасить всех пишущих: v2 убивал
	 * единственный транскод через ifl.proc force_exit. */
	GPtrArray *tc_procs;
} IrmFill;

/* готовая строка плейлиста (после транскода/меты; тексты уже с
 * пробелами вместо табов) */
struct pl_row {
	char dst[1024];      /* путь пейлоада (.m4a) */
	unsigned long long ms;
	unsigned rate;
	char title[80], artist[256], album[256], genre[256];
	char art[1024]; /* пусто = без обложки */
	unsigned trans; /* перекод наш (dst — tmp-артефакт на уборку);
			 * 0 → dst == файл владельца (.m4a как есть) —
			 * списком уборки НЕ трогаем */
	unsigned idx;   /* номер файла в пакете (1..N) — строгий
			 * порядок строк в порции по ФАЙЛАМ, не по
			 * готовности транскодов (владелец 05.11:
			 * перемещённые теги) */
};

/* пакетный job (9n): один файл в параллельном конвейере. Теги и
 * обложка сняты TagLib'ом В МОМЕНТ СТАРТА job (рабочие поля
 * переиспользуются следующим файлом, поэтому job носит СВОЮ копию).
 * trans: источник транскодировался (dst — наш tmp-артефакт, его
 * можно убирать при срыве); иначе dst == src (.m4a как есть —
 * файл владельца НЕ трогаем). */
struct pl_job {
	gchar *src, *dst, *art;
	gchar *title, *artist, *album, *genre;
	unsigned idx; /* 1..n для лога и уникальности имён */
	gboolean trans;
	unsigned gen; /* поколение пакета */
};

static IrmFill ifl;

/* ---- мост к приложению: лог и занятость музыкальных кнопок ---- */

static IrFillHooks ifl_hooks;

static void ifl_log(const char *fmt, ...)
{
	char buf[1024];
	buf[0] = '\0';
	va_list ap;
	va_start(ap, fmt);
	vsnprintf(buf, sizeof buf, fmt, ap);
	va_end(ap);
	logMessage("%s", buf);
}

static void ifl_busy(int busy)
{
	if (ifl_hooks.busy_cb)
		ifl_hooks.busy_cb(busy, ifl_hooks.user);
}

/* мост к приложению: лог и занятость кнопок */
static void stream_read_line(GObject *src, GAsyncResult *res,
			     gpointer user)
{
	GDataInputStream *st = G_DATA_INPUT_STREAM(src);
	GError *err = NULL;
	char *line = g_data_input_stream_read_line_finish_utf8(st, res,
							       NULL, &err);
	(void)user;
	if (line) {
		size_t n = strlen(line);
		if (n && line[n - 1] == '\n') {
			line[n - 1] = 0;
			if (n > 1 && line[n - 2] == '\r')
				line[n - 2] = 0;
		}
		ifl_log("%s", line);
		g_free(line);
		g_data_input_stream_read_line_async(
			st, G_PRIORITY_DEFAULT, ifl.cancel,
			stream_read_line, NULL);
		return;
	}
	if (err) {
		if (!g_error_matches(err, G_IO_ERROR, G_IO_ERROR_CANCELLED))
			ifl_log("поток: %s", err->message);
		g_error_free(err);
	}
	/* конец потока: rc подпроцесса пришёл отдельно (process_done) */
}

/* ---- завершение подпроцесса ---- */

/* 9l-live v2: серийный цикл порций — process_done смотрит rc
 * заливающего спавна и крутит колесо (чистка → следующий чанк) */
static void pl_chunk_done(gboolean ok);
static void pl_abort(const char *why);

static void process_done(GObject *src, GAsyncResult *res, gpointer user)
{
	GSubprocess *sp = G_SUBPROCESS(src);
	const char *what = (const char *)user;
	GError *err = NULL;
	gboolean ok = g_subprocess_wait_check_finish(sp, res, &err);

	g_clear_object(&ifl.stream);
	g_clear_object(&ifl.proc);
	if (ifl.cancel) {
		g_object_unref(ifl.cancel);
		ifl.cancel = NULL;
	}
	if (g_error_matches(err, G_IO_ERROR, G_IO_ERROR_CANCELLED)) {
		ifl_log("%s: прерван", what);
	} else if (!ok) {
		ifl_log("%s: rc != 0 (%s)", what,
			err ? err->message : "ошибка");
	} else {
		ifl_log("%s: rc=0", what);
	}
	g_clear_error(&err);

	if (ifl.pl_inflight && strcmp(what, "atc-insert") == 0) {
		/* 9l-live v2: заливалась порция — по её rc чистим
		 * tmpfs и заводим следующий чанк */
		ifl_busy(1);
		pl_chunk_done(ok);
		return;
	}
	ifl_busy(0);
}

/* ---- запуск irmctl и транскод-цепочка (9i) ---- */

static gboolean fixture_ok(const char *fix)
{
	return fix && *fix && access(fix, R_OK) == 0;
}

/* путь оканчивается на .m4a (без учёта регистра)? Остальное аудио
 * (.mp3 .flac .wav …) сначала транскодируется в ALAC — его ждут и
 * протокол, и телефон */
static gboolean is_m4a(const char *p)
{
	size_t n = p ? strlen(p) : 0;
	return n > 4 && g_ascii_strcasecmp(p + n - 4, ".m4a") == 0;
}

/* "0:03:44.928888888" → мс. Целочисленный разбор: scanf("%lf")
 * зависит от локали (в ru ждёт запятую), а gst-discoverer печатает
 * точку — поэтому вручную, без с плавающей строкой */
static unsigned long long parse_clock_ms(const char *v)
{
	unsigned long long lead[2] = { 0, 0 }; /* часы, минуты */
	unsigned nlead = 0;
	unsigned long long cur = 0, ms = 0;
	unsigned digits = 0;
	gboolean saw = FALSE;
	const char *p;

	for (p = v; *p; p++) {
		if (*p >= '0' && *p <= '9') {
			cur = cur * 10u + (unsigned long long)(*p - '0');
			saw = TRUE;
			continue;
		}
		if (*p == ':' && saw && nlead < 2) {
			lead[nlead++] = cur;
			cur = 0;
			saw = FALSE;
			continue;
		}
		break;
	}
	unsigned long long sec = cur;
	if (nlead == 1)
		sec += lead[0] * 60u;
	else if (nlead == 2)
		sec += lead[0] * 3600u + lead[1] * 60u;
	if (*p == '.' || *p == ',') {
		for (p++; *p >= '0' && *p <= '9' && digits < 3; p++) {
			ms = ms * 10u + (unsigned long long)(*p - '0');
			digits++;
		}
	}
	while (digits < 3) {
		ms *= 10u;
		digits++;
	}
	return sec * 1000u + ms;
}

static void log_file_size(const char *path)
{
	struct stat st;
	if (stat(path, &st) != 0)
		return;
	gchar *s = g_format_size_full((guint64)st.st_size,
				      G_FORMAT_SIZE_IEC_UNITS);
	ifl_log("размер: %s (%llu Б)", s, (unsigned long long)st.st_size);
	g_free(s);
}

/* ---- теги источника (9j; TagLib C-биндинги) ---- */

/* чистка строки тега: управляющие символы вон, хвостовые пробелы
 * обрезаны, cap по границе utf8 (дубль env_san из irmctl.c —
 * программы идут раздельно) */
static void tag_copy_clean(char *dst, size_t len, const char *src)
{
	if (!src)
		return;
	size_t n = 0;
	for (const char *p = src; *p && n + 1 < len; p++) {
		unsigned char c = (unsigned char)*p;
		if (c < 0x20 && c != '\t')
			continue;
		dst[n++] = (char)c;
	}
	dst[n] = 0;
	while (n && (unsigned char)dst[n - 1] == ' ')
		dst[--n] = 0;
	size_t k = n;
	while (k > 0 && ((unsigned char)dst[k - 1] & 0xc0) == 0x80)
		k--;
	if (k > 0 && (unsigned char)dst[k - 1] >= 0x80) {
		unsigned char lb = (unsigned char)dst[k - 1];
		size_t want = (lb & 0xe0) == 0xc0 ? 2u
			    : (lb & 0xf0) == 0xe0 ? 3u
			    : 4u;
		if (n - (k - 1) < want)
			dst[k - 1] = 0;
	}
}

static void read_source_tags(const char *path)
{
	ifl.tag_title[0] = 0;
	ifl.tag_artist[0] = 0;
	ifl.tag_album[0] = 0;
	ifl.tag_genre[0] = 0;

	TagLib_File *tf = taglib_file_new(path);
	if (!tf || !taglib_file_is_valid(tf)) {
		ifl.tag_title[0] = 0;
		if (tf)
			taglib_file_free(tf);
		ifl_log("теги источника: taglib не распознал «%s» — "
			"названия останутся фирменными (IRM Tone …)",
			path ? path : "(пусто)");
		return;
	}
	TagLib_Tag *t = taglib_file_tag(tf);
	tag_copy_clean(ifl.tag_title, sizeof ifl.tag_title,
		       taglib_tag_title(t));
	tag_copy_clean(ifl.tag_artist, sizeof ifl.tag_artist,
		       taglib_tag_artist(t));
	tag_copy_clean(ifl.tag_album, sizeof ifl.tag_album,
		       taglib_tag_album(t));
	tag_copy_clean(ifl.tag_genre, sizeof ifl.tag_genre,
		       taglib_tag_genre(t));
	taglib_tag_free_strings();
	taglib_file_free(tf);

	if (!ifl.tag_title[0] && !ifl.tag_artist[0]) {
		ifl_log("теги источника пусты — названия останутся "
			"фирменными (IRM Tone …)");
		return;
	}
	ifl_log("теги источника: «%s» — «%s»%s%s",
		ifl.tag_title[0] ? ifl.tag_title : "(нет)",
		ifl.tag_artist[0] ? ifl.tag_artist : "(нет)",
		ifl.tag_album[0] ? ", альбом " : "",
		ifl.tag_album[0] ? ifl.tag_album : "");
	if (ifl.tag_genre[0])
		ifl_log("        жанр: %s", ifl.tag_genre);
}

/* ---- 9k: обложка источника --------------------------------------- */

/* 9k: обложка через комплексное свойство "PICTURE" (ID3v2 APIC /
 * MP4 covr; TagLib 2.2 API tag_c.h ~строка 595) → tmp-файл для
 * IRMA_ATC_ARTWORK (irmctl ставит маркером в /Airlock/Media/Artwork
 * /<item_pid>). Нет тега/кадра → art_path пуст → irmctl вставит
 * декларацию без artwork_cache_id. */
/* чтение обложки из TagLib-PICTURE источника во временный файл.
 * uniq — метка пакета („3“) для уникального имени (совпадающие
 * базовые имена файлов перезаписывали бы друг друга); NULL — прежнее
 * имя одиночного режима. */
static void read_source_artwork2(const char *path, const char *uniq)
{
	ifl.art_path[0] = 0;
	TagLib_File *tf = taglib_file_new(path);
	if (!tf || !taglib_file_is_valid(tf)) {
		if (tf)
			taglib_file_free(tf);
		ifl_log("обложка: файл тегов не распознан");
		return;
	}
	TagLib_Complex_Property_Attribute ***props =
		taglib_complex_property_get(tf, "PICTURE");
	if (props) {
		TagLib_Complex_Property_Picture_Data pic;
		memset(&pic, 0, sizeof pic);
		taglib_picture_from_complex_property(props, &pic);
		if (pic.data && pic.size > 0) {
			const char *ext = "jpg";
			if (pic.mimeType && *pic.mimeType &&
			    strstr(pic.mimeType, "png"))
				ext = "png";
			char *b = g_path_get_basename(path ? path : "");
			char *dot = strrchr(b, '.');
			if (dot && dot != b)
				*dot = 0;
			for (char *q = b; *q; q++)
				if (!g_ascii_isalnum((guchar)*q) &&
				    *q != '-' && *q != '_')
					*q = '_';
			if (!*b) {
				g_free(b);
				b = g_strdup("src");
			}
			gchar *name = uniq
					      ? g_strdup_printf(
						      "irm-fill-%s-%s.%s",
						      uniq, b, ext)
					      : g_strdup_printf(
						      "irm-fill-%s.%s", b,
						      ext);
			gchar *full = g_build_filename(g_get_tmp_dir(),
						       name, NULL);
			FILE *f = fopen(full, "wb");
			if (!f) {
				ifl_log("обложка: tmp-файл не открыт");
			} else if (fwrite(pic.data, 1, pic.size, f) !=
				   pic.size) {
				ifl_log("обложка: запись %s не удалась",
					full);
				fclose(f);
				f = NULL;
			} else {
				fclose(f);
				snprintf(ifl.art_path,
					 sizeof ifl.art_path, "%s",
					 full);
				ifl_log("обложка: %u Б (%s) → %s", pic.size,
					pic.mimeType ? pic.mimeType : "?",
					full);
			}
			g_free(full);
			g_free(name);
			g_free(b);
		}
		taglib_complex_property_free(props);
	}
	taglib_file_free(tf);
	if (!ifl.art_path[0])
		ifl_log("обложка: в источнике нет (вставка пойдёт без неё)");
}

/* 9l: строка для TSV-плейлиста из тега: управляющие символы вон * (как tag_copy_clean) и табы → пробелы (таб — разделитель колонок
 * TSV). */
static void tsv_field(char *dst, size_t len, const char *src)
{
	if (!src)
		return;
	size_t n = 0;
	for (const char *p = src; *p && n + 1 < len; p++) {
		unsigned char c = (unsigned char)*p;
		if (c < 0x20) /* таб разрешён, но ниже заменён */
			continue;
		dst[n++] = (c == '\t') ? ' ' : (char)c;
	}
	dst[n] = 0;
}

/* ---- низкоуровневый запуск irmctl (busy управляет вызывающий) ---- */

static void irmctl_spawn(const char *subcmd, const char *fixture_override,
			 unsigned long long meta_ms, unsigned meta_rate,
			 const char *tsv_override)
{
	GError *err = NULL;
	gchar **env = g_get_environ();
	gboolean is_insert = strcmp(subcmd, "atc-insert") == 0;

	if (tsv_override) {
		/* 9l: пакет разных треков — TSV-плейлист от GUI; мешанина
		 * одиночных env (фикстура/мета/теги) НЕ передаём:
		 * построчные данные — в файле плейлиста */
		env = g_environ_setenv(env, "IRMA_ATC_PLAYLIST",
				       tsv_override, TRUE);
		ifl_log("    плейлист=%s", tsv_override);
	} else if (is_insert) {
		const char *fix =
			fixture_override
				? fixture_override
				: gtk_editable_get_text(
					GTK_EDITABLE(ifl.en_fixture));
		if (!fixture_ok(fix)) {
			ifl_log("фикстура недоступна: %s",
				(fix && *fix) ? fix : "(пусто)");
			g_strfreev(env);
			ifl_busy(0);
			return;
		}
		env = g_environ_setenv(env, "IRMA_ATC_FIXTURE", fix, TRUE);
		char nb[12];
		unsigned batch =
			(unsigned)gtk_spin_button_get_value(ifl.sp_batch);
		if (batch < 1)
			batch = 1;
		if (batch > IRMFILL_BATCH_MAX)
			batch = IRMFILL_BATCH_MAX;
		snprintf(nb, sizeof nb, "%u", batch);
		env = g_environ_setenv(env, "IRMA_ATC_BATCH_N", nb, TRUE);
		/* теги источника (9j): пустые не передаём — irmctl
		 * подставит фирменные дефолты сам */
		if (ifl.tag_title[0])
			env = g_environ_setenv(env, "IRMA_ATC_TITLE",
					       ifl.tag_title, TRUE);
		if (ifl.tag_artist[0])
			env = g_environ_setenv(env, "IRMA_ATC_ARTIST",
					       ifl.tag_artist, TRUE);
		if (ifl.tag_album[0])
			env = g_environ_setenv(env, "IRMA_ATC_ALBUM",
					       ifl.tag_album, TRUE);
		if (ifl.tag_genre[0])
			env = g_environ_setenv(env, "IRMA_ATC_GENRE",
					       ifl.tag_genre, TRUE);
		/* (9k) обложка: tmp-файл от TagLib PICTURE; irmctl
		 * сам её не увидит — только этот env */
		if (ifl.art_path[0])
			env = g_environ_setenv(env, "IRMA_ATC_ARTWORK",
					       ifl.art_path, TRUE);
		/* метаданные перекода (9i): длительность/сэмплрейт;
		 * сэмплы irmctl считает сам (ms*rate/1000) */
		if (meta_ms != 0) {
			char bm[24], br[24], bs[24];
			snprintf(bm, sizeof bm, "%llu", meta_ms);
			snprintf(br, sizeof br, "%u", meta_rate);
			snprintf(bs, sizeof bs, "%llu",
				 meta_ms *
					 (unsigned long long)meta_rate /
					 1000ULL);
			env = g_environ_setenv(env, "IRMA_ATC_TOTAL_MS",
					       bm, TRUE);
			env = g_environ_setenv(env, "IRMA_ATC_RATE", br,
					       TRUE);
			env = g_environ_setenv(env, "IRMA_ATC_SAMPLES",
					       bs, TRUE);
		}
		ifl_log("    фикс=%s%s батч=%u", fix,
			fixture_override ? " (перекод)" : "", batch);
		if (meta_ms != 0)
			ifl_log("    метаданные: %llu мс, %u Гц",
				meta_ms, meta_rate);
	}

	const char *libid =
		gtk_editable_get_text(GTK_EDITABLE(ifl.en_libid));
	if (libid && *libid)
		env = g_environ_setenv(env, "IRMA_ATC_LIBID", libid, TRUE);

	GSubprocessLauncher *launcher = g_subprocess_launcher_new(
		G_SUBPROCESS_FLAGS_STDOUT_PIPE |
		G_SUBPROCESS_FLAGS_STDERR_MERGE);
	g_subprocess_launcher_set_environ(launcher, env);
	g_strfreev(env);

	ifl.cancel = g_cancellable_new();
	GSubprocess *sp = g_subprocess_launcher_spawn(
		launcher, &err, ifl.irmctl, subcmd, (const char *)NULL);
	g_object_unref(launcher);
	if (!sp) {
		ifl_log("запуск %s %s: %s", ifl.irmctl, subcmd,
			err ? err->message : "?");
		g_clear_error(&err);
		g_object_unref(ifl.cancel);
		ifl.cancel = NULL;
		if (ifl.pl_active) {
			/* v2-порт: заливающий спавн не стартовал — цикл
			 * обрываем чисто (артефакты порции остаются в
			 * /tmp для разбора) */
			ifl.pl_inflight = FALSE;
			pl_abort("запуск irmctl не удался");
			return;
		}
		ifl_busy(0);
		return;
	}
	ifl.proc = sp;

	GInputStream *out = g_subprocess_get_stdout_pipe(sp);
	ifl.stream = g_data_input_stream_new(out);
	g_data_input_stream_read_line_async(ifl.stream, G_PRIORITY_DEFAULT,
					    ifl.cancel, stream_read_line,
					    NULL);

	ifl_log(">>> %s %s", ifl.irmctl, subcmd);
	g_subprocess_wait_check_async(sp, ifl.cancel, process_done,
				      (gpointer)subcmd);
}

/* ---- верхнеуровневый запуск: проверки + busy ---- */

/* ---- 9l: пакет разных треков (мульт-выбор → TSV-плейлист) ---- */

/* нижняя половина файла: цепочка перекода и спавна */
static void chain_paths_free(void);
static void chain_discover(gpointer job);
static GSubprocess *transcode_spawn(const char *src, const char *dst);
static gchar *tc_make_dst2(const char *src, const char *uniq);
static gchar *tc_make_dst3(const char *src, const char *uniq);
static void pl_finish(void);
static unsigned pl_chunk_k(void);
static unsigned pl_par_k(void);
static void pl_flush_chunk(void);
static int pl_flush_mature(void);
static void pl_chunk_done(gboolean ok);
static void pl_advance(void);
static void pl_job_fail(struct pl_job *j, const char *why);

/* live-факт 05.11: gst-launch может выйти rc=0 даже при ошибке пайпа
 * (ОШИБКА «Превышена дисковая квота» на tmpfs — файл остаётся без
 * moov), поэтому единственный настоящий валидатор — gst-discoverer;
 * неудачный item в пакете ПРОПУСКАЕТСЯ, а не валит батч. */

/* сколько байт свободно на файловой системе пути (0 при провале) */
static unsigned long long free_bytes_on(const char *dir)
{
	struct statvfs v;
	if (statvfs(dir, &v) != 0)
		return 0;
	return (unsigned long long)v.f_bavail *
	       (unsigned long long)v.f_frsize;
}

/* сравнитель для top-K сортировки оценок места (по убыванию) */
static int cmp_ull_desc(const void *a, const void *b)
{
	unsigned long long x = *(const unsigned long long *)a;
	unsigned long long y = *(const unsigned long long *)b;
	return x > y ? -1 : (x < y ? 1 : 0);
}

/* оценка размера пейлоада (.m4a-перекода) из источника. v3 —
 * оцениваем ПИСАТЕЛЬСКИЙ размер выбранного кодека:
 *  AAC — точный по TagLib-длине трека: мс × (битрейт/8000) б.
 *    (256kvp наружу пишет ~ const битрейт независимо от исходника:
 *    320k-mp3 → ×0,8, 128k-mp3 → даже ×2 — размер источника лжёт);
 *  ALAC (фолбэк) — старые эмпирические факторы live 05.11:
 *    mp3 ×4.0 (10,3 МиБ → 41,9 МиБ), flac ×1.5, wav/aif ×0.8,
 *    неизвестное расширение ×4.0 (строгий);
 *  .m4a/.mp4 — КАК ЕСТЬ, tmpfs не расходует (0).
 * 5% запас поверх любой оценки. Нужна для предзапуска пакета. */
static unsigned long long payload_estimate(const char *path)
{
	struct stat st;
	if (stat(path, &st) != 0 || !S_ISREG(st.st_mode))
		return 0;
	const char *e = strrchr(path, '.');
	if (e && (g_ascii_strcasecmp(e, ".m4a") == 0 ||
		  g_ascii_strcasecmp(e, ".mp4") == 0))
		return 0; /* как есть, tmpfs не расходует */
	unsigned long long bytes = 0;
	if (ifl.codec_aac) {
		/* TagLib: длина в СЕКУНДАХ (int; ±0,5 с ≈ ±16 КиБ на
		 * трек — несущественно на границе 2K+PAR). */
		TagLib_File *tf = taglib_file_new(path);
		if (tf && taglib_file_is_valid(tf)) {
			const TagLib_AudioProperties *ap =
				taglib_file_audioproperties(tf);
			int len = ap ? taglib_audioproperties_length(ap)
				     : 0;
			taglib_file_free(tf);
			if (len > 0)
				bytes = (unsigned long long)len * 1000ULL *
					ifl.aac_rate / 8000ULL;
		} else if (tf) {
			taglib_file_free(tf);
		}
	}
	if (bytes)
		return (unsigned long long)(bytes * 1.05 + 1.0);
	/* без TagLib-длины (редко) или кодек ALAC — факторы по
	 * размеру источника; дефолт строгий обоим кодекам */
	double f = 4.0;
	if (e) {
		if (g_ascii_strcasecmp(e, ".flac") == 0)
			f = 1.5;
		else if (g_ascii_strcasecmp(e, ".wav") == 0 ||
			 g_ascii_strcasecmp(e, ".aif") == 0 ||
			 g_ascii_strcasecmp(e, ".aiff") == 0)
			f = 0.8;
		else if (g_ascii_strcasecmp(e, ".mp3") == 0)
			f = 4.0;
	}
	/* 5% запас поверх эмпирики */
	return (unsigned long long)((double)st.st_size * f * 1.05);
}

static void pl_reset(void)
{
	if (ifl.pl_files)
		g_ptr_array_unref(ifl.pl_files);
	if (ifl.pl_rows)
		g_ptr_array_unref(ifl.pl_rows);
	if (ifl.pl_chunk_art)
		g_ptr_array_unref(ifl.pl_chunk_art);
	if (ifl.pl_ready)
		g_ptr_array_unref(ifl.pl_ready);
	/* v3: параллельные транскоды, кто ещё гонится, гасим силой —
	 * v2 гасил одиночный через ifl.proc; их колбэки затем
	 * подберут job'ы по поколению (ссылка в списке умрёт вместе
	 * с массивом чисто). */
	if (ifl.tc_procs) {
		for (guint i = 0; i < ifl.tc_procs->len; i++)
			g_subprocess_force_exit(
				g_ptr_array_index(ifl.tc_procs, i));
		g_ptr_array_unref(ifl.tc_procs);
		ifl.tc_procs = NULL;
	}
	/* job'ы (в очереди и на финализации) НЕ освобождаем — их
	 * подберут async-колбэки по pl_gen (поколение растёт ниже);
	 * queued-штук ≤ PAR — маленькая допустимая течь на
	 * abort-пути. */
	g_free(ifl.pl_chunk_tsv);
	ifl.pl_files = NULL;
	ifl.pl_rows = NULL;
	ifl.pl_chunk_art = NULL;
	ifl.pl_chunk_tsv = NULL;
	ifl.pl_ready = NULL;
	ifl.pl_fin_job = NULL;
	ifl.pl_chunk_num = 0;
	ifl.pl_chunk_total = 0;
	ifl.pl_inflight = FALSE;
	ifl.pl_active = FALSE;
	ifl.pl_idx = 0;
	ifl.pl_skip = 0;
	ifl.pl_running = 0;
	ifl.pl_tct = 0;
	ifl.pl_rows_done = 0;
	memset(ifl.pl_alive, 0, sizeof ifl.pl_alive);
	ifl.pl_gen++; /* старым async-колбэкам job больше не его */
}

/* пакет прерван: освобождаем состояние, busy вон */
static void pl_abort(const char *why)
{
	ifl_log("пакет прерван: %s", why);
	/* окно прогресса гасим — пакет не идёт */
	if (ifl.win_prog)
		gtk_widget_set_visible(GTK_WIDGET(ifl.win_prog), FALSE);
	pl_reset();
	ifl_busy(0);
}

/* ---- окно прогресса пакетной заливки (владелец 05.11) ---- */

/* обновление: доля = доведённые до строки/скипа файлы ÷ весь пакет;
 * в подписи — порции и чем занят конвейер */
static void pl_progress_update(void)
{
	if (!ifl.win_prog || !ifl.pl_active)
		return;
	unsigned total = ifl.pl_files ? (unsigned)ifl.pl_files->len : 0;
	if (total == 0)
		return;
	gtk_progress_bar_set_fraction(
		ifl.pb_prog,
		(double)ifl.pl_rows_done / (double)total);
	char txt[180];
	snprintf(txt, sizeof txt,
		 "обработано %u из %u; порция %u/%u%s",
		 ifl.pl_rows_done, total, ifl.pl_chunk_num,
		 ifl.pl_chunk_total,
		 ifl.pl_inflight ? " — заливка на телефон…"
				  : " — пайплайн в работе…");
	gtk_label_set_text(ifl.la_prog, txt);
}

/* отмена пакета: кнопка «Отмена» в окне прогресса (и его закрытие —
 * тот же выбор). Гасим заливающий подпроцесс и всю машину пакета:
 * транкоды гасит pl_reset (tc_procs force_exit), job'ы подберут
 * async-колбэки по поколению (в pl_reset растёт pl_gen). Телефон НЕ
 * откатываем: это отмена НАШЕЙ машины; залитая часть остаётся. */
static gboolean on_progress_close(GtkWindow *win, gpointer user);

static void pl_cancel(const char *why)
{
	if (!ifl.pl_active)
		return;
	if (ifl.proc) /* заливающийся atc-insert текущей порции */
		g_subprocess_force_exit(ifl.proc);
	pl_abort(why);
}

static void on_progress_cancel_clicked(GtkButton *btn, gpointer user)
{
	(void)btn;
	(void)user;
	pl_cancel("кнопка Отмена");
}

static gboolean on_progress_close(GtkWindow *win, gpointer user)
{
	(void)win;
	(void)user;
	/* закрытие окна = отмена при живом пакете; без пакета — просто
	 * спрятать (окно переиспользуется, не уничтожаем) */
	if (ifl.pl_active) {
		pl_cancel("окно прогресса закрыто");
		return TRUE; /* спрятать нас сами (pl_abort) */
	}
	gtk_widget_set_visible(GTK_WIDGET(ifl.win_prog), FALSE);
	return TRUE;
}

/* окно лениво собирается при первом пакете и живёт дальше */
static void pl_progress_show(void)
{
	if (!ifl.win_prog) {
		GtkWidget *w = gtk_window_new();
		gtk_window_set_title(GTK_WINDOW(w), "Заливка пакета — "
						     "прогресс");
		gtk_window_set_resizable(GTK_WINDOW(w), FALSE);
		gtk_window_set_transient_for(GTK_WINDOW(w),
					     GTK_WINDOW(ifl.win));
		GtkWidget *box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);
		gtk_widget_set_margin_top(box, 12);
		gtk_widget_set_margin_bottom(box, 12);
		gtk_widget_set_margin_start(box, 16);
		gtk_widget_set_margin_end(box, 16);
		ifl.la_prog = GTK_LABEL(gtk_label_new("пайплайн:"));
		gtk_label_set_xalign(ifl.la_prog, 0.0);
		gtk_box_append(GTK_BOX(box), GTK_WIDGET(ifl.la_prog));
		ifl.pb_prog = GTK_PROGRESS_BAR(gtk_progress_bar_new());
		gtk_widget_set_hexpand(GTK_WIDGET(ifl.pb_prog), TRUE);
		gtk_widget_set_size_request(GTK_WIDGET(ifl.pb_prog), 420,
					    -1);
		gtk_box_append(GTK_BOX(box), GTK_WIDGET(ifl.pb_prog));
		GtkWidget *hb = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 6);
		ifl.btn_prog_cancel = GTK_BUTTON(
			gtk_button_new_with_label("Отмена"));
		gtk_widget_set_tooltip_text(
			GTK_WIDGET(ifl.btn_prog_cancel),
			"прервать конвейер: транкоды и залитие "
			"останавливаются; уже залитые на телефон части "
			"остаются");
		g_signal_connect(ifl.btn_prog_cancel, "clicked",
				 G_CALLBACK(on_progress_cancel_clicked),
				 NULL);
		gtk_box_append(GTK_BOX(hb), GTK_WIDGET(ifl.btn_prog_cancel));
		gtk_box_append(GTK_BOX(box), hb);
		gtk_window_set_child(GTK_WINDOW(w), box);
		g_signal_connect(w, "close-request",
				 G_CALLBACK(on_progress_close), NULL);
		ifl.win_prog = GTK_WINDOW(w);
	}
	gtk_widget_set_visible(GTK_WIDGET(ifl.win_prog), TRUE);
	pl_progress_update();
}

static void pl_job_free(struct pl_job *j)
{
	if (!j)
		return;
	/* job закрылся (строка/скип/сброс пакета) — маска перестаёт
	 * держать порцию. */
	if (j->idx >= 1 && j->idx <= IRMFILL_BATCH_MAX)
		ifl.pl_alive[j->idx] = 0;
	g_free(j->src);
	g_free(j->dst);
	g_free(j->art);
	g_free(j->title);
	g_free(j->artist);
	g_free(j->album);
	g_free(j->genre);
	g_free(j);
}

/* теги + обложка переносим В САМ пейлоад (владелец 05.11: «теги не
 * читает»): телефон берёт их из TSV-конверта в свою базу, а скан
 * приложения читает метаданные ИЗ ФАЙЛОВ — а mp4mux пишет голый
 * moov без ilst, поэтому на iPhone всё показывалось, в приложении
 * нет. Повторно используем transcodeWriteTags (TagLib, формат по
 * файлу); ошибка не срывает конвейер — строка уедет, просто файл
 * останется с пустыми тегами. */
static void ifl_write_tags_into(struct pl_job *j)
{
	MedialibMeta m;
	memset(&m, 0, sizeof m);
	m.title = j->title && j->title[0] ? j->title : NULL;
	m.artist = j->artist && j->artist[0] ? j->artist : NULL;
	m.album = j->album && j->album[0] ? j->album : NULL;
	m.genre = j->genre && j->genre[0] ? j->genre : NULL;
	if (j->art && g_file_test(j->art, G_FILE_TEST_IS_REGULAR)) {
		gsize alen = 0;
		gchar *adata = NULL;
		if (g_file_get_contents(j->art, &adata, &alen, NULL) &&
		    alen > 0) {
			m.has_cover = TRUE;
			/* владение у MedialibMeta (g_free в free-функции
			 * семантики) */
			m.cover_data = (guint8 *)adata;
			m.cover_len = alen;
		}
	}
	GError *terr = NULL;
	gboolean ok = transcodeWriteTags(j->dst, &m, &terr);
	g_free(m.cover_data);
	if (!ok)
		ifl_log("    [%u] теги вшить в файл не удалось: %s",
			j->idx, terr ? terr->message : "?");
	g_clear_error(&terr);
}

static void pl_job_ready_add(struct pl_job *j)
{
	g_ptr_array_add(ifl.pl_ready, j);
}

/* список живых транкод-подпроцессов (v3): жёсткая ссылка у списка —
 * колбэк лишь снимает её оттуда; двойных unref'ов нет */
static void tc_procs_push(GSubprocess *sp)
{
	if (!ifl.tc_procs)
		ifl.tc_procs = g_ptr_array_new_with_free_func(
			g_object_unref);
	g_ptr_array_add(ifl.tc_procs, sp);
}

static void tc_procs_drop(GSubprocess *sp)
{
	/* снятие успешного элемента вызывает free_func (unref) */
	if (ifl.tc_procs)
		g_ptr_array_remove(ifl.tc_procs, sp);
}

/* live-правило 05.11: сорвавшийся item пакета пропускается, батч
 * живёт дальше. Артефакт транскода (неофинализированный .m4a БЕЗ
 * moov — gst-launch вышел, не долив хвост) удаляем: иначе он
 * доедает tmpfs и может быть ложно «залит» на телефон. Источник
 * (.m4a как есть) НЕ трогаем — v3-фикс прежнего безусловного
 * unlink'а tc_dst (туда попадал и файл владельца). */
static void pl_job_fail(struct pl_job *j, const char *why)
{
	guint n = ifl.pl_files ? ifl.pl_files->len : 0;
	ifl_log("  пропущен [%u/%u]: %s", j->idx, (unsigned)n, why);
	if (j->trans && j->dst && *j->dst &&
	    g_file_test(j->dst, G_FILE_TEST_IS_REGULAR))
		unlink(j->dst);
	chain_paths_free();
	pl_job_free(j);
	ifl.pl_skip++;
	ifl.pl_rows_done++;
	pl_progress_update();
	ifl.pl_running--;
	pl_advance();
}

/* job-транкод закончен: пейлоад появился → в очередь разборки */
static void pl_job_transcode_done(GObject *src, GAsyncResult *res,
				  gpointer user)
{
	GSubprocess *sp = G_SUBPROCESS(src);
	struct pl_job *j = user;
	char *txt = NULL;
	char *etext = NULL;
	GError *err = NULL;
	gboolean ok = g_subprocess_communicate_utf8_finish(
		sp, res, &txt, &etext, &err);
	tc_procs_drop(sp); /* жёсткая ссылка жила в списке */

	if (j->gen != ifl.pl_gen) {
		/* пакет сброшен — job на самоподбор */
		g_free(txt);
		g_free(etext);
		g_clear_error(&err);
		pl_job_free(j);
		return;
	}
	if (ok)
		ok = j->dst && access(j->dst, R_OK) == 0;
	if (!ok) {
		ifl_log("транскод [%u] не удался: %s", j->idx,
			err ? err->message
			    : "выходной файл не появился");
		if (txt && *txt) {
			ifl_log("gst-launch сказал:");
			ifl_log("%s", txt);
		}
		g_free(txt);
		g_free(etext);
		g_clear_error(&err);
		ifl.pl_tct--;
		pl_job_fail(j, "транскод не удался");
		return;
	}
	ifl_log("    [%u] транскод готов", j->idx);
	/* теги/обложка вшиваем в пейлоад (файлы становятся
	 * самодостаточными — скан приложения читает их напрямую) */
	ifl_write_tags_into(j);
	log_file_size(j->dst);
	g_free(txt);
	g_free(etext);
	ifl.pl_tct--;
	pl_job_ready_add(j);
	pl_advance();
}

/* транкод-слот занял: спавн gst-launch (кодек выбран на старте) */
static void pl_job_start(struct pl_job *j)
{
	GSubprocess *sp = transcode_spawn(j->src, j->dst);
	if (!sp) {
		pl_job_fail(j, "gst-launch не запустился");
		return;
	}
	tc_procs_push(sp); /* гасится pl_reset'ом при закрытии/срыве */
	ifl.pl_tct++;
	g_subprocess_communicate_utf8_async(sp, NULL, NULL,
					    pl_job_transcode_done, j);
}

/* очередь разборки: сериально, один gst-discover за раз. Теги/
 * обложка едут В СТРОКУ прямо из копий job'а (pl_row_done читает
 * j->*) — общие поля ifl.tag_* и art_path не участвуют: планировка
 * следующего файла гонит по ним read_source_tags против Discover,
 * и строка увозит чужие теги (живой факт 05.11). Здесь остаётся
 * только tc_dst: его берут chain_discover (путь разбора) и
 * chain_discover_done (dst строки). */
static void pl_job_finalize(void)
{
	if (ifl.pl_fin_job || ifl.pl_ready->len == 0)
		return;
	struct pl_job *j = g_ptr_array_index(ifl.pl_ready, 0);
	g_ptr_array_remove_index(ifl.pl_ready, 0);
	ifl.pl_fin_job = j;
	ifl.tc_dst = g_strdup(j->dst);
	chain_discover(j);
}

/* новый job: теги/обложка снимаются НЕМЕДЛЕННО (рабочие поля),
 * лог «[i/n] файл» — как в последовательном режиме */
static struct pl_job *pl_job_new(const char *src, unsigned idx,
				 guint total)
{
	struct pl_job *j = g_new0(struct pl_job, 1);
	gchar *base = g_path_get_basename(src);
	gchar *uname = g_strdup_printf("%u", idx);
	ifl_log("[%u/%u] %s", idx, (unsigned)total, base);
	g_free(base);
	read_source_tags(src);
	read_source_artwork2(src, uname);
	j->src = g_strdup(src);
	/* пейлоад ВСЕГДА наш tmp-артефакт: перекод — .m4a; «как есть» —
	 * копия с оригинальным расширением и чистым именем (теги не
	 * трогаем — телефон сядет на права из TSV). Файл владельца не
	 * трогаем всегда */
	j->dst = ifl.trans_mode ? tc_make_dst2(src, uname)
				: tc_make_dst3(src, uname);
	g_free(uname);
	j->title = g_strdup(ifl.tag_title);
	j->artist = g_strdup(ifl.tag_artist);
	j->album = g_strdup(ifl.tag_album);
	j->genre = g_strdup(ifl.tag_genre);
	j->art = g_strdup(ifl.art_path);
	j->idx = idx;
	/* «trans» = пейлоад — НАШ tmp-артефакт: только такие файлы
	 * разрешены в уборку после живой заливки (rc=0); источник
	 * владельца переживает конвейер всегда */
	j->trans = TRUE;
	j->gen = ifl.pl_gen;
	/* маска живых job'ов (см. pl_alive): планировка держит порцию
	 * закрытой, пока этот файл не превратится в строку или скип */
	if (idx >= 1 && idx <= IRMFILL_BATCH_MAX)
		ifl.pl_alive[idx] = 1;
	return j;
}

/* job доведён до строки: строка в буфер порции. Буфер дожал K —
 * порция уезжает на заливку; пока телефон кушает прежнюю,
 * транскоды копят СЛЕДУЮЩУЮ (tmpfs ≤ 2K+PAR худших пейлоадов,
 * живой факт 05.11: макс 46 МиБ ALAC — порция ~0,73 ГиБ) */
static void pl_row_done(const char *dst, unsigned long long ms,
			unsigned rate)
{
	/* job был на финализации: его метку «наш/чужой» перекладываем в
	 * строку ДО освобождения (r->trans решает, кого разрешено
	 * убирать по rc: tmp-артефакт — да; файл владельца — нет) */
	struct pl_job *j = ifl.pl_fin_job;
	ifl.pl_fin_job = NULL;
	struct pl_row *r = g_new0(struct pl_row, 1);
	snprintf(r->dst, sizeof r->dst, "%s", dst ? dst : "");
	r->ms = ms;
	r->rate = rate;
	r->trans = (j ? j->trans : FALSE); /* без job'а — не трогаем */
	r->idx = (j ? j->idx : 0); /* метка файла пакета: заморожена
				    * вместе с тегами/tc_dst (см.
				    * pl_job_finalize) — строка знает,
				    * ЧЬЯ она пара */
	/* теги/обложка — ТОЛЬКО из копий job'а (заморожены в
	 * pl_job_new): общие поля ifl.tag_* и art_path перезаписывает
	 * планировка следующего файла (read_source_tags) прямо перед
	 * сбором строки — живой факт 05.11: строка [файл #2] увезла
	 * теги [4/19] («fuze» при файле Lost in a Wave). */
	tsv_field(r->title, sizeof r->title, j ? j->title : ifl.tag_title);
	tsv_field(r->artist, sizeof r->artist,
		  j ? j->artist : ifl.tag_artist);
	tsv_field(r->album, sizeof r->album, j ? j->album : ifl.tag_album);
	tsv_field(r->genre, sizeof r->genre, j ? j->genre : ifl.tag_genre);
	tsv_field(r->art, sizeof r->art, j ? j->art : ifl.art_path);
	g_ptr_array_add(ifl.pl_rows, r);
	ifl.pl_rows_done++; /* прогресс окна: файл доведён до строки */
	gchar *rbase = g_path_get_basename(r->dst);
	ifl_log("    строка готова [файл #%u]: %llu мс, %u Гц, «%s», "
		"обложка %s, файл ← %s",
		r->idx, ms, rate, r->title[0] ? r->title : "(нет)",
		r->art[0] ? "есть" : "нет", rbase);
	g_free(rbase);
	chain_paths_free();
	if (j) {
		pl_job_free(j);
		ifl.pl_running--;
	}
	if (ifl.pl_rows->len >= (guint)pl_chunk_k() &&
	    !ifl.pl_inflight && pl_flush_mature())
		pl_flush_chunk();
	pl_progress_update();
	pl_advance();
}

/* насос пакетного конвейера (9n): порции по K, финализация
 * сериально, подкачка транкод-слотов, хвостовой финиш */
static void pl_advance(void)
{
	if (!ifl.pl_active)
		return;
	/* (а) буфер дожал K и замучирел (нет живых job'ов младше
	 * последней готовой строки) — порция в заливку */
	if (ifl.pl_rows &&
	    ifl.pl_rows->len >= (guint)pl_chunk_k() &&
	    !ifl.pl_inflight && pl_flush_mature())
		pl_flush_chunk();
	/* (б) финализация готовых — сериально */
	if (!ifl.pl_fin_job && ifl.pl_ready->len)
		pl_job_finalize();
	/* (в) транкоды: пока буфер строк не дожал порцию, слоты
	 * свободны и очередь не кончилась */
	guint n = ifl.pl_files->len;
	while (ifl.pl_tct < ifl.pl_par && ifl.pl_idx < n &&
	       ifl.pl_rows && ifl.pl_rows->len < (guint)pl_chunk_k()) {
		const char *src = g_ptr_array_index(ifl.pl_files,
						    ifl.pl_idx);
		/* копии (нативный вход) синхронные: без лимита
		 * первый проход завал бы ВЕСЬ пакет (пик tmpfs на
		 * всё); держим ≤ PAR боев в полёте, серийно.
		 * Транскоды грызут свой предел через pl_tct — им
		 * не мешаем. Файл возвращается в очередь (idx--)
		 * — перечитаем его на следующем advance */
		if (!(ifl.trans_mode && !is_m4a(src)) &&
		    ifl.pl_running >= (guint)ifl.pl_par) {
			ifl.pl_idx--;
			break;
		}
		ifl.pl_idx++;
		if (strchr(src, '\t')) {
			/* таб в пути разобьёт колонки TSV */
			ifl_log("  пропущен — таб в пути: %s", src);
			ifl.pl_skip++;
			ifl.pl_rows_done++;
			pl_progress_update();
			continue;
		}
		if (!fixture_ok(src)) {
			ifl_log("  пропущен — недоступен: %s", src);
			ifl.pl_skip++;
			ifl.pl_rows_done++;
			pl_progress_update();
			continue;
		}
		struct pl_job *j = pl_job_new(src, ifl.pl_idx,
					      (unsigned)n);
		ifl.pl_running++;
		if (ifl.trans_mode && !is_m4a(src)) {
			/* перекод: gst — единственный путь не-.m4a в
			 * конвейере; «как есть» gst не запускает
			 * вовсе (владелец 06.11: mp3 льём без
			 * конвертирования, как 3uTools) */
			pl_job_start(j);
		} else {
			/* пейлоад-копия: родный .m4a при перекоде и
			 * ВСЕ файлы в «как есть» (расширение
			 * оригинала, имя без пробелов). Теги вшиваем
			 * ТОЛЬКО при перекоде (в копию .m4a);
			 * mp3 в «как есть» уезжает со своим ID3 —
			 * телефон возьмёт теги из TSV, а скан
			 * прочитает их прямо из файла. Оригинал
			 * владельца не тронут. */
			GError *cerr = NULL;
			GFile *gf = g_file_new_for_path(src);
			GFile *df = g_file_new_for_path(j->dst);
			gboolean copied =
				g_file_copy(gf, df, G_FILE_COPY_OVERWRITE,
					    NULL, NULL, NULL, &cerr);
			g_object_unref(gf);
			g_object_unref(df);
			if (!copied) {
				ifl_log("  [%u] копия не удалась: %s",
					j->idx,
					cerr ? cerr->message : "?");
				g_clear_error(&cerr);
				ifl.pl_running--;
				ifl.pl_skip++;
				ifl.pl_rows_done++;
				pl_progress_update();
				pl_job_free(j);
				continue;
			}
			if (ifl.trans_mode)
				ifl_write_tags_into(j);
			pl_job_ready_add(j);
		}
	}
	/* (г) очередь кончилась и всё разошлось; inflight ждёт последний
	 * rc — хвост разборок поведёт pl_chunk_done → pl_advance */
	if (!ifl.pl_inflight && ifl.pl_idx >= n &&
	    ifl.pl_running == 0 && ifl.pl_ready->len == 0 &&
	    !ifl.pl_fin_job)
		pl_finish();
}

/* K треков на порцию (дефолт 8 — владелец 05.11 уменьшил с 16:
 * чаще якерь/ops, меньшие полосы срывов): IRMFILL_CHUNK
 * переопределяет.
 * Модель владельца: перекод порции → заливка порции → удаление её
 * артефактов с tmpfs → следующий круг. В tmpfs живут ЗАЛИВАЮЩАЯСЯ
 * порция + буфер following порции (строки ждут rc) + PAR
 * транскодов в полёте — граница места ≈ one × (2K + PAR). */
static unsigned pl_chunk_k(void)
{
	const char *e = getenv("IRMFILL_CHUNK");
	if (!e || !*e)
		return 8;
	int v = atoi(e);
	if (v <= 0 || v > IRMFILL_BATCH_MAX)
		return 8;
	return (unsigned)v;
}

/* параллельных транскодов за раз: ЖЁСТКО 1 (владелец 05.11:
 * «давай уберем всетаки паралельную»). Диагноз конвейера: общие
 * поля тегов ifl.tag_* и art_path перезаписывались планировкой
 * следующего файла против Discover предыдущего job'а — строки
 * увозили чужие названия («fuze» при файле Lost in a Wave, живой
 * лог 14:58). pl_row_done теперь читает теги из копий job'а, но
 * последовательный влёт (1) дополнительно убирает саму гонку и
 * держит tmpfs в прежней границе; IRMFILL_PAR больше не читается.
 * Провод кормится с v2 и одним транскодом (~1,4 с/файл). */
static unsigned pl_par_k(void)
{
	return 1;
}

/* очередь источников кончилась (v2): хвостовой чанк набран меньше
 * K — заливаем его тоже; если строк нет, последняя порция уже
 * уехала (или всё пропущено) */
static void pl_finish(void)
{
	guint nr = ifl.pl_rows ? ifl.pl_rows->len : 0;
	if (nr == 0) {
		if (ifl.pl_inflight)
			return; /* последняя порция ещё заливается */
		if (ifl.pl_chunk_num) {
			ifl_log("конвейер завершён: залито порций %u, "
				"пропущено %u",
				ifl.pl_chunk_num, ifl.pl_skip);
			/* окно прогресса гасим — пакет доехал */
			if (ifl.win_prog)
				gtk_widget_set_visible(
					GTK_WIDGET(ifl.win_prog), FALSE);
			pl_reset();
			ifl_busy(0);
			return;
		}
		if (ifl.pl_skip)
			ifl_log("обработалось 0 из %u — все пропущены",
				ifl.pl_skip);
		pl_abort("ни один файл не обработался");
		return;
	}
	chain_paths_free();
	pl_flush_chunk();
}

/* v2-цикл: перекодированная порция (pl_rows) уезжает на телефон —
 * TSV порции → спавн irmctl → rc разбирает pl_chunk_done (через
 * process_done). pl_files НЕ трогаем: очередь источников живёт
 * весь цикл, перекод следующего чанка продолжит после rc. */
/* порядок строк порции — ПО ФАЙЛАМ пакета (по idx), не по
 * готовности транскодов: v2-семантика (живой успех 36 треков 05.11
 * был именно с ней). Защита от «перемешанных тегов» (владелец
 * 05.11): колонки TSV строки обязаны идти ровно в порядке
 * выбора файлов. */
static int cmp_row_idx(const void *a, const void *b)
{
	const struct pl_row *x = *(const struct pl_row *const *)a;
	const struct pl_row *y = *(const struct pl_row *const *)b;
	if (x->idx < y->idx)
		return -1;
	return x->idx > y->idx ? 1 : 0;
}

/* порядок «сырых» idx (для матуры порции) */
static int cmp_unsigned(const void *a, const void *b)
{
	unsigned x = *(const unsigned *)a;
	unsigned y = *(const unsigned *)b;
	if (x < y)
		return -1;
	return x > y ? 1 : 0;
}

/* матура порции (живой факт 05.11): «дожал по счёту» позволил
 * порции 1 уехать с файлами 1..7,9 при не готовом 8 (строка #9
 * писалась в TSV раньше). Порция зреет, только когда готовых строк
 * не меньше K и НЕТ живых job'ов с idx меньше последней из первых
 * K готовых — тогда порция собирается строго из очередных файлов
 * пакета (v2-семантика «первые K по порядку», живой успех 36
 * треков). Сортированный замер: K-я по малости idx должна охватить
 * всех живых младше себя. */
static int pl_flush_mature(void)
{
	unsigned K = pl_chunk_k();
	guint nr = ifl.pl_rows ? ifl.pl_rows->len : 0;
	if (nr < (guint)K)
		return 0;
	unsigned *buf = g_new(unsigned, nr);
	if (!buf)
		return 1; /* нет памяти — конвейер не задерживаем */
	for (guint i = 0; i < nr; i++)
		buf[i] = ((struct pl_row *)g_ptr_array_index(
				  ifl.pl_rows, i))
				 ->idx;
	qsort(buf, nr, sizeof buf[0], cmp_unsigned);
	unsigned last = buf[K - 1];
	g_free(buf);
	for (unsigned u = 1; u < last && u <= IRMFILL_BATCH_MAX; u++)
		if (ifl.pl_alive[u])
			return 0; /* младший файл ещё жив — ждём его */
	return 1;
}

static void pl_flush_chunk(void)
{
	if (ifl.pl_inflight)
		return; /* порция уже едет — второй спавн запрещён */
	if (!ifl.irmctl) {
		pl_abort("irmctl не найден (env " IRMFILL_IRMCTL_ENV
			 ", PATH или рядом с бинарником)");
		return;
	}
	guint nr = ifl.pl_rows ? ifl.pl_rows->len : 0;
	if (nr == 0)
		return;
	if (nr > 1) /* строгий порядок файлов в TSV порции */
		qsort(ifl.pl_rows->pdata, nr,
		      sizeof ifl.pl_rows->pdata[0], cmp_row_idx);
	if (!ifl.pl_chunk_art)
		ifl.pl_chunk_art =
			g_ptr_array_new_with_free_func(g_free);
	ifl.pl_chunk_num++;
	if (ifl.pl_chunk_total > 1)
		ifl.pl_chunk_tsv = g_strdup_printf(
			"%s/irm-fill-playlist-%u-of-%u.tsv",
			g_get_tmp_dir(), ifl.pl_chunk_num,
			ifl.pl_chunk_total);
	else
		ifl.pl_chunk_tsv = g_build_filename(
			g_get_tmp_dir(), "irm-fill-playlist.tsv",
			NULL);
	FILE *f = fopen(ifl.pl_chunk_tsv, "wb");
	if (!f) {
		ifl_log("плейлист %s: %s", ifl.pl_chunk_tsv,
			g_strerror(errno));
		pl_abort("TSV порции не открыт");
		return;
	}
	for (guint i = 0; i < nr; i++) {
		struct pl_row *r = g_ptr_array_index(ifl.pl_rows, i);
		/* артефакты порции: наши tmp-пейлоады (копия .m4a,
		 * транскод) и обложки — уходят на уборку после живой
		 * заливки rc=0. Источник владельца в списке уборки
		 * запрещён — файл выживает всегда. */
		if (r->dst[0] && r->trans)
			g_ptr_array_add(ifl.pl_chunk_art,
					g_strdup(r->dst));
		if (r->art[0])
			g_ptr_array_add(ifl.pl_chunk_art,
					g_strdup(r->art));
		char bs[32];
		/* сэмплы считает GUI (мс*рейт/1000 — как одиночный
		 * режим; пустое поле irmctl умеет вычислять сам,
		 * запас пока не пригодился) */
		snprintf(bs, sizeof bs, "%llu",
			 r->ms * (unsigned long long)r->rate /
				 1000ULL);
		fprintf(f, "%s\t%llu\t%u\t%s\t%s\t%s\t%s\t%s\t%s\n",
			r->dst, r->ms, r->rate, bs, r->title,
			r->artist, r->album, r->genre, r->art);
	}
	gboolean bad = ferror(f) != 0;
	if (fclose(f) != 0 || bad) {
		ifl_log("плейлист %s: запись не удалась",
			ifl.pl_chunk_tsv);
		pl_abort("TSV порции не записан");
		return;
	}
	ifl_log("порция %u/%u: %u трек(ов) → %s — заливка…",
		ifl.pl_chunk_num, ifl.pl_chunk_total, (unsigned)nr,
		ifl.pl_chunk_tsv);
	/* пары порции В ПОРЯДКЕ TSV (после сортировки): сверка
	 * «строка ↔ звук» один к одному с телефонной библией */
	for (guint i = 0; i < nr; i++) {
		struct pl_row *r = g_ptr_array_index(ifl.pl_rows, i);
		gchar *rlb = g_path_get_basename(r->dst);
		ifl_log("    плейлист[%u]: «%s» — %s", i + 1,
			r->title[0] ? r->title : "(нет)", rlb);
		g_free(rlb);
	}
	/* строки больше не нужны: данные в TSV и списке артефактов */
	g_ptr_array_remove_range(ifl.pl_rows, 0, nr);
	ifl.pl_inflight = TRUE;
	/* spawn при провале сам разрулит через pl_abort */
	irmctl_spawn("atc-insert", NULL, 0, 0, ifl.pl_chunk_tsv);
	pl_progress_update(); /* «порция X/У — заливка на телефон…» */
}

/* rc irmctl порции получен: чистка tmpfs → следующий чанк (или
 * финиш). Срыв СТОПИТ цикл: телефон мог отказать — дальше не
 * мутим, артефакты порции и TSV оставляем для разбора. */
static void pl_chunk_done(gboolean ok)
{
	unsigned num = ifl.pl_chunk_num;
	unsigned total = ifl.pl_chunk_total;
	ifl.pl_inflight = FALSE;
	if (!ok) {
		ifl_log("порция %u/%u: rc!=0 — конвейер СТОП, артефакты "
			"порции и TSV оставлены (разбор в /tmp)",
			num, total);
		/* окно прогресса гасим — пакет не идёт */
		if (ifl.win_prog)
			gtk_widget_set_visible(
				GTK_WIDGET(ifl.win_prog), FALSE);
		pl_reset();
		ifl_busy(0);
		return;
	}
	guint nart = ifl.pl_chunk_art ? ifl.pl_chunk_art->len : 0;
	for (guint i = 0; i < nart; i++)
		unlink(g_ptr_array_index(ifl.pl_chunk_art, i));
	ifl_log("порция %u/%u: залита (rc=0); временных файлов убрано "
		"%u шт",
		num, total, (unsigned)nart);
	if (ifl.pl_chunk_art) {
		g_ptr_array_unref(ifl.pl_chunk_art);
		ifl.pl_chunk_art = NULL;
	}
	unlink(ifl.pl_chunk_tsv); /* TSV порции больше не нужен */
	g_free(ifl.pl_chunk_tsv);
	ifl.pl_chunk_tsv = NULL;
	pl_progress_update(); /* порция закрыта, буфер копится */
	/* v3: колесо целиком в pl_advance — подкачка транскодов
	 * (закисшая на гейте rows≥K), хвостовая порция и
	 * «конвейер завершён» (финиш едет только по rc: очередь к
	 * этому моменту может кончиться раньше rc) */
	pl_advance();
}

/* выбор нескольких файлов (GtkFileDialog open_multiple): защита
 * от повторного старта и очередь источников; сама обработка —
 * по одному файлу */
static void pl_confirm_dialog_show(void);
static void pl_confirm_start(void);

/* копия «как есть»: тот же чистый паттерн /tmp/irm-fill-<метка>-<имя>,
 * но с ОРИГИНАЛЬНЫМ расширением — пейлоад mp3 остаётся mp3, m4a
 * остаётся m4a (владелец 06.11: конверт не обязателен, 3uTools льёт
 * mp3 как есть; wire-путь по-прежнему без пробелов). */
static gchar *tc_make_dst3(const char *src, const char *uniq)
{
	char *b = g_path_get_basename(src);
	char *dot = strrchr(b, '.');
	gchar *ext = dot && dot != b ? g_strdup(dot) : g_strdup("");
	if (dot && dot != b)
		*dot = 0;
	for (char *q = b; *q; q++)
		if (!g_ascii_isalnum((guchar)*q) && *q != '-' && *q != '_')
			*q = '_';
	if (!*b) {
		g_free(b);
		b = g_strdup("out");
	}
	gchar *name = uniq ? g_strdup_printf("irm-fill-%s-%s%s", uniq, b,
					     ext)
			   : g_strdup_printf("irm-fill-%s%s", b, ext);
	g_free(b);
	g_free(ext);
	return g_build_filename(g_get_tmp_dir(), name, NULL);
}

/* ---- диалог подтверждения перед пакетом (владелец 06.11) ---- */

/* Отмена на подтверждении: окно гасим, выбор забываем. */
static void pl_confirm_cancel(const char *why)
{
	if (ifl.win_confirm)
		gtk_widget_set_visible(GTK_WIDGET(ifl.win_confirm), FALSE);
	if (!ifl.pl_pending)
		return;
	ifl_log("%s", why);
	g_ptr_array_unref(ifl.pl_pending);
	ifl.pl_pending = NULL;
}

static void on_confirm_cancel_clicked(GtkButton *btn, gpointer user)
{
	(void)btn;
	(void)user;
	pl_confirm_cancel("пакет отменён на подтверждении");
}

static gboolean on_confirm_close_request(GtkWindow *win, gpointer user)
{
	(void)win;
	(void)user;
	pl_confirm_cancel(
		"пакет отменён на подтверждении (окно закрыто)");
	return TRUE;
}

/* подпись сверху + список файлов под текущим выбором */
static void pl_confirm_dialog_refresh(void)
{
	GPtrArray *pp = ifl.pl_pending;
	guint n = pp ? pp->len : 0;
	unsigned K = pl_chunk_k();
	unsigned ports = (n + K - 1) / K;
	unsigned long long total = 0;
	GString *gs = g_string_new(NULL);
	enum { CONFIRM_LIST_CAP = 400 };
	for (guint i = 0; pp && i < n; i++) {
		const char *p = g_ptr_array_index(pp, i);
		GStatBuf st;
		if (g_stat(p, &st) == 0)
			total += (unsigned long long)st.st_size;
		if (i < CONFIRM_LIST_CAP) {
			gchar *b = g_path_get_basename(p);
			g_string_append_printf(gs, "%s\n", b);
			g_free(b);
		}
	}
	if (n > (guint)CONFIRM_LIST_CAP)
		g_string_append_printf(gs, "… и ещё %u\n",
				       (unsigned)(n - CONFIRM_LIST_CAP));
	gboolean conv = ifl.ck_trans &&
			gtk_check_button_get_active(ifl.ck_trans);
	gchar *info = g_strdup_printf(
		"файлов: %u • объём: %s • порций по %u (~%u порций)\n"
		"перекодирование: %s",
		n, g_format_size(total), K, ports,
		conv ? "включено — не-.m4a станет AAC"
		     : "выключено — файлы уйдут как есть");
	gtk_label_set_text(ifl.la_confirm, info);
	g_free(info);
	GtkTextBuffer *buf = gtk_text_view_get_buffer(ifl.tv_confirm);
	gtk_text_buffer_set_text(buf, gs->str, -1);
	g_string_free(gs, TRUE);
}

static void pl_confirm_dialog_changed(GtkCheckButton *ck, gpointer user)
{
	(void)ck;
	(void)user;
	pl_confirm_dialog_refresh();
}

static void on_confirm_start_clicked(GtkButton *btn, gpointer user)
{
	(void)btn;
	(void)user;
	pl_confirm_start();
}

/* окно строится лениво и живёт между пакетами (hide, как окно
 * прогресса) */
static void pl_confirm_dialog_show(void)
{
	if (!ifl.win_confirm) {
		GtkWidget *w = gtk_window_new();
		gtk_window_set_title(GTK_WINDOW(w),
				     "Заливка на телефон — подтверждение");
		gtk_window_set_resizable(GTK_WINDOW(w), TRUE);
		gtk_window_set_modal(GTK_WINDOW(w), TRUE);
		gtk_window_set_transient_for(GTK_WINDOW(w),
					     GTK_WINDOW(ifl.win));
		gtk_window_set_default_size(GTK_WINDOW(w), 460, 540);
		GtkWidget *box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);
		gtk_widget_set_margin_top(box, 12);
		gtk_widget_set_margin_bottom(box, 12);
		gtk_widget_set_margin_start(box, 16);
		gtk_widget_set_margin_end(box, 16);

		ifl.la_confirm = GTK_LABEL(gtk_label_new(NULL));
		gtk_label_set_xalign(ifl.la_confirm, 0.0);
		gtk_label_set_wrap(ifl.la_confirm, TRUE);
		gtk_widget_set_halign(GTK_WIDGET(ifl.la_confirm),
				      GTK_ALIGN_START);
		gtk_box_append(GTK_BOX(box), GTK_WIDGET(ifl.la_confirm));

		/* список файлов: read-only текст в прокрутке */
		ifl.tv_confirm = GTK_TEXT_VIEW(gtk_text_view_new());
		gtk_text_view_set_editable(ifl.tv_confirm, FALSE);
		gtk_text_view_set_cursor_visible(ifl.tv_confirm, FALSE);
		gtk_text_view_set_monospace(ifl.tv_confirm, TRUE);
		GtkWidget *sv = gtk_scrolled_window_new();
		gtk_scrolled_window_set_min_content_height(
			GTK_SCROLLED_WINDOW(sv), 220);
		gtk_scrolled_window_set_child(GTK_SCROLLED_WINDOW(sv),
					      GTK_WIDGET(ifl.tv_confirm));
		gtk_widget_set_vexpand(sv, TRUE);
		gtk_widget_set_hexpand(sv, TRUE);
		gtk_box_append(GTK_BOX(box), sv);

		ifl.ck_trans = GTK_CHECK_BUTTON(
			gtk_check_button_new_with_label(
				"Перекодировать в .m4a (AAC)"));
		gtk_widget_set_tooltip_text(
			GTK_WIDGET(ifl.ck_trans),
			"по умолчанию ВЫКЛЮЧЕНО: файлы уходят как есть "
			"(3uTools шлёт mp3 без конвертирования); при "
			"включении gst перекодирует не-.m4a в AAC — "
			"байты легче, tmpfs несут перекоды");
		g_signal_connect(ifl.ck_trans, "toggled",
				 G_CALLBACK(pl_confirm_dialog_changed),
				 NULL);
		gtk_box_append(GTK_BOX(box), GTK_WIDGET(ifl.ck_trans));

		GtkWidget *hb = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 8);
		GtkWidget *cancel = gtk_button_new_with_label("Отмена");
		g_signal_connect(cancel, "clicked",
				 G_CALLBACK(on_confirm_cancel_clicked),
				 NULL);
		GtkWidget *start = gtk_button_new_with_label("Старт");
		gtk_widget_add_css_class(start, "suggested-action");
		g_signal_connect(start, "clicked",
				 G_CALLBACK(on_confirm_start_clicked),
				 NULL);
		gtk_box_append(GTK_BOX(hb), cancel);
		gtk_box_append(GTK_BOX(hb), start);
		gtk_widget_set_halign(hb, GTK_ALIGN_END);
		gtk_box_append(GTK_BOX(box), hb);
		gtk_window_set_child(GTK_WINDOW(w), box);
		g_signal_connect(w, "close-request",
				 G_CALLBACK(on_confirm_close_request),
				 NULL);
		ifl.win_confirm = GTK_WINDOW(w);
	}
	pl_confirm_dialog_refresh();
	gtk_widget_set_visible(GTK_WIDGET(ifl.win_confirm), TRUE);
}

/* «Старт» в диалоге: выбор становится пакетом, режим — из галки,
 * precheck только для перекода (копии «как есть» считаются
 * размерами источников) */
static void pl_confirm_start(void)
{
	if (ifl.win_confirm)
		gtk_widget_set_visible(GTK_WIDGET(ifl.win_confirm), FALSE);
	ifl.trans_mode =
		ifl.ck_trans && gtk_check_button_get_active(ifl.ck_trans);
	/* снёс старый пакет ДО передачи выбора: pl_reset вместе с
	 * прочим чистит и pl_files — после передачи уходило бы
	 * вместе с pending */
	pl_reset();
	if (ifl.trans_mode && !ifl.gst_launch) {
		ifl_log("пакет невозможен: нет gst-launch-1.0 в PATH "
			"(перекод %s для не-.m4a входов)",
			ifl.gst_codec);
		g_clear_pointer(&ifl.pl_pending, g_ptr_array_unref);
		return;
	}
	/* подтверждённый выбор становится пакетом (владение перешло) */
	ifl.pl_files = ifl.pl_pending;
	ifl.pl_pending = NULL;
	if (!ifl.pl_files || ifl.pl_files->len == 0)
		return;

	/* precheck места (live 05.11: EDQUOT на tmpfs при rc=0
	 * gst-launch валит транскоды молча — гасим проблему ДО
	 * работы): оценка vs свободного места на tmp (90% — не
	 * доедаем). Перекод — оценки битрейтов (payload_estimate:
	 * длительность × битрейт AAC); «как есть» — размеры
	 * источников (пейлоад — точная копия). Граница честная:
	 * в tmpfs живут заливающаяся порция и буфер следующей
	 * (две порции худших: сумма K худших ×2) + PAR транскодов
	 * в полёте (худший × PAR). */
	unsigned long long one = 0;
	guint cnt = ifl.pl_files->len;
	unsigned long long *ests = g_new(unsigned long long, cnt);
	for (guint i = 0; i < cnt; i++) {
		const char *p = g_ptr_array_index(ifl.pl_files, i);
		if (ifl.trans_mode) {
			ests[i] = payload_estimate(p);
		} else {
			GStatBuf st;
			ests[i] = g_stat(p, &st) == 0
					  ? (unsigned long long)st.st_size
					  : 0;
		}
		if (ests[i] > one)
			one = ests[i];
	}
	qsort(ests, cnt, sizeof ests[0], cmp_ull_desc);
	unsigned K = pl_chunk_k();
	unsigned par = pl_par_k();
	unsigned top = K < cnt ? K : (unsigned)cnt;
	unsigned long long need = 0;
	for (unsigned i = 0; i < top; i++)
		need += ests[i];
	need *= 2; /* заливающаяся + буфер next: по K худших дважды */
	need += (unsigned long long)par * one; /* в полёте: PAR×худший */
	g_free(ests);
	unsigned long long free_b = free_bytes_on(g_get_tmp_dir());
	unsigned long long avail = free_b / 10 * 9;
	if (free_b == 0) {
		ifl_log("пакет: свободное место на %s не проверить "
			"(statvfs не удался) — продолжаю, валидатор "
			"gst-discoverer отбракует сорванные",
			g_get_tmp_dir());
	} else if (need > avail) {
		ifl_log("пакет: места на %s мало: нужно ~%llu МиБ "
			"(2 порции худших K{%u} + %u шт худшего в "
			"полёте), свободно ~%llu МиБ (составлял по 90%%)",
			g_get_tmp_dir(), need >> 20, K, par, avail >> 20);
		ifl_log("советы: rm /tmp/irm-fill-* (старые артефакты), "
			"или меньший IRMFILL_CHUNK (сейчас порция %u), "
			"или точка монтирования /tmp с большим объёмом",
			K);
		pl_reset();
		return;
	} else if (need > avail / 2) {
		ifl_log("пакет: предупреждение — пейлоады съедят больше "
			"половины свободного места (%s): ~%llu МиБ из "
			"~%llu МиБ",
			g_get_tmp_dir(), need >> 20, avail >> 20);
	}
	ifl.pl_rows = g_ptr_array_new_with_free_func(g_free);
	ifl.pl_chunk_art = g_ptr_array_new_with_free_func(g_free);
	/* очередь готовых job'ов: элементами владеет конвейер (pl_reset
	 * НЕ освобождает job'ы — значит, без free_func) */
	ifl.pl_ready = g_ptr_array_new();
	ifl.pl_par = par;
	ifl.pl_chunk_total = (unsigned)((ifl.pl_files->len + K - 1) / K);
	ifl.pl_active = TRUE;
	ifl.pl_idx = 0;
	if (ifl.trans_mode)
		ifl_log("пакет: %u файл(ов), порций по %u, перекод %s "
			"×%u, цикл «транскод → заливка → чистка»…",
			ifl.pl_files->len, K, ifl.gst_codec, par);
	else
		ifl_log("пакет: %u файл(ов), порций по %u, без "
			"перекодирования (как есть)…",
			ifl.pl_files->len, K);
	ifl_busy(1);
	/* окно прогресса с кнопкой отмены (владелец 05.11): до отмены
	 * фракция 0, дальше ведут pl_row_done/pl_job_fail/порции */
	pl_progress_show();
	pl_advance();
}

static void pl_start_from_files(GListModel *files)
{
	if (ifl.pl_active) {
		ifl_log("пакет уже идёт — новый запуск игнорирую");
		return;
	}
	if (ifl.pl_pending) {
		ifl_log("диалог подтверждения уже открыт — новый выбор "
			"игнорирую");
		return;
	}
	guint n = files ? g_list_model_get_n_items(files) : 0;
	if (n == 0) {
		ifl_log("пакет: ничего не выбрано");
		return;
	}
	if (n > IRMFILL_BATCH_MAX) {
		ifl_log("пакет: ограничение %u — беру первые %u",
			IRMFILL_BATCH_MAX, IRMFILL_BATCH_MAX);
		n = IRMFILL_BATCH_MAX;
	}
	if (!ifl.irmctl) {
		ifl_log("irmctl не найден (env %s, PATH или рядом с "
			"бинарником irm-fill)",
			IRMFILL_IRMCTL_ENV);
		return;
	}
	if (!ifl.gst_discover) {
		ifl_log("пакет невозможен: нет gst-discoverer-1.0 в PATH");
		return;
	}
	/* gst-launch нужен только перекоду — проверяем на «Старте»,
	 * после того как владелец выбрал режим в диалоге */
	GPtrArray *paths = g_ptr_array_new_with_free_func(g_free);
	for (guint i = 0; i < n; i++) {
		GFile *gf = g_list_model_get_item(files, i);
		gchar *path = gf ? g_file_get_path(gf) : NULL;
		if (path) {
			g_ptr_array_add(paths, path);
		} else {
			ifl_log("  пропущен — не локальный: %s",
				gf ? g_file_peek_path(gf) : "?");
		}
		g_clear_object(&gf);
	}
	if (paths->len == 0) {
		g_ptr_array_unref(paths);
		return;
	}
	/* выбор ждёт подтверждения (инфа + режим + «Старт/Отмена») */
	ifl.pl_pending = paths;
	ifl.trans_mode = FALSE;
	pl_confirm_dialog_show();
}

static void chain_paths_free(void)
{
	g_free(ifl.tc_src);
	g_free(ifl.tc_dst);
	ifl.tc_src = NULL;
	ifl.tc_dst = NULL;
}

/* срыв одиночной цепочки: только рабочие поля и busy. Срывы пакета
 * разбирает pl_job_fail — item пропускается живьём (live 05.11:
 * EDQUOT на tmpfs валит одиночные транскоды молча; «либо всё
 * готово, либо item мимо» — батч не валится). */
static void chain_fail(void)
{
	chain_paths_free();
	ifl_busy(0);
}

/* куда положить перекод: /tmp/irm-fill-<чистое-имя>.m4a (имя источника
 * чистится до безопасных символов: gst-launch парсит элементы по
 * пробелам, а телефонному протоколу пробелы в wire-пути не нужны).
 * uniq — метка пакета („3“) против коллизий одинаковых базовых имён;
 * NULL — прежнее имя одиночного режима. */
static gchar *tc_make_dst2(const char *src, const char *uniq)
{
	char *b = g_path_get_basename(src);
	char *dot = strrchr(b, '.');
	if (dot && dot != b)
		*dot = 0;
	for (char *q = b; *q; q++)
		if (!g_ascii_isalnum((guchar)*q) && *q != '-' && *q != '_')
			*q = '_';
	if (!*b) {
		g_free(b);
		b = g_strdup("out");
	}
	gchar *name = uniq ? g_strdup_printf("irm-fill-%s-%s.m4a", uniq, b)
			   : g_strdup_printf("irm-fill-%s.m4a", b);
	g_free(b);
	return g_build_filename(g_get_tmp_dir(), name, NULL);
}


/* ступень 2: из вывода gst-discoverer — длительность и сэмплрейт.
 * user: NULL — одиночный режим (подпроцесс в ifl.proc); job —
 * пакетный (подпроцесс живёт в асинхронной задаче, ifl.proc не
 * трогаем — следующим job'ом он был бы затёрт) */
static void chain_discover_done(GObject *src, GAsyncResult *res,
				gpointer user)
{
	GSubprocess *sp = G_SUBPROCESS(src);
	struct pl_job *j = user;
	char *txt = NULL;
	char *etext = NULL;
	GError *err = NULL;
	gboolean ok = g_subprocess_communicate_utf8_finish(
		sp, res, &txt, &etext, &err);

	if (j) {
		g_object_unref(sp); /* ifl.proc job-процессы не хранит */
		if (j->gen != ifl.pl_gen) {
			/* пакет сброшен — job чужой, только прибираем */
			g_free(txt);
			g_free(etext);
			g_clear_error(&err);
			pl_job_free(j);
			return;
		}
	} else {
		g_clear_object(&ifl.proc);
	}

	/* срыв плёнки: job пропускается, конвейер живёт дальше */
	if (!ok) {
		ifl_log("gst-discoverer: %s", err ? err->message : "?");
		if (txt && *txt) {
			ifl_log("gst-discoverer сказал:");
			ifl_log("%s", txt);
		}
		g_free(txt);
		g_free(etext);
		g_clear_error(&err);
		if (j) {
			ifl.pl_fin_job = NULL;
			pl_job_fail(j, "gst-discoverer сорвался");
			return;
		}
		chain_fail();
		return;
	}

	const char *d = txt ? strstr(txt, "Duration:") : NULL;
	const char *r = txt ? strstr(txt, "Sample rate:") : NULL;
	if (!d || !r) {
		ifl_log("gst-discoverer: не видно Duration/Sample rate");
		if (txt && *txt) {
			ifl_log("gst-discoverer сказал:");
			ifl_log("%s", txt);
		}
		g_free(txt);
		g_free(etext);
		if (j) {
			ifl.pl_fin_job = NULL;
			pl_job_fail(j, "меты не читаются");
			return;
		}
		chain_fail();
		return;
	}
	d += strlen("Duration:");
	while (*d == ' ' || *d == '\t')
		d++;
	r += strlen("Sample rate:");
	while (*r == ' ' || *r == '\t')
		r++;
	unsigned long long ms = parse_clock_ms(d);
	unsigned rate = (unsigned)strtoul(r, NULL, 10);
	g_free(txt);
	g_free(etext);

	if (ms == 0 || rate == 0) {
		if (j)
			ifl_log("  [%u] меты мусорные (ms=%llu rate=%u)",
				j->idx, ms, rate);
		else
			ifl_log("gst-discoverer: мусорные метаданные "
				"(ms=%llu rate=%u)",
				ms, rate);
		if (j) {
			ifl.pl_fin_job = NULL;
			pl_job_fail(j, "меты мусорные");
			return;
		}
		chain_fail();
		return;
	}
	if (j)
		ifl_log("    [%u] меты: %llu мс, %u Гц, ~%llu сэмплов",
			j->idx, ms, rate,
			ms * (unsigned long long)rate / 1000ULL);
	else
		ifl_log("метаданные перекода: %llu мс, %u Гц, "
			"~%llu сэмплов",
			ms, rate,
			ms * (unsigned long long)rate / 1000ULL);

	if (ifl.pl_active) {
		/* 9l: строка пакета готова — теги/обложка pl_row_done
		 * берёт из копий job'а (pl_fin_job); общие поля с
		 * 05.11 на строку не влияют */
		pl_row_done(ifl.tc_dst, ms, rate);
		return;
	}
	irmctl_spawn(ifl.pending_cmd, ifl.tc_dst, ms, rate, NULL);
	chain_paths_free();
}

/* ступень 2: запуск gst-discoverer (путь — ifl.tc_dst: его
 * заполнил pl_job_finalize из job'а или одиночная цепочка) */
static void chain_discover(gpointer job)
{
	GError *err = NULL;
	const char *argv[] = { ifl.gst_discover, ifl.tc_dst, NULL };
	GSubprocess *sp = g_subprocess_newv(
		argv, G_SUBPROCESS_FLAGS_STDOUT_PIPE |
		G_SUBPROCESS_FLAGS_STDERR_MERGE,
		&err);
	if (!sp) {
		ifl_log("запуск gst-discoverer: %s",
			err ? err->message : "?");
		g_clear_error(&err);
		ifl_log("транскод прерван: gst-discoverer не запустился");
		if (job) {
			ifl.pl_fin_job = NULL;
			pl_job_fail(job, "gst-discoverer не запустился");
			return;
		}
		chain_fail();
		return;
	}
	g_subprocess_communicate_utf8_async(sp, NULL, NULL,
					    chain_discover_done, job);
	if (!job)
		ifl.proc = sp; /* одиночный: v2-гашение при закрытии */
}

/* ступень 1: результаты gst-launch (файл должен появиться) */

/* спавн транскода (v3): общий пайплайн для одиночного режима и
 * пакетных job'ов; кодек выбран на старте (find_gst: AAC — дефолт,
 * недоступный avenc_aac → откат ALAC). dst unlink'ется ДО спавна:
 * mp4mux дописал бы в старый файл и остался бы без moov (live
 * 05.11: 12:30-серия на файле 1). Возвращает подпроцесс или NULL
 * (не запустился). */
static GSubprocess *transcode_spawn(const char *src, const char *dst)
{
	GError *err = NULL;
	gchar *srcLoc = g_strdup_printf("location=%s", src);
	gchar *dstLoc = g_strdup_printf("location=%s", dst);
	const char *enc = ifl.codec_aac ? "avenc_aac" : "avenc_alac";
	char rate[32];
	rate[0] = 0;
	if (ifl.codec_aac)
		snprintf(rate, sizeof rate, "bitrate=%u", ifl.aac_rate);
	const char *argv_aac[] = {
		ifl.gst_launch, "-q",
		"filesrc", srcLoc, "!", "decodebin",
		"!", "audioconvert", "!", "audioresample",
		"!", "avenc_aac", rate, "!", "mp4mux", "!",
		"filesink", dstLoc, NULL };
	const char *argv_alac[] = {
		ifl.gst_launch, "-q",
		"filesrc", srcLoc, "!", "decodebin",
		"!", "audioconvert", "!", "audioresample",
		"!", "avenc_alac", "!", "mp4mux", "!",
		"filesink", dstLoc, NULL };
	const char **argv = ifl.codec_aac ? argv_aac : argv_alac;
	/* свежий артефакт за прогон: старый (в т.ч. неофинализированный
	 * от сорванного прогона) удаляем ДО спавна */
	unlink(dst);
	ifl_log("транскод %s идёт (%s + mp4mux), ждите…",
		ifl.gst_codec, enc);
	GSubprocess *sp = g_subprocess_newv(
		argv, G_SUBPROCESS_FLAGS_STDOUT_PIPE |
		G_SUBPROCESS_FLAGS_STDERR_MERGE,
		&err);
	g_free(srcLoc);
	g_free(dstLoc);
	if (!sp) {
		ifl_log("запуск gst-launch: %s", err ? err->message : "?");
		g_clear_error(&err);
		return NULL;
	}
	return sp;
}

/* одиночный режим: транскод остаётся в рабочих полях (v2-семантика
 * гашения при закрытии окна); пакетные job'ы зовут transcode_spawn
 * напрямую (pl_job_start) */

/* вход цепочки: источник уже проверен на доступность */
static void find_irmctl(void)
{
	const char *e = getenv(IRMFILL_IRMCTL_ENV);
	if (e && *e) {
		ifl.irmctl = g_path_is_absolute(e) ? g_strdup(e)
						    : g_canonicalize_filename(
							    e, NULL);
		if (access(ifl.irmctl, X_OK) == 0)
			return;
		g_free(ifl.irmctl);
		ifl.irmctl = NULL;
	}
	gchar *path = g_find_program_in_path("irmctl");
	if (path) {
		ifl.irmctl = path;
		return;
	}
	/* fallback 9i: рядом с самим бинарником — запуск из файлового
	 * менеджера не имеет каталога сборки в PATH */
	gchar *exe = g_file_read_link("/proc/self/exe", NULL);
	if (exe) {
		gchar *dir = g_path_get_dirname(exe);
		gchar *ctl = g_build_filename(dir, "irmctl", NULL);
		g_free(dir);
		g_free(exe);
		if (access(ctl, X_OK) == 0) {
			ifl.irmctl = ctl;
			return;
		}
		g_free(ctl);
		/* fallback в توسعه: сборка в корне репо — из каталога
		 * сборки приложения до дерева механизмов три шага вверх
		 * (build/src/apple-devices → iTunes-Reversed-Mechanisms/
		 * irmctl) */
		exe = g_file_read_link("/proc/self/exe", NULL);
		dir = g_path_get_dirname(exe);
		ctl = g_build_filename(dir, "..", "..", "..",
				       "iTunes-Reversed-Mechanisms",
				       "irmctl", NULL);
		g_free(dir);
		g_free(exe);
		gchar *canon = g_canonicalize_filename(ctl, NULL);
		g_free(ctl);
		ctl = canon;
		if (access(ctl, X_OK) == 0) {
			ifl.irmctl = ctl;
			return;
		}
		g_free(ctl);
	}
}

static void find_gst(void)
{
	ifl.gst_launch = g_find_program_in_path("gst-launch-1.0");
	ifl.gst_discover = g_find_program_in_path("gst-discoverer-1.0");
	/* 9m: кодек пакета — AAC по умолчанию (пейлоад ~×4 легче
	 * прежнего ALAC, телефон играет AAC нативно; провод ~16
	 * МиБ/с — живой замер 05.11, чем легче байты, тем быстрее
	 * заливка). IRMFILL_CODEC=alac возвращает прежний; при
	 * недоступном avenc_aac — откат с предупреждением. */
	const char *e = getenv("IRMFILL_CODEC");
	gboolean want_aac = !(e && g_ascii_strcasecmp(e, "alac") == 0);
	const char *rate = getenv("IRMFILL_AAC_RATE");
	int r = rate ? atoi(rate) : 0;
	if (r < 64000 || r > 320000)
		r = 256000;
	ifl.aac_rate = (unsigned)r;
	ifl.codec_aac = FALSE;
	snprintf(ifl.gst_codec, sizeof ifl.gst_codec, "ALAC");
	if (!want_aac)
		return;
	ifl.gst_inspect = g_find_program_in_path("gst-inspect-1.0");
	gboolean have = FALSE;
	if (ifl.gst_inspect) {
		/* avenc_aac на месте? (stdout плагинового дампа гасим) */
		gchar *cmd = g_strdup_printf(
			"%s avenc_aac >/dev/null 2>&1",
			ifl.gst_inspect);
		have = system(cmd) == 0;
		g_free(cmd);
	}
	if (have) {
		ifl.codec_aac = TRUE;
		snprintf(ifl.gst_codec, sizeof ifl.gst_codec, "AAC");
	} else {
		ifl_log("транскод: avenc_aac недоступен — перекод пакета "
			"вернётся на ALAC (IRMFILL_CODEC=alac — то же)");
	}
}


/* ---- выбор файлов и публичный API ---- */

/* Готовый GListModel из диалога: отдаем конвейеру (он сам логирует
 * пропуски не-локальных файлов и делает precheck места в /tmp). */
static void ifl_dialog_done(GObject *src, GAsyncResult *res, gpointer user)
{
	(void)user;
	GListModel *files = gtk_file_dialog_open_multiple_finish(
		GTK_FILE_DIALOG(src), res, NULL);
	if (!files)
		return;
	pl_start_from_files(files);
	g_object_unref(files);
}

void irmfill_activate(IrFillHooks *hooks)
{
	ifl_hooks = *hooks;
	ifl.win = GTK_WINDOW(hooks->parent);
	/* ищем irmctl и gst-инструменты при каждом клике: после
	 * переподключения кабеля/обновления пакета окружение могло
	 * измениться */
	find_irmctl();
	find_gst();
	GtkFileDialog *dlg = gtk_file_dialog_new();
	gtk_file_dialog_set_title(
		dlg, tr("Выберите аудиофайлы для заливки (IRM)"));
	gtk_file_dialog_open_multiple(dlg, hooks->parent, NULL,
				      ifl_dialog_done, NULL);
	g_object_unref(dlg);
}

gboolean irmfill_active(void)
{
	return ifl.pl_active;
}

/* Отмена активного пакета (кнопка «Отмена» окна прогресса делает то же
 * через pl_cancel; сюда зовём при закрытии главного окна приложения). */
void irmfill_cancel(void)
{
	if (ifl.pl_active)
		pl_cancel("закрытие главного окна приложения");
}
