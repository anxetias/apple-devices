// rea decompile_all
// name: __GetCDIndexOfBundleExecutableForInfoPlist
// address: 0xa4924
// body: available
// range: 0xa4924-0xa5a54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xa5978 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __GetCDIndexOfBundleExecutableForInfoPlist
                (undefined8 param_1,long param_2,long param_3,long param_4,long *param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  long lVar9;
  undefined8 uVar10;
  byte bVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long local_470;
  long local_468;
  long local_460;
  uint local_454;
  long local_450;
  long local_448;
  void *local_440;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  pcVar1 = *(char **)(param_4 + 0x48);
  local_454 = 0;
  local_470 = 0;
  uVar15 = *(ulong *)(param_4 + 0x28);
  if (uVar15 < 0x40000001) {
    local_440 = _malloc(uVar15);
    local_468 = _CopyLocalFileHeader(param_1,param_4,&local_454);
    if (local_468 == 0) {
      bVar11 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar3 == 0) {
          bVar11 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                            "Failed to get local file record for info plist %s: %d",pcVar1,local_454
                           );
        }
      }
      pvVar12 = local_440;
      if (bVar11 == 0) {
        local_450 = 0;
        local_468 = 0;
        lVar6 = 0;
        goto LAB_000a5341;
      }
      if (_gSZDefaultLogLevel < 3) {
        local_450 = 0;
        local_468 = 0;
        lVar6 = 0;
        goto LAB_000a5327;
      }
      local_450 = 0;
      __SZLog(3,"_GetCDIndexOfBundleExecutableForInfoPlist",0x40,
              &cf_Failedtogetlocalfilerecordforinfoplist_s__d,pcVar1,local_454);
      local_468 = 0;
      lVar6 = 0;
