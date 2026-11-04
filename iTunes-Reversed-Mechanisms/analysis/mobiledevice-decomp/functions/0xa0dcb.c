// rea decompile_all
// name: _ZipStreamWriteCentralDirectoryAndEndRecords
// address: 0xa0dcb
// body: available
// range: 0xa0dcb-0xa1d1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xa1bca to 0x2aa002 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ZipStreamWriteCentralDirectoryAndEndRecords
                (undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                ulong *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ushort uVar5;
  undefined *puVar6;
  ulong *puVar7;
  char cVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  char *pcVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  void *pvVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  ulong uVar22;
  cfstringStruct *pcVar23;
  long *plVar24;
  undefined8 unaff_RBX;
  ulong uVar25;
  void *pvVar26;
  byte bVar27;
  long lVar28;
  undefined4 local_78;
  long local_74;
  undefined8 uStack_6c;
  undefined2 local_64;
  long local_60;
  ulong *local_58;
  ulong local_50;
  undefined4 *local_48;
  long local_40;
  char local_31;
  
  local_31 = '\0';
  uVar13 = param_5[1];
  local_48 = param_1;
  if (*(char *)((long)param_5 + 0x31) == '\x01') {
    lVar12 = (**(code **)(uVar13 + 0x30))(*(undefined8 *)(uVar13 + 0x50),&_kCDRecordSignature,4);
    if (lVar12 == 4) {
      bVar27 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar10 == 0) {
          bVar27 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                            "Wrote central directory header to trigger stream end");
        }
      }
      uVar13 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
      if ((bVar27 != 0) && (6 < _gSZDefaultLogLevel)) {
        __SZLog(7,"ZipStreamWriteCentralDirectoryAndEndRecords",0x476,
                &cf_Wrotecentraldirectoryheadertotriggerstreamend);
      }
    }
    else {
      piVar14 = ___error();
      iVar10 = *piVar14;
      bVar27 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar11 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar11 == 0) {
          bVar27 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          puVar6 = _SZGetLoggingHandle_logHandle;
          pcVar15 = _strerror(iVar10);
          __os_log_internal(0,puVar6,0x10,"Failed to write central directory record signature: %s",
                            pcVar15);
        }
      }
      uVar13 = 0;
      if ((bVar27 != 0) && (2 < _gSZDefaultLogLevel)) {
        pcVar15 = _strerror(iVar10);
        uVar13 = 0;
        __SZLog(3,"ZipStreamWriteCentralDirectoryAndEndRecords",0x473,
                &cf_Failedtowritecentraldirectoryrecordsignature__s,pcVar15);
      }
    }
    goto LAB_000a19f1;
  }
  uVar13 = (**(code **)(uVar13 + 0x48))(*(undefined8 *)(uVar13 + 0x50));
  if ((long)uVar13 < 0) {
    piVar14 = ___error();
    iVar10 = *piVar14;
    bVar27 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar11 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar11 == 0) {
        bVar27 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        puVar6 = _SZGetLoggingHandle_logHandle;
        pcVar15 = _strerror(iVar10);
        __os_log_internal(0,puVar6,0x10,"ftello before writing central directory failed: %s",pcVar15
                         );
      }
    }
    puVar20 = (undefined4 *)0x0;
    uVar13 = 0;
    if (bVar27 != 0) {
      puVar21 = (undefined4 *)0x0;
      if (_gSZDefaultLogLevel < 3) goto LAB_000a19e1;
      pcVar15 = _strerror(iVar10);
      pcVar23 = &cf_ftellobeforewritingcentraldirectoryfailed__s;
      uVar16 = 0x47d;
LAB_000a19d1:
      __SZLog(3,"ZipStreamWriteCentralDirectoryAndEndRecords",uVar16,pcVar23,pcVar15);
    }
