// rea decompile_all
// name: _lockssl_handshake
// address: 0x110c44
// body: available
// range: 0x110c44-0x11153d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _lockssl_handshake(ulong param_1,uint param_2,undefined8 param_3,uint *param_4,
                       undefined8 param_5)

{
  RSA *r;
  char cVar1;
  int iVar2;
  uint uVar3;
  BIO_METHOD *type;
  BIO *bp;
  X509 *a;
  BIO *a_00;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  uint *puVar9;
  bool bVar10;
  ulong uVar11;
  char *pcVar12;
  RSA **ppRVar13;
  uint local_168 [32];
  RSA *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  uint *local_58;
  uint local_4c;
  uint *local_48;
  long local_40;
  ulong local_38;
  
  local_38 = param_1;
  type = _BIO_s_socket();
  bp = _BIO_new(type);
  if (bp == (BIO *)0x0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,1,"Could not create SSL bio");
    return 0;
  }
  _BIO_int_ctrl(bp,0x68,0,param_2);
  a = (X509 *)__decode_certificate(param_3);
  if (a == (X509 *)0x0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,1,"Could not certificate");
  }
  local_e8 = (RSA *)0x0;
  local_48 = param_4;
  a_00 = (BIO *)__create_bio_from_data(param_5);
  if (a_00 == (BIO *)0x0) {
LAB_00110e8a:
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    lVar5 = 0;
    __os_log_internal(0,_md_log_log,1,"Could not decode private key");
  }
  else {
    _PEM_read_bio_RSAPrivateKey(a_00,&local_e8,0,0);
    _BIO_free(a_00);
    r = local_e8;
    if (local_e8 == (RSA *)0x0) goto LAB_00110e8a;
    if (a == (X509 *)0x0) {
      lVar5 = 0;
    }
    else {
      uVar4 = _SSLv23_method();
      lVar5 = _SSL_CTX_new(uVar4);
      if (lVar5 == 0) {
        pcVar12 = "Could not create SSLv3 context";
      }
      else {
        _SSL_CTX_ctrl(lVar5,0x20,0x3000000,0);
        cVar1 = _device_os_is_at_least(local_38,&cf_9_0,&cf_2_0,&cf_9_0,&cf_1_0);
        if (cVar1 == '\0') {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,1,
                            "ios version is older than 9.0. Disabling tls version 1.2.");
          _SSL_CTX_ctrl(lVar5,0x20,0x8000000,0);
          cVar1 = _device_os_is_at_least(local_38,&cf_5_0,&cf_2_0,&cf_9_0,&cf_1_0);
          if (cVar1 == '\0') {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,1,
                              "ios version is older than 4.0. Disabling tls version 1.1.");
            _SSL_CTX_ctrl(lVar5,0x20,0x10000000,0);
          }
        }
        iVar2 = _SSL_CTX_use_certificate(lVar5,a);
        if (iVar2 == 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,1,"Could not set certifice");
        }
        iVar2 = _SSL_CTX_use_RSAPrivateKey(lVar5,r);
        if (iVar2 != 0) goto LAB_00110f34;
        pcVar12 = "Could not set private key";
      }
      local_40 = lVar5;
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,1,pcVar12);
      lVar5 = local_40;
    }
