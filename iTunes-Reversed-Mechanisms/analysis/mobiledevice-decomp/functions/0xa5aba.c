// rea decompile_all
// name: _ExtractFileToStream
// address: 0xa5aba
// body: available
// range: 0xa5aba-0xa6745 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xa66e1 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ExtractFileToStream(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  short sVar1;
  void *pvVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined7 uVar15;
  void *pvVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  char *pcVar14;
  byte bVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong local_10a0;
  undefined8 local_1098;
  long local_1090;
  ulong local_1088;
  void *local_1080;
  long local_1078;
  undefined8 local_1070;
  long local_1068;
  undefined2 local_105a;
  short local_1058;
  short local_1056;
  int local_1054;
  ulong local_1050;
  void *local_1048;
  undefined4 local_103c;
  byte local_1038 [4096];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  cVar4 = _ZipStreamConfigureOutput(param_4);
  if (cVar4 != '\0') {
    lVar7 = _OpenZipFile(param_1,*(undefined1 *)(param_4 + 0x2e));
    if (lVar7 != 0) {
      local_1088 = 0;
      local_1080 = (void *)0x0;
      local_1098 = 0xffffffffffffffff;
      local_105a = 0;
      local_1058 = 0;
      uVar8 = __ReadOriginalCentralDirectory(lVar7);
      uVar17 = local_1088;
      uVar15 = (undefined7)((ulong)uVar8 >> 8);
      if ((char)uVar8 == '\0') {
        local_103c = (undefined4)CONCAT71(uVar15,1);
      }
      else {
        local_1090 = param_4;
        if (param_2 == 0xffffffffffffffff) {
          local_103c = (undefined4)CONCAT71(uVar15,1);
          local_1070 = param_1;
          local_1078 = _CFArrayCreateMutable(0,0,PTR__kCFTypeArrayCallBacks_004411a8);
          pvVar9 = local_1080;
          uVar17 = local_1088;
          if (local_1088 == 0) {
            uVar19 = 0xffffffffffffffff;
            uVar8 = 0xffffffffffffffff;
          }
          else {
            local_1048 = (void *)CONCAT62(local_1048._2_6_,local_105a);
            uVar19 = 0xffffffffffffffff;
            local_1056 = local_1058;
            uVar18 = 0;
            local_1068 = lVar7;
            local_1050 = param_3;
            do {
              lVar7 = *(long *)((long)pvVar9 + uVar18 * 8);
              if (lVar7 != 0) {
                if (uVar19 == 0xffffffffffffffff) {
                  local_1038[0] = 0;
                  bVar16 = _ZipStreamShouldOrderFileEarly(*(undefined8 *)(lVar7 + 0x48),local_1038);
                  uVar19 = 0xffffffffffffffff;
                  if ((local_1038[0] & bVar16) != 0) {
                    uVar19 = uVar18;
                  }
                  lVar7 = *(long *)((long)pvVar9 + uVar18 * 8);
                }
                uVar8 = _CFStringCreateWithFileSystemRepresentation(0,*(undefined8 *)(lVar7 + 0x48))
                ;
                _CFArrayAppendValue(local_1078,uVar8);
                _CFRelease(uVar8);
                lVar7 = *(long *)((long)pvVar9 + uVar18 * 8);
                sVar1 = local_1056;
                if (*(char *)(lVar7 + 0x1a) != '\x01') {
                  sVar1 = (short)local_1048;
                }
                _ZipStreamAddStatisticsForCDRecord
                          (lVar7,*(short *)(lVar7 + 0x18) != sVar1,local_1050);
              }
              lVar7 = local_1068;
              uVar18 = uVar18 + 1;
            } while (uVar17 != uVar18);
            if (uVar19 == 0xffffffffffffffff) {
              uVar19 = 0xffffffffffffffff;
              uVar8 = 0xffffffffffffffff;
            }
            else {
              cVar4 = __GetCDIndexOfBundleExecutableForInfoPlist
                                (local_1068,pvVar9,uVar17,*(undefined8 *)((long)pvVar9 + uVar19 * 8)
                                 ,&local_1098);
              uVar8 = 0xffffffffffffffff;
              if (cVar4 != '\0') {
                uVar8 = local_1098;
              }
            }
          }
          uVar11 = _CFDictionaryCreateMutable
                             (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                              PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          _CFDictionarySetValue(uVar11,&cf_paths,local_1078);
          __AddIndexToDictionary(&cf_META_INF,0xffffffffffffffff,uVar11);
          __AddIndexToDictionary(&cf_mimetype,0xffffffffffffffff,uVar11);
          __AddIndexToDictionary(&cf_Info_plist,uVar19,uVar11);
          __AddIndexToDictionary(&cf_Executable,uVar8,uVar11);
          _ZipStreamWriteDictionaryToFile(uVar11,local_1090);
          _CFRelease(uVar11);
          param_1 = local_1070;
        }
        else if (param_2 < local_1088) {
          lVar10 = *(long *)((long)local_1080 + param_2 * 8);
          local_1078 = *(long *)(param_4 + 8);
          local_1054 = 2;
          _printf("Extracting %s\n",*(undefined8 *)(lVar10 + 0x48));
          pvVar9 = (void *)_CopyLocalFileHeader(lVar7,lVar10,&local_1054);
          if (pvVar9 == (void *)0x0) {
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
                __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                  "Failed to get local file record: %d",local_1054);
              }
            }
            local_103c = 0;
            if ((bVar16 != 0) && (2 < _gSZDefaultLogLevel)) {
              local_103c = 0;
              __SZLog(3,"_WriteFileToDisk",0x16e,&cf_Failedtogetlocalfilerecord__d,local_1054);
            }
          }
          else {
            uVar17 = 0;
            local_1070 = param_1;
            lVar10 = _OpenLocalFile(lVar7,lVar10,pvVar9,0,&local_1054);
            if (local_1054 == 0) {
              local_1050 = *(ulong *)((long)pvVar9 + 0x30);
              local_1068 = lVar7;
              if (local_1050 != 0) {
                uVar19 = 0;
                local_1048 = pvVar9;
                do {
                  local_10a0 = 0;
                  uVar12 = _ReadLocalFileData(lVar10,local_1038,0x1000,&local_10a0);
                  uVar18 = local_10a0;
                  uVar17 = uVar12 & 0xffffffff;
                  iVar5 = (int)uVar12;
                  if ((uVar12 & 5) != 0) {
                    bVar16 = _gSZLogToSyslog ^ 1;
                    pvVar9 = local_1048;
                    if (_gSZLogToSyslog == 1) {
                      iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                      pvVar9 = local_1048;
                      if (iVar5 == 0) {
                        bVar16 = 1;
                      }
                      else {
                        if (_SZGetLoggingHandle_onceToken != -1) {
                          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                        }
                        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                          "ReadLocalFileData returned %d",uVar17);
                      }
                    }
                    if ((bVar16 != 0) && (2 < _gSZDefaultLogLevel)) {
                      __SZLog(3,"_WriteFileToDisk",0x17f,&cf_ReadLocalFileDatareturned_d,uVar17);
                    }
                    goto LAB_000a64cb;
                  }
                  if (local_10a0 != 0) {
                    uVar12 = (**(code **)(local_1078 + 0x30))
                                       (*(undefined8 *)(local_1078 + 0x50),local_1038,local_10a0);
                    if (uVar18 != uVar12) {
                      piVar13 = ___error();
                      iVar5 = *piVar13;
                      bVar16 = _gSZLogToSyslog ^ 1;
                      if (_gSZLogToSyslog == 1) {
                        iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                        if (iVar6 == 0) {
                          bVar16 = 1;
                        }
                        else {
                          if (_SZGetLoggingHandle_onceToken != -1) {
                            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                          }
                          puVar3 = _SZGetLoggingHandle_logHandle;
                          pcVar14 = _strerror(iVar5);
                          __os_log_internal(0,puVar3,0x10,
                                            "fwrite failed to write out entire buffer: %s",pcVar14);
                        }
                      }
                      pvVar9 = local_1048;
                      if ((bVar16 != 0) && (2 < _gSZDefaultLogLevel)) {
                        pcVar14 = _strerror(iVar5);
                        __SZLog(3,"_WriteFileToDisk",0x187,&cf_fwritefailedtowriteoutentirebuffer__s
                                ,pcVar14);
                      }
                      goto LAB_000a64cb;
                    }
                    uVar19 = uVar19 + uVar18;
                  }
                  pvVar9 = local_1048;
                } while (uVar19 < local_1050);
                if (iVar5 == 2) {
                  local_103c = (undefined4)CONCAT71((int7)(uVar12 >> 8),1);
                  if (uVar19 != local_1050) {
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
                        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                          "Failed to read entire file size; expected %llu, got %llu"
                                          ,uVar19,local_1050);
                      }
                    }
                    local_103c = 0;
                    if (bVar16 == 0) goto LAB_000a64cb;
                    if (2 < _gSZDefaultLogLevel) {
                      local_103c = 0;
                      __SZLog(3,"_WriteFileToDisk",0x192,
                              &cf_Failedtoreadentirefilesize_expected_llu_got_llu,uVar19,local_1050)
                      ;
                    }
                  }
                  goto LAB_000a64ce;
                }
              }
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
                  __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                    "Failed to read file data: %d",uVar17);
                }
              }
              local_103c = 0;
              if ((bVar16 != 0) && (2 < _gSZDefaultLogLevel)) {
                local_103c = 0;
                __SZLog(3,"_WriteFileToDisk",0x18e,&cf_Failedtoreadfiledata__d,uVar17);
              }
            }
            else {
              bVar16 = _gSZLogToSyslog ^ 1;
              local_1068 = lVar7;
              if (_gSZLogToSyslog == 1) {
                iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                if (iVar5 == 0) {
                  bVar16 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"Failed to open local file"
                                   );
                }
              }
              local_103c = 0;
              if (bVar16 == 0) {
LAB_000a64cb:
                local_103c = 0;
              }
              else if (2 < _gSZDefaultLogLevel) {
                local_103c = 0;
                __SZLog(3,"_WriteFileToDisk",0x174,&cf_Failedtoopenlocalfile);
              }
            }
