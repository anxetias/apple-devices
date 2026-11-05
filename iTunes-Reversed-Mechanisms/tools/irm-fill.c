/* irm-fill — тестовое GTK4-приложение заливки музыки по ATC-протоколу
 * (шаг 9g; обёртка над irmctl). Сам wire-протокол остаётся в irmctl
 * (единственный источник wire-фактов 9e/9f/9g): GUI поднимает irmctl
 * как подпроцесс с env-переменными IRMA_ATC_* и показывает поток
 * stdout/stderr живьём в лог-виджет. Мутирующие прогоны — только
 * явным нажатием кнопки (это и есть согласие пользователя в
 * интерфейсе); переключатель «только стадия» (IRMA_ATC_STAGE_ONLY=1)
 * по умолчанию ВКЛЮЧЁН — безопасный прогон без записей на телефон.
 *
 * Сборка: pkg-config gtk4 libadwaita-1 (цель irm-fill в Makefile). */

#include <adwaita.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

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
	GtkButton *btn_clear;
	GtkSpinButton *sp_batch;
	GtkCheckButton *ck_stage;
	GtkEntry *en_fixture;
	GtkEntry *en_libid;
	GtkSpinner *spinner;

	GSubprocess *proc;
	GDataInputStream *stream;
	GCancellable *cancel;
	char *irmctl;
	int busy;
} IrmFill;

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
	gtk_widget_set_sensitive(GTK_WIDGET(g_uf.sp_batch), busy == 0);
	gtk_widget_set_sensitive(GTK_WIDGET(g_uf.ck_stage), busy == 0);
	gtk_widget_set_sensitive(GTK_WIDGET(g_uf.en_fixture), busy == 0);
	gtk_widget_set_sensitive(GTK_WIDGET(g_uf.en_libid), busy == 0);
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
	set_busy(0);
}

/* ---- запуск irmctl ---- */

static gboolean fixture_ok(const char *fix)
{
	return fix && *fix && access(fix, R_OK) == 0;
}

static void run_irmctl(const char *subcmd, gboolean insert_shape)
{
	GError *err = NULL;

	if (g_uf.busy) {
		log_fmt("уже идёт прогон — дождитесь завершения");
		return;
	}
	if (!g_uf.irmctl) {
		log_fmt("irmctl не найден (env %s или PATH)",
			IRMFILL_IRMCTL_ENV);
		return;
	}

	gchar **env = g_get_environ();
	if (insert_shape) {
		const char *fix =
			gtk_editable_get_text(GTK_EDITABLE(g_uf.en_fixture));
		if (!fixture_ok(fix)) {
			log_fmt("фикстура недоступна: %s",
				(fix && *fix) ? fix : "(пусто)");
			g_strfreev(env);
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
		if (gtk_check_button_get_active(g_uf.ck_stage))
			env = g_environ_setenv(env, "IRMA_ATC_STAGE_ONLY",
					       "1", TRUE);
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
		return;
	}
	g_uf.proc = sp;

	GInputStream *out = g_subprocess_get_stdout_pipe(sp);
	g_uf.stream = g_data_input_stream_new(out);
	g_data_input_stream_read_line_async(g_uf.stream, G_PRIORITY_DEFAULT,
					    g_uf.cancel, stream_read_line,
					    NULL);

	set_busy(1);
	log_fmt(">>> %s %s", g_uf.irmctl, subcmd);
	if (insert_shape) {
		const char *fix =
			gtk_editable_get_text(GTK_EDITABLE(g_uf.en_fixture));
		unsigned batch =
			(unsigned)gtk_spin_button_get_value(g_uf.sp_batch);
		log_fmt("    фикс=%s батч=%u%s", fix, batch,
			gtk_check_button_get_active(g_uf.ck_stage)
				? " (STAGE-ONLY)"
				: "");
	}
	g_subprocess_wait_check_async(sp, g_uf.cancel, process_done,
				      (gpointer)subcmd);
}

/* ---- обработчики кнопок ---- */

static void on_anchor_clicked(GtkButton *btn, gpointer user)
{
	(void)btn;
	(void)user;
	run_irmctl("music-id", FALSE);
}

static void on_one_clicked(GtkButton *btn, gpointer user)
{
	(void)btn;
	(void)user;
	gtk_spin_button_set_value(g_uf.sp_batch, 1);
	run_irmctl("atc-insert", TRUE);
}

static void on_batch_clicked(GtkButton *btn, gpointer user)
{
	(void)btn;
	(void)user;
	run_irmctl("atc-insert", TRUE);
}

static void on_clear_clicked(GtkButton *btn, gpointer user)
{
	(void)btn;
	(void)user;
	gtk_text_buffer_set_text(g_uf.log_buf, "", -1);
	gtk_label_set_text(g_uf.la_state, "якерь: (нет данных)");
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
	if (path)
		g_uf.irmctl = path;
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

	/* фикстура */
	GtkWidget *la_fix = gtk_label_new("фикстура .m4a:");
	gtk_label_set_xalign(GTK_LABEL(la_fix), 0.0);
	gtk_grid_attach(GTK_GRID(panel), la_fix, 0, 2, 1, 1);
	g_uf.en_fixture = GTK_ENTRY(gtk_entry_new());
	gtk_entry_set_placeholder_text(g_uf.en_fixture,
				       "путь к tone-alac.m4a …");
	/* подсказка по умолчанию: значение из окружения */
	const char *fixe = getenv("IRMA_ATC_FIXTURE");
	if (fixe && *fixe)
		gtk_editable_set_text(GTK_EDITABLE(g_uf.en_fixture), fixe);
	gtk_widget_set_hexpand(GTK_WIDGET(g_uf.en_fixture), TRUE);
	gtk_grid_attach(GTK_GRID(panel), GTK_WIDGET(g_uf.en_fixture), 1, 2,
			2, 1);

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

	/* stage-only */
	g_uf.ck_stage = GTK_CHECK_BUTTON(
		gtk_check_button_new_with_label(
			"только стадия (IRMA_ATC_STAGE_ONLY=1; безопасно — "
			"без записей на телефон)"));
	gtk_check_button_set_active(g_uf.ck_stage, TRUE);
	gtk_grid_attach(GTK_GRID(panel), GTK_WIDGET(g_uf.ck_stage), 0, 4, 3,
			1);

	/* LibraryID */
	GtkWidget *la_libid = gtk_label_new("IRMA_ATC_LIBID:");
	gtk_label_set_xalign(GTK_LABEL(la_libid), 0.0);
	gtk_grid_attach(GTK_GRID(panel), la_libid, 0, 5, 1, 1);
	g_uf.en_libid = GTK_ENTRY(gtk_entry_new());
	gtk_entry_set_placeholder_text(g_uf.en_libid,
				       "%016llX (необязательно)");
	gtk_widget_set_hexpand(GTK_WIDGET(g_uf.en_libid), TRUE);
	gtk_grid_attach(GTK_GRID(panel), GTK_WIDGET(g_uf.en_libid), 1, 5,
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
	log_fmt("irmctl: %s", g_uf.irmctl ? g_uf.irmctl : "НЕ НАЙДЕН "
							  "(env IRMFILL_"
							  "IRMCTL или PATH)");
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
	return rc;
}
