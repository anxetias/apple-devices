// rea decompile_all
// name: _ConvertZipToStream
// address: 0xa2e3c
// body: available
// range: 0xa2e3c-0xa4353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ConvertZipToStream(char *param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  long lVar10;
  time_t tVar11;
  time_t tVar12;
  void *pvVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  cfstringStruct *pcVar17;
  void **ppvVar18;
  byte bVar19;
  void *pvVar20;
  void *pvVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  ulong local_f0;
  ulong local_e8;
  void *local_e0;
  void *local_d8;
  uint local_cc;
  void *local_c8;
  void *local_c0;
  void *local_b8;
  void *local_b0;
  char *local_a8;
  ulong local_a0;
  ulong local_98;
  void *local_90;
  undefined8 local_88;
  undefined8 local_80;
  void *local_78;
  long local_70;
  long local_68;
  long local_60;
  ushort local_58;
  ushort local_56;
  undefined4 local_54;
  void *local_50;
  ulong local_48;
  long local_40;
  void *local_38;
  
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  cVar5 = _ZipStreamConfigureOutput(param_3);
  if (cVar5 != '\0') {
    if ((*param_3 != 0) && (*(char *)((long)param_3 + 0x2f) == '\x01')) {
      bVar19 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar6 == 0) {
          bVar19 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                            "Ignoring hashed chunk size supplied because output seeking is disallowed."
                           );
        }
      }
      if ((bVar19 != 0) && (2 < _gSZDefaultLogLevel)) {
        __SZLog(3,"ConvertZipToStream",0x2f0,
                &cf_Ignoringhashedchunksizesuppliedbecauseoutputseekingisdisallowed_);
      }
      *param_3 = 0;
    }
    iVar6 = _lstat_INODE64(param_1,&local_198);
    if (iVar6 == 0) {
      if (SBORROW2(0,local_198._4_2_ & 0xf000)) {
        local_70 = param_2;
        lVar10 = _OpenZipFile(param_1,*(undefined1 *)((long)param_3 + 0x2e));
        if (lVar10 != 0) {
          local_a8 = param_1;
          _ZipStreamCallPreflightResultCallback
                    (param_3[1],*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 8),
                     local_198._4_2_);
          uVar23 = 0;
          local_d8 = (void *)0x0;
          local_108 = 0;
          local_90 = (void *)0x0;
          local_88 = 0;
          local_c8 = (void *)0x0;
          local_c0 = (void *)0x0;
          local_80 = 0;
          local_78 = (void *)0x0;
          local_b8 = (void *)0x0;
          local_b0 = (void *)0x0;
          local_100 = -1;
          local_f8 = -1;
          local_58 = 0;
          local_56 = 0;
          cVar5 = __ReadOriginalCentralDirectory(lVar10);
          lVar14 = local_100;
          local_60 = lVar10;
          if (cVar5 == '\0') {
            lVar14 = 0;
LAB_000a32c5:
            local_38 = (void *)((ulong)local_38 & 0xffffffff00000000);
          }
          else {
            local_48 = (long)local_d8 + (((ulong)(local_100 == -1) + 1) - (ulong)(*param_3 == 0));
            local_38 = local_d8;
            local_40 = _CFArrayCreateMutable
                                 (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                                  (long)local_d8 + 3,0);
            pvVar13 = local_90;
            lVar16 = local_f8;
            if (local_f8 != -1) {
              _CFArrayAppendValue(local_40,*(undefined8 *)((long)local_90 + local_f8 * 8));
              *(undefined8 *)((long)pvVar13 + lVar16 * 8) = 0;
              lVar10 = local_60;
            }
            pvVar13 = local_90;
            local_48 = local_48 + 1;
            if (lVar14 == -1) {
              uVar23 = _CFArrayGetCount();
              uVar15 = _kZipMetadataDirectory;
              tVar11 = _time((time_t *)0x0);
              tVar12 = _time((time_t *)0x0);
              pvVar13 = (void *)_CreateCDRecord(uVar15,0x41ed,tVar11,tVar12);
              uVar15 = _CreateMutableCDRecord(pvVar13);
              _CFArrayAppendValue(local_40,uVar15);
              pvVar20 = (void *)_CreateLocalFileRecord(pvVar13,0x1f5,0x1f5);
              local_b0 = (void *)_CreateMutableLocalFileRecord(pvVar20);
              _free(pvVar20);
              _free(pvVar13);
            }
            else {
              _CFArrayAppendValue(local_40,*(undefined8 *)((long)local_90 + lVar14 * 8));
              *(undefined8 *)((long)pvVar13 + lVar14 * 8) = 0;
              uVar23 = 0xffffffffffffffff;
            }
            local_f0 = (ulong)local_56;
            local_cc = (uint)local_58;
            cVar5 = _ZipStreamConcoctStreamData
                              (local_48,local_108,local_58,local_f0,param_3,&local_88,&local_c8,
                               &local_c0);
            lVar14 = local_40;
            if (cVar5 == '\0') {
              bVar19 = _gSZLogToSyslog ^ 1;
              uVar23 = local_48;
              if (_gSZLogToSyslog == 1) {
                iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                uVar23 = local_48;
                if (iVar6 == 0) {
                  bVar19 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                    "Failed to concoct stream data");
                }
              }
              uVar22 = (ulong)local_38 >> 0x20;
              local_38 = (void *)(uVar22 << 0x20);
              if ((bVar19 != 0) && (2 < _gSZDefaultLogLevel)) {
                pcVar17 = &cf_Failedtoconcoctstreamdata;
                local_38 = (void *)(uVar22 << 0x20);
                uVar15 = 0x24d;
LAB_000a37cb:
                __SZLog(3,"_ProcessZipFile",uVar15,pcVar17);
              }
            }
            else {
              local_e8 = _CFArrayGetCount(local_40);
              _CFArrayAppendValue(lVar14);
              local_88 = 0;
              local_a0 = 0xffffffffffffffff;
              if ((*param_3 != 0) && (*(char *)((long)param_3 + 0x2f) == '\0')) {
                cVar5 = _ZipStreamConcoctFixedStreamData(param_3,&local_80,&local_78,&local_b8);
                if (cVar5 == '\0') {
                  bVar19 = _gSZLogToSyslog ^ 1;
                  uVar23 = local_48;
                  if (_gSZLogToSyslog == 1) {
                    iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                    uVar23 = local_48;
                    if (iVar6 == 0) {
                      bVar19 = 1;
                    }
                    else {
                      if (_SZGetLoggingHandle_onceToken != -1) {
                        _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                      }
                      __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                        "Failed to concoct fixed stream data");
                    }
                  }
                  uVar22 = (ulong)local_38 >> 0x20;
                  local_38 = (void *)(uVar22 << 0x20);
                  if ((bVar19 != 0) && (2 < _gSZDefaultLogLevel)) {
                    pcVar17 = &cf_Failedtoconcoctfixedstreamdata;
                    local_38 = (void *)(uVar22 << 0x20);
                    uVar15 = 599;
                    goto LAB_000a37cb;
                  }
                  goto LAB_000a3c90;
                }
                local_a0 = _CFArrayGetCount(lVar14);
                _CFArrayAppendValue(lVar14);
                local_80 = 0;
              }
              pvVar13 = local_90;
              if (local_38 == (void *)0x0) {
                _qsort(local_90,0,8,(int *)__SortZipEntries);
              }
              else {
                pvVar20 = (void *)0x0;
                do {
                  lVar10 = *(long *)((long)pvVar13 + (long)pvVar20 * 8);
                  if (lVar10 != 0) {
                    uVar15 = *(undefined8 *)(lVar10 + 0x48);
                    local_50 = (void *)((ulong)local_50 & 0xffffffffffffff00);
                    cVar5 = _ZipStreamShouldOrderFileEarly(uVar15,&local_50);
                    if (cVar5 != '\0') {
                      _CFArrayAppendValue(local_40,*(undefined8 *)
                                                    ((long)pvVar13 + (long)pvVar20 * 8));
                      uVar1 = *(undefined8 *)((long)pvVar13 + (long)pvVar20 * 8);
                      *(undefined8 *)((long)pvVar13 + (long)pvVar20 * 8) = 0;
                      if ((char)local_50 == '\x01') {
                        local_68 = 0;
                        cVar5 = __GetCDIndexOfBundleExecutableForInfoPlist
                                          (local_60,pvVar13,local_38,uVar1,&local_68);
                        lVar10 = local_68;
                        if (cVar5 == '\0') {
                          bVar19 = _gSZLogToSyslog ^ 1;
                          if (_gSZLogToSyslog == 1) {
                            local_98 = CONCAT71(local_98._1_7_,1) ^ 1;
                            iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                            if (iVar6 == 0) {
                              bVar19 = 1;
                            }
                            else {
                              if (_SZGetLoggingHandle_onceToken != -1) {
                                _dispatch_once(&_SZGetLoggingHandle_onceToken,
                                               &___block_literal_global);
                              }
                              __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                                                "Failed to find executable for bundle Info.plist %s"
                                                ,uVar15);
                              bVar19 = (byte)local_98;
                            }
                          }
                          if ((bVar19 != 0) && (6 < _gSZDefaultLogLevel)) {
                            __SZLog(7,"_ProcessZipFile",0x272,
                                    &cf_FailedtofindexecutableforbundleInfo_plist_s,uVar15);
                          }
                        }
                        else {
                          *(undefined8 *)(local_70 + 0x78) =
                               *(undefined8 *)(*(long *)((long)pvVar13 + local_68 * 8) + 0x28);
                          _CFArrayAppendValue(local_40);
                          *(undefined8 *)((long)pvVar13 + lVar10 * 8) = 0;
                        }
                      }
                    }
                  }
                  pvVar20 = (void *)((long)pvVar20 + 1);
                } while (local_38 != pvVar20);
                _qsort(pvVar13,(size_t)local_38,8,(int *)__SortZipEntries);
                lVar10 = local_60;
                pvVar20 = (void *)0x0;
                do {
                  if (*(long *)((long)pvVar13 + (long)pvVar20 * 8) != 0) {
                    _CFArrayAppendValue(local_40);
                    *(undefined8 *)((long)pvVar13 + (long)pvVar20 * 8) = 0;
                  }
                  pvVar20 = (void *)((long)pvVar20 + 1);
                } while (local_38 != pvVar20);
              }
              bVar19 = _gSZLogToSyslog ^ 1;
              lVar14 = local_40;
              uVar22 = local_48;
              local_98 = uVar23;
              if (_gSZLogToSyslog != 0) {
                iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                lVar14 = local_40;
                uVar22 = local_48;
                if (iVar6 == 0) {
                  bVar19 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,"Writing local files");
                }
              }
              if ((bVar19 != 0) && (6 < _gSZDefaultLogLevel)) {
                __SZLog(7,"_ProcessZipFile",0x28c,&cf_Writinglocalfiles);
              }
              uVar23 = _CFArrayGetCount(lVar14);
              if (uVar22 == uVar23) {
                uVar23 = 0;
                if (uVar22 != 0) {
                  local_e0 = local_b8;
                  local_38 = local_c0;
                  uVar22 = 0;
                  do {
                    lVar14 = _CFArrayGetValueAtIndex(local_40,uVar22);
                    local_50 = (void *)0x0;
                    local_54 = 0;
                    uVar15 = *(undefined8 *)(lVar14 + 0x48);
                    bVar19 = _gSZLogToSyslog ^ 1;
                    local_68 = lVar14;
                    if (_gSZLogToSyslog == 1) {
                      iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                      if (iVar6 == 0) {
                        bVar19 = 1;
                      }
                      else {
                        if (_SZGetLoggingHandle_onceToken != -1) {
                          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                        }
                        __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,"Processing file %s",
                                          uVar15);
                      }
                    }
                    if ((bVar19 != 0) && (6 < _gSZDefaultLogLevel)) {
                      __SZLog(7,"_ProcessZipFile",0x29e,&cf_Processingfile_s,uVar15);
                    }
                    lVar10 = local_60;
                    if (local_e8 == uVar22) {
                      bVar3 = false;
                      ppvVar18 = &local_c8;
                      pvVar13 = local_38;
                    }
                    else if (local_a0 == uVar22) {
                      bVar3 = false;
                      ppvVar18 = &local_78;
                      pvVar13 = local_e0;
                    }
                    else {
                      if (local_98 == uVar22) {
                        bVar3 = false;
                        ppvVar18 = &local_b0;
                      }
                      else {
                        local_50 = (void *)_CopyLocalFileHeader(local_60,lVar14,&local_54);
                        if (local_50 == (void *)0x0) {
                          bVar19 = _gSZLogToSyslog ^ 1;
                          if (_gSZLogToSyslog == 1) {
                            iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                            if (iVar6 == 0) {
                              bVar19 = 1;
                            }
                            else {
                              if (_SZGetLoggingHandle_onceToken != -1) {
                                _dispatch_once(&_SZGetLoggingHandle_onceToken,
                                               &___block_literal_global);
                              }
                              __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                                "CopyLocalFileHeader returned error %d",local_54);
                              lVar10 = local_60;
                            }
                          }
                          lVar14 = local_40;
                          uVar23 = local_48;
                          if ((bVar19 != 0) && (2 < _gSZDefaultLogLevel)) {
                            __SZLog(3,"_ProcessZipFile",0x2ae,&cf_CopyLocalFileHeaderreturnederror_d
                                    ,local_54);
                          }
                          goto LAB_000a32c5;
                        }
                        bVar3 = true;
                        ppvVar18 = &local_50;
                      }
                      pvVar13 = (void *)0x0;
                    }
                    cVar5 = _ZipStreamWriteLocalFile
                                      (lVar10,&local_68,ppvVar18,pvVar13,0,local_cc,local_f0,
                                       local_70,param_3);
                    if (cVar5 == '\0') {
                      bVar19 = _gSZLogToSyslog ^ 1;
                      if (_gSZLogToSyslog == 1) {
                        iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                        if (iVar6 == 0) {
                          bVar19 = 1;
                        }
                        else {
                          if (_SZGetLoggingHandle_onceToken != -1) {
                            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                          }
                          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                            "Failed to write local file %s",uVar15);
                        }
                      }
                      if ((bVar19 != 0) && (2 < _gSZDefaultLogLevel)) {
                        __SZLog(3,"_ProcessZipFile",0x2b4,&cf_Failedtowritelocalfile_s,uVar15);
                      }
                      lVar14 = local_40;
                      uVar23 = local_48;
                      if (bVar3) {
                        _free(local_50);
                      }
                      goto LAB_000a32c5;
                    }
                    _CFArraySetValueAtIndex(local_40,uVar22,local_68);
                    if (bVar3) {
                      _DestroyMutableLocalFileRecord(local_50);
                    }
                    uVar22 = uVar22 + 1;
                    uVar23 = local_48;
                  } while (local_48 != uVar22);
                }
                lVar14 = local_40;
                uVar15 = _ZipStreamWriteCentralDirectoryAndEndRecords
                                   (local_40,local_a0,local_78,local_70,param_3);
                if ((char)uVar15 == '\0') {
                  bVar19 = _gSZLogToSyslog ^ 1;
                  if (_gSZLogToSyslog == 1) {
                    iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                    if (iVar6 == 0) {
                      bVar19 = 1;
                    }
                    else {
                      if (_SZGetLoggingHandle_onceToken != -1) {
                        _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                      }
                      __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                        "Failed to finish writing archive.");
                    }
                  }
                  uVar22 = (ulong)local_38 >> 0x20;
                  local_38 = (void *)(uVar22 << 0x20);
                  if ((bVar19 != 0) && (2 < _gSZDefaultLogLevel)) {
                    pcVar17 = &cf_Failedtofinishwritingarchive_;
                    local_38 = (void *)(uVar22 << 0x20);
                    uVar15 = 0x2c2;
                    goto LAB_000a37cb;
                  }
                }
                else {
                  local_38 = (void *)CONCAT44(local_38._4_4_,
                                              (int)CONCAT71((int7)((ulong)uVar15 >> 8),1));
                }
              }
              else {
                bVar19 = _gSZLogToSyslog ^ 1;
                if (_gSZLogToSyslog == 1) {
                  iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                  if (iVar6 == 0) {
                    bVar19 = 1;
                  }
                  else {
                    if (_SZGetLoggingHandle_onceToken != -1) {
                      _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                    }
                    puVar4 = _SZGetLoggingHandle_logHandle;
                    uVar15 = _CFArrayGetCount(lVar14);
                    __os_log_internal(0,puVar4,0x10,
                                      "Mismatched record count: expected %llu records, but we have %ld records"
                                      ,local_48,uVar15);
                  }
                }
                uVar23 = local_48;
                if (bVar19 == 0) {
                  local_38 = (void *)((ulong)local_38 & 0xffffffff00000000);
                }
                else {
                  if (_gSZDefaultLogLevel < 3) goto LAB_000a32c5;
                  uVar15 = _CFArrayGetCount(lVar14);
                  local_38 = (void *)((ulong)local_38 & 0xffffffff00000000);
                  __SZLog(3,"_ProcessZipFile",0x290,
                          &cf_Mismatchedrecordcount_expected_llurecords_butwehave_ldrecords,uVar23,
                          uVar15);
                }
              }
            }
          }
