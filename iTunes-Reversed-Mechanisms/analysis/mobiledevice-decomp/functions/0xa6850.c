// rea decompile_all
// name: _CreateZipStream
// address: 0xa6850
// body: available
// range: 0xa6850-0xa8d34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xa8b38 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _CreateZipStream(undefined8 param_1,long param_2,long *param_3)

{
  char **ppcVar1;
  undefined *puVar2;
  ushort uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  int *piVar11;
  char *pcVar12;
  ulong uVar13;
  void *pvVar14;
  char **ppcVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcVar19;
  cfstringStruct *pcVar20;
  ulong uVar21;
  void *pvVar22;
  long lVar23;
  undefined8 *puVar24;
  byte bVar25;
  long *plVar26;
  undefined8 local_df8;
  undefined8 uStack_df0;
  ulong local_de8;
  undefined8 uStack_de0;
  undefined8 local_dd8;
  undefined8 uStack_dd0;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined8 local_db8;
  undefined8 uStack_db0;
  undefined8 local_da8;
  undefined8 uStack_da0;
  void *local_d98;
  undefined8 uStack_d90;
  undefined8 local_d88;
  undefined8 uStack_d80;
  undefined8 local_d78;
  undefined8 uStack_d70;
  void *local_d68;
  undefined8 local_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  ulong local_d48;
  undefined8 uStack_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  time_t local_d28;
  undefined8 uStack_d20;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  char *local_cc8;
  size_t local_cc0;
  void *local_cb8;
  long local_cb0;
  undefined8 local_ca8;
  long local_ca0;
  ulong local_c98;
  ulong local_c90;
  undefined8 local_c88;
  void *local_c80;
  void *local_c78;
  undefined8 local_c70;
  long *local_c68;
  ushort local_c5c;
  ushort local_c5a;
  long local_c58;
  char **local_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  char *local_848;
  undefined8 local_840;
  char local_838 [1024];
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_c5c = 0;
  local_c5a = 0;
  local_cb0 = 0;
  local_cb8 = (void *)0x0;
  local_c70 = 0;
  local_c88 = 0;
  local_ca8 = 0;
  uVar17 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  local_c68 = param_3;
  local_c58 = param_2;
  lVar8 = _CFArrayCreateMutable(uVar17,0,PTR__kCFTypeArrayCallBacks_004411a8);
  local_c80 = (void *)0x0;
  ___bzero(local_438,0x400);
  local_d78 = 0;
  uStack_d70 = 0;
  local_d88 = 0;
  uStack_d80 = 0;
  local_d98 = (void *)0x0;
  uStack_d90 = 0;
  local_da8 = 0;
  uStack_da0 = 0;
  local_db8 = 0;
  uStack_db0 = 0;
  local_dc8 = 0;
  uStack_dc0 = 0;
  local_dd8 = 0;
  uStack_dd0 = 0;
  local_de8 = 0;
  uStack_de0 = 0;
  local_df8 = 0;
  uStack_df0 = 0;
  local_cd8 = 0;
  uStack_cd0 = 0;
  local_ce8 = 0;
  uStack_ce0 = 0;
  local_cf8 = 0;
  uStack_cf0 = 0;
  local_d08 = 0;
  uStack_d00 = 0;
  local_d18 = 0;
  uStack_d10 = 0;
  local_d28 = 0;
  uStack_d20 = 0;
  local_d38 = 0;
  uStack_d30 = 0;
  local_d48 = 0;
  uStack_d40 = 0;
  local_d58 = 0;
  uStack_d50 = 0;
  ___bzero(local_838,0x400);
  local_840 = 0;
  local_848 = local_838;
  lVar9 = _realpath_DARWIN_EXTSN(param_1,local_838);
  local_ca0 = lVar8;
  if (lVar9 == 0) {
    piVar11 = ___error();
    iVar6 = *piVar11;
    bVar25 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar7 = ___isPlatformVersionAtLeast(1,10,0xc);
      if (iVar7 == 0) {
        bVar25 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        puVar2 = _SZGetLoggingHandle_logHandle;
        pcVar12 = _strerror(iVar6);
        __os_log_internal(0,puVar2,0x10,"Realpath for \"%s\" failed at \"%s\" : %s (%d)",param_1,
                          local_838,pcVar12,iVar6);
      }
    }
    local_c50 = (char **)0x0;
    uVar17 = 0;
    if (bVar25 != 0) {
      pvVar22 = (void *)0x0;
      lVar9 = 0;
      lVar8 = 0;
      if (_gSZDefaultLogLevel < 3) goto LAB_000a75af;
      pcVar12 = _strerror(iVar6);
      local_c50 = (char **)0x0;
      __SZLog(3,"CreateZipStream",0x1c4,&cf_Realpathfor__s_failedat__s___s__d_,param_1,local_838,
              pcVar12,iVar6);
      goto LAB_000a6fee;
    }
LAB_000a75a7:
    local_c50 = (char **)0x0;
    lVar9 = 0;
LAB_000a75ad:
    uVar17 = 0;
    lVar8 = 0;
    pvVar22 = (void *)0x0;
    goto LAB_000a75af;
  }
  sVar10 = _strlen(local_838);
  plVar26 = local_c68;
  if (sVar10 == 0) {
    bVar25 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
      if (iVar6 == 0) {
        bVar25 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10);
      }
    }
    local_c50 = (char **)0x0;
    uVar17 = 0;
    if (bVar25 == 0) goto LAB_000a75a7;
    pvVar22 = (void *)0x0;
    lVar9 = 0;
    lVar8 = 0;
    if (_gSZDefaultLogLevel < 3) goto LAB_000a75af;
    local_c50 = (char **)0x0;
    __SZLog(3,"CreateZipStream",0x1cb);