LAB_000a540a:
      lVar14 = 0;
    }
    else {
      lVar14 = _OpenLocalFile(param_1,param_4,local_468,0,&local_454);
      if ((lVar14 == 0) || (local_454 != 0)) {
        bVar11 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar3 == 0) {
            bVar11 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                              "Failed to open plist file in zip archive");
          }
        }
        pvVar12 = local_440;
        if (bVar11 == 0) {
LAB_000a4ff4:
          local_450 = 0;
          lVar6 = 0;
LAB_000a5344:
          uVar15 = 0;
          lVar9 = 0;
          pvVar12 = local_440;
          lVar13 = 0;
          goto LAB_000a5410;
        }
        if (_gSZDefaultLogLevel < 3) {
LAB_000a4fdd:
          uVar15 = 0;
          local_450 = 0;
          lVar6 = 0;
          lVar9 = 0;
          lVar13 = 0;
          pvVar12 = local_440;
          goto LAB_000a5410;
        }
        local_450 = 0;
        __SZLog(3,"_GetCDIndexOfBundleExecutableForInfoPlist",0x46,
                &cf_Failedtoopenplistfileinziparchive);
      }
      else {
        iVar3 = _ReadLocalFileData(lVar14,local_440,uVar15);
        if (iVar3 == 2) {
          uVar4 = _CloseLocalFile(lVar14);
          local_454 = uVar4;
          if (uVar4 == 0) {
            if (uVar15 == 0) {
              uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
              local_450 = _CFDataCreateWithBytesNoCopy
                                    (uVar10,local_440,0,
                                     *(undefined8 *)PTR__kCFAllocatorNull_004410f8);
              if (local_450 != 0) {
                lVar6 = _CFPropertyListCreateWithData(uVar10,local_450,0,0,&local_470);
                if (lVar6 == 0) {
                  bVar11 = _gSZLogToSyslog ^ 1;
                  if (_gSZLogToSyslog == 1) {
                    iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                    if (iVar3 == 0) {
                      bVar11 = 1;
                    }
                    else {
                      if (_SZGetLoggingHandle_onceToken != -1) {
                        _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                      }
                      __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                        "Failed to deserialize Info plist %s",pcVar1);
                    }
                  }
                  pvVar12 = local_440;
                  if (bVar11 != 0) {
                    if (2 < _gSZDefaultLogLevel) {
                      __SZLog(3,"_GetCDIndexOfBundleExecutableForInfoPlist",0x67,
                              &cf_FailedtodeserializeInfoplist_s,pcVar1);
                      goto LAB_000a5400;
                    }
                    goto LAB_000a5322;
                  }
                  goto LAB_000a533c;
                }
                lVar14 = _CFDictionaryGetTypeID();
                local_448 = lVar6;
                lVar6 = _CFGetTypeID(lVar6);
                if (lVar14 == lVar6) {
                  pcVar7 = _strrchr(pcVar1,0x2f);
                  if (pcVar7 == (char *)0x0) {
                    bVar11 = _gSZLogToSyslog ^ 1;
                    if (_gSZLogToSyslog == 1) {
                      iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                      if (iVar3 == 0) {
                        bVar11 = 1;
                      }
                      else {
                        if (_SZGetLoggingHandle_onceToken != -1) {
                          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                        }
                        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                          "Failed to find last slash in plist path %s",pcVar1);
                      }
                    }
                    lVar6 = local_448;
                    if (bVar11 == 0) goto LAB_000a5341;
                    if (2 < _gSZDefaultLogLevel) {
                      pcVar8 = &cf_Failedtofindlastslashinplistpath_s;
                      uVar10 = 0x73;
                      goto LAB_000a56d3;
                    }
                  }
                  else {
                    *pcVar7 = '\0';
                    local_460 = _CFStringCreateWithFileSystemRepresentation(uVar10,pcVar1);
                    *pcVar7 = '/';
                    if (local_460 != 0) {
                      lVar6 = _CFDictionaryGetValue
                                        (local_448,
                                         *(undefined8 *)PTR__kCFBundleExecutableKey_00441118);
                      if (lVar6 == 0) {
                        bVar11 = _gSZLogToSyslog ^ 1;
                        if (_gSZLogToSyslog == 1) {
                          iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                          if (iVar3 == 0) {
                            bVar11 = 1;
                          }
                          else {
                            if (_SZGetLoggingHandle_onceToken != -1) {
                              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global
                                            );
                            }
                            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                              "Plist %s did not contain a value for kCFBundleExecutableKey"
                                              ,pcVar1);
                          }
                        }
                        pvVar12 = local_440;
                        if ((bVar11 != 0) && (2 < _gSZDefaultLogLevel)) {
                          __SZLog(3,"_GetCDIndexOfBundleExecutableForInfoPlist",0x81,
                                  &cf_Plist_sdidnotcontainavalueforkCFBundleExecutableKey,pcVar1);
                        }
                      }
                      else {
                        lVar14 = _CFStringGetTypeID();
                        lVar9 = _CFGetTypeID(lVar6);
                        lVar13 = local_460;
                        if (lVar14 != lVar9) {
                          bVar11 = _gSZLogToSyslog ^ 1;
                          if (_gSZLogToSyslog == 1) {
                            iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                            if (iVar3 == 0) {
                              bVar11 = 1;
                            }
                            else {
                              if (_SZGetLoggingHandle_onceToken != -1) {
                                _dispatch_once(&_SZGetLoggingHandle_onceToken,
                                               &___block_literal_global);
                              }
                              __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                                "CFBundleExecutable was not a CFString for plist %s"
                                                ,pcVar1);
                              lVar13 = local_460;
                            }
                          }
                          pvVar12 = local_440;
                          if ((bVar11 != 0) && (2 < _gSZDefaultLogLevel)) {
                            __SZLog(3,"_GetCDIndexOfBundleExecutableForInfoPlist",0x86,
                                    &cf_CFBundleExecutablewasnotaCFStringforplist_s,pcVar1);
                          }
                          uVar15 = 0;
                          lVar14 = 0;
                          lVar9 = 0;
                          lVar6 = local_448;
                          goto LAB_000a5410;
                        }
                        lVar9 = _CFStringCreateWithFormat(uVar10,0,&cf______,local_460,lVar6);
                        if (lVar9 != 0) {
                          cVar2 = _CFStringGetFileSystemRepresentation(lVar9,local_438,0x400);
                          if (cVar2 == '\0') {
                            bVar11 = _gSZLogToSyslog ^ 1;
                            if (_gSZLogToSyslog == 1) {
                              iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                              if (iVar3 == 0) {
                                bVar11 = 1;
                              }
                              else {
                                if (_SZGetLoggingHandle_onceToken != -1) {
                                  _dispatch_once(&_SZGetLoggingHandle_onceToken,
                                                 &___block_literal_global);
                                }
                                __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                                  "Failed to convert CF executable path string to C string"
                                                 );
                              }
                            }
                            if ((bVar11 != 0) && (2 < _gSZDefaultLogLevel)) {
                              __SZLog(3,"_GetCDIndexOfBundleExecutableForInfoPlist",0x91,
                                      &cf_FailedtoconvertCFexecutablepathstringtoCstring);
                            }
                            uVar15 = 0;
                            lVar13 = local_460;
                          }
                          else {
                            lVar6 = 0;
                            do {
                              lVar14 = *(long *)(param_2 + lVar6 * 8);
                              if ((lVar14 != 0) &&
                                 (iVar3 = _strcmp(*(char **)(lVar14 + 0x48),local_438), iVar3 == 0))
                              {
                                *param_5 = lVar6;
                                uVar15 = CONCAT71((int7)((ulong)lVar6 >> 8),1);
                                goto LAB_000a5928;
                              }
                              lVar6 = lVar6 + 1;
                            } while (param_3 != lVar6);
                            uVar15 = 0;
                          }
LAB_000a5928:
                          lVar14 = 0;
                          lVar6 = local_448;
                          pvVar12 = local_440;
                          goto LAB_000a5410;
                        }
                        bVar11 = _gSZLogToSyslog ^ 1;
                        if (_gSZLogToSyslog == 1) {
                          iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                          if (iVar3 == 0) {
                            bVar11 = 1;
                          }
                          else {
                            if (_SZGetLoggingHandle_onceToken != -1) {
                              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global
                                            );
                            }
                            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                              "Failed to construct path to bundle executable");
                          }
                        }
                        pvVar12 = local_440;
                        if ((bVar11 != 0) && (2 < _gSZDefaultLogLevel)) {
                          __SZLog(3,"_GetCDIndexOfBundleExecutableForInfoPlist",0x8c,
                                  &cf_Failedtoconstructpathtobundleexecutable);
                          pvVar12 = local_440;
                        }
                      }
                      uVar15 = 0;
                      lVar14 = 0;
                      lVar9 = 0;
                      lVar6 = local_448;
                      lVar13 = local_460;
                      goto LAB_000a5410;
                    }
                    bVar11 = _gSZLogToSyslog ^ 1;
                    if (_gSZLogToSyslog == 1) {
                      iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                      if (iVar3 == 0) {
                        bVar11 = 1;
                      }
                      else {
                        if (_SZGetLoggingHandle_onceToken != -1) {
                          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                        }
                        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                          "Failed to create CF string from plist path %s",pcVar1);
                      }
                    }
                    lVar6 = local_448;
                    if (bVar11 == 0) goto LAB_000a5341;
                    if (2 < _gSZDefaultLogLevel) {
                      pcVar8 = &cf_FailedtocreateCFstringfromplistpath_s;
                      uVar10 = 0x7b;
                      goto LAB_000a56d3;
                    }
                  }
                }
                else {
                  bVar11 = _gSZLogToSyslog ^ 1;
                  if (_gSZLogToSyslog == 1) {
                    iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                    if (iVar3 == 0) {
                      bVar11 = 1;
                    }
                    else {
                      if (_SZGetLoggingHandle_onceToken != -1) {
                        _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                      }
                      __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                        "Plist %s did not contain a dictionary",pcVar1);
                    }
                  }
                  lVar6 = local_448;
                  if (bVar11 == 0) goto LAB_000a5341;
                  if (2 < _gSZDefaultLogLevel) {
                    pcVar8 = &cf_Plist_sdidnotcontainadictionary;
                    uVar10 = 0x6c;
LAB_000a56d3:
                    pvVar12 = local_440;
                    __SZLog(3,"_GetCDIndexOfBundleExecutableForInfoPlist",uVar10,pcVar8,pcVar1);
                    lVar6 = local_448;
                    goto LAB_000a540a;
                  }
                }
