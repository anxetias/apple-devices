// rea decompile_all
// name: _ZipStreamWritePartialHashForLastChunk
// address: 0x9ffec
// body: available
// range: 0x9ffec-0xa0dbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xa01ed to 0x2aa002 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0xa049a to 0x2aa002 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0xa0bf4 to 0x2aa002 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ZipStreamWritePartialHashForLastChunk
                (long param_1,long param_2,long param_3,undefined1 *param_4,long *param_5)

{
  size_t sVar1;
  undefined *puVar2;
  Bytef *pBVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  int *piVar7;
  long lVar8;
  char *pcVar9;
  uLong crc;
  void *pvVar10;
  long lVar11;
  char *pcVar12;
  cfstringStruct *pcVar13;
  char *pcVar14;
  undefined8 uVar15;
  byte bVar16;
  undefined8 uVar17;
  void *pvVar18;
  undefined7 uVar21;
  long *plVar19;
  ulong uVar20;
  long lVar22;
  undefined1 local_160 [216];
  size_t local_88;
  char *local_80;
  long local_78;
  undefined1 *local_70;
  char *local_68;
  long local_60;
  long *local_58;
  long local_50;
  Bytef *local_48;
  char *local_40;
  void *local_38;
  
  local_60 = param_2;
  local_48 = _malloc(0x400000);
  sVar1 = *(size_t *)(&_gHashDigestSizes + (ulong)*(byte *)((long)param_5 + 0x2c) * 8);
  local_38 = _malloc(sVar1);
  *param_4 = 0;
  pcVar14 = (char *)((param_1 + 4) % *param_5);
  lVar22 = (param_1 + 4) - (long)pcVar14;
  pcVar12 = *(char **)(local_60 + 0x40);
  local_78 = param_1;
  local_70 = param_4;
  local_58 = param_5;
  sVar6 = _strlen(*(char **)(param_3 + 0x38));
  uVar20 = (ulong)*(ushort *)(param_3 + 0x40);
  uVar21 = (undefined7)((ulong)pcVar12 >> 8);
  pvVar18 = local_38;
  local_88 = sVar1;
  local_80 = pcVar12;
  local_50 = param_3;
  if (lVar22 < (long)(pcVar12 + sVar1 + uVar20 + sVar6 + 0x25)) {
    bVar16 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      pvVar18 = local_38;
      if (iVar4 == 0) {
        bVar16 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                          "Not computing partial hash for last chunk because last chunk includes metadata digest"
                         );
      }
    }
    uVar20 = CONCAT71(uVar21,1);
    if ((bVar16 == 0) || (_gSZDefaultLogLevel < 7)) goto LAB_000a0c8e;
    pcVar13 = &cf_Notcomputingpartialhashforlastchunkbecauselastchunkincludesmetadatadigest;
    uVar17 = 7;
    uVar15 = 0x3ed;
  }
  else {
    if (pcVar14 != (char *)0x0) {
      if ((long)pcVar14 < 1) {
                    /* WARNING: Subroutine does not return */
        ___assert_rtn("ZipStreamWritePartialHashForLastChunk","ZipStream.c",0x3f8,
                      "chunkStart < hashEndOffset");
      }
      piVar7 = ___error();
      plVar19 = local_58;
      *piVar7 = 0;
      lVar8 = (**(code **)(local_58[1] + 0x30))
                        (*(undefined8 *)(local_58[1] + 0x50),&_kCDRecordSignature,4);
      if (lVar8 == 4) {
        _GenericHashInit(local_160,*(undefined1 *)((long)plVar19 + 0x2c));
        lVar8 = (**(code **)(plVar19[1] + 0x40))(*(undefined8 *)(plVar19[1] + 0x50),lVar22,0);
        pBVar3 = local_48;
        if (lVar22 == lVar8) {
          local_68 = pcVar12 + uVar20 + sVar6 + 0x1e;
          local_40 = pcVar12 + uVar20 + sVar6 + 0x25;
          while (pvVar18 = local_38, pcVar14 != (char *)0x0) {
            pcVar12 = "ce without args";
            if (pcVar14 < "ce without args") {
              pcVar12 = pcVar14;
            }
            pcVar9 = (char *)(**(code **)(plVar19[1] + 0x38))
                                       (*(undefined8 *)(plVar19[1] + 0x50),pBVar3,pcVar12);
            if (pcVar9 != pcVar12) {
              piVar7 = ___error();
              iVar4 = *piVar7;
              bVar16 = _gSZLogToSyslog ^ 1;
              if (_gSZLogToSyslog == 1) {
                iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                if (iVar5 == 0) {
                  bVar16 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  puVar2 = _SZGetLoggingHandle_logHandle;
                  pcVar14 = _strerror(iVar4);
                  __os_log_internal(0,puVar2,0x10,
                                    "Expected to read %ld bytes, but only got %ld bytes from outfile: %s"
                                    ,pcVar12,pcVar9,pcVar14);
                }
              }
              pvVar18 = local_38;
              uVar20 = 0;
              if ((bVar16 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a0c8e;
              _strerror(iVar4);
              pcVar13 = &cf_Expectedtoread_ldbytes_butonlygot_ldbytesfromoutfile__s;
              uVar15 = 0x411;
              goto LAB_000a0bce;
            }
            _GenericHashUpdate(local_160,pBVar3,pcVar12);
            pcVar14 = pcVar14 + -(long)pcVar12;
            if ((long)pcVar14 < 0) {
                    /* WARNING: Subroutine does not return */
              ___assert_rtn("ZipStreamWritePartialHashForLastChunk","ZipStream.c",0x418,
                            "remaining >= 0");
            }
          }
          _GenericHashFinal(local_38,local_160);
          pcVar12 = local_40;
          pcVar14 = (char *)(**(code **)(plVar19[1] + 0x40))
                                      (*(undefined8 *)(plVar19[1] + 0x50),local_40,0);
          piVar7 = ___error();
          sVar1 = local_88;
          if (pcVar12 == pcVar14) {
            *piVar7 = 0;
            sVar6 = (**(code **)(plVar19[1] + 0x30))
                              (*(undefined8 *)(plVar19[1] + 0x50),pvVar18,local_88);
            pcVar12 = local_68;
            if (sVar1 != sVar6) {
              piVar7 = ___error();
              iVar4 = *piVar7;
              bVar16 = _gSZLogToSyslog ^ 1;
              if (_gSZLogToSyslog == 1) {
                iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                if (iVar5 == 0) {
                  bVar16 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  puVar2 = _SZGetLoggingHandle_logHandle;
                  pcVar12 = _strerror(iVar4);
                  __os_log_internal(0,puVar2,0x10,"Failed to write digest to fixed metadata: %s",
                                    pcVar12);
                }
              }
              pvVar18 = local_38;
              uVar20 = 0;
              if ((bVar16 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a0c8e;
              pcVar12 = _strerror(iVar4);
              pcVar13 = &cf_Failedtowritedigesttofixedmetadata__s;
              uVar15 = 0x427;
              goto LAB_000a0665;
            }
            pcVar14 = (char *)(**(code **)(plVar19[1] + 0x40))
                                        (*(undefined8 *)(plVar19[1] + 0x50),local_68,0);
            if (pcVar12 == pcVar14) {
              crc = _crc32(0,(Bytef *)0x0,0);
              pcVar14 = *(char **)(local_50 + 0x30);
              goto LAB_000a042c;
            }
            piVar7 = ___error();
            iVar4 = *piVar7;
            bVar16 = _gSZLogToSyslog ^ 1;
            if (_gSZLogToSyslog == 1) {
              iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              if (iVar5 == 0) {
                bVar16 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                puVar2 = _SZGetLoggingHandle_logHandle;
                pcVar14 = _strerror(iVar4);
                __os_log_internal(0,puVar2,0x10,
                                  "Failed to seek to beginning of fixed metadata file data %llu: %s"
                                  ,pcVar12,pcVar14);
              }
            }
            pvVar18 = local_38;
            uVar20 = 0;
            if ((bVar16 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a0c8e;
            pcVar9 = _strerror(iVar4);
            pcVar13 = &cf_Failedtoseektobeginningoffixedmetadatafiledata_llu__s;
            uVar15 = 0x42f;
          }
          else {
            iVar4 = *piVar7;
            bVar16 = _gSZLogToSyslog ^ 1;
            if (_gSZLogToSyslog == 1) {
              iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              if (iVar5 == 0) {
                bVar16 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                puVar2 = _SZGetLoggingHandle_logHandle;
                pcVar12 = _strerror(iVar4);
                __os_log_internal(0,puVar2,0x10,
                                  "Failed to seek to digest offset %llu in fixed metadata: %s",
                                  local_40,pcVar12);
              }
            }
            pvVar18 = local_38;
            uVar20 = 0;
            if ((bVar16 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a0c8e;
            pcVar9 = _strerror(iVar4);
            pcVar13 = &cf_Failedtoseektodigestoffset_lluinfixedmetadata__s;
            uVar15 = 0x420;
            pcVar12 = local_40;
          }
LAB_000a0bce:
          __SZLog(3,"ZipStreamWritePartialHashForLastChunk",uVar15,pcVar13,pcVar12,pcVar9);
          uVar20 = 0;
          goto LAB_000a0c8e;
        }
        piVar7 = ___error();
        iVar4 = *piVar7;
        bVar16 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar5 == 0) {
            bVar16 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            puVar2 = _SZGetLoggingHandle_logHandle;
            pcVar12 = _strerror(iVar4);
            __os_log_internal(0,puVar2,0x10,
                              "Failed to seek to start of last partial chunk before CD: %s",pcVar12)
            ;
          }
        }
        pvVar18 = local_38;
        uVar20 = 0;
        if ((bVar16 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a0c8e;
        pcVar12 = _strerror(iVar4);
        pcVar13 = &cf_FailedtoseektostartoflastpartialchunkbeforeCD__s;
        uVar15 = 0x407;
      }
      else {
        piVar7 = ___error();
        iVar4 = *piVar7;
        bVar16 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar5 == 0) {
            bVar16 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            puVar2 = _SZGetLoggingHandle_logHandle;
            pcVar12 = _strerror(iVar4);
            __os_log_internal(0,puVar2,0x10,"Failed to write out first CD record signature: %s",
                              pcVar12);
          }
        }
        pvVar18 = local_38;
        uVar20 = 0;
        if ((bVar16 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a0c8e;
        pcVar12 = _strerror(iVar4);
        pcVar13 = &cf_FailedtowriteoutfirstCDrecordsignature__s;
        uVar15 = 0x3ff;
      }
LAB_000a0665:
      uVar20 = 0;
      __SZLog(3,"ZipStreamWritePartialHashForLastChunk",uVar15,pcVar13,pcVar12);
      goto LAB_000a0c8e;
    }
    bVar16 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      pvVar18 = local_38;
      if (iVar4 == 0) {
        bVar16 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                          "Not computing partial hash for last chunk because central directory signature ends at a chunk boundary."
                         );
      }
    }
    uVar20 = CONCAT71(uVar21,1);
    if ((bVar16 == 0) || (_gSZDefaultLogLevel < 7)) goto LAB_000a0c8e;
    pcVar13 = &
              cf_Notcomputingpartialhashforlastchunkbecausecentraldirectorysignatureendsatachunkboundary_
    ;
    uVar17 = 7;
    uVar15 = 0x3f3;
  }
LAB_000a0556:
  __SZLog(uVar17,"ZipStreamWritePartialHashForLastChunk",uVar15,pcVar13);
LAB_000a0c8e:
  _free(local_48);
  _free(pvVar18);
  return uVar20 & 0xffffffff;
LAB_000a042c:
  pBVar3 = local_48;
  lVar22 = local_50;
  pcVar12 = local_80;
  if ((long)pcVar14 < 1) {
    *(int *)(local_50 + 0x20) = (int)crc;
    pcVar14 = (char *)(**(code **)(plVar19[1] + 0x40))
                                (*(undefined8 *)(plVar19[1] + 0x50),local_80,0);
    if (pcVar12 != pcVar14) {
      piVar7 = ___error();
      iVar4 = *piVar7;
      bVar16 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar5 == 0) {
          bVar16 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          puVar2 = _SZGetLoggingHandle_logHandle;
          pcVar14 = _strerror(iVar4);
          __os_log_internal(0,puVar2,0x10,
                            "Failed to seek to fixed metadata LF header at offset %llu: %s",pcVar12,
                            pcVar14);
        }
      }
      pvVar18 = local_38;
      uVar20 = 0;
      if ((bVar16 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a0c8e;
      pcVar9 = _strerror(iVar4);
      pcVar13 = &cf_FailedtoseektofixedmetadataLFheaderatoffset_llu__s;
      uVar15 = 0x449;
      goto LAB_000a0bce;
    }
    lVar11 = plVar19[1];
    pvVar10 = (void *)_CreateLocalFileRecordFromMutable(lVar22);
    lVar8 = (ulong)*(ushort *)((long)pvVar10 + 0x1a) + 0x1e +
            (ulong)*(ushort *)((long)pvVar10 + 0x1c);
    lVar11 = (**(code **)(lVar11 + 0x30))(*(undefined8 *)(lVar11 + 0x50),pvVar10,lVar8);
    pvVar18 = (void *)0x0;
    if (lVar11 != lVar8) {
      pvVar18 = pvVar10;
    }
    _free(pvVar18);
    if (lVar11 != lVar8 || pvVar10 == (void *)0x0) {
      bVar16 = _gSZLogToSyslog ^ 1;
      pvVar18 = local_38;
      if (_gSZLogToSyslog == 1) {
        iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        pvVar18 = local_38;
        if (iVar4 == 0) {
          bVar16 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                            "Failed to write updated fixed metadata LF record");
        }
      }
      uVar20 = 0;
      if ((bVar16 == 0) || (uVar20 = 0, _gSZDefaultLogLevel < 3)) goto LAB_000a0c8e;
      pcVar13 = &cf_FailedtowriteupdatedfixedmetadataLFrecord;
      uVar20 = 0;
      uVar17 = 3;
      uVar15 = 0x44f;
      goto LAB_000a0556;
    }
    _free(pvVar10);
    lVar8 = local_78;
    *(undefined4 *)(local_60 + 0x1c) = *(undefined4 *)(lVar22 + 0x20);
    lVar22 = (**(code **)(plVar19[1] + 0x40))(*(undefined8 *)(plVar19[1] + 0x50),local_78,0);
    if (lVar22 == lVar8) {
      *local_70 = 1;
      uVar20 = CONCAT71((int7)((ulong)plVar19 >> 8),1);
      pvVar18 = local_38;
      goto LAB_000a0c8e;
    }
    piVar7 = ___error();
    iVar4 = *piVar7;
    bVar16 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar5 == 0) {
        bVar16 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        puVar2 = _SZGetLoggingHandle_logHandle;
        pcVar12 = _strerror(iVar4);
        __os_log_internal(0,puVar2,0x10,
                          "Failed to seek to the beginning of the central directory: %s",pcVar12);
      }
    }
    pvVar18 = local_38;
    uVar20 = 0;
    if ((bVar16 == 0) || (uVar20 = 0, _gSZDefaultLogLevel < 3)) goto LAB_000a0c8e;
    pcVar12 = _strerror(iVar4);
    pcVar13 = &cf_Failedtoseektothebeginningofthecentraldirectory__s;
    uVar15 = 0x45a;
    goto LAB_000a0665;
  }
  pcVar12 = "ce without args";
  if (pcVar14 < "ce without args") {
    pcVar12 = pcVar14;
  }
  pcVar9 = (char *)(**(code **)(plVar19[1] + 0x38))
                             (*(undefined8 *)(plVar19[1] + 0x50),local_48,pcVar12);
  if (pcVar9 != pcVar12) {
    piVar7 = ___error();
    iVar4 = *piVar7;
    bVar16 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar5 == 0) {
        bVar16 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        puVar2 = _SZGetLoggingHandle_logHandle;
        pcVar14 = _strerror(iVar4);
        __os_log_internal(0,puVar2,0x10,
                          "Expected to read %ld bytes, but only got %ld bytes from outfile: %s",
                          pcVar12,pcVar9,pcVar14);
      }
    }
    pvVar18 = local_38;
    uVar20 = 0;
    if ((bVar16 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a0c8e;
    _strerror(iVar4);
    pcVar13 = &cf_Expectedtoread_ldbytes_butonlygot_ldbytesfromoutfile__s;
    uVar15 = 0x43a;
    goto LAB_000a0bce;
  }
  crc = _crc32(crc,pBVar3,(uInt)pcVar12);
  pcVar14 = pcVar14 + -(long)pcVar12;
  plVar19 = local_58;
  if ((long)pcVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    ___assert_rtn("ZipStreamWritePartialHashForLastChunk","ZipStream.c",0x441,"remaining >= 0");
  }
  goto LAB_000a042c;
}