LAB_000a6fee:
    lVar9 = 0;
LAB_000a6ff4:
    lVar8 = 0;
  }
  else {
    cVar4 = _ZipStreamConfigureOutput(local_c68);
    if (cVar4 == '\0') {
LAB_000a6fe3:
      local_c50 = (char **)0x0;
      goto LAB_000a6fee;
    }
    iVar6 = _lstat_INODE64(local_838,&local_df8);
    if (iVar6 != 0) {
      bVar25 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
        if (iVar6 == 0) {
          bVar25 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          puVar2 = _SZGetLoggingHandle_logHandle;
          piVar11 = ___error();
          pcVar12 = _strerror(*piVar11);
          __os_log_internal(0,puVar2,0x10,"Failed to stat source path %s : %s",local_838,pcVar12);
        }
      }
      local_c50 = (char **)0x0;
      uVar17 = 0;
      if (bVar25 == 0) goto LAB_000a75a7;
      lVar9 = 0;
      lVar8 = 0;
      pvVar22 = (void *)0x0;
      if (_gSZDefaultLogLevel < 3) goto LAB_000a75af;
      piVar11 = ___error();
      pcVar12 = _strerror(*piVar11);
      local_c50 = (char **)0x0;
      __SZLog(3,"CreateZipStream",0x1d4,&cf_Failedtostatsourcepath_s__s,local_838,pcVar12);
      goto LAB_000a6fee;
    }
    if ((local_df8._4_2_ & 0xf000) == 0x4000) {
      if ((char)plVar26[8] == '\x01') {
        pcVar12 = _strrchr(local_838,0x2f);
        sVar10 = (long)pcVar12 - (long)local_838;
      }
      if ((char)plVar26[6] == '\0') {
        cVar4 = __Prescan(local_838,lVar8,&local_c5c,&local_c5a,&local_cb0,&local_cb8);
        if (cVar4 == '\0') goto LAB_000a6fe3;
        goto LAB_000a6e43;
      }
LAB_000a6cdf:
      local_cb0 = 0x10;
      local_c5a = 0x41ed;
      local_c5c = 0x81a4;
      lVar8 = 0x10;
      pvVar22 = (void *)0x0;
      local_cc0 = sVar10;
    }
    else {
      if ((local_df8._4_2_ & 0xf000) != 0x8000) {
        bVar25 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
          if (iVar6 == 0) {
            bVar25 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                              "Unsupported type for source path: mode = 0%ho",local_df8._4_2_);
          }
        }
        local_c50 = (char **)0x0;
        uVar17 = 0;
        if (bVar25 == 0) goto LAB_000a75a7;
        pvVar22 = (void *)0x0;
        lVar9 = 0;
        lVar8 = 0;
        if (_gSZDefaultLogLevel < 3) goto LAB_000a75af;
        local_c50 = (char **)0x0;
        __SZLog(3,"CreateZipStream",0x1d9,&cf_Unsupportedtypeforsourcepath_mode_0_ho,local_df8._4_2_
               );
        goto LAB_000a6fee;
      }
      if ((char)plVar26[6] != '\0') goto LAB_000a6cdf;
      local_c5c = local_df8._4_2_;
      local_c5a = 0x41ed;
      local_cb0 = 1;
      local_cb8 = local_d98;