LAB_000a5327:
                uVar15 = 0;
                lVar9 = 0;
                lVar14 = 0;
                pvVar12 = local_440;
                lVar13 = 0;
                goto LAB_000a5410;
              }
              bVar11 = _gSZLogToSyslog ^ 1;
              if (_gSZLogToSyslog == 1) {
                iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                if (iVar3 == 0) {
                  bVar11 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                    "Failed to create data from uncompressed bytes");
                }
              }
              pvVar12 = local_440;
              if (bVar11 == 0) goto LAB_000a532f;
              if (_gSZDefaultLogLevel < 3) goto LAB_000a5315;
              local_450 = 0;
              __SZLog(3,"_GetCDIndexOfBundleExecutableForInfoPlist",0x60,
                      &cf_Failedtocreatedatafromuncompressedbytes);
            }
            else {
              bVar11 = _gSZLogToSyslog ^ 1;
              if (_gSZLogToSyslog == 1) {
                iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                if (iVar3 == 0) {
                  bVar11 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                    "Failed to read full info plist %s; read %ld bytes; expected %lld bytes"
                                    ,pcVar1,0,uVar15);
                }
              }
              pvVar12 = local_440;
              if (bVar11 == 0) goto LAB_000a532f;
              if (_gSZDefaultLogLevel < 3) goto LAB_000a5315;
              local_450 = 0;
              __SZLog(3,"_GetCDIndexOfBundleExecutableForInfoPlist",0x59,
                      &cf_Failedtoreadfullinfoplist_s_read_ldbytes_expected_lldbytes,pcVar1,0,uVar15
                     );
            }
          }
          else {
            bVar11 = _gSZLogToSyslog ^ 1;
            if (_gSZLogToSyslog == 1) {
              iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              if (iVar3 == 0) {
                bVar11 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                  "Failed to close local file: %d",uVar4);
              }
            }
            pvVar12 = local_440;
            if (bVar11 == 0) {
LAB_000a532f:
              local_450 = 0;
LAB_000a533c:
              lVar6 = 0;
LAB_000a5341:
              lVar14 = 0;
              goto LAB_000a5344;
            }
            if (_gSZDefaultLogLevel < 3) {
LAB_000a5315:
              local_450 = 0;
LAB_000a5322:
              lVar6 = 0;
              goto LAB_000a5327;
            }
            local_450 = 0;
            __SZLog(3,"_GetCDIndexOfBundleExecutableForInfoPlist",0x54,&cf_Failedtocloselocalfile__d
                    ,uVar4);
          }
