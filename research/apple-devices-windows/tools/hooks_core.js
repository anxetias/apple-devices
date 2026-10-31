/* hooks_core.js — универсальный сборщик TCP/DNS/SSL-трафика Apple-процессов.
   Хуки ws2_32: connect/WSAConnect/send/WSASend/recv/WSARecv + getaddrinfo*.
   Полные тела уходят в драйвер run_hooks.py (send(meta, bytes)),.driver пишет
   бинарные потоковые файлы формата [dir 1][len BE4][payload]:
     dir 'S' host→wire (send), 'R' wire→host (recv), 'C'/'H' — метаданные.
   SSL: сканируем экспорты SSLRead/SSLWrite (Apple SecureTransport) и
   SSL_read/SSL_write (OpenSSL-сборки) у модулей apple*/itunes*/mobile*,
   найденные хукаем отдельно (peer помечается как 'SSL').

   Требует запуска через run_hooks.py (frida python API); в консоль идут только
   оповещения о hook'ах SSL.
*/
'use strict';

var WS2 = 'ws2_32.dll';
var MAXCHUNK = 262144; /* режем отправку на куски ≤256 КБ */
var PEER_CACHE = {};   /* fd → peer, чтобы не звать getpeername каждый раз */

var pGetpeername = null;
(function () {
  var a = Module.findExportByName(WS2, 'getpeername');
  if (a) pGetpeername = new NativeFunction(a, 'int', ['int', 'pointer', 'pointer']);
})();

function saStr(sa) {
  try {
    var fam = sa.readU16();
    if (fam === 2) {
      var port = (sa.add(2).readU8() << 8) | sa.add(3).readU8();
      var ip = sa.add(4).readU8() + '.' + sa.add(5).readU8() + '.' +
               sa.add(6).readU8() + '.' + sa.add(7).readU8();
      return ip + ':' + port;
    }
    return 'fam' + fam;
  } catch (e) {
    return 'err';
  }
}

function peerOf(fd) {
  var c = PEER_CACHE[fd];
  if (c) return c;
  var p = 'none';
  if (pGetpeername) {
    var sa = Memory.alloc(128);
    var sl = Memory.alloc(4);
    sl.writeU32(128);
    if (pGetpeername(fd, sa, sl) === 0) p = saStr(sa);
  }
  PEER_CACHE[fd] = p;
  return p;
}

/* полный bulk → драйвер */
function sendChunk(dir, peer, buf, len) {
  if (len <= 0) return;
  var off = 0;
  while (off < len) {
    var n = Math.min(MAXCHUNK, len - off);
    var data = null;
    try {
      data = buf.add(off).readByteArray(n);
    } catch (e) {
      return;
    }
    if (!data) return;
    send({ t: 'net', dir: dir, peer: peer, off: off, total: len }, data);
    off += n;
  }
}

/* --- connect/WSAConnect: только метаданные цели --- */
function hookConnect(name) {
  var a = Module.findExportByName(WS2, name);
  if (!a) return;
  Interceptor.attach(a, {
    onEnter: function (args) {
      try {
        send({ t: 'conn', dir: 'C', peer: saStr(args[1]) });
      } catch (e) {}
    }
  });
}
hookConnect('connect');
hookConnect('WSAConnect');

/* --- send/WSASend: на выходе отдаём факт записи --- */
(function () {
  var a = Module.findExportByName(WS2, 'send');
  if (!a) return;
  Interceptor.attach(a, {
    onEnter: function (args) {
      this.fd = args[0].toInt32();
      this.buf = args[1];
    },
    onLeave: function (ret) {
      var n = ret.toInt32();
      if (n > 0) sendChunk('S', peerOf(this.fd), this.buf, n);
    }
  });
})();

(function () {
  var a = Module.findExportByName(WS2, 'WSASend');
  if (!a) return;
  Interceptor.attach(a, {
    onEnter: function (args) {
      this.fd = args[0].toInt32();
      this.lob = args[1];                       /* LPWSABUF */
      this.count = Math.min(8, args[2].toInt32());
      this.sentPtr = args[3];                   /* LPDWORD lpNumberOfBytesSent */
      this.list = [];
      for (var i = 0; i < this.count; i++) {
        var p = this.lob.add(i * 16);           /* x64: len@0, pad@4, buf@8 */
        try {
          this.list.push([Number(p.readU32()), p.add(8).readPointer()]);
        } catch (e) {
          this.list = [];
          break;
        }
      }
    },
    onLeave: function (ret) {
      if (ret.toInt32() !== 0) return;
      var sent = 0;
      try {
        sent = Number(this.sentPtr.readU32());
      } catch (e) {
        return;
      }
      var off = 0;
      for (var i = 0; i < this.list.length && off < sent; i++) {
        var take = Math.min(this.list[i][0], sent - off);
        sendChunk('S', peerOf(this.fd), this.list[i][1], take);
        off += take;
      }
    }
  });
})();