LAB_000a64ce:
            param_1 = local_1070;
            lVar7 = local_1068;
            if (lVar10 != 0) {
              _CloseLocalFile(lVar10);
              param_1 = local_1070;
              lVar7 = local_1068;
            }
          }
          _free(pvVar9);
        }
        else {
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
              __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                "Central directory index %llu is out of range, must be between 0 and %llu"
                                ,param_2,uVar17 - 1);
            }
          }
          local_103c = 0;
          if ((bVar16 != 0) && (2 < _gSZDefaultLogLevel)) {
            local_103c = 0;
            __SZLog(3,"_ExtractFile",0x1f1,
                    &cf_Centraldirectoryindex_lluisoutofrange_mustbebetween0and_llu,param_2,
                    uVar17 - 1);
          }
        }
      }
      pvVar9 = local_1080;
      uVar17 = local_1088;
      if (local_1080 != (void *)0x0) {
        if (local_1088 != 0) {
          uVar19 = 0;
          do {
            pvVar2 = *(void **)((long)pvVar9 + uVar19 * 8);
            if (pvVar2 != (void *)0x0) {
              _free(pvVar2);
            }
            uVar19 = uVar19 + 1;
          } while (uVar17 != uVar19);
        }
        _free(pvVar9);
      }
      uVar17 = CONCAT71((int7)((ulong)pvVar9 >> 8),1);
      if ((char)local_103c == '\0') {
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
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"Failed to process file %s",
                              param_1);
          }
        }
        uVar17 = 0;
        if ((bVar16 != 0) && (2 < _gSZDefaultLogLevel)) {
          uVar17 = 0;
          __SZLog(3,"ExtractFileToStream",0x33f,&cf_Failedtoprocessfile_s,param_1);
        }
      }
      goto LAB_000a65d5;
    }
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
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"Failed to open zip file %s",param_1)
        ;
      }
    }
    lVar7 = 0;
    uVar17 = 0;
    if ((bVar16 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000a65d5;
    __SZLog(3,"ExtractFileToStream",0x33a,&cf_Failedtoopenzipfile_s,param_1);
  }
  uVar17 = 0;
  lVar7 = 0;
LAB_000a65d5:
  _CloseZipFile(lVar7);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar17 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