LAB_000a19de:
    puVar20 = (undefined4 *)0x0;
    uVar13 = 0;
    puVar21 = (undefined4 *)0x0;
  }
  else {
    local_58 = param_5;
    if ((*param_5 != 0) && (*(char *)((long)param_5 + 0x2f) == '\0')) {
      bVar27 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar10 == 0) {
          bVar27 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,"Writing partial hash");
        }
      }
      if ((bVar27 != 0) && (6 < _gSZDefaultLogLevel)) {
        __SZLog(7,"ZipStreamWriteCentralDirectoryAndEndRecords",0x482,&cf_Writingpartialhash);
      }
      uVar16 = _CFArrayGetValueAtIndex(local_48,param_2);
      cVar8 = _ZipStreamWritePartialHashForLastChunk(uVar13,uVar16,param_3,&local_31,local_58);
      if (cVar8 == '\0') goto LAB_000a19de;
    }
    bVar27 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar10 == 0) {
        bVar27 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,"Writing Central Directory");
      }
    }
    local_50 = uVar13;
    local_40 = param_4;
    if ((bVar27 != 0) && (6 < _gSZDefaultLogLevel)) {
      __SZLog(7,"ZipStreamWriteCentralDirectoryAndEndRecords",0x488,&cf_WritingCentralDirectory);
    }
    local_60 = _CFArrayGetCount(local_48);
    if (0 < local_60) {
      plVar1 = (long *)(local_40 + 0x58);
      plVar2 = (long *)(local_40 + 0x50);
      plVar3 = (long *)(local_40 + 0x48);
      plVar4 = (long *)(local_40 + 0x40);
      plVar17 = (long *)(local_40 + 0x60);
      lVar12 = 0;
      do {
        lVar18 = _CFArrayGetValueAtIndex(local_48,lVar12);
        uVar5 = *(ushort *)(lVar18 + 6);
        if (uVar5 < 0xe) {
          plVar24 = plVar4;
          if ((uVar5 != 0) && (plVar24 = plVar3, uVar5 != 8)) {
LAB_000a1258:
            plVar24 = plVar17;
          }
        }
        else {
          plVar24 = plVar1;
          if ((uVar5 != 0xe) && (plVar24 = plVar2, uVar5 != 99)) goto LAB_000a1258;
        }
        *plVar24 = *plVar24 + 1;
        uVar13 = local_58[1];
        pvVar19 = (void *)_CreateCDRecordFromMutable(lVar18);
        lVar28 = (ulong)*(ushort *)((long)pvVar19 + 0x20) +
                 (ulong)*(ushort *)((long)pvVar19 + 0x1e) + (ulong)*(ushort *)((long)pvVar19 + 0x1c)
                 + 0x2e;
        lVar18 = (**(code **)(uVar13 + 0x30))(*(undefined8 *)(uVar13 + 0x50),pvVar19,lVar28);
        pvVar26 = (void *)0x0;
        if (lVar18 != lVar28) {
          pvVar26 = pvVar19;
        }
        _free(pvVar26);
        if ((lVar18 != lVar28) || (pvVar19 == (void *)0x0)) {
          bVar27 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar10 == 0) {
              bVar27 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              puVar6 = _SZGetLoggingHandle_logHandle;
              piVar14 = ___error();
              pcVar15 = _strerror(*piVar14);
              __os_log_internal(0,puVar6,0x10,"Failed to write central directory record: %s",pcVar15
                               );
            }
          }
          puVar20 = (undefined4 *)0x0;
          uVar13 = 0;
          if (bVar27 == 0) goto LAB_000a19de;
          puVar21 = (undefined4 *)0x0;
          if (_gSZDefaultLogLevel < 3) goto LAB_000a19e1;
          piVar14 = ___error();
          pcVar15 = _strerror(*piVar14);
          pcVar23 = &cf_Failedtowritecentraldirectoryrecord__s;
          uVar16 = 0x4a4;
          goto LAB_000a19d1;
        }
        _free(pvVar19);
        lVar12 = lVar12 + 1;
      } while (local_60 != lVar12);
    }
    lVar12 = local_60;
    bVar27 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar10 == 0) {
        bVar27 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                          "Writing end of central directory records");
      }
    }
    if ((bVar27 != 0) && (6 < _gSZDefaultLogLevel)) {
      __SZLog(7,"ZipStreamWriteCentralDirectoryAndEndRecords",0x4aa,
              &cf_Writingendofcentraldirectoryrecords);
    }
    lVar18 = (**(code **)(local_58[1] + 0x48))(*(undefined8 *)(local_58[1] + 0x50));
    if (lVar18 < 0) {
      piVar14 = ___error();
      iVar10 = *piVar14;
      bVar27 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar11 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar11 == 0) {
          bVar27 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          puVar6 = _SZGetLoggingHandle_logHandle;
          pcVar15 = _strerror(iVar10);
          __os_log_internal(0,puVar6,0x10,"ftello after writing central directory failed: %s",
                            pcVar15);
        }
      }
      puVar20 = (undefined4 *)0x0;
      uVar13 = 0;
      if (bVar27 != 0) {
        puVar21 = (undefined4 *)0x0;
        if (2 < _gSZDefaultLogLevel) {
          pcVar15 = _strerror(iVar10);
          pcVar23 = &cf_ftelloafterwritingcentraldirectoryfailed__s;
          uVar16 = 0x4b1;
          goto LAB_000a19d1;
        }
        goto LAB_000a19e1;
      }
      goto LAB_000a19de;
    }
    lVar28 = lVar18 - local_50;
    bVar27 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar10 == 0) {
        bVar27 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                          "Zip64 triggers: total_cd_records %lu; cd_offset %lld; cd_length %llu; max compressed_size %llu; max uncompressed_size %llu"
                          ,lVar12,local_50,lVar28,*(undefined8 *)(local_40 + 0x90),
                          *(undefined8 *)(local_40 + 0x88));
      }
    }
    if ((bVar27 != 0) && (6 < _gSZDefaultLogLevel)) {
      __SZLog(7,"ZipStreamWriteCentralDirectoryAndEndRecords",0x4b6,
              &
              cf_Zip64triggers_total_cd_records_lu_cd_offset_lld_cd_length_llu_maxcompressed_size_llu_maxuncompressed_size_llu
              ,lVar12,local_50,lVar28,*(undefined8 *)(local_40 + 0x90),
              *(undefined8 *)(local_40 + 0x88));
    }
    if (((((long)local_50 < 0xffffffff) && (lVar12 < 0xffff)) && (lVar28 < 0xffffffff)) &&
       ((*(ulong *)(local_40 + 0x88) < 0xffffffff && (*(ulong *)(local_40 + 0x90) < 0xffffffff)))) {
      puVar21 = (undefined4 *)0x0;
      puVar20 = (undefined4 *)0x0;
LAB_000a188b:
      uVar9 = (undefined2)lVar12;
LAB_000a188e:
      uVar13 = local_50;
      local_64 = 0;
      local_78 = 0x6054b50;
      local_74 = (ulong)CONCAT22(uVar9,uVar9) << 0x20;
      if (0xfffffffe < lVar28) {
        lVar28 = 0xffffffff;
      }
      uVar22 = 0xffffffff;
      if ((long)local_50 < 0xffffffff) {
        uVar22 = local_50;
      }
      uStack_6c = CONCAT44((int)uVar22,(int)lVar28);
      piVar14 = ___error();
      puVar7 = local_58;
      *piVar14 = 0;
      lVar18 = (**(code **)(local_58[1] + 0x30))(*(undefined8 *)(local_58[1] + 0x50),&local_78,0x16)
      ;
      lVar12 = local_40;
      if (lVar18 == 0x16) {
        uVar22 = puVar7[1];
        uVar22 = (**(code **)(uVar22 + 0x48))(*(undefined8 *)(uVar22 + 0x50));
        if ((long)uVar22 < 0) {
          piVar14 = ___error();
          iVar10 = *piVar14;
          bVar27 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar11 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar11 == 0) {
              bVar27 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              puVar6 = _SZGetLoggingHandle_logHandle;
              pcVar15 = _strerror(iVar10);
              __os_log_internal(0,puVar6,0x10,"Failed to determine offset of output file: %s",
                                pcVar15);
            }
          }
          uVar13 = 0;
          if ((bVar27 != 0) && (2 < _gSZDefaultLogLevel)) {
            pcVar15 = _strerror(iVar10);
            pcVar23 = &cf_Failedtodetermineoffsetofoutputfile__s;
            uVar16 = 0x510;
            goto LAB_000a1ba1;
          }
        }
        else {
          uVar25 = *puVar7;
          if ((uVar25 == 0) || (local_31 == '\x01')) {
            uVar25 = uVar13 + 4;
          }
          else {
            uVar25 = (uVar25 + uVar13) - uVar13 % uVar25;
            if (uVar22 <= uVar25) {
              uVar25 = uVar22;
            }
          }
          *(ulong *)(lVar12 + 0x80) = uVar25;
          *(ulong *)(lVar12 + 0x68) = uVar22 - uVar13;
          uVar13 = CONCAT71((int7)((ulong)lVar12 >> 8),1);
        }
      }
      else {
        piVar14 = ___error();
        iVar10 = *piVar14;
        bVar27 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar11 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar11 == 0) {
            bVar27 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            puVar6 = _SZGetLoggingHandle_logHandle;
            pcVar15 = _strerror(iVar10);
            __os_log_internal(0,puVar6,0x10,"Failed to write end record: %s",pcVar15);
          }
        }
        uVar13 = 0;
        if ((bVar27 != 0) && (uVar13 = 0, 2 < _gSZDefaultLogLevel)) {
          pcVar15 = _strerror(iVar10);
          pcVar23 = &cf_Failedtowriteendrecord__s;
          uVar16 = 0x509;
LAB_000a1ba1:
          __SZLog(3,"ZipStreamWriteCentralDirectoryAndEndRecords",uVar16,pcVar23,pcVar15);
          uVar13 = 0;
        }
      }
    }
    else {
      bVar27 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar10 == 0) {
          bVar27 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,"Writing Zip64 records");
        }
      }
      if ((bVar27 != 0) && (6 < _gSZDefaultLogLevel)) {
        __SZLog(7,"ZipStreamWriteCentralDirectoryAndEndRecords",0x4c1,&cf_WritingZip64records);
      }
      *(undefined1 *)(local_40 + 200) = 1;
      puVar20 = _calloc(1,0x14);
      puVar20[4] = 1;
      *puVar20 = 0x7064b50;
      puVar21 = _calloc(1,0x38);
      *puVar21 = 0x6064b50;
      *(undefined8 *)(puVar21 + 1) = 0x2c;
      puVar21[3] = 0x2d031e;
      *(long *)(puVar20 + 2) = lVar18;
      *(long *)(puVar21 + 6) = lVar12;
      *(long *)(puVar21 + 8) = lVar12;
      *(long *)(puVar21 + 10) = lVar28;
      *(ulong *)(puVar21 + 0xc) = local_50;
      uVar13 = *(long *)(puVar21 + 1) + 0xc;
      local_48 = puVar20;
      if (0x7ffffffffffffffe < uVar13) {
                    /* WARNING: Subroutine does not return */
        ___assert_rtn("ZipStreamWriteCentralDirectoryAndEndRecords","ZipStream.c",0x4da,
                      "writeSize < INTPTR_MAX");
      }
      piVar14 = ___error();
      puVar7 = local_58;
      *piVar14 = 0;
      uVar22 = (**(code **)(local_58[1] + 0x30))(*(undefined8 *)(local_58[1] + 0x50),puVar21,uVar13)
      ;
      piVar14 = ___error();
      puVar20 = local_48;
      if (uVar13 == uVar22) {
        *piVar14 = 0;
        lVar12 = (**(code **)(puVar7[1] + 0x30))(*(undefined8 *)(puVar7[1] + 0x50),local_48,0x14);
        if (lVar12 == 0x14) {
          uVar9 = 0xffff;
          lVar12 = local_60;
          if (local_60 < 0x10000) goto LAB_000a188b;
          goto LAB_000a188e;
        }
        piVar14 = ___error();
        iVar10 = *piVar14;
        bVar27 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar11 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar11 == 0) {
            bVar27 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            puVar6 = _SZGetLoggingHandle_logHandle;
            pcVar15 = _strerror(iVar10);
            __os_log_internal(0,puVar6,0x10,"Failed to write zip64 end record locator: %s",pcVar15);
          }
        }
        uVar13 = 0;
        if ((bVar27 != 0) && (2 < _gSZDefaultLogLevel)) {
          pcVar15 = _strerror(iVar10);
          pcVar23 = &cf_Failedtowritezip64endrecordlocator__s;
          uVar16 = 0x4e8;
          goto LAB_000a1ba1;
        }
      }
      else {
        iVar10 = *piVar14;
        bVar27 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar11 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          puVar20 = local_48;
          if (iVar11 == 0) {
            bVar27 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            puVar6 = _SZGetLoggingHandle_logHandle;
            pcVar15 = _strerror(iVar10);
            __os_log_internal(0,puVar6,0x10,"Failed to write zip64 end record: %s",pcVar15);
          }
        }
        uVar13 = 0;
        if ((bVar27 != 0) && (2 < _gSZDefaultLogLevel)) {
          pcVar15 = _strerror(iVar10);
          pcVar23 = &cf_Failedtowritezip64endrecord__s;
          uVar16 = 0x4df;
          goto LAB_000a1ba1;
        }
      }
    }
  }
LAB_000a19e1:
  _free(puVar21);
  _free(puVar20);
LAB_000a19f1:
  return uVar13 & 0xffffffff;
}

