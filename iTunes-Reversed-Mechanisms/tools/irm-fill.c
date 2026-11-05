/* irm-fill — тестовое GTK4-приложение заливки музыки по ATC-протоколу
 * (шаги 9g/9i; обёртка над irmctl). Сам wire-протокол остаётся в
 * irmctl (единственный источник wire-фактов 9e/9f/9g): GUI поднимает
 * irmctl как подпроцесс с env-переменными IRMA_ATC_* и показывает
 * поток stdout/stderr живьём в лог-виджет. Мутирующие прогоны — только
 * явным нажатием кнопки (это и есть согласие пользователя в
 * интерфейсе); переключатель «только стадия» (IRMA_ATC_STAGE_ONLY=1)
 * по умолчанию ВКЛЮЧЁН — безопасный прогон без записей на телефон.
 *
 * 9i/v3: фикстуры не-.m4a (.mp3, .flac …) перекодируются в .m4a
 * автоматически: gst-launch-1.0 пишет tmp-файл (AAC-дефолт
 * avenc_aac+mp4mux, IRMFILL_CODEC=alac откатывает на avenc_alac;
 * с 05.11 транскоды пакета строго ПОСЛЕДОВАТЕЛЬНЫ (1 за раз —
 * фикс перемешивания тегов: планировка следующего файла
 * перезаписывала общие поля против Discover предыдущего), порции
 * по IRMFILL_CHUNK), gst-discoverer-1.0 даёт длительность/
 * сэмплрейт,
 * irmctl через IRMA_ATC_TOTAL_MS/IRMA_ATC_RATE/IRMA_ATC_SAMPLES.
 * irmctl ищется в env IRMFILL_IRMCTL, затем PATH, затем рядом с
 * самим бинарником irm-fill (через /proc/self/exe).
 *
 * Сборка: pkg-config gtk4 libadwaita-1 (цель irm-fill в Makefile). */

#include <adwaita.h>
#include <errno.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/statvfs.h>
#include <time.h>
#include <unistd.h>

#include <taglib/tag_c.h>

/* путь до irmctl можно переопределить окружением */
#define IRMFILL_IRMCTL_ENV "IRMFILL_IRMCTL"
#define IRMFILL_BATCH_MAX 499

/* пакетный job (9n) — объявление здесь, определение ниже */
struct pl_job;

/* ---- состояние приложения (одно окно, максимум один подпроцесс) ---- */