LAB_000a6e43:
      lVar8 = local_cb0;
      pvVar22 = local_cb8;
      local_cc0 = sVar10;
      _ZipStreamCallPreflightResultCallback
                (plVar26[1],((ulong)*(byte *)((long)plVar26 + 0x2f) ^ 3) + local_cb0,local_cb8,
                 local_df8._4_2_);
    }
    local_c50 = (char **)lVar8;
    lVar9 = _CFArrayCreateMutable(uVar17,lVar8,0);
    _snprintf(local_438,0x400,"%s/mimetype",local_838);
    iVar6 = _lstat_INODE64(local_438,&local_d58);
    if (iVar6 == 0) {
      cVar4 = __WriteLocalFile(local_438,"mimetype",local_cf8,local_d58._4_2_,local_d38,local_d28,
                               local_d48 & 0xffffffff,local_d48 >> 0x20,local_c58,plVar26,local_c5c,
                               local_c5a,lVar9);
      if (cVar4 != '\0') goto LAB_000a6f20;
      bVar25 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
        if (iVar6 == 0) {
          bVar25 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10);
        }
      }
      if ((bVar25 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a8464;
      local_c50 = (char **)0x0;
      uVar17 = 0x207;
LAB_000a7a5b:
      __SZLog(3,"CreateZipStream",uVar17);
      goto LAB_000a6ff4;
    }
LAB_000a6f20:
    _snprintf(local_438,0x400,"%s/%s",local_838,_kZipMetadataDirectory);
    iVar6 = _lstat_INODE64(local_438,&local_d58);
    local_c78 = pvVar22;
    if (iVar6 == 0) {
      uVar13 = local_d48 & 0xffffffff;
      uVar21 = local_d48 >> 0x20;
    }
    else {
      uStack_d50 = 0;
      local_cd8 = 0;
      uStack_cd0 = 0;
      local_ce8 = 0;
      uStack_ce0 = 0;
      local_cf8 = 0;
      uStack_cf0 = 0;
      local_d08 = 0;
      uStack_d00 = 0;
      local_d18 = 0;
      uStack_d10 = 0;
      local_d28 = 0;
      uStack_d20 = 0;
      local_d38 = 0;
      uStack_d30 = 0;
      local_d48 = 0;
      uStack_d40 = 0;
      local_d58 = 0x41ed00000000;
      local_d28 = _time((time_t *)0x0);
      local_d48 = 0x1f5000001f5;
      uVar21 = 0x1f5;
      uVar13 = 0x1f5;
    }
    uVar3 = local_c5a;
    uVar5 = local_c5c;
    plVar26 = local_c68;
    cVar4 = __WriteLocalFile(local_438,_kZipMetadataDirectory,local_cf8,local_d58._4_2_,local_d38,
                             local_d28,uVar13,uVar21,local_c58,local_c68,local_c5c,local_c5a,lVar9);
    if (cVar4 == '\0') {
      bVar25 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
        if (iVar6 == 0) {
          bVar25 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10);
        }
      }
      if ((bVar25 == 0) || (_gSZDefaultLogLevel < 3)) {
LAB_000a8464:
        local_c50 = (char **)0x0;
        goto LAB_000a75ad;
      }
      local_c50 = (char **)0x0;
      uVar17 = 0x219;
      goto LAB_000a7a5b;
    }
    uVar21 = (ulong)uVar3;
    cVar4 = _ZipStreamConcoctStreamData
                      (local_c50,local_c78,(ulong)uVar5,uVar21,plVar26,&local_c70,&local_c88,
                       &local_c80);
    if (cVar4 == '\0') {
      bVar25 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
        if (iVar6 == 0) {
          bVar25 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10);
        }
      }
      if ((bVar25 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a8464;
      local_c50 = (char **)0x0;
      uVar17 = 0x21f;
      goto LAB_000a7a5b;
    }
    local_c50 = local_c80;
    local_c98 = uVar21;
    cVar4 = _ZipStreamWriteLocalFile
                      (0,&local_c70,&local_c88,local_c80,0,uVar5,uVar21,local_c58,plVar26);
    lVar8 = local_ca0;
    if (cVar4 == '\0') {
      bVar25 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
        if (iVar6 == 0) {
          bVar25 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10);
        }
      }
      if ((bVar25 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a8464;
      local_c50 = (char **)0x0;
      uVar17 = 0x224;
      goto LAB_000a7a5b;
    }
    local_c90 = (ulong)uVar5;
    _CFArrayAppendValue(lVar9,local_c70);
    local_c70 = 0;
    _free(local_c50);
    local_c80 = (void *)0x0;
    _DestroyMutableLocalFileRecord(local_c88);
    plVar26 = local_c68;
    local_c88 = 0;
    uVar18 = 0xffffffffffffffff;
    if ((*local_c68 != 0) && (*(char *)((long)local_c68 + 0x2f) == '\0')) {
      cVar4 = _ZipStreamConcoctFixedStreamData(local_c68,&local_c70,&local_ca8);
      pvVar22 = local_c80;
      if (cVar4 == '\0') {
        bVar25 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
          if (iVar6 == 0) {
            bVar25 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10);
          }
        }
        if ((bVar25 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a8464;
        local_c50 = (char **)0x0;
        uVar17 = 0x232;
      }
      else {
        cVar4 = _ZipStreamWriteLocalFile
                          (0,&local_c70,&local_ca8,local_c80,0,local_c90,local_c98,local_c58,plVar26
                          );
        if (cVar4 != '\0') {
          uVar18 = _CFArrayGetCount(lVar9);
          _CFArrayAppendValue(lVar9,local_c70);
          local_c70 = 0;
          _free(pvVar22);
          local_c80 = (void *)0x0;
          goto LAB_000a7171;
        }
        bVar25 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
          if (iVar6 == 0) {
            bVar25 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10);
          }
        }
        if ((bVar25 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a8464;
        local_c50 = (char **)0x0;
        uVar17 = 0x237;
      }
      goto LAB_000a7a5b;
    }
LAB_000a7171:
    local_d60 = uVar18;
    if ((lVar8 != 0) && (local_d68 = (void *)_CFArrayGetCount(lVar8), 0 < (long)local_d68)) {
      pvVar22 = (void *)0x0;
      do {
        ___bzero(&local_c48,0x400);
        pvVar14 = (void *)_CFArrayGetValueAtIndex(lVar8,pvVar22);
        lVar8 = _CFStringCreateWithFileSystemRepresentation(0,local_838);
        if (lVar8 == 0) {
          bVar25 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
            if (iVar6 == 0) {
              bVar25 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                "unable to create dirPathStr from: %s",local_838);
            }
          }
          if ((bVar25 != 0) && (2 < _gSZDefaultLogLevel)) {
            __SZLog(3,"CreateZipStream",0x24a,&cf_unabletocreatedirPathStrfrom__s,local_838);
          }
          goto LAB_000a890f;
        }
        local_c78 = pvVar22;
        local_c50 = pvVar14;
        lVar16 = _CFStringCreateWithFormat(uVar17,0,&cf______,lVar8,pvVar14);
        if (lVar16 == 0) {
          bVar25 = _gSZLogToSyslog ^ 1;
          ppcVar15 = local_c50;
          if (_gSZLogToSyslog == 1) {
            iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
            if (iVar6 == 0) {
              bVar25 = 1;
              ppcVar15 = local_c50;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              ppcVar15 = local_c50;
              __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                "unable to create fullPath from: %@ and %@",lVar8,local_c50);
            }
          }
          if ((bVar25 != 0) && (2 < _gSZDefaultLogLevel)) {
            __SZLog(3,"CreateZipStream",0x24f,&cf_unabletocreatefullPathfrom___and__,lVar8,ppcVar15)
            ;
          }
          _CFRelease(lVar8);
          goto LAB_000a890f;
        }
        cVar4 = _CFStringGetFileSystemRepresentation(lVar16,local_438,0x400);
        _CFRelease(lVar8);
        _CFRelease(lVar16);
        if (cVar4 == '\0') {
          bVar25 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
            if (iVar6 == 0) {
              bVar25 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10);
            }
          }
          if ((bVar25 != 0) && (2 < _gSZDefaultLogLevel)) {
            uVar17 = 599;
LAB_000a8908:
            __SZLog(3,"CreateZipStream",uVar17);
          }
          goto LAB_000a890f;
        }
        cVar4 = _CFStringGetFileSystemRepresentation(local_c50,&local_c48,0x400);
        lVar8 = local_ca0;
        if (cVar4 == '\0') {
          bVar25 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
            if (iVar6 == 0) {
              bVar25 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10);
            }
          }
          if ((bVar25 != 0) && (2 < _gSZDefaultLogLevel)) {
            uVar17 = 0x25c;
            goto LAB_000a8908;
          }
          goto LAB_000a890f;
        }
        iVar6 = _lstat_INODE64(local_438,&local_d58);
        if (iVar6 == 0) {
          cVar4 = __WriteLocalFile(local_438,&local_c48,local_cf8,local_d58._4_2_,local_d38,
                                   local_d28,local_d48 & 0xffffffff,local_d48 >> 0x20,local_c58,
                                   local_c68,local_c90,local_c98,lVar9);
          if (cVar4 == '\0') {
            bVar25 = _gSZLogToSyslog ^ 1;
            if (_gSZLogToSyslog == 1) {
              iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
              if (iVar6 == 0) {
                bVar25 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10);
              }
            }
            if ((bVar25 != 0) && (2 < _gSZDefaultLogLevel)) {
              uVar17 = 0x262;
              goto LAB_000a8908;
            }
            goto LAB_000a890f;
          }
        }
        pvVar22 = (void *)((long)local_c78 + 1);
      } while (local_d68 != pvVar22);
    }
    uVar5 = local_df8._4_2_;
    if ((local_df8._4_2_ & 0xf000) != 0x4000) {
      pcVar12 = _strrchr(local_838,0x2f);
      lVar8 = local_c58;
      plVar26 = local_c68;
      if (pcVar12 == (char *)0x0) {
        pcVar12 = local_838;
      }
      cVar4 = __WriteLocalFile(local_838,pcVar12,local_d98,uVar5,local_dd8,local_dc8,
                               local_de8 & 0xffffffff,local_de8 >> 0x20,local_c58,local_c68,
                               local_c90,local_c98,lVar9);
      local_c50 = (char **)0x0;
      lVar16 = 0;
      if (cVar4 == '\0') goto LAB_000a8464;
LAB_000a791a:
      local_c58 = lVar16;
      cVar4 = _ZipStreamWriteCentralDirectoryAndEndRecords(lVar9,local_d60,local_ca8,lVar8,plVar26);
      if (cVar4 == '\0') {
        bVar25 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
          if (iVar6 == 0) {
            bVar25 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10);
          }
        }
        uVar17 = 0;
        if ((bVar25 != 0) && (uVar17 = 0, 2 < _gSZDefaultLogLevel)) {
          __SZLog(3,"CreateZipStream",0x2e9);
          goto LAB_000a89a3;
        }
      }
      else {
        lVar16 = plVar26[1];
        pcVar19 = *(code **)(lVar16 + 0x58);
        if (pcVar19 == (code *)0x0) {
LAB_000a796c:
          lVar16 = (**(code **)(lVar16 + 0x48))(*(undefined8 *)(lVar16 + 0x50));
          if (lVar16 < 0) {
            piVar11 = ___error();
            iVar6 = *piVar11;
            bVar25 = _gSZLogToSyslog ^ 1;
            if (_gSZLogToSyslog == 1) {
              iVar7 = ___isPlatformVersionAtLeast(1,10,0xc);
              if (iVar7 == 0) {
                bVar25 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                puVar2 = _SZGetLoggingHandle_logHandle;
                pcVar12 = _strerror(iVar6);
                __os_log_internal(0,puVar2,0x10,"Failed to get offset in file at end of writing: %s"
                                  ,pcVar12);
              }
            }
            lVar8 = local_c58;
            if ((bVar25 != 0) && (2 < _gSZDefaultLogLevel)) {
              pcVar12 = _strerror(iVar6);
              pcVar20 = &cf_Failedtogetoffsetinfileatendofwriting__s;
              uVar17 = 0x2f6;
              goto LAB_000a8999;
            }
          }
          else {
            if ((*(char *)((long)plVar26 + 0x2f) != '\0') ||
               (iVar6 = (**(code **)(plVar26[1] + 0x60))(*(undefined8 *)(plVar26[1] + 0x50),lVar16),
               iVar6 == 0)) {
              *(long *)(lVar8 + 0x18) = lVar16;
              uVar17 = CONCAT71((int7)((ulong)pcVar19 >> 8),1);
              goto LAB_000a89a5;
            }
            piVar11 = ___error();
            iVar6 = *piVar11;
            bVar25 = _gSZLogToSyslog ^ 1;
            if (_gSZLogToSyslog == 1) {
              iVar7 = ___isPlatformVersionAtLeast(1,10,0xc);
              if (iVar7 == 0) {
                bVar25 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                puVar2 = _SZGetLoggingHandle_logHandle;
                pcVar12 = _strerror(iVar6);
                __os_log_internal(0,puVar2,0x10,"Failed to truncate output: %s",pcVar12);
              }
            }
            lVar8 = local_c58;
            if ((bVar25 != 0) && (2 < _gSZDefaultLogLevel)) {
              pcVar12 = _strerror(iVar6);
              pcVar20 = &cf_Failedtotruncateoutput__s;
              uVar17 = 0x300;
              goto LAB_000a8999;
            }
          }
          goto LAB_000a6ff6;
        }
        iVar6 = (*pcVar19)(*(undefined8 *)(lVar16 + 0x50));
        if (iVar6 != -1) {
          lVar16 = plVar26[1];
          goto LAB_000a796c;
        }
        piVar11 = ___error();
        iVar6 = *piVar11;
        bVar25 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar7 = ___isPlatformVersionAtLeast(1,10,0xc);
          if (iVar7 == 0) {
            bVar25 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            puVar2 = _SZGetLoggingHandle_logHandle;
            pcVar12 = _strerror(iVar6);
            __os_log_internal(0,puVar2,0x10,"Failed to flush output: %s",pcVar12);
          }
        }
        lVar8 = local_c58;
        if ((bVar25 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a6ff6;
        pcVar12 = _strerror(iVar6);
        pcVar20 = &cf_Failedtoflushoutput__s;
        uVar17 = 0x2ef;
LAB_000a8999:
        __SZLog(3,"CreateZipStream",uVar17,pcVar20,pcVar12);
LAB_000a89a3:
        uVar17 = 0;
      }
LAB_000a89a5:
      pvVar22 = (void *)0x0;
      lVar8 = local_c58;
      goto LAB_000a75af;
    }
    if (local_c68[7] != 0) {
      lVar8 = _CFArrayGetCount();
      ___bzero(&local_c48,0x400);
      if (lVar8 < 1) {
        bVar25 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
          if (iVar6 == 0) {
            bVar25 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10);
          }
        }
        if (bVar25 == 0) {
LAB_000a890f:
          local_c50 = (char **)0x0;
        }
        else {
          local_c50 = (char **)0x0;
          if (2 < _gSZDefaultLogLevel) {
            local_c50 = (char **)0x0;
            uVar17 = 0x26f;
            goto LAB_000a7a5b;
          }
        }
      }
      else {
        ppcVar15 = _calloc(lVar8 + 1,8);
        if (ppcVar15 != (char **)0x0) {
          lVar16 = 0;
          local_c50 = ppcVar15;
          do {
            uVar17 = _CFArrayGetValueAtIndex(local_c68[7],lVar16);
            cVar4 = _CFStringGetFileSystemRepresentation(uVar17,&local_c48,0x400);
            if (cVar4 == '\0') {
              bVar25 = _gSZLogToSyslog ^ 1;
              if (_gSZLogToSyslog == 1) {
                iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
                if (iVar6 == 0) {
                  bVar25 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10);
                }
              }
              if ((bVar25 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a6ff4;
              uVar17 = 0x280;
              goto LAB_000a7a5b;
            }
            local_cc8 = (char *)0x0;
            iVar6 = _asprintf(&local_cc8,"%s/%s",local_838);
            if (iVar6 < 0) {
              piVar11 = ___error();
              iVar6 = *piVar11;
              bVar25 = _gSZLogToSyslog ^ 1;
              if (_gSZLogToSyslog == 1) {
                iVar7 = ___isPlatformVersionAtLeast(1,10,0xc);
                if (iVar7 == 0) {
                  bVar25 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  puVar2 = _SZGetLoggingHandle_logHandle;
                  pcVar12 = _strerror(iVar6);
                  __os_log_internal(0,puVar2,0x10,"Failed to create path from %s/%s : %s",local_838,
                                    &local_c48,pcVar12);
                }
              }
              if ((bVar25 != 0) && (2 < _gSZDefaultLogLevel)) {
                pcVar12 = _strerror(iVar6);
                __SZLog(3,"CreateZipStream",0x288,&cf_Failedtocreatepathfrom_s__s__s,local_838,
                        &local_c48,pcVar12);
              }
              goto LAB_000a6ff4;
            }
            local_c50[lVar16] = local_cc8;
            lVar16 = lVar16 + 1;
          } while (lVar8 != lVar16);
          local_c50[lVar8] = (char *)0x0;
          ppcVar15 = local_c50;
          goto LAB_000a7ae3;
        }
        bVar25 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
          if (iVar6 == 0) {
            bVar25 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10);
          }
        }
        if (bVar25 == 0) goto LAB_000a890f;
        local_c50 = (char **)0x0;
        if (2 < _gSZDefaultLogLevel) {
          local_c50 = (char **)0x0;
          uVar17 = 0x278;
          goto LAB_000a7a5b;
        }
      }
      goto LAB_000a6ff4;
    }
    ppcVar15 = &local_848;
    local_c50 = (char **)0x0;
