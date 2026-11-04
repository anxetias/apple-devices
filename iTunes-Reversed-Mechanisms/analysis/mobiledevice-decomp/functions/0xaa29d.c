// rea decompile_all
// name: __WriteLocalFile
// address: 0xaa29d
// body: available
// range: 0xaa29d-0xaac2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xaac26 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __WriteLocalFile(char *param_1,undefined8 param_2,long param_3,ushort param_4,
                      undefined8 param_5,undefined8 param_6,undefined2 param_7,undefined2 param_8,
                      undefined8 param_9,long param_10,ushort param_11,ushort param_12,
                      undefined8 param_13)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  ssize_t sVar9;
  undefined8 uVar10;
  int *piVar11;
  char *pcVar12;
  cfstringStruct *pcVar13;
  long lVar14;
  ushort uVar15;
  char *pcVar16;
  byte bVar17;
  ulong uVar18;
  long local_468;
  char *local_460;
  undefined2 *local_458;
  long local_450;
  undefined2 *local_448;
  int local_43c;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_468 = 0;
  local_460 = param_1;
  local_450 = param_3;
  puVar5 = _calloc(1,0x50);
  *puVar5 = 0x14;
  *(undefined8 *)(puVar5 + 4) = param_5;
  *(undefined8 *)(puVar5 + 8) = param_6;
  uVar15 = param_4 & 0xf000;
  *(bool *)(puVar5 + 0xf) = uVar15 == 0x4000;
  puVar5[0xc] = param_7;
  puVar5[0xd] = param_8;
  if (uVar15 == 0x4000) {
    if (param_4 != param_12) {
      puVar5[0xe] = param_4;
    }
  }
  else {
    if (param_4 != param_11) {
      puVar5[0xe] = param_4;
    }
    if ((uVar15 == 0xa000) || (uVar15 != 0x8000)) {
      *(undefined8 *)(puVar5 + 0x14) = 0;
      *(undefined8 *)(puVar5 + 0x18) = 0;
    }
    else {
      *(long *)(puVar5 + 0x14) = local_450;
      *(long *)(puVar5 + 0x18) = local_450;
    }
  }
  puVar5[2] = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  *(byte *)((long)puVar5 + 3) = *(byte *)((long)puVar5 + 3) | 8;
  local_458 = puVar5;
  local_448 = puVar5;
  lVar6 = _CFStringCreateWithFileSystemRepresentation
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_2);
  cVar2 = _CFStringGetCString(lVar6,local_438,0x400,0x8000100);
  if (cVar2 == '\0') {
    bVar17 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar3 == 0) {
        bVar17 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                          "Failed to get path %s as UTF8 string",param_2);
      }
    }
    if ((bVar17 != 0) && (2 < _gSZDefaultLogLevel)) {
      __SZLog(3,"_WriteLocalFile",0x153,&cf_Failedtogetpath_sasUTF8string,param_2);
    }