typedef struct {
	AdwApplicationWindow *win;
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
	GtkCheckButton *ck_stage;
	GtkButton *btn_browse;
	GtkEntry *en_fixture;
	GtkEntry *en_libid;
	GtkSpinner *spinner;

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
	GPtrArray *pl_files; /* выбранное: gchar* пути источника */
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

	/* v3: подпроцессы параллельных транскодов живут ВНЕ g_uf.proc
	 * (там — заливающий atc-insert). Список даёт старой семантике
	 * закрытия окна/СТОПа шанс гасить всех пишущих: v2 убивал
	 * единственный транскод через g_uf.proc force_exit. */
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

static IrmFill g_uf;

/* ---- лог-виджет ---- */

static void log_append(const char *line)
{
	GtkTextIter iter, end;
	time_t now = time(NULL);
	struct tm tmv;
	char stamp[16];
	gchar *msg;

	if (localtime_r(&now, &tmv) != NULL &&
	    strftime(stamp, sizeof stamp, "%H:%M:%S", &tmv) != 0)
		msg = g_strdup_printf("[%s] %s\n", stamp, line);
	else
		msg = g_strdup(line);

	gtk_text_buffer_get_end_iter(g_uf.log_buf, &iter);
	gtk_text_buffer_insert(g_uf.log_buf, &iter, msg, -1);
	g_free(msg);

	gtk_text_buffer_get_end_iter(g_uf.log_buf, &end);
	gtk_text_view_scroll_to_iter(g_uf.log_view, &end, 0.0, TRUE, 0, 1);
}

static void log_fmt(const char *fmt, ...)
{
	char buf[2048];
	va_list ap;
	va_start(ap, fmt);
	vsnprintf(buf, sizeof buf, fmt, ap);
	va_end(ap);
	log_append(buf);
}

/* ---- блокировка интерфейса на время прогона ---- */

static void set_busy(int busy)
{
	if (g_uf.busy == busy)
		return;
	g_uf.busy = busy;
	gtk_widget_set_sensitive(GTK_WIDGET(g_uf.btn_anchor), busy == 0);
	gtk_widget_set_sensitive(GTK_WIDGET(g_uf.btn_one), busy == 0);
	gtk_widget_set_sensitive(GTK_WIDGET(g_uf.btn_batch), busy == 0);
	gtk_widget_set_sensitive(GTK_WIDGET(g_uf.btn_pl), busy == 0);
	gtk_widget_set_sensitive(GTK_WIDGET(g_uf.sp_batch), busy == 0);
	gtk_widget_set_sensitive(GTK_WIDGET(g_uf.ck_stage), busy == 0);
	gtk_widget_set_sensitive(GTK_WIDGET(g_uf.en_fixture), busy == 0);
	gtk_widget_set_sensitive(GTK_WIDGET(g_uf.en_libid), busy == 0);
	gtk_widget_set_sensitive(GTK_WIDGET(g_uf.btn_browse), busy == 0);
	gtk_spinner_set_spinning(g_uf.spinner, busy != 0);
}

/* ---- якерь: разбор вывода music-id из накопленного лога ---- */

static void update_anchor_label(void)
{
	GtkTextIter s, e;
	gtk_text_buffer_get_start_iter(g_uf.log_buf, &s);
	gtk_text_buffer_get_end_iter(g_uf.log_buf, &e);
	gchar *all = gtk_text_buffer_get_text(g_uf.log_buf, &s, &e, FALSE);
	if (!all)
		return;

	const char *hit = NULL;
	const char *p = all;
	/* последнее вхождение в логе */
	while ((p = strstr(p, "MLSyncClientSyncAnchor")) != NULL) {
		hit = p;
		p += strlen("MLSyncClientSyncAnchor");
	}
	gtk_label_set_text(g_uf.la_state, "якерь Media: (нет данных)");
	if (hit) {
		const char *eq = strstr(hit, "=");
		if (eq && eq[1] != 0) {
			long v = strtol(eq + 1, NULL, 10);
			if (v > 0) {
				char txt[96];
				snprintf(txt, sizeof txt,
					 "якерь Media (DB-копия): %ld",
					 v);
				gtk_label_set_text(g_uf.la_state, txt);
			}
		}
	}
	g_free(all);
}

/* ---- чтение потока подпроцесса в лог ---- */

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
		log_append(line);
		g_free(line);
		g_data_input_stream_read_line_async(
			st, G_PRIORITY_DEFAULT, g_uf.cancel,
			stream_read_line, NULL);
		return;
	}
	if (err) {
		if (!g_error_matches(err, G_IO_ERROR, G_IO_ERROR_CANCELLED))
			log_fmt("поток: %s", err->message);
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

	g_clear_object(&g_uf.stream);
	g_clear_object(&g_uf.proc);
	if (g_uf.cancel) {
		g_object_unref(g_uf.cancel);
		g_uf.cancel = NULL;
	}
	if (g_error_matches(err, G_IO_ERROR, G_IO_ERROR_CANCELLED)) {
		log_fmt("%s: прерван", what);
	} else if (!ok) {
		log_fmt("%s: rc != 0 (%s)", what,
			err ? err->message : "ошибка");
	} else {
		log_fmt("%s: rc=0", what);
	}
	g_clear_error(&err);

	if (strcmp(what, "music-id") == 0)
		update_anchor_label();
	if (g_uf.pl_inflight && strcmp(what, "atc-insert") == 0) {
		/* 9l-live v2: заливалась порция — по её rc чистим
		 * tmpfs и заводим следующий чанк */
		set_busy(1);
		pl_chunk_done(ok);
		return;
	}
	set_busy(0);
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
	log_fmt("размер: %s (%llu Б)", s, (unsigned long long)st.st_size);
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
	g_uf.tag_title[0] = 0;
	g_uf.tag_artist[0] = 0;
	g_uf.tag_album[0] = 0;
	g_uf.tag_genre[0] = 0;

	TagLib_File *tf = taglib_file_new(path);
	if (!tf || !taglib_file_is_valid(tf)) {
		g_uf.tag_title[0] = 0;
		if (tf)
			taglib_file_free(tf);
		log_fmt("теги источника: taglib не распознал «%s» — "
			"названия останутся фирменными (IRM Tone …)",
			path ? path : "(пусто)");
		return;
	}
	TagLib_Tag *t = taglib_file_tag(tf);
	tag_copy_clean(g_uf.tag_title, sizeof g_uf.tag_title,
		       taglib_tag_title(t));
	tag_copy_clean(g_uf.tag_artist, sizeof g_uf.tag_artist,
		       taglib_tag_artist(t));
	tag_copy_clean(g_uf.tag_album, sizeof g_uf.tag_album,
		       taglib_tag_album(t));
	tag_copy_clean(g_uf.tag_genre, sizeof g_uf.tag_genre,
		       taglib_tag_genre(t));
	taglib_tag_free_strings();
	taglib_file_free(tf);

	if (!g_uf.tag_title[0] && !g_uf.tag_artist[0]) {
		log_fmt("теги источника пусты — названия останутся "
			"фирменными (IRM Tone …)");
		return;
	}
	log_fmt("теги источника: «%s» — «%s»%s%s",
		g_uf.tag_title[0] ? g_uf.tag_title : "(нет)",
		g_uf.tag_artist[0] ? g_uf.tag_artist : "(нет)",
		g_uf.tag_album[0] ? ", альбом " : "",
		g_uf.tag_album[0] ? g_uf.tag_album : "");
	if (g_uf.tag_genre[0])
		log_fmt("        жанр: %s", g_uf.tag_genre);
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
	g_uf.art_path[0] = 0;
	TagLib_File *tf = taglib_file_new(path);
	if (!tf || !taglib_file_is_valid(tf)) {
		if (tf)
			taglib_file_free(tf);
		log_fmt("обложка: файл тегов не распознан");
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
				log_fmt("обложка: tmp-файл не открыт");
			} else if (fwrite(pic.data, 1, pic.size, f) !=
				   pic.size) {
				log_fmt("обложка: запись %s не удалась",
					full);
				fclose(f);
				f = NULL;
			} else {
				fclose(f);
				snprintf(g_uf.art_path,
					 sizeof g_uf.art_path, "%s",
					 full);
				log_fmt("обложка: %u Б (%s) → %s", pic.size,
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
	if (!g_uf.art_path[0])
		log_fmt("обложка: в источнике нет (вставка пойдёт без неё)");
}

static void read_source_artwork(const char *path)
{
	read_source_artwork2(path, NULL);
}

/* 9l: строка для TSV-плейлиста из тега: управляющие символы вон
 * (как tag_copy_clean) и табы → пробелы (таб — разделитель колонок
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
		gboolean stage = gtk_check_button_get_active(g_uf.ck_stage);
		if (stage)
			env = g_environ_setenv(env, "IRMA_ATC_STAGE_ONLY",
					       "1", TRUE);
		log_fmt("    плейлист=%s%s", tsv_override,
			stage ? " (STAGE-ONLY)" : "");
	} else if (is_insert) {
		const char *fix =
			fixture_override
				? fixture_override
				: gtk_editable_get_text(
					GTK_EDITABLE(g_uf.en_fixture));
		if (!fixture_ok(fix)) {
			log_fmt("фикстура недоступна: %s",
				(fix && *fix) ? fix : "(пусто)");
			g_strfreev(env);
			set_busy(0);
			return;
		}
		env = g_environ_setenv(env, "IRMA_ATC_FIXTURE", fix, TRUE);
		char nb[12];
		unsigned batch =
			(unsigned)gtk_spin_button_get_value(g_uf.sp_batch);
		if (batch < 1)
			batch = 1;
		if (batch > IRMFILL_BATCH_MAX)
			batch = IRMFILL_BATCH_MAX;
		snprintf(nb, sizeof nb, "%u", batch);
		env = g_environ_setenv(env, "IRMA_ATC_BATCH_N", nb, TRUE);
		gboolean stage = gtk_check_button_get_active(g_uf.ck_stage);
		if (stage)
			env = g_environ_setenv(env, "IRMA_ATC_STAGE_ONLY",
					       "1", TRUE);
		/* теги источника (9j): пустые не передаём — irmctl
		 * подставит фирменные дефолты сам */
		if (g_uf.tag_title[0])
			env = g_environ_setenv(env, "IRMA_ATC_TITLE",
					       g_uf.tag_title, TRUE);
		if (g_uf.tag_artist[0])
			env = g_environ_setenv(env, "IRMA_ATC_ARTIST",
					       g_uf.tag_artist, TRUE);
		if (g_uf.tag_album[0])
			env = g_environ_setenv(env, "IRMA_ATC_ALBUM",
					       g_uf.tag_album, TRUE);
		if (g_uf.tag_genre[0])
			env = g_environ_setenv(env, "IRMA_ATC_GENRE",
					       g_uf.tag_genre, TRUE);
		/* (9k) обложка: tmp-файл от TagLib PICTURE; irmctl
		 * сам её не увидит — только этот env */
		if (g_uf.art_path[0])
			env = g_environ_setenv(env, "IRMA_ATC_ARTWORK",
					       g_uf.art_path, TRUE);
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
		log_fmt("    фикс=%s%s батч=%u%s", fix,
			fixture_override ? " (перекод)" : "", batch,
			stage ? " (STAGE-ONLY)" : "");
		if (meta_ms != 0)
			log_fmt("    метаданные: %llu мс, %u Гц",
				meta_ms, meta_rate);
	}

	const char *libid =
		gtk_editable_get_text(GTK_EDITABLE(g_uf.en_libid));
	if (libid && *libid)
		env = g_environ_setenv(env, "IRMA_ATC_LIBID", libid, TRUE);

	GSubprocessLauncher *launcher = g_subprocess_launcher_new(
		G_SUBPROCESS_FLAGS_STDOUT_PIPE |
		G_SUBPROCESS_FLAGS_STDERR_MERGE);
	g_subprocess_launcher_set_environ(launcher, env);
	g_strfreev(env);

	g_uf.cancel = g_cancellable_new();
	GSubprocess *sp = g_subprocess_launcher_spawn(
		launcher, &err, g_uf.irmctl, subcmd, (const char *)NULL);
	g_object_unref(launcher);
	if (!sp) {
		log_fmt("запуск %s %s: %s", g_uf.irmctl, subcmd,
			err ? err->message : "?");
		g_clear_error(&err);
		g_object_unref(g_uf.cancel);
		g_uf.cancel = NULL;
		if (g_uf.pl_active) {
			/* v2-порт: заливающий спавн не стартовал — цикл
			 * обрываем чисто (артефакты порции остаются в
			 * /tmp для разбора) */
			g_uf.pl_inflight = FALSE;
			pl_abort("запуск irmctl не удался");
			return;
		}
		set_busy(0);
		return;
	}
	g_uf.proc = sp;

	GInputStream *out = g_subprocess_get_stdout_pipe(sp);
	g_uf.stream = g_data_input_stream_new(out);
	g_data_input_stream_read_line_async(g_uf.stream, G_PRIORITY_DEFAULT,
					    g_uf.cancel, stream_read_line,
					    NULL);

	log_fmt(">>> %s %s", g_uf.irmctl, subcmd);
	g_subprocess_wait_check_async(sp, g_uf.cancel, process_done,
				      (gpointer)subcmd);
}

/* ---- верхнеуровневый запуск: проверки + busy ---- */

static void run_irmctl_full(const char *subcmd, const char *fixture_override,
			    unsigned long long meta_ms, unsigned meta_rate)
{
	if (g_uf.busy) {
		log_fmt("уже идёт прогон — дождитесь завершения");
		return;
	}
	if (!g_uf.irmctl) {
		log_fmt("irmctl не найден (env %s, PATH или рядом с "
			"бинарником irm-fill)",
			IRMFILL_IRMCTL_ENV);
		return;
	}
	set_busy(1);
	irmctl_spawn(subcmd, fixture_override, meta_ms, meta_rate, NULL);
}

/* ---- 9l: пакет разных треков (мульт-выбор → TSV-плейлист) ---- */