LAB_000a5400:
          lVar6 = 0;
          goto LAB_000a540a;
        }
        bVar11 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar5 == 0) {
            bVar11 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                              "Failed to read file data for info plist %s: %d",pcVar1,iVar3);
          }
        }
        pvVar12 = local_440;
        if (bVar11 == 0) goto LAB_000a4ff4;
        if (_gSZDefaultLogLevel < 3) goto LAB_000a4fdd;
        local_450 = 0;
        __SZLog(3,"_GetCDIndexOfBundleExecutableForInfoPlist",0x4d,
                &cf_Failedtoreadfiledataforinfoplist_s__d,pcVar1,iVar3);
      }
      lVar6 = 0;
    }
  }
  else {
    bVar11 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar3 == 0) {
        bVar11 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                          "Found plist at %s greater than 1 GB in size; something must be wrong.",
                          pcVar1);
      }
    }
    local_450 = 0;
    uVar15 = 0;
    if (bVar11 == 0) {
      lVar9 = 0;
      local_468 = 0;
      lVar14 = 0;
      lVar6 = 0;
      pvVar12 = (void *)0x0;
      lVar13 = 0;
      goto LAB_000a5410;
    }
    lVar9 = 0;
    local_468 = 0;
    lVar14 = 0;
    lVar6 = 0;
    pvVar12 = (void *)0x0;
    lVar13 = 0;
    if (_gSZDefaultLogLevel < 3) goto LAB_000a5410;
    local_450 = 0;
    __SZLog(3,"_GetCDIndexOfBundleExecutableForInfoPlist",0x38,
            &cf_Foundplistat_sgreaterthan1GBinsize_somethingmustbewrong_,pcVar1);
    lVar6 = 0;
    local_468 = 0;
    lVar14 = 0;
    pvVar12 = (void *)0x0;
  }
  lVar9 = 0;
  uVar15 = 0;
  lVar13 = 0;
LAB_000a5410:
  _free(pvVar12);
  _DestroyMutableLocalFileRecord(local_468);
  if (local_450 != 0) {
    _CFRelease();
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (local_470 != 0) {
    _CFRelease();
  }
  local_470 = 0;
  if (lVar13 != 0) {
    _CFRelease(lVar13);
  }
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  if (lVar14 != 0) {
    _CloseLocalFile(lVar14);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar15 & 0xffffffff;
}