LAB_000a3c90:
          pvVar20 = local_90;
          pvVar13 = local_d8;
          if (local_90 != (void *)0x0) {
            local_40 = lVar14;
            if (local_d8 != (void *)0x0) {
              pvVar21 = (void *)0x0;
              do {
                if (*(long *)((long)pvVar20 + (long)pvVar21 * 8) != 0) {
                  _DestroyMutableCDRecord();
                }
                pvVar21 = (void *)((long)pvVar21 + 1);
              } while (pvVar13 != pvVar21);
            }
            _free(pvVar20);
            lVar10 = local_60;
            lVar14 = local_40;
          }
          if (lVar14 != 0) {
            if (uVar23 != 0) {
              uVar22 = 0;
              do {
                uVar15 = _CFArrayGetValueAtIndex(lVar14,uVar22);
                _DestroyMutableCDRecord(uVar15);
                uVar22 = uVar22 + 1;
              } while (uVar23 != uVar22);
            }
            _CFRelease(lVar14);
          }
          _DestroyMutableCDRecord(local_88);
          _DestroyMutableLocalFileRecord(local_c8);
          _free(local_c0);
          _DestroyMutableCDRecord(local_80);
          _DestroyMutableLocalFileRecord(local_78);
          _free(local_b8);
          _DestroyMutableLocalFileRecord(local_b0);
          if ((char)local_38 == '\0') {
            bVar19 = _gSZLogToSyslog ^ 1;
            if (_gSZLogToSyslog == 1) {
              iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              if (iVar6 == 0) {
                bVar19 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"Failed to process file %s",
                                  local_a8);
              }
            }
            uVar23 = 0;
            if ((bVar19 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a36e4;
            pcVar17 = &cf_Failedtoprocessfile_s;
            uVar15 = 0x308;
            pcVar9 = local_a8;
          }
          else {
            lVar16 = param_3[1];
            if (*(code **)(lVar16 + 0x58) != (code *)0x0) {
              iVar6 = (**(code **)(lVar16 + 0x58))(*(undefined8 *)(lVar16 + 0x50));
              if (iVar6 == -1) {
                piVar8 = ___error();
                iVar6 = *piVar8;
                bVar19 = _gSZLogToSyslog ^ 1;
                if (_gSZLogToSyslog == 1) {
                  iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                  if (iVar7 == 0) {
                    bVar19 = 1;
                  }
                  else {
                    if (_SZGetLoggingHandle_onceToken != -1) {
                      _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                    }
                    puVar4 = _SZGetLoggingHandle_logHandle;
                    pcVar9 = _strerror(iVar6);
                    __os_log_internal(0,puVar4,0x10,"Failed to flush output: %s",pcVar9);
                  }
                }
                uVar23 = 0;
                if ((bVar19 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a36e4;
                pcVar9 = _strerror(iVar6);
                pcVar17 = &cf_Failedtoflushoutput__s;
                uVar15 = 0x30e;
                goto LAB_000a40e6;
              }
              lVar16 = param_3[1];
            }
            lVar16 = (**(code **)(lVar16 + 0x48))(*(undefined8 *)(lVar16 + 0x50));
            if (lVar16 < 0) {
              piVar8 = ___error();
              iVar6 = *piVar8;
              bVar19 = _gSZLogToSyslog ^ 1;
              if (_gSZLogToSyslog == 1) {
                iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                if (iVar7 == 0) {
                  bVar19 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  puVar4 = _SZGetLoggingHandle_logHandle;
                  pcVar9 = _strerror(iVar6);
                  __os_log_internal(0,puVar4,0x10,
                                    "Failed to get offset in file at end of writing: %s",pcVar9);
                }
              }
              uVar23 = 0;
              if ((bVar19 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a36e4;
              pcVar9 = _strerror(iVar6);
              pcVar17 = &cf_Failedtogetoffsetinfileatendofwriting__s;
              uVar15 = 0x315;
            }
            else {
              if ((*(char *)((long)param_3 + 0x2f) != '\0') ||
                 (iVar6 = (**(code **)(param_3[1] + 0x60))
                                    (*(undefined8 *)(param_3[1] + 0x50),lVar16), iVar6 == 0)) {
                *(long *)(local_70 + 0x18) = lVar16;
                lVar2 = *(long *)(lVar10 + 8);
                *(long *)(local_70 + 0xb8) = lVar16 - lVar2;
                auVar24._8_4_ = (int)((ulong)lVar2 >> 0x20);
                auVar24._0_8_ = lVar2;
                auVar24._12_4_ = 0x45300000;
                *(double *)(local_70 + 0xc0) =
                     ((double)lVar16 /
                     (((double)CONCAT44(0x43300000,(int)lVar2) - 4503599627370496.0) +
                     (auVar24._8_8_ - 1.9342813113834067e+25))) * 100.0;
                uVar23 = CONCAT71((int7)((ulong)lVar14 >> 8),1);
                goto LAB_000a36e4;
              }
              piVar8 = ___error();
              iVar6 = *piVar8;
              bVar19 = _gSZLogToSyslog ^ 1;
              if (_gSZLogToSyslog == 1) {
                iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                if (iVar7 == 0) {
                  bVar19 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  puVar4 = _SZGetLoggingHandle_logHandle;
                  pcVar9 = _strerror(iVar6);
                  __os_log_internal(0,puVar4,0x10,"Failed to truncate output: %s",pcVar9);
                }
              }
              uVar23 = 0;
              if ((bVar19 == 0) || (uVar23 = 0, _gSZDefaultLogLevel < 3)) goto LAB_000a36e4;
              pcVar9 = _strerror(iVar6);
              pcVar17 = &cf_Failedtotruncateoutput__s;
              uVar15 = 799;
            }
          }
LAB_000a40e6:
          uVar23 = 0;
          __SZLog(3,"ConvertZipToStream",uVar15,pcVar17,pcVar9);
          goto LAB_000a36e4;
        }
        bVar19 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar6 == 0) {
            bVar19 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"Failed to open zip file %s",
                              param_1);
          }
        }
        uVar23 = 0;
        lVar10 = 0;
        if ((bVar19 == 0) || (lVar10 = 0, _gSZDefaultLogLevel < 3)) goto LAB_000a36e4;
        __SZLog(3,"ConvertZipToStream",0x300,&cf_Failedtoopenzipfile_s,param_1);
      }
      else {
        bVar19 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar6 == 0) {
            bVar19 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                              "Object at input path %s was not a file; mode 0%ho",param_1,
                              local_198._4_2_);
          }
        }
        lVar10 = 0;
        uVar23 = 0;
        if ((bVar19 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a36e4;
        __SZLog(3,"ConvertZipToStream",0x2fa,&cf_Objectatinputpath_swasnotafile_mode0_ho,param_1,
                local_198._4_2_);
      }
    }
    else {
      bVar19 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar6 == 0) {
          bVar19 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          puVar4 = _SZGetLoggingHandle_logHandle;
          piVar8 = ___error();
          pcVar9 = _strerror(*piVar8);
          __os_log_internal(0,puVar4,0x10,"Failed to stat %s : %s",param_1,pcVar9);
        }
      }
      lVar10 = 0;
      uVar23 = 0;
      if ((bVar19 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a36e4;
      piVar8 = ___error();
      pcVar9 = _strerror(*piVar8);
      __SZLog(3,"ConvertZipToStream",0x2f5,&cf_Failedtostat_s__s,param_1,pcVar9);
    }
  }
  lVar10 = 0;
  uVar23 = 0;
LAB_000a36e4:
  _CloseZipFile(lVar10);
  return uVar23 & 0xffffffff;
}