/* нижняя половина файла: цепочка перекода и спавна */
static void chain_paths_free(void);
static void chain_discover(gpointer job);
static void chain_transcode(void);
static GSubprocess *transcode_spawn(const char *src, const char *dst);
static gchar *tc_make_dst(const char *src);
static gchar *tc_make_dst2(const char *src, const char *uniq);
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
	if (g_uf.codec_aac) {
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
					g_uf.aac_rate / 8000ULL;
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
	if (g_uf.pl_files)
		g_ptr_array_unref(g_uf.pl_files);
	if (g_uf.pl_rows)
		g_ptr_array_unref(g_uf.pl_rows);
	if (g_uf.pl_chunk_art)
		g_ptr_array_unref(g_uf.pl_chunk_art);
	if (g_uf.pl_ready)
		g_ptr_array_unref(g_uf.pl_ready);
	/* v3: параллельные транскоды, кто ещё гонится, гасим силой —
	 * v2 гасил одиночный через g_uf.proc; их колбэки затем
	 * подберут job'ы по поколению (ссылка в списке умрёт вместе
	 * с массивом чисто). */
	if (g_uf.tc_procs) {
		for (guint i = 0; i < g_uf.tc_procs->len; i++)
			g_subprocess_force_exit(
				g_ptr_array_index(g_uf.tc_procs, i));
		g_ptr_array_unref(g_uf.tc_procs);
		g_uf.tc_procs = NULL;
	}
	/* job'ы (в очереди и на финализации) НЕ освобождаем — их
	 * подберут async-колбэки по pl_gen (поколение растёт ниже);
	 * queued-штук ≤ PAR — маленькая допустимая течь на
	 * abort-пути. */
	g_free(g_uf.pl_chunk_tsv);
	g_uf.pl_files = NULL;
	g_uf.pl_rows = NULL;
	g_uf.pl_chunk_art = NULL;
	g_uf.pl_chunk_tsv = NULL;
	g_uf.pl_ready = NULL;
	g_uf.pl_fin_job = NULL;
	g_uf.pl_chunk_num = 0;
	g_uf.pl_chunk_total = 0;
	g_uf.pl_inflight = FALSE;
	g_uf.pl_active = FALSE;
	g_uf.pl_idx = 0;
	g_uf.pl_skip = 0;
	g_uf.pl_running = 0;
	g_uf.pl_tct = 0;
	memset(g_uf.pl_alive, 0, sizeof g_uf.pl_alive);
	g_uf.pl_gen++; /* старым async-колбэкам job больше не его */
}

/* пакет прерван: освобождаем состояние, busy вон */
static void pl_abort(const char *why)
{
	log_fmt("пакет прерван: %s", why);
	pl_reset();
	set_busy(0);
}

static void pl_job_free(struct pl_job *j)
{
	if (!j)
		return;
	/* job закрылся (строка/скип/сброс пакета) — маска перестаёт
	 * держать порцию. */
	if (j->idx >= 1 && j->idx <= IRMFILL_BATCH_MAX)
		g_uf.pl_alive[j->idx] = 0;
	g_free(j->src);
	g_free(j->dst);
	g_free(j->art);
	g_free(j->title);
	g_free(j->artist);
	g_free(j->album);
	g_free(j->genre);
	g_free(j);
}

static void pl_job_ready_add(struct pl_job *j)
{
	g_ptr_array_add(g_uf.pl_ready, j);
}

/* список живых транкод-подпроцессов (v3): жёсткая ссылка у списка —
 * колбэк лишь снимает её оттуда; двойных unref'ов нет */
static void tc_procs_push(GSubprocess *sp)
{
	if (!g_uf.tc_procs)
		g_uf.tc_procs = g_ptr_array_new_with_free_func(
			g_object_unref);
	g_ptr_array_add(g_uf.tc_procs, sp);
}

static void tc_procs_drop(GSubprocess *sp)
{
	/* снятие успешного элемента вызывает free_func (unref) */
	if (g_uf.tc_procs)
		g_ptr_array_remove(g_uf.tc_procs, sp);
}

/* live-правило 05.11: сорвавшийся item пакета пропускается, батч
 * живёт дальше. Артефакт транскода (неофинализированный .m4a БЕЗ
 * moov — gst-launch вышел, не долив хвост) удаляем: иначе он
 * доедает tmpfs и может быть ложно «залит» на телефон. Источник
 * (.m4a как есть) НЕ трогаем — v3-фикс прежнего безусловного
 * unlink'а tc_dst (туда попадал и файл владельца). */
static void pl_job_fail(struct pl_job *j, const char *why)
{
	guint n = g_uf.pl_files ? g_uf.pl_files->len : 0;
	log_fmt("  пропущен [%u/%u]: %s", j->idx, (unsigned)n, why);
	if (j->trans && j->dst && *j->dst &&
	    g_file_test(j->dst, G_FILE_TEST_IS_REGULAR))
		unlink(j->dst);
	chain_paths_free();
	pl_job_free(j);
	g_uf.pl_skip++;
	g_uf.pl_running--;
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

	if (j->gen != g_uf.pl_gen) {
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
		log_fmt("транскод [%u] не удался: %s", j->idx,
			err ? err->message
			    : "выходной файл не появился");
		if (txt && *txt) {
			log_fmt("gst-launch сказал:");
			log_fmt("%s", txt);
		}
		g_free(txt);
		g_free(etext);
		g_clear_error(&err);
		g_uf.pl_tct--;
		pl_job_fail(j, "транскод не удался");
		return;
	}
	log_fmt("    [%u] транскод готов", j->idx);
	log_file_size(j->dst);
	g_free(txt);
	g_free(etext);
	g_uf.pl_tct--;
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
	g_uf.pl_tct++;
	g_subprocess_communicate_utf8_async(sp, NULL, NULL,
					    pl_job_transcode_done, j);
}

/* очередь разборки: сериально, один gst-discover за раз. Теги/
 * обложка едут В СТРОКУ прямо из копий job'а (pl_row_done читает
 * j->*) — общие поля g_uf.tag_* и art_path не участвуют: планировка
 * следующего файла гонит по ним read_source_tags против Discover,
 * и строка увозит чужие теги (живой факт 05.11). Здесь остаётся
 * только tc_dst: его берут chain_discover (путь разбора) и
 * chain_discover_done (dst строки). */
static void pl_job_finalize(void)
{
	if (g_uf.pl_fin_job || g_uf.pl_ready->len == 0)
		return;
	struct pl_job *j = g_ptr_array_index(g_uf.pl_ready, 0);
	g_ptr_array_remove_index(g_uf.pl_ready, 0);
	g_uf.pl_fin_job = j;
	g_uf.tc_dst = g_strdup(j->dst);
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
	log_fmt("[%u/%u] %s", idx, (unsigned)total, base);
	g_free(base);
	read_source_tags(src);
	read_source_artwork2(src, uname);
	j->src = g_strdup(src);
	j->dst = is_m4a(src) ? g_strdup(src) : tc_make_dst2(src, uname);
	g_free(uname);
	j->title = g_strdup(g_uf.tag_title);
	j->artist = g_strdup(g_uf.tag_artist);
	j->album = g_strdup(g_uf.tag_album);
	j->genre = g_strdup(g_uf.tag_genre);
	j->art = g_strdup(g_uf.art_path);
	j->idx = idx;
	j->trans = !is_m4a(src);
	j->gen = g_uf.pl_gen;
	/* маска живых job'ов (см. pl_alive): планировка держит порцию
	 * закрытой, пока этот файл не превратится в строку или скип */
	if (idx >= 1 && idx <= IRMFILL_BATCH_MAX)
		g_uf.pl_alive[idx] = 1;
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
	struct pl_job *j = g_uf.pl_fin_job;
	g_uf.pl_fin_job = NULL;
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
	 * pl_job_new): общие поля g_uf.tag_* и art_path перезаписывает
	 * планировка следующего файла (read_source_tags) прямо перед
	 * сбором строки — живой факт 05.11: строка [файл #2] увезла
	 * теги [4/19] («fuze» при файле Lost in a Wave). */
	tsv_field(r->title, sizeof r->title, j ? j->title : g_uf.tag_title);
	tsv_field(r->artist, sizeof r->artist,
		  j ? j->artist : g_uf.tag_artist);
	tsv_field(r->album, sizeof r->album, j ? j->album : g_uf.tag_album);
	tsv_field(r->genre, sizeof r->genre, j ? j->genre : g_uf.tag_genre);
	tsv_field(r->art, sizeof r->art, j ? j->art : g_uf.art_path);
	g_ptr_array_add(g_uf.pl_rows, r);
	gchar *rbase = g_path_get_basename(r->dst);
	log_fmt("    строка готова [файл #%u]: %llu мс, %u Гц, «%s», "
		"обложка %s, файл ← %s",
		r->idx, ms, rate, r->title[0] ? r->title : "(нет)",
		r->art[0] ? "есть" : "нет", rbase);
	g_free(rbase);
	chain_paths_free();
	if (j) {
		pl_job_free(j);
		g_uf.pl_running--;
	}
	if (g_uf.pl_rows->len >= (guint)pl_chunk_k() &&
	    !g_uf.pl_inflight && pl_flush_mature())
		pl_flush_chunk();
	pl_advance();
}

/* насос пакетного конвейера (9n): порции по K, финализация
 * сериально, подкачка транкод-слотов, хвостовой финиш */