LAB_000a7ae3:
    lVar8 = local_c58;
    lVar16 = _fts_open_INODE64(ppcVar15,0x54,0);
    if (lVar16 == 0) {
      bVar25 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
        if (iVar6 == 0) {
          bVar25 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          puVar2 = _SZGetLoggingHandle_logHandle;
          piVar11 = ___error();
          pcVar12 = _strerror(*piVar11);
          __os_log_internal(0,puVar2,0x10,"fts_open failed for path %s: %s",local_838,pcVar12);
        }
      }
      if ((bVar25 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a75ad;
      piVar11 = ___error();
      pcVar12 = _strerror(*piVar11);
      __SZLog(3,"CreateZipStream",0x297,&cf_fts_openfailedforpath_s__s,local_838,pcVar12);
      goto LAB_000a6ff4;
    }
    local_c58 = lVar16;
    do {
      while( true ) {
        lVar16 = _fts_read_INODE64(local_c58);
        if (lVar16 == 0) {
          piVar11 = ___error();
          lVar16 = local_c58;
          plVar26 = local_c68;
          if (*piVar11 == 0) goto LAB_000a791a;
          bVar25 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
            if (iVar6 == 0) {
              bVar25 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              puVar2 = _SZGetLoggingHandle_logHandle;
              piVar11 = ___error();
              pcVar12 = _strerror(*piVar11);
              __os_log_internal(0,puVar2,0x10,"fts_read returned NULL and set errno: %s",pcVar12);
            }
          }
          uVar17 = 0;
          if (bVar25 == 0) goto LAB_000a89a5;
          lVar8 = local_c58;
          if (_gSZDefaultLogLevel < 3) goto LAB_000a6ff6;
          piVar11 = ___error();
          pcVar12 = _strerror(*piVar11);
          pcVar20 = &cf_fts_readreturnedNULLandseterrno__s;
          uVar17 = 0x2da;
          goto LAB_000a8999;
        }
        uVar5 = *(ushort *)(lVar16 + 0x58);
        if (0xd < uVar5) goto LAB_000a869d;
        if ((0x3102U >> (uVar5 & 0x1f) & 1) == 0) break;
        if (((*(short *)(lVar16 + 0x56) != 0) || (local_c68[7] != 0)) ||
           ((char)local_c68[8] == '\x01')) {
          pvVar22 = (void *)__CopyArchivePath(*(undefined8 *)(lVar16 + 0x30),local_cc0,
                                              *(undefined4 *)(*(long *)(lVar16 + 0x60) + 4));
          cVar4 = __IsExcludedFileName(pvVar22);
          if ((cVar4 == '\0') && (cVar4 = __IsOrderedEarly(pvVar22,local_ca0), cVar4 == '\0')) {
            local_bc8 = 0;
            uStack_bc0 = 0;
            local_bd8 = 0;
            uStack_bd0 = 0;
            local_be8 = 0;
            uStack_be0 = 0;
            local_bf8 = 0;
            uStack_bf0 = 0;
            local_c08 = 0;
            uStack_c00 = 0;
            local_c18 = 0;
            uStack_c10 = 0;
            local_c28 = 0;
            uStack_c20 = 0;
            local_c38 = 0;
            uStack_c30 = 0;
            local_c48 = 0;
            uStack_c40 = 0;
            local_c78 = pvVar22;
            if ((*(short *)(lVar16 + 0x58) == 0xc) && (*(char *)((long)local_c68 + 0x41) == '\x01'))
            {
              iVar6 = _stat_INODE64(*(undefined8 *)(lVar16 + 0x30),&local_c48);
              if (iVar6 == 0) {
                puVar24 = &local_c48;
                uVar5 = local_c48._4_2_;
                if (!SBORROW2(0,local_c48._4_2_ & 0xf000)) goto LAB_000a7c2d;
                goto LAB_000a7c37;
              }
              bVar25 = _gSZLogToSyslog ^ 1;
              if (_gSZLogToSyslog == 1) {
                iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
                if (iVar6 == 0) {
                  bVar25 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  puVar2 = _SZGetLoggingHandle_logHandle;
                  uVar17 = *(undefined8 *)(lVar16 + 0x30);
                  piVar11 = ___error();
                  pcVar12 = _strerror(*piVar11);
                  __os_log_internal(0,puVar2,0x10,"stat failed for path %s: %s",uVar17,pcVar12);
                }
              }
              if ((bVar25 != 0) && (2 < _gSZDefaultLogLevel)) {
                uVar17 = *(undefined8 *)(lVar16 + 0x30);
                piVar11 = ___error();
                pcVar12 = _strerror(*piVar11);
                __SZLog(3,"CreateZipStream",0x2b0,&cf_statfailedforpath_s__s,uVar17,pcVar12);
              }
            }
            else {
LAB_000a7c2d:
              puVar24 = *(undefined8 **)(lVar16 + 0x60);
              uVar5 = *(ushort *)((long)puVar24 + 4);
LAB_000a7c37:
              cVar4 = __WriteLocalFile(*(undefined8 *)(lVar16 + 0x30),local_c78,puVar24[0xc],uVar5,
                                       puVar24[4],puVar24[6],*(undefined4 *)(puVar24 + 2),
                                       *(undefined4 *)((long)puVar24 + 0x14),lVar8,local_c68,
                                       local_c90,local_c98,lVar9);
              pvVar22 = local_c78;
              if (cVar4 != '\0') goto LAB_000a7c94;
            }
            uVar17 = 0;
            lVar8 = local_c58;
            pvVar22 = local_c78;
            goto LAB_000a75af;
          }
LAB_000a7c94:
          _free(pvVar22);
        }
      }
    } while (uVar5 == 6);
    if ((0x490U >> (uVar5 & 0x1f) & 1) == 0) {
LAB_000a869d:
      bVar25 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
        if (iVar6 == 0) {
          bVar25 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                            "fts_read returned unhandled fts_info value %d",
                            *(undefined2 *)(lVar16 + 0x58));
        }
      }
      lVar8 = local_c58;
      if ((bVar25 != 0) && (2 < _gSZDefaultLogLevel)) {
        __SZLog(3,"CreateZipStream",0x2d3,&cf_fts_readreturnedunhandledfts_infovalue_d,
                *(undefined2 *)(lVar16 + 0x58));
        goto LAB_000a89a3;
      }
    }
    else {
      bVar25 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar6 = ___isPlatformVersionAtLeast(1,10,0xc);
        if (iVar6 == 0) {
          bVar25 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          puVar2 = _SZGetLoggingHandle_logHandle;
          uVar17 = *(undefined8 *)(lVar16 + 0x30);
          pcVar12 = _strerror(*(int *)(lVar16 + 0x38));
          __os_log_internal(0,puVar2,0x10,"fts_read gave error for file %s: %s",uVar17,pcVar12);
        }
      }
      lVar8 = local_c58;
      if ((bVar25 != 0) && (2 < _gSZDefaultLogLevel)) {
        uVar17 = *(undefined8 *)(lVar16 + 0x30);
        pcVar12 = _strerror(*(int *)(lVar16 + 0x38));
        __SZLog(3,"CreateZipStream",0x2ce,&cf_fts_readgaveerrorforfile_s__s,uVar17,pcVar12);
        goto LAB_000a89a3;
      }
    }
  }