LAB_000aab2d:
    _DestroyMutableLocalFileRecord(puVar5);
  }
  else {
    pcVar7 = _strdup(local_438);
    *(char **)(puVar5 + 0x1c) = pcVar7;
    lVar8 = _CreateMutableCDRecordFromMutableLFRecord(puVar5);
    lVar14 = local_450;
    pcVar7 = local_460;
    local_468 = lVar8;
    if (lVar8 == 0) {
      bVar17 = _gSZLogToSyslog ^ 1;
      puVar5 = local_448;
      if (_gSZLogToSyslog == 1) {
        iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        puVar5 = local_448;
        if (iVar3 == 0) {
          bVar17 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                            "Failed to create mutable CD record from LF record");
        }
      }
      if ((bVar17 != 0) && (2 < _gSZDefaultLogLevel)) {
        __SZLog(3,"_WriteLocalFile",0x15c,&cf_FailedtocreatemutableCDrecordfromLFrecord);
      }
      goto LAB_000aab2d;
    }
    *(ushort *)(lVar8 + 0x18) = param_4;
    pcVar16 = (char *)0xffffffffffffffff;
    pcVar12 = local_438;
    if (uVar15 == 0xa000) {
      local_43c = -1;
      sVar9 = _readlink(local_460,local_438,0x400);
      if (sVar9 < 0) {
        bVar17 = _gSZLogToSyslog ^ 1;
        puVar5 = local_448;
        pcVar7 = local_460;
        if (_gSZLogToSyslog == 1) {
          iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          puVar5 = local_448;
          pcVar7 = local_460;
          if (iVar3 == 0) {
            bVar17 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            puVar1 = _SZGetLoggingHandle_logHandle;
            piVar11 = ___error();
            pcVar12 = _strerror(*piVar11);
            __os_log_internal(0,puVar1,0x10,"Failed to read symlink destination for file \"%s\": %s"
                              ,pcVar7,pcVar12);
          }
        }
        if ((bVar17 != 0) && (2 < _gSZDefaultLogLevel)) {
          piVar11 = ___error();
          pcVar12 = _strerror(*piVar11);
          pcVar13 = &cf_Failedtoreadsymlinkdestinationforfile__s___s;
          uVar10 = 0x182;
LAB_000aaa71:
          __SZLog(3,"_WriteLocalFile",uVar10,pcVar13,pcVar7,pcVar12);
        }
        goto LAB_000aab2d;
      }
      *(ssize_t *)(local_448 + 0x18) = sVar9;
      *(ssize_t *)(local_448 + 0x14) = sVar9;
      *(ssize_t *)(lVar8 + 0x28) = sVar9;
      *(ssize_t *)(lVar8 + 0x20) = sVar9;
    }
    else if (uVar15 == 0x8000) {
      if (local_450 != 0) {
        iVar3 = _open(local_460,0,0);
        puVar5 = local_448;
        if (iVar3 < 0) {
          bVar17 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar3 == 0) {
              bVar17 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              puVar1 = _SZGetLoggingHandle_logHandle;
              piVar11 = ___error();
              pcVar12 = _strerror(*piVar11);
              __os_log_internal(0,puVar1,0x10,"Failed to open file: \"%s\" : %s",pcVar7,pcVar12);
            }
          }
          if ((bVar17 != 0) && (2 < _gSZDefaultLogLevel)) {
            piVar11 = ___error();
            pcVar12 = _strerror(*piVar11);
            pcVar13 = &cf_Failedtoopenfile___s___s;
            uVar10 = 0x16d;
            goto LAB_000aaa71;
          }
          goto LAB_000aab2d;
        }
        if (lVar14 == -1) {
          bVar17 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar4 == 0) {
              bVar17 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                "File with size %lld is to big to map: %s",0xffffffffffffffff,pcVar7
                               );
            }
          }
          if ((bVar17 != 0) && (2 < _gSZDefaultLogLevel)) {
            __SZLog(3,"_WriteLocalFile",0x172,&cf_Filewithsize_lldistobigtomap__s,0xffffffffffffffff
                    ,pcVar7);
          }
        }
        else {
          local_43c = iVar3;
          pcVar16 = (char *)_mmap(0,lVar14,1,0x402,iVar3,0);
          pcVar12 = pcVar16;
          if (pcVar16 != (char *)0xffffffffffffffff) goto LAB_000aa63a;
          bVar17 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar3 == 0) {
              bVar17 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              puVar1 = _SZGetLoggingHandle_logHandle;
              piVar11 = ___error();
              pcVar12 = _strerror(*piVar11);
              __os_log_internal(0,puVar1,0x10,"Failed to map file \"%s\" of size %llu: %s",pcVar7,
                                local_450,pcVar12);
            }
          }
          iVar3 = local_43c;
          if ((bVar17 != 0) && (2 < _gSZDefaultLogLevel)) {
            piVar11 = ___error();
            pcVar12 = _strerror(*piVar11);
            __SZLog(3,"_WriteLocalFile",0x178,&cf_Failedtomapfile__s_ofsize_llu__s,pcVar7,local_450,
                    pcVar12);
            iVar3 = local_43c;
          }
        }
        _close(iVar3);
        goto LAB_000aab2d;
      }
      local_43c = -1;
      local_438[0] = '\0';
    }
    else {
      local_43c = -1;
      pcVar12 = (char *)0x0;
    }
LAB_000aa63a:
    uVar10 = _ZipStreamWriteLocalFile
                       (0,&local_468,&local_458,pcVar12,0,param_11,param_12,param_9,param_10);
    if ((char)uVar10 == '\0') {
      uVar18 = CONCAT71((int7)((ulong)uVar10 >> 8),_gSZLogToSyslog) & 0xffffffff;
      pcVar12 = (char *)(uVar18 ^ 1);
      lVar14 = local_450;
      if (_gSZLogToSyslog == 1) {
        iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        lVar14 = local_450;
        if (iVar3 == 0) {
          pcVar12 = (char *)CONCAT71((int7)(uVar18 >> 8),1);
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                            "Failed to write local file named %s to archive",
                            *(undefined8 *)(local_458 + 0x1c));
        }
      }
      if (((char)pcVar12 != '\0') && (2 < _gSZDefaultLogLevel)) {
        __SZLog(3,"_WriteLocalFile",400,&cf_Failedtowritelocalfilenamed_stoarchive,
                *(undefined8 *)(local_458 + 0x1c));
      }
    }
    else if (*(char *)(param_10 + 0x31) == '\x01') {
      _DestroyMutableCDRecord(local_468);
      lVar14 = local_450;
    }
    else {
      _CFArrayAppendValue(param_13);
      lVar14 = local_450;
    }
    if (pcVar16 != (char *)0xffffffffffffffff) {
      _munmap(pcVar16,lVar14);
    }
    if (-1 < local_43c) {
      _close(local_43c);
    }
    _DestroyMutableLocalFileRecord(local_458);
    uVar18 = CONCAT71((int7)((ulong)pcVar12 >> 8),1);
    if ((char)uVar10 != '\0') goto LAB_000aab44;
  }
  _DestroyMutableCDRecord(local_468);
  uVar18 = 0;
LAB_000aab44:
  if (lVar6 != 0) {
    _CFRelease();
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar18 & 0xffffffff;
}