static void pl_advance(void)
{
	if (!g_uf.pl_active)
		return;
	/* (а) буфер дожал K и замучирел (нет живых job'ов младше
	 * последней готовой строки) — порция в заливку */
	if (g_uf.pl_rows &&
	    g_uf.pl_rows->len >= (guint)pl_chunk_k() &&
	    !g_uf.pl_inflight && pl_flush_mature())
		pl_flush_chunk();
	/* (б) финализация готовых — сериально */
	if (!g_uf.pl_fin_job && g_uf.pl_ready->len)
		pl_job_finalize();
	/* (в) транкоды: пока буфер строк не дожал порцию, слоты
	 * свободны и очередь не кончилась */
	guint n = g_uf.pl_files->len;
	while (g_uf.pl_tct < g_uf.pl_par && g_uf.pl_idx < n &&
	       g_uf.pl_rows && g_uf.pl_rows->len < (guint)pl_chunk_k()) {
		const char *src = g_ptr_array_index(g_uf.pl_files,
						    g_uf.pl_idx);
		g_uf.pl_idx++;
		if (strchr(src, '\t')) {
			/* таб в пути разобьёт колонки TSV */
			log_fmt("  пропущен — таб в пути: %s", src);
			g_uf.pl_skip++;
			continue;
		}
		if (!fixture_ok(src)) {
			log_fmt("  пропущен — недоступен: %s", src);
			g_uf.pl_skip++;
			continue;
		}
		struct pl_job *j = pl_job_new(src, g_uf.pl_idx,
					      (unsigned)n);
		g_uf.pl_running++;
		if (is_m4a(src)) {
			/* как есть — tmpfs не расходует */
			pl_job_ready_add(j);
		} else {
			pl_job_start(j);
		}
	}
	/* (г) очередь кончилась и всё разошлось; inflight ждёт последний
	 * rc — хвост разборок поведёт pl_chunk_done → pl_advance */
	if (!g_uf.pl_inflight && g_uf.pl_idx >= n &&
	    g_uf.pl_running == 0 && g_uf.pl_ready->len == 0 &&
	    !g_uf.pl_fin_job)
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
 * поля тегов g_uf.tag_* и art_path перезаписывались планировкой
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
	guint nr = g_uf.pl_rows ? g_uf.pl_rows->len : 0;
	if (nr == 0) {
		if (g_uf.pl_inflight)
			return; /* последняя порция ещё заливается */
		if (g_uf.pl_chunk_num) {
			log_fmt("конвейер завершён: залито порций %u, "
				"пропущено %u",
				g_uf.pl_chunk_num, g_uf.pl_skip);
			pl_reset();
			set_busy(0);
			return;
		}
		if (g_uf.pl_skip)
			log_fmt("обработалось 0 из %u — все пропущены",
				g_uf.pl_skip);
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
	guint nr = g_uf.pl_rows ? g_uf.pl_rows->len : 0;
	if (nr < (guint)K)
		return 0;
	unsigned *buf = g_new(unsigned, nr);
	if (!buf)
		return 1; /* нет памяти — конвейер не задерживаем */
	for (guint i = 0; i < nr; i++)
		buf[i] = ((struct pl_row *)g_ptr_array_index(
				  g_uf.pl_rows, i))
				 ->idx;
	qsort(buf, nr, sizeof buf[0], cmp_unsigned);
	unsigned last = buf[K - 1];
	g_free(buf);
	for (unsigned u = 1; u < last && u <= IRMFILL_BATCH_MAX; u++)
		if (g_uf.pl_alive[u])
			return 0; /* младший файл ещё жив — ждём его */
	return 1;
}

static void pl_flush_chunk(void)
{
	if (g_uf.pl_inflight)
		return; /* порция уже едет — второй спавн запрещён */
	if (!g_uf.irmctl) {
		pl_abort("irmctl не найден (env " IRMFILL_IRMCTL_ENV
			 ", PATH или рядом с бинарником)");
		return;
	}
	guint nr = g_uf.pl_rows ? g_uf.pl_rows->len : 0;
	if (nr == 0)
		return;
	if (nr > 1) /* строгий порядок файлов в TSV порции */
		qsort(g_uf.pl_rows->pdata, nr,
		      sizeof g_uf.pl_rows->pdata[0], cmp_row_idx);
	if (!g_uf.pl_chunk_art)
		g_uf.pl_chunk_art =
			g_ptr_array_new_with_free_func(g_free);
	g_uf.pl_chunk_num++;
	if (g_uf.pl_chunk_total > 1)
		g_uf.pl_chunk_tsv = g_strdup_printf(
			"%s/irm-fill-playlist-%u-of-%u.tsv",
			g_get_tmp_dir(), g_uf.pl_chunk_num,
			g_uf.pl_chunk_total);
	else
		g_uf.pl_chunk_tsv = g_build_filename(
			g_get_tmp_dir(), "irm-fill-playlist.tsv",
			NULL);
	FILE *f = fopen(g_uf.pl_chunk_tsv, "wb");
	if (!f) {
		log_fmt("плейлист %s: %s", g_uf.pl_chunk_tsv,
			g_strerror(errno));
		pl_abort("TSV порции не открыт");
		return;
	}
	for (guint i = 0; i < nr; i++) {
		struct pl_row *r = g_ptr_array_index(g_uf.pl_rows, i);
		/* артефакты порции: только НАШИ (trans — tmp-перекод и
		 * обложка) уходят на уборку после живой (не stage-only)
		 * заливки rc=0. Родной .m4a владельца (trans=0) в
		 * списке уборки запрещён — источник выживает. */
		if (r->dst[0] && r->trans)
			g_ptr_array_add(g_uf.pl_chunk_art,
					g_strdup(r->dst));
		if (r->art[0])
			g_ptr_array_add(g_uf.pl_chunk_art,
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
		log_fmt("плейлист %s: запись не удалась",
			g_uf.pl_chunk_tsv);
		pl_abort("TSV порции не записан");
		return;
	}
	log_fmt("порция %u/%u: %u трек(ов) → %s — заливка…",
		g_uf.pl_chunk_num, g_uf.pl_chunk_total, (unsigned)nr,
		g_uf.pl_chunk_tsv);
	/* пары порции В ПОРЯДКЕ TSV (после сортировки): сверка
	 * «строка ↔ звук» один к одному с телефонной библией */
	for (guint i = 0; i < nr; i++) {
		struct pl_row *r = g_ptr_array_index(g_uf.pl_rows, i);
		gchar *rlb = g_path_get_basename(r->dst);
		log_fmt("    плейлист[%u]: «%s» — %s", i + 1,
			r->title[0] ? r->title : "(нет)", rlb);
		g_free(rlb);
	}
	/* строки больше не нужны: данные в TSV и списке артефактов */
	g_ptr_array_remove_range(g_uf.pl_rows, 0, nr);
	g_uf.pl_inflight = TRUE;
	/* spawn при провале сам разрулит через pl_abort */
	irmctl_spawn("atc-insert", NULL, 0, 0, g_uf.pl_chunk_tsv);
}

/* rc irmctl порции получен: чистка tmpfs → следующий чанк (или
 * финиш). Срыв СТОПИТ цикл: телефон мог отказать — дальше не
 * мутим, артефакты порции и TSV оставляем для разбора. */
static void pl_chunk_done(gboolean ok)
{
	unsigned num = g_uf.pl_chunk_num;
	unsigned total = g_uf.pl_chunk_total;
	g_uf.pl_inflight = FALSE;
	if (!ok) {
		log_fmt("порция %u/%u: rc!=0 — конвейер СТОП, артефакты "
			"порции и TSV оставлены (разбор в /tmp)",
			num, total);
		pl_reset();
		set_busy(0);
		return;
	}
	guint nart = g_uf.pl_chunk_art ? g_uf.pl_chunk_art->len : 0;
	if (!gtk_check_button_get_active(g_uf.ck_stage)) {
		for (guint i = 0; i < nart; i++)
			unlink(g_ptr_array_index(g_uf.pl_chunk_art, i));
		log_fmt("порция %u/%u: залита (rc=0); временных файлов "
			"убрано %u шт",
			num, total, (unsigned)nart);
	} else {
		log_fmt("порция %u/%u: стадия ok (stage-only не чистит; "
			"в /tmp осталось %u шт)",
			num, total, (unsigned)nart);
	}
	if (g_uf.pl_chunk_art) {
		g_ptr_array_unref(g_uf.pl_chunk_art);
		g_uf.pl_chunk_art = NULL;
	}
	unlink(g_uf.pl_chunk_tsv); /* TSV порции больше не нужен */
	g_free(g_uf.pl_chunk_tsv);
	g_uf.pl_chunk_tsv = NULL;
	/* v3: колесо целиком в pl_advance — подкачка транскодов
	 * (закисшая на гейте rows≥K), хвостовая порция и
	 * «конвейер завершён» (финиш едет только по rc: очередь к
	 * этому моменту может кончиться раньше rc) */
	pl_advance();
}

/* выбор нескольких файлов (GtkFileDialog open_multiple): безопасность
 * (stage-only) и очередь источника; сама обработка — по одному */
static void pl_start_from_files(GListModel *files)
{
	guint n = files ? g_list_model_get_n_items(files) : 0;
	if (n == 0) {
		log_fmt("пакет: ничего не выбрано");
		return;
	}
	if (n > IRMFILL_BATCH_MAX) {
		log_fmt("пакет: ограничение %u — беру первые %u",
			IRMFILL_BATCH_MAX, IRMFILL_BATCH_MAX);
		n = IRMFILL_BATCH_MAX;
	}
	if (!g_uf.irmctl) {
		log_fmt("irmctl не найден (env %s, PATH или рядом с "
			"бинарником irm-fill)",
			IRMFILL_IRMCTL_ENV);
		return;
	}
	if (!g_uf.gst_discover) {
		log_fmt("пакет невозможен: нет gst-discoverer-1.0 в PATH");
		return;
	}
	if (!g_uf.gst_launch) {
		log_fmt("пакет невозможен: нет gst-launch-1.0 в PATH "
			"(перекод %s для не-.m4a входов)",
			g_uf.gst_codec);
		return;
	}
	pl_reset();
	g_uf.pl_files = g_ptr_array_new_with_free_func(g_free);
	for (guint i = 0; i < n; i++) {
		GFile *gf = g_list_model_get_item(files, i);
		gchar *path = gf ? g_file_get_path(gf) : NULL;
		if (path) {
			g_ptr_array_add(g_uf.pl_files, path);
		} else {
			log_fmt("  пропущен — не локальный: %s",
				gf ? g_file_peek_path(gf) : "?");
		}
		g_clear_object(&gf);
	}
	if (g_uf.pl_files->len == 0) {
		pl_reset();
		return;
	}
	/* precheck места (live 05.11: EDQUOT на tmpfs при rc=0 gst-launch
	 * валит транскоды молча — гасим проблему ДО работы): оценка
	 * vs свободного места на tmp (90% — не доедаем). v3: оценки
	 * пишутся подрёбно (AAC = длина×битрейт по TagLib), а
	 * граница честная: в tmpfs живут заливающаяся порция и
	 * буфер следующей (две порции худших: сумма K худших ×2) +
	 * PAR транскодов в полёте (худший × PAR). */
	unsigned long long one = 0;
	guint cnt = g_uf.pl_files->len;
	unsigned long long *ests = g_new(unsigned long long, cnt);
	for (guint i = 0; i < cnt; i++) {
		const char *p = g_ptr_array_index(g_uf.pl_files, i);
		ests[i] = payload_estimate(p);
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
		log_fmt("пакет: свободное место на %s не проверить "
			"(statvfs не удался) — продолжаю, валидатор "
			"gst-discoverer отбракует сорванные",
			g_get_tmp_dir());
	} else if (need > avail) {
		log_fmt("пакет: места на %s мало: нужно ~%llu МиБ "
			"(2 порции худших K{%u} + %u транкод(ов) худшего), "
			"свободно ~%llu МиБ (составлял по 90%%)",
			g_get_tmp_dir(), need >> 20, K, par, avail >> 20);
		log_fmt("советы: rm /tmp/irm-fill-*.m4a /tmp/irm-fill-*.jpg "
			"(старые артефакты), или меньший IRMFILL_CHUNK "
			"(сейчас порция %u), или точка монтирования /tmp "
			"с большим объёмом",
			K);
		pl_reset();
		return;
	} else if (need > avail / 2) {
		log_fmt("пакет: предупреждение — пейлоады съедят больше "
			"половины свободного места (%s): ~%llu МиБ из "
			"~%llu МиБ",
			g_get_tmp_dir(), need >> 20, avail >> 20);
	}
	g_uf.pl_rows = g_ptr_array_new_with_free_func(g_free);
	g_uf.pl_chunk_art = g_ptr_array_new_with_free_func(g_free);
	/* очередь готовых job'ов: элементами владеет конвейер (pl_reset
	 * НЕ освобождает job'ы — значит, без free_func) */
	g_uf.pl_ready = g_ptr_array_new();
	g_uf.pl_par = par;
	g_uf.pl_chunk_total = (unsigned)((g_uf.pl_files->len + K - 1) / K);
	g_uf.pl_active = TRUE;
	g_uf.pl_idx = 0;
	log_fmt("пакет: %u файл(ов), порций по %u, перекод %s ×%u, "
		"цикл «транскод → заливка → чистка»…",
		g_uf.pl_files->len, K, g_uf.gst_codec, par);
	set_busy(1);
	pl_advance();
}

static void on_open_multi_done(GObject *src, GAsyncResult *res,
			       gpointer user)
{
	(void)user;
	GError *err = NULL;
	GListModel *files = gtk_file_dialog_open_multiple_finish(
		GTK_FILE_DIALOG(src), res, &err);
	if (!files) {
		if (!g_error_matches(err, G_IO_ERROR,
				     G_IO_ERROR_CANCELLED))
			log_fmt("пакет: %s",
				err ? err->message : "файлы не выбраны");
		g_clear_error(&err);
		return;
	}
	pl_start_from_files(files);
	g_object_unref(files);
}

static void on_playlist_clicked(GtkButton *btn, gpointer user)
{
	(void)btn;
	(void)user;
	GtkFileDialog *fd = gtk_file_dialog_new();
	gtk_file_dialog_set_title(fd, "Выберите файлы для пакета");

	GtkFileFilter *f_all = gtk_file_filter_new();
	gtk_file_filter_set_name(f_all,
				 "аудио (.m4a .mp3 .flac .wav .aiff)");
	gtk_file_filter_add_mime_type(f_all, "audio/x-m4a");
	gtk_file_filter_add_mime_type(f_all, "audio/mp4");
	gtk_file_filter_add_mime_type(f_all, "audio/mpeg");
	gtk_file_filter_add_mime_type(f_all, "audio/flac");
	gtk_file_filter_add_mime_type(f_all, "audio/x-wav");
	gtk_file_filter_add_mime_type(f_all, "audio/x-aiff");
	GListStore *ls = g_list_store_new(GTK_TYPE_FILE_FILTER);
	g_list_store_append(ls, f_all);
	g_object_unref(f_all);
	gtk_file_dialog_set_filters(fd, G_LIST_MODEL(ls));
	g_object_unref(ls);

	gtk_file_dialog_open_multiple(fd, GTK_WINDOW(g_uf.win), NULL,
				      on_open_multi_done, NULL);
	g_object_unref(fd);
}

/* ---- транскод-цепочка v3: не-.m4a → AAC|ALAC .m4a → gst-discoverer ---- */

static void chain_paths_free(void)
{
	g_free(g_uf.tc_src);
	g_free(g_uf.tc_dst);
	g_uf.tc_src = NULL;
	g_uf.tc_dst = NULL;
}

/* срыв одиночной цепочки: только рабочие поля и busy. Срывы пакета
 * разбирает pl_job_fail — item пропускается живьём (live 05.11:
 * EDQUOT на tmpfs валит одиночные транскоды молча; «либо всё
 * готово, либо item мимо» — батч не валится). */
static void chain_fail(void)
{
	chain_paths_free();
	set_busy(0);
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

static gchar *tc_make_dst(const char *src)
{
	return tc_make_dst2(src, NULL);
}

/* ступень 2: из вывода gst-discoverer — длительность и сэмплрейт.
 * user: NULL — одиночный режим (подпроцесс в g_uf.proc); job —
 * пакетный (подпроцесс живёт в асинхронной задаче, g_uf.proc не
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
		g_object_unref(sp); /* g_uf.proc job-процессы не хранит */
		if (j->gen != g_uf.pl_gen) {
			/* пакет сброшен — job чужой, только прибираем */
			g_free(txt);
			g_free(etext);
			g_clear_error(&err);
			pl_job_free(j);
			return;
		}
	} else {
		g_clear_object(&g_uf.proc);
	}

	/* срыв плёнки: job пропускается, конвейер живёт дальше */
	if (!ok) {
		log_fmt("gst-discoverer: %s", err ? err->message : "?");
		if (txt && *txt) {
			log_fmt("gst-discoverer сказал:");
			log_fmt("%s", txt);
		}
		g_free(txt);
		g_free(etext);
		g_clear_error(&err);
		if (j) {
			g_uf.pl_fin_job = NULL;
			pl_job_fail(j, "gst-discoverer сорвался");
			return;
		}
		chain_fail();
		return;
	}

	const char *d = txt ? strstr(txt, "Duration:") : NULL;
	const char *r = txt ? strstr(txt, "Sample rate:") : NULL;
	if (!d || !r) {
		log_fmt("gst-discoverer: не видно Duration/Sample rate");
		if (txt && *txt) {
			log_fmt("gst-discoverer сказал:");
			log_fmt("%s", txt);
		}
		g_free(txt);
		g_free(etext);
		if (j) {
			g_uf.pl_fin_job = NULL;
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
			log_fmt("  [%u] меты мусорные (ms=%llu rate=%u)",
				j->idx, ms, rate);
		else
			log_fmt("gst-discoverer: мусорные метаданные "
				"(ms=%llu rate=%u)",
				ms, rate);
		if (j) {
			g_uf.pl_fin_job = NULL;
			pl_job_fail(j, "меты мусорные");
			return;
		}
		chain_fail();
		return;
	}
	if (j)
		log_fmt("    [%u] меты: %llu мс, %u Гц, ~%llu сэмплов",
			j->idx, ms, rate,
			ms * (unsigned long long)rate / 1000ULL);
	else
		log_fmt("метаданные перекода: %llu мс, %u Гц, "
			"~%llu сэмплов",
			ms, rate,
			ms * (unsigned long long)rate / 1000ULL);

	if (g_uf.pl_active) {
		/* 9l: строка пакета готова — теги/обложка pl_row_done
		 * берёт из копий job'а (pl_fin_job); общие поля с
		 * 05.11 на строку не влияют */
		pl_row_done(g_uf.tc_dst, ms, rate);
		return;
	}
	irmctl_spawn(g_uf.pending_cmd, g_uf.tc_dst, ms, rate, NULL);
	chain_paths_free();
}

/* ступень 2: запуск gst-discoverer (путь — g_uf.tc_dst: его
 * заполнил pl_job_finalize из job'а или одиночная цепочка) */
static void chain_discover(gpointer job)
{
	GError *err = NULL;
	const char *argv[] = { g_uf.gst_discover, g_uf.tc_dst, NULL };
	GSubprocess *sp = g_subprocess_newv(
		argv, G_SUBPROCESS_FLAGS_STDOUT_PIPE |
		G_SUBPROCESS_FLAGS_STDERR_MERGE,
		&err);
	if (!sp) {
		log_fmt("запуск gst-discoverer: %s",
			err ? err->message : "?");
		g_clear_error(&err);
		log_fmt("транскод прерван: gst-discoverer не запустился");
		if (job) {
			g_uf.pl_fin_job = NULL;
			pl_job_fail(job, "gst-discoverer не запустился");
			return;
		}
		chain_fail();
		return;
	}
	g_subprocess_communicate_utf8_async(sp, NULL, NULL,
					    chain_discover_done, job);
	if (!job)
		g_uf.proc = sp; /* одиночный: v2-гашение при закрытии */
}

/* ступень 1: результаты gst-launch (файл должен появиться) */
static void chain_transcode_done(GObject *src, GAsyncResult *res,
				 gpointer user)
{
	(void)user;
	GSubprocess *sp = G_SUBPROCESS(src);
	char *txt = NULL;
	char *etext = NULL;
	GError *err = NULL;
	gboolean ok = g_subprocess_communicate_utf8_finish(
		sp, res, &txt, &etext, &err);
	g_clear_object(&g_uf.proc);

	if (ok)
		ok = g_uf.tc_dst && access(g_uf.tc_dst, R_OK) == 0;
	if (!ok) {
		log_fmt("транскод не удался: %s",
			err ? err->message
			    : "выходной файл не появился");
		if (txt && *txt) {
			log_fmt("gst-launch сказал:");
			log_fmt("%s", txt);
		}
		g_free(txt);
		g_free(etext);
		g_clear_error(&err);
		chain_fail();
		return;
	}
	log_fmt("транскод готов");
	log_file_size(g_uf.tc_dst);
	g_free(txt);
	g_free(etext);
	chain_discover(NULL);
}

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
	const char *enc = g_uf.codec_aac ? "avenc_aac" : "avenc_alac";
	char rate[32];
	rate[0] = 0;
	if (g_uf.codec_aac)
		snprintf(rate, sizeof rate, "bitrate=%u", g_uf.aac_rate);
	const char *argv_aac[] = {
		g_uf.gst_launch, "-q",
		"filesrc", srcLoc, "!", "decodebin",
		"!", "audioconvert", "!", "audioresample",
		"!", "avenc_aac", rate, "!", "mp4mux", "!",
		"filesink", dstLoc, NULL };
	const char *argv_alac[] = {
		g_uf.gst_launch, "-q",
		"filesrc", srcLoc, "!", "decodebin",
		"!", "audioconvert", "!", "audioresample",
		"!", "avenc_alac", "!", "mp4mux", "!",
		"filesink", dstLoc, NULL };
	const char **argv = g_uf.codec_aac ? argv_aac : argv_alac;
	/* свежий артефакт за прогон: старый (в т.ч. неофинализированный
	 * от сорванного прогона) удаляем ДО спавна */
	unlink(dst);
	log_fmt("транскод %s идёт (%s + mp4mux), ждите…",
		g_uf.gst_codec, enc);
	GSubprocess *sp = g_subprocess_newv(
		argv, G_SUBPROCESS_FLAGS_STDOUT_PIPE |
		G_SUBPROCESS_FLAGS_STDERR_MERGE,
		&err);
	g_free(srcLoc);
	g_free(dstLoc);
	if (!sp) {
		log_fmt("запуск gst-launch: %s", err ? err->message : "?");
		g_clear_error(&err);
		return NULL;
	}
	return sp;
}

/* одиночный режим: транскод остаётся в рабочих полях (v2-семантика
 * гашения при закрытии окна); пакетные job'ы зовут transcode_spawn
 * напрямую (pl_job_start) */
static void chain_transcode(void)
{
	GSubprocess *sp = transcode_spawn(g_uf.tc_src, g_uf.tc_dst);
	if (!sp) {
		log_fmt("транскод прерван: gst-launch не запустился");
		chain_fail();
		return;
	}
	g_uf.proc = sp;
	g_subprocess_communicate_utf8_async(sp, NULL, NULL,
					    chain_transcode_done, NULL);
}

/* вход цепочки: источник уже проверен на доступность */
static void chain_start(const char *src)
{
	if (!g_uf.irmctl) {
		log_fmt("irmctl не найден (env %s, PATH или рядом с "
			"бинарником irm-fill)",
			IRMFILL_IRMCTL_ENV);
		return;
	}
	if (!g_uf.gst_launch) {
		log_fmt("транскод невозможен: нет gst-launch-1.0 в PATH");
		return;
	}
	if (!g_uf.gst_discover) {
		log_fmt("транскод невозможен: нет gst-discoverer-1.0 в PATH");
		return;
	}
	g_uf.tc_src = g_strdup(src);
	g_uf.tc_dst = tc_make_dst(src);
	snprintf(g_uf.pending_cmd, sizeof g_uf.pending_cmd, "%s",
		 "atc-insert");
	set_busy(1);
	log_fmt("«%s» — не .m4a; перекодирую в %s", g_uf.tc_src,
		g_uf.tc_dst);
	chain_transcode();
}

/* общая часть «Один трек» и «Пакет N →» (9i): .m4a уходит как есть,
 * остальное — через цепочку транскода */
static void on_insert_clicked(void)
{
	const char *fix =
		gtk_editable_get_text(GTK_EDITABLE(g_uf.en_fixture));
	if (!fixture_ok(fix)) {
		log_fmt("фикстура недоступна: %s",
			(fix && *fix) ? fix : "(пусто)");
		return;
	}
	/* (9j) теги берём из ИСТОЧНИКА (в транскоде они не сохраняются:
	 * mp4mux теги так и не пишет) */
	read_source_tags(fix);
	/* (9k) обложку берём тоже из ИСТОЧНИКА (TagLib PICTURE) */
	read_source_artwork(fix);
	if (is_m4a(fix)) {
		run_irmctl_full("atc-insert", NULL, 0, 0);
		return;
	}
	chain_start(fix);
}

/* ---- обработчики кнопок ---- */

static void on_anchor_clicked(GtkButton *btn, gpointer user)
{
	(void)btn;
	(void)user;
	run_irmctl_full("music-id", NULL, 0, 0);
}

static void on_one_clicked(GtkButton *btn, gpointer user)
{
	(void)btn;
	(void)user;
	gtk_spin_button_set_value(g_uf.sp_batch, 1);
	on_insert_clicked();
}

static void on_batch_clicked(GtkButton *btn, gpointer user)
{
	(void)btn;
	(void)user;
	on_insert_clicked();
}

static void on_clear_clicked(GtkButton *btn, gpointer user)
{
	(void)btn;
	(void)user;
	gtk_text_buffer_set_text(g_uf.log_buf, "", -1);
	gtk_label_set_text(g_uf.la_state, "якерь: (нет данных)");
}

/* выбор аудиофайла через нативный диалог (GtkFileDialog, GTK 4.10+) */
static void on_open_audio_done(GObject *src, GAsyncResult *res,
			       gpointer user)
{
	(void)user;
	GError *err = NULL;
	GFile *file = gtk_file_dialog_open_finish(GTK_FILE_DIALOG(src), res,
						  &err);
	if (!file) {
		if (!g_error_matches(err, G_IO_ERROR, G_IO_ERROR_CANCELLED))
			log_fmt("обзор: %s",
				err ? err->message : "файл не выбран");
		g_clear_error(&err);
		return;
	}
	gchar *path = g_file_get_path(file);
	if (path) {
		gtk_editable_set_text(GTK_EDITABLE(g_uf.en_fixture), path);
		log_fmt("фикстура выбрана: %s", path);
		g_free(path);
	} else {
		log_fmt("обзор: файл не локальный (только локальные пути)");
	}
	g_object_unref(file);
}

static void on_browse_clicked(GtkButton *btn, gpointer user)
{
	(void)btn;
	(void)user;
	GtkFileDialog *fd = gtk_file_dialog_new();
	gtk_file_dialog_set_title(fd, "Выберите аудиофайл");

	GtkFileFilter *f_all = gtk_file_filter_new();
	gtk_file_filter_set_name(f_all,
				 "аудио (.m4a .mp3 .flac .wav .aiff)");
	gtk_file_filter_add_mime_type(f_all, "audio/x-m4a");
	gtk_file_filter_add_mime_type(f_all, "audio/mp4");
	gtk_file_filter_add_mime_type(f_all, "audio/mpeg");
	gtk_file_filter_add_mime_type(f_all, "audio/flac");
	gtk_file_filter_add_mime_type(f_all, "audio/x-wav");
	gtk_file_filter_add_mime_type(f_all, "audio/x-aiff");

	GtkFileFilter *f_m4a = gtk_file_filter_new();
	gtk_file_filter_set_name(f_m4a, "ALAC .m4a");
	gtk_file_filter_add_mime_type(f_m4a, "audio/x-m4a");
	gtk_file_filter_add_mime_type(f_m4a, "audio/mp4");

	GListStore *ls = g_list_store_new(GTK_TYPE_FILE_FILTER);
	g_list_store_append(ls, f_all);
	g_list_store_append(ls, f_m4a);
	g_object_unref(f_all);
	g_object_unref(f_m4a);
	gtk_file_dialog_set_filters(fd, G_LIST_MODEL(ls));
	g_object_unref(ls);

	gtk_file_dialog_open(fd, GTK_WINDOW(g_uf.win), NULL,
			     on_open_audio_done, NULL);
	g_object_unref(fd);
}

/* закрытие окна при активном прогоне: дотягиваем ребенка вниз */
static gboolean on_close_request(GtkWindow *win, gpointer user)
{
	(void)win;
	(void)user;
	if (g_uf.busy && g_uf.proc) {
		log_append("окно закрывается — прерываю подпроцесс");
		g_subprocess_force_exit(g_uf.proc);
	}
	return FALSE; /* всегда разрешаем закрыть */
}

/* ---- сборка интерфейса ---- */

static void find_irmctl(void)
{
	const char *e = getenv(IRMFILL_IRMCTL_ENV);
	if (e && *e) {
		g_uf.irmctl = g_path_is_absolute(e) ? g_strdup(e)
						    : g_canonicalize_filename(
							    e, NULL);
		if (access(g_uf.irmctl, X_OK) == 0)
			return;
		g_free(g_uf.irmctl);
		g_uf.irmctl = NULL;
	}
	gchar *path = g_find_program_in_path("irmctl");
	if (path) {
		g_uf.irmctl = path;
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
			g_uf.irmctl = ctl;
			return;
		}
		g_free(ctl);
	}
}