LAB_000a6ff6:
  uVar17 = 0;
  pvVar22 = (void *)0x0;
LAB_000a75af:
  local_c68 = (long *)uVar17;
  if (local_c80 != (void *)0x0) {
    _free(local_c80);
  }
  _DestroyMutableCDRecord(local_c70);
  _DestroyMutableLocalFileRecord(local_c88);
  _DestroyMutableLocalFileRecord(local_ca8);
  if (lVar9 != 0) {
    lVar16 = _CFArrayGetCount(lVar9);
    if (lVar16 != 0) {
      lVar23 = 0;
      do {
        uVar17 = _CFArrayGetValueAtIndex(lVar9,lVar23);
        _DestroyMutableCDRecord(uVar17);
        lVar23 = lVar23 + 1;
      } while (lVar16 != lVar23);
    }
    _CFRelease(lVar9);
  }
  _free(pvVar22);
  ppcVar15 = local_c50;
  if (local_ca0 != 0) {
    _CFRelease();
  }
  if (lVar8 != 0) {
    _fts_close_INODE64(lVar8);
  }
  if (ppcVar15 != (char **)0x0) {
    pcVar12 = *ppcVar15;
    ppcVar1 = ppcVar15;
    while (pcVar12 != (char *)0x0) {
      _free(pcVar12);
      *ppcVar1 = (char *)0x0;
      pcVar12 = ppcVar1[1];
      ppcVar1 = ppcVar1 + 1;
    }
    _free(ppcVar15);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return local_c68;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