LAB_00110f34:
    _RSA_free(r);
  }
  if (a != (X509 *)0x0) {
    _X509_free(a);
  }
  if (lVar5 == 0) {
    return 0;
  }
  lVar6 = _SSL_new(lVar5);
  if (lVar6 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    lVar6 = 0;
    __os_log_internal(0,_md_log_log,1,"Could not create SSL thing");
    goto LAB_001113ed;
  }
  local_40 = lVar5;
  _SSL_set_connect_state(lVar6);
  _SSL_set_verify(lVar6,3,__ssl_verify_callback);
  bVar10 = false;
  _SSL_set_verify_depth(lVar6,0);
  _SSL_set_bio(lVar6,bp,bp);
  _SSL_set_ex_data(lVar6,_peer_certificate_data_index,local_48);
  local_4c = 1 << ((byte)param_2 & 0x1f);
  local_58 = local_168 + ((ulong)(long)(int)param_2 >> 5);
  local_48 = (uint *)((long)&local_e8 + ((ulong)(long)(int)param_2 >> 5) * 4);
  local_38 = (ulong)param_2;
  while( true ) {
    iVar2 = _SSL_do_handshake(lVar6);
    if (bVar10) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,1,"SSL_do_handshake returned %d following a retry",iVar2);
    }
    lVar5 = local_40;
    if (iVar2 == 1) goto LAB_001113ed;
    uVar3 = _SSL_get_error(lVar6,iVar2);
    if (iVar2 == 0) break;
    if (-1 < iVar2) goto LAB_001113ce;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar4 = _md_log_log;
    uVar7 = __ssl_strerror(lVar6,iVar2);
    __os_log_internal(0,uVar4,1,"SSL handshake fatal lower level error %d: %s\n",iVar2,uVar7);
    uVar11 = local_38;
    if ((uVar3 & 0xfffffffe) != 2) goto LAB_001113ce;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = (RSA *)0x0;
    uStack_e0 = 0;
    local_168[0x1c] = 0;
    local_168[0x1d] = 0;
    local_168[0x1e] = 0;
    local_168[0x1f] = 0;
    local_168[0x18] = 0;
    local_168[0x19] = 0;
    local_168[0x1a] = 0;
    local_168[0x1b] = 0;
    local_168[0x14] = 0;
    local_168[0x15] = 0;
    local_168[0x16] = 0;
    local_168[0x17] = 0;
    local_168[0x10] = 0;
    local_168[0x11] = 0;
    local_168[0x12] = 0;
    local_168[0x13] = 0;
    local_168[0xc] = 0;
    local_168[0xd] = 0;
    local_168[0xe] = 0;
    local_168[0xf] = 0;
    local_168[8] = 0;
    local_168[9] = 0;
    local_168[10] = 0;
    local_168[0xb] = 0;
    local_168[4] = 0;
    local_168[5] = 0;
    local_168[6] = 0;
    local_168[7] = 0;
    local_168[0] = 0;
    local_168[1] = 0;
    local_168[2] = 0;
    local_168[3] = 0;
    local_60 = 0;
    local_68 = 5;
    if (uVar3 == 2) {
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = (RSA *)0x0;
      uStack_e0 = 0;
      ppRVar13 = &local_e8;
      puVar9 = local_48;
      if (PTR____darwin_check_fd_set_overflow_004412b0 == (undefined *)0x0) goto LAB_001111f3;
      iVar2 = ___darwin_check_fd_set_overflow(local_38 & 0xffffffff,ppRVar13,0);
      puVar9 = local_48;
LAB_001111e6:
      if (iVar2 != 0) goto LAB_001111f3;
    }
    else {
      local_168[0x1c] = 0;
      local_168[0x1d] = 0;
      local_168[0x1e] = 0;
      local_168[0x1f] = 0;
      local_168[0x18] = 0;
      local_168[0x19] = 0;
      local_168[0x1a] = 0;
      local_168[0x1b] = 0;
      local_168[0x14] = 0;
      local_168[0x15] = 0;
      local_168[0x16] = 0;
      local_168[0x17] = 0;
      local_168[0x10] = 0;
      local_168[0x11] = 0;
      local_168[0x12] = 0;
      local_168[0x13] = 0;
      local_168[0xc] = 0;
      local_168[0xd] = 0;
      local_168[0xe] = 0;
      local_168[0xf] = 0;
      local_168[8] = 0;
      local_168[9] = 0;
      local_168[10] = 0;
      local_168[0xb] = 0;
      local_168[4] = 0;
      local_168[5] = 0;
      local_168[6] = 0;
      local_168[7] = 0;
      local_168[0] = 0;
      local_168[1] = 0;
      local_168[2] = 0;
      local_168[3] = 0;
      if (PTR____darwin_check_fd_set_overflow_004412b0 != (undefined *)0x0) {
        iVar2 = ___darwin_check_fd_set_overflow(local_38 & 0xffffffff,local_168,0);
        ppRVar13 = (RSA **)0x0;
        puVar9 = local_58;
        goto LAB_001111e6;
      }
      ppRVar13 = (RSA **)0x0;
      puVar9 = local_58;
LAB_001111f3:
      *puVar9 = *puVar9 | local_4c;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,1,"Calling select on SSL socket %d to see if it is ready yet",
                      uVar11 & 0xffffffff);
    puVar9 = (uint *)0x0;
    if (uVar3 == 3) {
      puVar9 = local_168;
    }
    while (iVar2 = _select_1050(param_2 + 1,ppRVar13,puVar9,0,&local_68), iVar2 == -1) {
      piVar8 = ___error();
      iVar2 = *piVar8;
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar11 = local_38;
      if (iVar2 != 4) {
        pcVar12 = "select error (socket %d)";
        goto LAB_001113c7;
      }
      __os_log_internal(0,_md_log_log,1,"select (socket %d) interrupted...",local_38 & 0xffffffff);
    }
    if (iVar2 == 0) goto LAB_0011138a;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,1,
                      "select returned, bytes may be ready to read/write on SSL socket %d",
                      uVar11 & 0xffffffff);
    bVar10 = true;
  }
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  uVar4 = _md_log_log;
  uVar7 = __ssl_strerror(lVar6,0);
  __os_log_internal(0,uVar4,1,"SSL handshake controlled failure %d: %s\n",0,uVar7);
  goto LAB_001113ce;
LAB_0011138a:
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  pcVar12 = "select timeout (socket %d)";
  uVar11 = uVar11 & 0xffffffff;
LAB_001113c7:
  __os_log_internal(0,_md_log_log,1,pcVar12,uVar11);
LAB_001113ce:
  _SSL_shutdown(lVar6);
  _SSL_shutdown(lVar6);
  _SSL_free(lVar6);
  lVar6 = 0;
  lVar5 = local_40;
LAB_001113ed:
  _SSL_CTX_free(lVar5);
  return lVar6;
}