static void find_gst(void)
{
	g_uf.gst_launch = g_find_program_in_path("gst-launch-1.0");
	g_uf.gst_discover = g_find_program_in_path("gst-discoverer-1.0");
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
	g_uf.aac_rate = (unsigned)r;
	g_uf.codec_aac = FALSE;
	snprintf(g_uf.gst_codec, sizeof g_uf.gst_codec, "ALAC");
	if (!want_aac)
		return;
	g_uf.gst_inspect = g_find_program_in_path("gst-inspect-1.0");
	gboolean have = FALSE;
	if (g_uf.gst_inspect) {
		/* avenc_aac на месте? (stdout плагинового дампа гасим) */
		gchar *cmd = g_strdup_printf(
			"%s avenc_aac >/dev/null 2>&1",
			g_uf.gst_inspect);
		have = system(cmd) == 0;
		g_free(cmd);
	}
	if (have) {
		g_uf.codec_aac = TRUE;
		snprintf(g_uf.gst_codec, sizeof g_uf.gst_codec, "AAC");
	} else {
		log_fmt("транскод: avenc_aac недоступен — перекод пакета "
			"вернётся на ALAC (IRMFILL_CODEC=alac — то же)");
	}
}

static void build_ui(GtkApplication *app)
{
	g_uf.win = ADW_APPLICATION_WINDOW(
		adw_application_window_new(app));
	gtk_window_set_title(GTK_WINDOW(g_uf.win),
			     "IRM: заливка музыки (тест)");
	gtk_window_set_default_size(GTK_WINDOW(g_uf.win), 860, 640);

	GtkWidget *root = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
	GtkWidget *hdr = adw_header_bar_new();
	GtkWidget *htitle = gtk_label_new("IRM: заливка музыки (тест)");
	gtk_widget_add_css_class(htitle, "title");
	adw_header_bar_set_title_widget(ADW_HEADER_BAR(hdr), htitle);
	gtk_box_append(GTK_BOX(root), hdr);

	GtkWidget *content = gtk_box_new(GTK_ORIENTATION_VERTICAL, 8);
	gtk_widget_set_margin_top(content, 8);
	gtk_widget_set_margin_bottom(content, 8);
	gtk_widget_set_margin_start(content, 10);
	gtk_widget_set_margin_end(content, 10);

	/* --- панель управления --- */
	GtkWidget *panel = gtk_grid_new();
	gtk_grid_set_row_spacing(GTK_GRID(panel), 6);
	gtk_grid_set_column_spacing(GTK_GRID(panel), 8);
	gtk_widget_set_vexpand(panel, FALSE);

	g_uf.la_state = GTK_LABEL(
		gtk_label_new("якерь: (нет данных)"));
	gtk_widget_set_halign(GTK_WIDGET(g_uf.la_state), GTK_ALIGN_START);
	gtk_widget_set_hexpand(GTK_WIDGET(g_uf.la_state), TRUE);
	gtk_grid_attach(GTK_GRID(panel), GTK_WIDGET(g_uf.la_state), 0, 0, 3,
			1);

	g_uf.btn_anchor = GTK_BUTTON(
		gtk_button_new_with_label("Проверить якерь (music-id)"));
	g_signal_connect(g_uf.btn_anchor, "clicked",
			 G_CALLBACK(on_anchor_clicked), NULL);
	gtk_grid_attach(GTK_GRID(panel), GTK_WIDGET(g_uf.btn_anchor), 0, 1,
			1, 1);

	/* индикатор занятости */
	g_uf.spinner = GTK_SPINNER(gtk_spinner_new());
	gtk_widget_set_tooltip_text(GTK_WIDGET(g_uf.spinner),
				    "идёт прогон");
	gtk_grid_attach(GTK_GRID(panel), GTK_WIDGET(g_uf.spinner), 1, 1, 1,
			1);

	/* фикстура: любое аудио; не-.m4a перекодируется сам */
	GtkWidget *la_fix = gtk_label_new("фикстура аудио:");
	gtk_label_set_xalign(GTK_LABEL(la_fix), 0.0);
	gtk_grid_attach(GTK_GRID(panel), la_fix, 0, 2, 1, 1);
	g_uf.en_fixture = GTK_ENTRY(gtk_entry_new());
	gtk_entry_set_placeholder_text(g_uf.en_fixture,
				       "путь к .m4a / .mp3 / .flac …");
	/* подсказка по умолчанию: значение из окружения */
	const char *fixe = getenv("IRMA_ATC_FIXTURE");
	if (fixe && *fixe)
		gtk_editable_set_text(GTK_EDITABLE(g_uf.en_fixture), fixe);
	gtk_widget_set_hexpand(GTK_WIDGET(g_uf.en_fixture), TRUE);
	gtk_grid_attach(GTK_GRID(panel), GTK_WIDGET(g_uf.en_fixture), 1, 2,
			1, 1);
	g_uf.btn_browse = GTK_BUTTON(gtk_button_new_with_label("Обзор…"));
	gtk_widget_set_tooltip_text(GTK_WIDGET(g_uf.btn_browse),
				    "выбрать аудиофайл; mp3/flac "
				    "перекодируются в ALAC автоматически");
	g_signal_connect(g_uf.btn_browse, "clicked",
			 G_CALLBACK(on_browse_clicked), NULL);
	gtk_grid_attach(GTK_GRID(panel), GTK_WIDGET(g_uf.btn_browse), 2, 2,
			1, 1);

	/* один трек */
	g_uf.btn_one = GTK_BUTTON(gtk_button_new_with_label("Один трек"));
	g_signal_connect(g_uf.btn_one, "clicked",
			 G_CALLBACK(on_one_clicked), NULL);
	gtk_grid_attach(GTK_GRID(panel), GTK_WIDGET(g_uf.btn_one), 0, 3, 1,
			1);

	/* пакет N: спин + кнопка в одной строке */
	GtkWidget *la_batch = gtk_label_new("вставок в пакете:");
	gtk_label_set_xalign(GTK_LABEL(la_batch), 0.0);
	gtk_grid_attach(GTK_GRID(panel), la_batch, 1, 3, 1, 1);

	GtkWidget *box_batch = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 6);
	g_uf.sp_batch = GTK_SPIN_BUTTON(gtk_spin_button_new_with_range(
		1.0, (gdouble)IRMFILL_BATCH_MAX, 1.0));
	gtk_spin_button_set_value(g_uf.sp_batch, 1);
	gtk_widget_set_hexpand(GTK_WIDGET(g_uf.sp_batch), TRUE);
	gtk_box_append(GTK_BOX(box_batch), GTK_WIDGET(g_uf.sp_batch));
	g_uf.btn_batch =
		GTK_BUTTON(gtk_button_new_with_label("Пакет N →"));
	g_signal_connect(g_uf.btn_batch, "clicked",
			 G_CALLBACK(on_batch_clicked), NULL);
	gtk_box_append(GTK_BOX(box_batch), GTK_WIDGET(g_uf.btn_batch));
	gtk_widget_set_hexpand(box_batch, TRUE);
	gtk_grid_attach(GTK_GRID(panel), box_batch, 2, 3, 1, 1);

	/* 9l: пакет разных треков — мульт-выбор → TSV-плейлист */
	g_uf.btn_pl =
		GTK_BUTTON(gtk_button_new_with_label("Залить пакет…"));
	gtk_widget_set_tooltip_text(GTK_WIDGET(g_uf.btn_pl),
				    "выбрать несколько файлов; "
				    "каждый — отдельная трек-строка "
				    "в одном конверте (IRMA_ATC_PLAYLIST)");
	g_signal_connect(g_uf.btn_pl, "clicked",
			 G_CALLBACK(on_playlist_clicked), NULL);
	gtk_widget_set_hexpand(GTK_WIDGET(g_uf.btn_pl), TRUE);
	gtk_grid_attach(GTK_GRID(panel), GTK_WIDGET(g_uf.btn_pl), 0, 4, 3,
			1);

	/* stage-only */
	g_uf.ck_stage = GTK_CHECK_BUTTON(
		gtk_check_button_new_with_label(
			"только стадия (IRMA_ATC_STAGE_ONLY=1; безопасно — "
			"без записей на телефон)"));
	gtk_check_button_set_active(g_uf.ck_stage, TRUE);
	gtk_grid_attach(GTK_GRID(panel), GTK_WIDGET(g_uf.ck_stage), 0, 5, 3,
			1);

	/* LibraryID */
	GtkWidget *la_libid = gtk_label_new("IRMA_ATC_LIBID:");
	gtk_label_set_xalign(GTK_LABEL(la_libid), 0.0);
	gtk_grid_attach(GTK_GRID(panel), la_libid, 0, 6, 1, 1);
	g_uf.en_libid = GTK_ENTRY(gtk_entry_new());
	gtk_entry_set_placeholder_text(g_uf.en_libid,
				       "%016llX (необязательно)");
	gtk_widget_set_hexpand(GTK_WIDGET(g_uf.en_libid), TRUE);
	gtk_grid_attach(GTK_GRID(panel), GTK_WIDGET(g_uf.en_libid), 1, 6,
			2, 1);

	gtk_box_append(GTK_BOX(content), panel);

	/* --- лог --- */
	GtkWidget *la_log = gtk_label_new("лог (stdout/stderr irmctl):");
	gtk_label_set_xalign(GTK_LABEL(la_log), 0.0);
	gtk_box_append(GTK_BOX(content), la_log);

	GtkWidget *fr = gtk_frame_new(NULL);
	GtkWidget *scr = gtk_scrolled_window_new();
	gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scr),
				       GTK_POLICY_AUTOMATIC,
				       GTK_POLICY_ALWAYS);
	gtk_widget_set_vexpand(scr, TRUE);
	gtk_widget_set_hexpand(scr, TRUE);
	g_uf.log_view = GTK_TEXT_VIEW(gtk_text_view_new());
	gtk_text_view_set_editable(g_uf.log_view, FALSE);
	gtk_text_view_set_monospace(g_uf.log_view, TRUE);
	gtk_text_view_set_wrap_mode(g_uf.log_view, GTK_WRAP_WORD_CHAR);
	gtk_widget_set_vexpand(GTK_WIDGET(g_uf.log_view), TRUE);
	g_uf.log_buf = gtk_text_view_get_buffer(g_uf.log_view);
	gtk_scrolled_window_set_child(GTK_SCROLLED_WINDOW(scr),
				      GTK_WIDGET(g_uf.log_view));
	gtk_frame_set_child(GTK_FRAME(fr), scr);
	gtk_box_append(GTK_BOX(content), fr);

	g_uf.btn_clear = GTK_BUTTON(gtk_button_new_with_label("Очистить лог"));
	g_signal_connect(g_uf.btn_clear, "clicked",
			 G_CALLBACK(on_clear_clicked), NULL);
	gtk_box_append(GTK_BOX(content), GTK_WIDGET(g_uf.btn_clear));

	gtk_box_append(GTK_BOX(root), content);
	adw_application_window_set_content(g_uf.win, root);

	find_irmctl();
	find_gst();
	log_fmt("irmctl: %s", g_uf.irmctl
					  ? g_uf.irmctl
					  : "НЕ НАЙДЕН (env IRMFILL_"
					    "IRMCTL, PATH или рядом с "
					    "бинарником irm-fill)");
	log_fmt("транскод: gst-launch-1.0 %s, gst-discoverer-1.0 %s",
		g_uf.gst_launch ? "есть" : "НЕТ",
		g_uf.gst_discover ? "есть" : "НЕТ");
	if (g_uf.codec_aac) {
		log_fmt("не-.m4a фикстуры (.mp3, .flac …) перекодируются в "
			"AAC (bitrate=%u; IRMFILL_CODEC=alac — откат) "
			"автоматически",
			g_uf.aac_rate);
	} else {
		log_fmt("не-.m4a фикстуры (.mp3, .flac …) перекодируются в "
			"ALAC (IRMFILL_CODEC=alac) автоматически");
	}
	log_fmt("транскоды пакета: последовательно, 1 за раз "
		"(IRMFILL_PAR убран — фиксировал перемешивание тегов) "
		"+ порция по %u: IRMFILL_CHUNK",
		pl_chunk_k());
	log_fmt("мутирующие прогоны — только по нажатию кнопки; "
		"«только стадия» по умолчанию ВКЛ (без записей)");

	g_signal_connect(g_uf.win, "close-request",
			 G_CALLBACK(on_close_request), NULL);
	gtk_window_present(GTK_WINDOW(g_uf.win));
}

int main(int argc, char **argv)
{
	memset(&g_uf, 0, sizeof g_uf);
	GtkApplication *app =
		gtk_application_new("ru.saitexna.irmfill",
				    G_APPLICATION_DEFAULT_FLAGS);
	g_signal_connect(app, "activate", G_CALLBACK(build_ui), NULL);
	int rc = g_application_run(G_APPLICATION(app), argc, argv);
	g_object_unref(app);
	g_free(g_uf.irmctl);
	g_free(g_uf.gst_launch);
	g_free(g_uf.gst_discover);
	return rc;
}