/* --- recv/WSARecv: на выходе отдаём факт чтения --- */
(function () {
  var a = Module.findExportByName(WS2, 'recv');
  if (!a) return;
  Interceptor.attach(a, {
    onEnter: function (args) {
      this.fd = args[0].toInt32();
      this.buf = args[1];
    },
    onLeave: function (ret) {
      var n = ret.toInt32();
      if (n > 0) sendChunk('R', peerOf(this.fd), this.buf, n);
    }
  });
})();

(function () {
  var a = Module.findExportByName(WS2, 'WSARecv');
  if (!a) return;
  Interceptor.attach(a, {
    onEnter: function (args) {
      this.fd = args[0].toInt32();
      this.lob = args[1];
      this.count = Math.min(8, args[2].toInt32());
      this.recvdPtr = args[3];                  /* LPDWORD lpNumberOfBytesRecvd */
      this.list = [];
      for (var i = 0; i < this.count; i++) {
        var p = this.lob.add(i * 16);
        try {
          this.list.push([Number(p.readU32()), p.add(8).readPointer()]);
        } catch (e) {
          this.list = [];
          break;
        }
      }
    },
    onLeave: function (ret) {
      if (ret.toInt32() !== 0) return;
      var got = 0;
      try {
        got = Number(this.recvdPtr.readU32());
      } catch (e) {
        return;
      }
      var off = 0;
      for (var i = 0; i < this.list.length && off < got; i++) {
        var take = Math.min(this.list[i][0], got - off);
        sendChunk('R', peerOf(this.fd), this.list[i][1], take);
        off += take;
      }
    }
  });
})();

/* --- DNS: только имена --- */
function hookDns(name, wide) {
  var a = Module.findExportByName(WS2, name);
  if (!a) return;
  Interceptor.attach(a, {
    onEnter: function (args) {
      try {
        var s = wide ? args[0].readUtf16String() : args[0].readAnsiString();
        if (s) send({ t: 'dns', dir: 'H', peer: String(s) });
      } catch (e) {}
    }
  });
}
hookDns('getaddrinfo', false);
hookDns('GetAddrInfoW', true);
hookDns('getaddrinfoW', true);
hookDns('gethostbyname', false);

/* --- SSL-скан: Apple SecureTransport + OpenSSL-подобные --- */
var APPLE_RE = /apple|itunes|mobile.?device|amds|corefoundation|cfnetwork|security/i;
var seen = {};

function hookAppleSsl(ex, kind) {
  Interceptor.attach(ex.address, {
    onEnter: function (args) {
      this.data = args[1];
      this.q3 = args[3]; /* size_t* processed */
      this.dlen = args[2].toInt32();
    },
    onLeave: function (ret) {
      var n = 0;
      try {
        n = Number(this.q3.readU64());
      } catch (e) {
        n = this.dlen; /* fallback: считаем по запрошенной длине */
      }
      if (n > 0 && n < (1 << 22)) sendChunk(kind === 'SSLWrite' ? 'S' : 'R', 'SSL', this.data, n);
    }
  });
  console.log('[hook] ' + ex.name + ' @ ' + ex.address + ' (' +
              Process.id + ')');
}

function hookOpenSsl(ex, kind) {
  Interceptor.attach(ex.address, {
    onEnter: function (args) {
      this.data = args[1];
      this.want = args[2].toInt32();
    },
    onLeave: function (ret) {
      var n = kind === 'SSL_write' ? this.want : ret.toInt32();
      if (n > 0 && n < (1 << 22)) sendChunk(kind === 'SSL_write' ? 'S' : 'R', 'SSL', this.data, n);
    }
  });
  console.log('[hook] ' + ex.name + ' @ ' + ex.address + ' (' + Process.id + ')');
}

(function scanSsl() {
  var mods = [];
  try {
    mods = Process.enumerateModules();
  } catch (e) {
    return;
  }
  mods.forEach(function (m) {
    var hit = APPLE_RE.test(m.name || '') || APPLE_RE.test(m.path || '');
    if (!hit) return;
    var exs = [];
    try {
      exs = m.enumerateExports();
    } catch (e) {
      return;
    }
    exs.forEach(function (ex) {
      if (ex.type !== 'function') return;
      if (!/^SSL(R|W)(ead|rite)$/.test(ex.name) &&
          !/^SSL_(read|write)$/.test(ex.name)) return;
      var key = ex.address.toString();
      if (seen[key]) return;
      seen[key] = true;
      var nm = ex.name;
      if (nm === 'SSLRead') hookAppleSsl(ex, 'SSLRead');
      else if (nm === 'SSLWrite') hookAppleSsl(ex, 'SSLWrite');
      else if (nm === 'SSL_read') hookOpenSsl(ex, 'SSL_read');
      else if (nm === 'SSL_write') hookOpenSsl(ex, 'SSL_write');
    });
  });
})();
