/* irm-fill — тестовое GTK4-приложение заливки музыки по ATC-протоколу
 * (шаги 9g/9i; обёртка над irmctl). Сам wire-протокол остаётся в
 * irmctl (единственный источник wire-фактов 9e/9f/9g): GUI поднимает
 * irmctl как подпроцесс с env-переменными IRMA_ATC_* и показывает
 * поток stdout/stderr живьём в лог-виджет. Мутирующие прогоны — только
 * явным нажатием кнопки (это и есть согласие пользователя в
 * интерфейсе); переключатель «только стадия» (IRMA_ATC_STAGE_ONLY=1)
 * по умолчанию ВКЛЮЧЁН — безопасный прогон без записей на телефон.
 *
 * 9i: фикстуры не-.m4a (.mp3, .flac …) перекодируются в ALAC .m4a
 * автоматически: gst-launch-1.0 (avenc_alac + mp4mux) пишет tmp-файл,
 * gst-discoverer-1.0 даёт длительность/сэмплрейт, они передаются
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
	char *tc_src;
	char *tc_dst;
	char pending_cmd[32];

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
} IrmFill;

/* готовая строка плейлиста (после транскода/меты; тексты уже с
 * пробелами вместо табов) */
struct pl_row {
	char dst[1024];      /* путь пейлоада (.m4a) */
	unsigned long long ms;
	unsigned rate;
	char title[80], artist[256], album[256], genre[256];
	char art[1024]; /* пусто = без обложки */
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
static void chain_discover(void);
static void chain_transcode(void);
static gchar *tc_make_dst(const char *src);
static gchar *tc_make_dst2(const char *src, const char *uniq);
static void pl_next_file(void);
static void pl_finish(void);
static unsigned pl_chunk_k(void);
static void pl_flush_chunk(void);
static void pl_chunk_done(gboolean ok);

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

/* оценка размера пейлоада (.m4a-перекода) из источника: ALAC
 * несжимаем, а mp3 даёт ALAC ~×4 объёма (live 05.11: mp3 10,3 МиБ
 * → m4a 41,9 МиБ; mp3 12,3 МиБ → 50,4 МиБ) — для mp3 фактор ×4;
 * flac чуть шире ALAC (×1.5 запас); .m4a идёт КАК ЕСТЬ (tmpfs не
 * расходует). Нужна для предзапуска пакета. */
static unsigned long long payload_estimate(const char *path)
{
	struct stat st;
	if (stat(path, &st) != 0 || !S_ISREG(st.st_mode))
		return 0;
	double f = 4.0; /* дефолт строгий */
	const char *e = strrchr(path, '.');
	if (e) {
		if (g_ascii_strcasecmp(e, ".m4a") == 0 ||
		    g_ascii_strcasecmp(e, ".mp4") == 0)
			return 0; /* как есть, tmpfs не расходует */
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
	g_free(g_uf.pl_chunk_tsv);
	g_uf.pl_files = NULL;
	g_uf.pl_rows = NULL;
	g_uf.pl_chunk_art = NULL;
	g_uf.pl_chunk_tsv = NULL;
	g_uf.pl_chunk_num = 0;
	g_uf.pl_chunk_total = 0;
	g_uf.pl_inflight = FALSE;
	g_uf.pl_active = FALSE;
	g_uf.pl_idx = 0;
	g_uf.pl_skip = 0;
}

/* пакет прерван: освобождаем состояние, busy вон */
static void pl_abort(const char *why)
{
	log_fmt("пакет прерван: %s", why);
	pl_reset();
	set_busy(0);
}

/* live-правило 05.11: сорвавшийся item пакета пропускается, батч
 * живёт дальше. Мусорный артефакт (неофинализированный .m4a БЕЗ
 * moov — gst-launch вышел, не долив хвост) удаляем: иначе он
 * доедает tmpfs и может быть ложно «залит» на телефон. */
static void pl_skip_item(const char *why)
{
	guint n = g_uf.pl_files ? g_uf.pl_files->len : 0;
	log_fmt("  пропущен [%u/%u]: %s", g_uf.pl_idx + 1, n, why);
	if (g_uf.tc_dst && g_uf.tc_dst[0] &&
	    g_file_test(g_uf.tc_dst, G_FILE_TEST_IS_REGULAR))
		unlink(g_uf.tc_dst);
	chain_paths_free();
	g_uf.pl_skip++;
	g_uf.pl_idx++;
	pl_next_file();
}

/* один файл доведён до пейлоада (+мета): строка в очередь */
static void pl_row_done(const char *dst, unsigned long long ms,
			unsigned rate)
{
	struct pl_row *r = g_new0(struct pl_row, 1);
	snprintf(r->dst, sizeof r->dst, "%s", dst ? dst : "");
	r->ms = ms;
	r->rate = rate;
	tsv_field(r->title, sizeof r->title, g_uf.tag_title);
	tsv_field(r->artist, sizeof r->artist, g_uf.tag_artist);
	tsv_field(r->album, sizeof r->album, g_uf.tag_album);
	tsv_field(r->genre, sizeof r->genre, g_uf.tag_genre);
	tsv_field(r->art, sizeof r->art, g_uf.art_path);
	g_ptr_array_add(g_uf.pl_rows, r);
	log_fmt("    строка готова: %llu мс, %u Гц, «%s», обложка %s", ms,
		rate, r->title[0] ? r->title : "(нет)",
		r->art[0] ? "есть" : "нет");
	chain_paths_free();
	g_uf.pl_idx++;
	if (g_uf.pl_rows->len >= (guint)pl_chunk_k() &&
	    !g_uf.pl_inflight) {
		/* v2: порция набрана — заливаем её СЕЙЧАС и стопим
		 * перекод до rc (владелец: чанк → залив → чистка →
		 * круг). pl_next_file позовёт pl_chunk_done. */
		pl_flush_chunk();
		return;
	}
	pl_next_file();
}

/* следующий файл очереди: теги/обложка → перекод|дискавер → строка */
static void pl_next_file(void)
{
	guint n = g_uf.pl_files ? g_uf.pl_files->len : 0;
	if (g_uf.pl_idx >= n) {
		pl_finish();
		return;
	}
	const char *src = g_ptr_array_index(g_uf.pl_files, g_uf.pl_idx);
	chain_paths_free();
	if (strchr(src, '\t')) {
		/* таб в пути разобьёт колонки TSV */
		log_fmt("  пропущен — таб в пути: %s", src);
		g_uf.pl_skip++;
		g_uf.pl_idx++;
		pl_next_file();
		return;
	}
	if (!fixture_ok(src)) {
		log_fmt("  пропущен — недоступен: %s", src);
		g_uf.pl_skip++;
		g_uf.pl_idx++;
		pl_next_file();
		return;
	}
	gchar *base = g_path_get_basename(src);
	gchar *uname = g_strdup_printf("%u", (unsigned)g_uf.pl_idx + 1);
	log_fmt("[%u/%u] %s", g_uf.pl_idx + 1, n, base);
	g_free(base);
	read_source_tags(src);
	read_source_artwork2(src, uname);
	g_uf.tc_src = g_strdup(src);
	g_uf.tc_dst = is_m4a(src) ? g_strdup(src) : tc_make_dst2(src, uname);
	g_free(uname);
	if (is_m4a(src)) {
		chain_discover(); /* меты всегда нужен — колонки TSV */
		return;
	}
	if (!g_uf.gst_launch) {
		pl_abort("транскод невозможен: нет gst-launch-1.0 в PATH");
		return;
	}
	chain_transcode();
}

/* K треков на порцию (дефолт 16): IRMFILL_CHUNK переопределяет.
 * Модель владельца: перекод чанка → заливка чанка → удаление его
 * артефактов с tmpfs → следующий чанк. В tmpfs живёт ровно ОДНА
 * порция за раз, поэтому 191 файл больше не упирается в 3,6 Г
 * (раньше весь пакет перекодировался туда заранее). */
static unsigned pl_chunk_k(void)
{
	const char *e = getenv("IRMFILL_CHUNK");
	if (!e || !*e)
		return 16;
	int v = atoi(e);
	if (v <= 0 || v > IRMFILL_BATCH_MAX)
		return 16;
	return (unsigned)v;
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
static void pl_flush_chunk(void)
{
	if (!g_uf.irmctl) {
		pl_abort("irmctl не найден (env " IRMFILL_IRMCTL_ENV
			 ", PATH или рядом с бинарником)");
		return;
	}
	guint nr = g_uf.pl_rows ? g_uf.pl_rows->len : 0;
	if (nr == 0)
		return;
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
		/* артефакты порции: перекод (+обложка) — на уборку
		 * после живой (не stage-only) заливки rc=0 */
		if (r->dst[0])
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
	if (g_uf.pl_files && g_uf.pl_idx < g_uf.pl_files->len) {
		pl_next_file(); /* цикл: перекод следующего чанка */
		return;
	}
	log_fmt("конвейер завершён: порций залито %u, пропущено %u",
		num, g_uf.pl_skip);
	pl_reset();
	set_busy(0);
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
	 * vs свободного места на tmp (90% — не доедаем). v2: tmpfs
	 * держит ТОЛЬКО одну порцию, поэтому worst-case = K × самая
	 * большая оценка одного файла (сумма по всему пакету больше
	 * не нужна — перекоды порции убираются после её rc=0) */
	unsigned long long one = 0;
	for (guint i = 0; i < g_uf.pl_files->len; i++) {
		const char *p = g_ptr_array_index(g_uf.pl_files, i);
		unsigned long long e = payload_estimate(p);
		if (e > one)
			one = e;
	}
	unsigned K = pl_chunk_k();
	unsigned long long need = one * K;
	unsigned long long free_b = free_bytes_on(g_get_tmp_dir());
	unsigned long long avail = free_b / 10 * 9;
	if (free_b == 0) {
		log_fmt("пакет: свободное место на %s не проверить "
			"(statvfs не удался) — продолжаю, валидатор "
			"gst-discoverer отбракует сорванные",
			g_get_tmp_dir());
	} else if (need > avail) {
		log_fmt("пакет: места на %s мало: нужно ~%llu МиБ, "
			"свободно ~%llu МиБ (составлял по 90%%)",
			g_get_tmp_dir(), need >> 20, avail >> 20);
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
	g_uf.pl_chunk_total = (unsigned)((g_uf.pl_files->len + K - 1) / K);
	g_uf.pl_active = TRUE;
	g_uf.pl_idx = 0;
	log_fmt("пакет: %u файл(ов), порций по %u, цикл «перекод → заливка → "
		"чистка»…",
		g_uf.pl_files->len, K);
	set_busy(1);
	pl_next_file();
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

/* ---- транскод-цепочка 9i: не-.m4a → ALAC .m4a → gst-discoverer ---- */

static void chain_paths_free(void)
{
	g_free(g_uf.tc_src);
	g_free(g_uf.tc_dst);
	g_uf.tc_src = NULL;
	g_uf.tc_dst = NULL;
}

static void chain_fail(void)
{
	chain_paths_free();
	if (g_uf.pl_active) {
		/* 9l: срыв звена пакета НЕ валит батч — item пропускается
		 * (live 05.11: EDQUOT на tmpfs валит одиночные транскоды;
		 * частичному посылу не бываем — «либо всё готово, либо
		 * item мимо»). */
		pl_skip_item("транскод-цепочка сорвалась");
		return;
	}
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

/* ступень 2: из вывода gst-discoverer — длительность и сэмплрейт */
static void chain_discover_done(GObject *src, GAsyncResult *res,
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

	if (!ok) {
		log_fmt("gst-discoverer: %s", err ? err->message : "?");
		if (txt && *txt) {
			log_fmt("gst-discoverer сказал:");
			log_fmt("%s", txt);
		}
		g_free(txt);
		g_free(etext);
		g_clear_error(&err);
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
		log_fmt("gst-discoverer: мусорные метаданные "
			"(ms=%llu rate=%u)",
			ms, rate);
		chain_fail();
		return;
	}
	log_fmt("метаданные перекода: %llu мс, %u Гц, ~%llu сэмплов",
		ms, rate, ms * (unsigned long long)rate / 1000ULL);

	if (g_uf.pl_active) {
		/* 9l: строка пакета готова — к следующему файлу */
		pl_row_done(g_uf.tc_dst, ms, rate);
		return;
	}
	irmctl_spawn(g_uf.pending_cmd, g_uf.tc_dst, ms, rate, NULL);
	chain_paths_free();
}

static void chain_discover(void)
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
		chain_fail();
		return;
	}
	g_uf.proc = sp;
	g_subprocess_communicate_utf8_async(sp, NULL, NULL,
					    chain_discover_done, NULL);
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
	chain_discover();
}

static void chain_transcode(void)
{
	GError *err = NULL;
	gchar *srcLoc = g_strdup_printf("location=%s", g_uf.tc_src);
	gchar *dstLoc = g_strdup_printf("location=%s", g_uf.tc_dst);
	const char *argv[] = { g_uf.gst_launch, "-q",
		"filesrc", srcLoc, "!", "decodebin",
		"!", "audioconvert", "!", "audioresample",
		"!", "avenc_alac", "!", "mp4mux", "!",
		"filesink", dstLoc, NULL };
	/* свежий артефакт за прогон: старый (в т.ч. неофинализированный
	 * от сорванного прогона) удаляем ДО спавна — иначе mp4mux
	 * дописывает в существующий файл и остаётся БЕЗ moov
	 * (live 05.11: 12:30-серия на файле 1). */
	if (g_uf.tc_dst && g_uf.tc_dst[0])
		unlink(g_uf.tc_dst);
	log_fmt("транскод ALAC идёт (avenc_alac + mp4mux), ждите…");
	GSubprocess *sp = g_subprocess_newv(
		argv, G_SUBPROCESS_FLAGS_STDOUT_PIPE |
		G_SUBPROCESS_FLAGS_STDERR_MERGE,
		&err);
	g_free(srcLoc);
	g_free(dstLoc);
	if (!sp) {
		log_fmt("запуск gst-launch: %s", err ? err->message : "?");
		g_clear_error(&err);
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
	log_fmt("не-.m4a фикстуры (.mp3, .flac …) перекодируются в ALAC "
		"автоматически");
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
