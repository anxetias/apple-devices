/* hooks_ntpipe.js — фаза 2: если TCP-хуки не увидели usbmux/ATC-канал
   (например, AMDS работает через named pipe), включаются NtWriteFile/NtReadFile.
   Объём ОГРОМНЫЙ (все файловые IO процесса) — включать на время проблем:
     $env:NTPipe = "1"; python run_hooks.py
   Формат записей тот же: [dir 1][len BE4][payload], peer='pipe'.
*/
'use strict';

function ntHook(name, dir) {
  var a = Module.findExportByName('ntdll.dll', name);
  if (!a) return;
  Interceptor.attach(a, {
    onEnter: function (args) {
      this.iob = args[4]; /* PIO_STATUS_BLOCK */
      this.buf = args[5]; /* Buffer */
      this.len = args[6].toInt32();
      this.want = Math.min(this.len, 131072);
    },
    onLeave: function (ret) {
      if (ret.toInt32() < 0 && ret.toInt32() > -1073741800) {
        /* пропускаем хард-ошибки, но не STATUS_PENDING */
      }
      var n = 0;
      try {
        n = Number(this.iob.add(8).readU64()); /* Information */
      } catch (e) {
        return;
      }
      if (n <= 0 || n > this.want) n = this.want;
      if (n <= 0) return;
      try {
        var data = this.buf.readByteArray(n);
        if (data) send({ t: 'ntfile', dir: dir, peer: 'pipe' }, data);
      } catch (e) {}
    }
  });
  console.log('[hook] ' + name + ' (' + Process.id + ')');
}

ntHook('NtWriteFile', 'S');
ntHook('NtReadFile', 'R');
