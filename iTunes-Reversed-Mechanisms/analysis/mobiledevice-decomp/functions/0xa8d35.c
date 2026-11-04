// rea decompile_all
// name: __Prescan
// address: 0xa8d35
// body: available
// range: 0xa8d35-0xaa29c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xaa298 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__Prescan(char *param_1,undefined8 param_2,undefined2 *param_3,undefined2 *param_4,long *param_5,
         long *param_6)

{
  ushort uVar1;
  short sVar2;
  undefined2 uVar3;
  undefined *puVar4;
  size_t sVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  int *piVar13;
  char *pcVar14;
  size_t sVar15;
  char *pcVar16;
  long lVar17;
  cfstringStruct *pcVar18;
  undefined8 uVar19;
  void *pvVar20;
  undefined8 uVar21;
  byte bVar22;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  size_t local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  long *local_500;
  undefined2 *local_4f8;
  undefined2 *local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  long local_4d8;
  long local_4d0;
  long local_4c8;
  size_t local_4c0;
  undefined8 local_4b8;
  long local_4b0;
  undefined8 local_4a8;
  char *local_4a0;
  int local_494;
  char *local_490;
  long local_488;
  char local_479;
  long local_478;
  long local_470;
  long *local_468;
  char *local_460;
  long local_458;
  void *local_450;
  char *local_448;
  undefined8 local_440;
  char local_438 [8];
  undefined8 uStack_430;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_440 = 0;
  uVar19 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  local_500 = param_5;
  local_4f8 = param_4;
  local_4f0 = param_3;
  local_4b8 = param_2;
  local_448 = param_1;
  lVar9 = _CFDictionaryCreateMutable(uVar19,0,0,0);
  local_4a8 = uVar19;
  local_4c8 = _CFDictionaryCreateMutable(uVar19,0,0,0);
  local_4c0 = _strlen(param_1);
  lVar10 = _fts_open_INODE64(&local_448,0x54,0);
  if (lVar10 == 0) {
    bVar22 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar7 == 0) {
        bVar22 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        puVar4 = _SZGetLoggingHandle_logHandle;
        piVar13 = ___error();
        pcVar14 = _strerror(*piVar13);
        __os_log_internal(0,puVar4,0x10,"fts_open failed for path %s: %s",param_1,pcVar14);
      }
    }
    uVar19 = 0;
    if ((bVar22 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000aa18c;
    piVar13 = ___error();
    pcVar14 = _strerror(*piVar13);
    pcVar18 = &cf_fts_openfailedforpath_s__s;
    uVar12 = 0xd1;
  }
  else {
    local_4e8 = *(undefined8 *)PTR__kCFAllocatorNull_004410f8;
    local_4e0 = *(undefined8 *)PTR__kCFBundleExecutableKey_00441118;
    local_4b0 = 0;
    local_4a0 = (char *)0x0;
    do {
      while( true ) {
        lVar11 = _fts_read_INODE64(lVar10);
        if (lVar11 == 0) {
          piVar13 = ___error();
          if (*piVar13 == 0) {
            local_438[0] = '\0';
            local_438[1] = '\0';
            local_438[2] = '\0';
            local_438[3] = '\0';
            local_438[4] = '\0';
            local_438[5] = '\0';
            local_438[6] = '\0';
            local_438[7] = '\0';
            uStack_430 = 0;
            local_458 = lVar9;
            _CFDictionaryApplyFunction(lVar9,__FindHighestCount,local_438);
            uVar3 = (undefined2)uStack_430;
            local_438[0] = '\0';
            local_438[1] = '\0';
            local_438[2] = '\0';
            local_438[3] = '\0';
            local_438[4] = '\0';
            local_438[5] = '\0';
            local_438[6] = '\0';
            local_438[7] = '\0';
            uStack_430 = 0;
            _CFDictionaryApplyFunction(local_4c8,__FindHighestCount,local_438);
            *local_4f0 = uVar3;
            *local_4f8 = (undefined2)uStack_430;
            *local_500 = (long)local_4a0;
            *param_6 = local_4b0;
            bVar22 = _gSZLogToSyslog ^ 1;
            lVar9 = local_458;
            if (_gSZLogToSyslog == 1) {
              iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              if (iVar7 == 0) {
                bVar22 = 1;
                lVar9 = local_458;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                lVar9 = local_458;
                __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                                  "Prescan says record count should be %llu",local_4a0);
              }
            }
            uVar19 = 0xaaf01;
            if ((bVar22 == 0) || (_gSZDefaultLogLevel < 7)) goto LAB_000aa18c;
            pcVar18 = &cf_Prescansaysrecordcountshouldbe_llu;
            uVar21 = 7;
            uVar12 = 0x114;
            pcVar14 = local_4a0;
          }
          else {
            bVar22 = _gSZLogToSyslog ^ 1;
            if (_gSZLogToSyslog == 1) {
              iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              if (iVar7 == 0) {
                bVar22 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                puVar4 = _SZGetLoggingHandle_logHandle;
                piVar13 = ___error();
                pcVar14 = _strerror(*piVar13);
                __os_log_internal(0,puVar4,0x10,"fts_read returned NULL and set errno: %s",pcVar14);
              }
            }
            uVar19 = 0;
            if ((bVar22 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000aa18c;
            piVar13 = ___error();
            pcVar14 = _strerror(*piVar13);
            pcVar18 = &cf_fts_readreturnedNULLandseterrno__s;
            uVar19 = 0;
            uVar21 = 3;
            uVar12 = 0x108;
          }
          __SZLog(uVar21,"_Prescan",uVar12,pcVar18,pcVar14);
          goto LAB_000aa18c;
        }
        uVar1 = *(ushort *)(lVar11 + 0x58);
        if (0xd < uVar1) goto LAB_000aa044;
        if ((0x3102U >> (uVar1 & 0x1f) & 1) == 0) break;
        if (*(short *)(lVar11 + 0x56) != 0) {
          local_490 = (char *)__CopyArchivePath(*(undefined8 *)(lVar11 + 0x30),local_4c0,
                                                *(undefined4 *)(*(long *)(lVar11 + 0x60) + 4));
          cVar6 = __IsExcludedFileName(local_490);
          if (cVar6 == '\0') {
            sVar2 = *(short *)(lVar11 + 0x58);
            lVar17 = lVar9;
            if (sVar2 == 1) {
              lVar17 = local_4c8;
            }
            uVar3 = *(undefined2 *)(*(long *)(lVar11 + 0x60) + 4);
            local_468 = param_6;
            local_460 = param_1;
            local_458 = lVar9;
            lVar9 = _CFDictionaryGetValue(lVar17,uVar3);
            _CFDictionarySetValue(lVar17,uVar3,lVar9 + 1);
            param_1 = local_460;
            if (sVar2 != 1) {
              local_4b0 = local_4b0 + *(long *)(*(long *)(lVar11 + 0x60) + 0x60);
            }
            lVar11 = _CFStringCreateWithFileSystemRepresentation(local_4a8,local_490);
            uVar19 = local_4b8;
            uVar12 = _CFArrayGetCount(local_4b8);
            cVar6 = _CFArrayContainsValue(uVar19,0,uVar12);
            lVar9 = local_458;
            param_6 = local_468;
            if (cVar6 == '\0') {
              local_479 = '\0';
              cVar6 = _ZipStreamShouldOrderFileEarly(local_490,&local_479);
              if ((cVar6 != '\0') && (_CFArrayAppendValue(local_4b8,lVar11), local_479 == '\x01')) {
                local_4d8 = lVar11;
                ___bzero(local_438,0x400);
                local_518 = 0;
                uStack_510 = 0;
                local_528 = 0;
                uStack_520 = 0;
                local_538 = 0;
                uStack_530 = 0;
                local_548 = 0;
                uStack_540 = 0;
                local_558 = 0;
                uStack_550 = 0;
                local_568 = 0;
                uStack_560 = 0;
                local_578 = 0;
                uStack_570 = 0;
                local_588 = 0;
                uStack_580 = 0;
                local_598 = 0;
                uStack_590 = 0;
                local_4d0 = 0;
                _snprintf(local_438,0x400,"%s/%s",param_1,local_490);
                iVar7 = _open(local_438,0,0);
                if (iVar7 < 0) {
                  bVar22 = _gSZLogToSyslog ^ 1;
                  if (_gSZLogToSyslog == 1) {
                    iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                    if (iVar7 == 0) {
                      bVar22 = 1;
                    }
                    else {
                      if (_SZGetLoggingHandle_onceToken != -1) {
                        _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                      }
                      puVar4 = _SZGetLoggingHandle_logHandle;
                      piVar13 = ___error();
                      pcVar14 = _strerror(*piVar13);
                      __os_log_internal(0,puVar4,0x10,"Failed to open Info.plist at path %s: %s",
                                        local_438,pcVar14);
                    }
                  }
                  param_6 = local_468;
                  if (bVar22 == 0) {
                    local_460 = (char *)0x0;
                    lVar11 = 0;
                  }
                  else {
                    local_460 = (char *)0x0;
                    lVar11 = 0;
                    if (2 < _gSZDefaultLogLevel) {
                      piVar13 = ___error();
                      pcVar14 = _strerror(*piVar13);
                      __SZLog(3,"_OrderEarlyExecutable",0x5b,&cf_FailedtoopenInfo_plistatpath_s__s,
                              local_438,pcVar14);
                      local_460 = (char *)0x0;
                      lVar11 = 0;
                    }
                  }
                }
                else {
                  iVar8 = _fstat_INODE64(iVar7,&local_598);
                  sVar5 = local_538;
                  local_494 = iVar7;
                  if (iVar8 == 0) {
                    if ((long)local_538 < 0x1f400000) {
                      local_450 = _malloc(local_538);
                      sVar15 = _read(local_494,local_450,sVar5);
                      uVar19 = local_4a8;
                      if (sVar5 == sVar15) {
                        lVar11 = _CFDataCreateWithBytesNoCopy(local_4a8,local_450,local_538);
                        if (lVar11 == 0) {
                          bVar22 = _gSZLogToSyslog ^ 1;
                          if (_gSZLogToSyslog == 1) {
                            iVar7 = ___isPlatformVersionAtLeast(1,10,0xc);
                            if (iVar7 == 0) {
                              bVar22 = 1;
                            }
                            else {
                              if (_SZGetLoggingHandle_onceToken != -1) {
                                _dispatch_once(&_SZGetLoggingHandle_onceToken,
                                               &___block_literal_global);
                              }
                              __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10);
                              lVar9 = local_458;
                              param_1 = local_460;
                              param_6 = local_468;
                            }
                          }
                          if ((bVar22 != 0) && (2 < _gSZDefaultLogLevel)) {
                            __SZLog(3,"_OrderEarlyExecutable",0x72);
                          }
                          local_470 = 0;
                          pcVar14 = (char *)0x0;
                          lVar11 = 0;
                          lVar17 = 0;
                          pvVar20 = local_450;
                        }
                        else {
                          local_478 = lVar11;
                          lVar11 = _CFPropertyListCreateWithData(uVar19,lVar11,0,0,&local_4d0);
                          if (lVar11 == 0) {
                            bVar22 = _gSZLogToSyslog ^ 1;
                            if (_gSZLogToSyslog == 1) {
                              iVar7 = ___isPlatformVersionAtLeast(1,10,0xc);
                              if (iVar7 == 0) {
                                bVar22 = 1;
                                lVar9 = local_458;
                                param_1 = local_460;
                                param_6 = local_468;
                              }
                              else {
                                if (_SZGetLoggingHandle_onceToken != -1) {
                                  _dispatch_once(&_SZGetLoggingHandle_onceToken,
                                                 &___block_literal_global);
                                }
                                __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                                  "Failed to deserialize Info plist %s",local_438);
                                lVar9 = local_458;
                                param_1 = local_460;
                                param_6 = local_468;
                              }
                            }
                            if ((bVar22 != 0) && (2 < _gSZDefaultLogLevel)) {
                              __SZLog(3,"_OrderEarlyExecutable",0x79,
                                      &cf_FailedtodeserializeInfoplist_s,local_438);
                            }
                            local_470 = 0;
                            pcVar14 = (char *)0x0;
                            lVar11 = local_478;
                            lVar17 = 0;
                            pvVar20 = local_450;
                          }
                          else {
                            lVar9 = _CFDictionaryGetTypeID();
                            local_488 = lVar11;
                            lVar11 = _CFGetTypeID(lVar11);
                            pcVar14 = local_490;
                            if (lVar9 == lVar11) {
                              pcVar16 = _strrchr(local_490,0x2f);
                              if (pcVar16 == (char *)0x0) {
                                bVar22 = _gSZLogToSyslog ^ 1;
                                if (_gSZLogToSyslog == 1) {
                                  iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                                  if (iVar7 == 0) {
                                    bVar22 = 1;
                                  }
                                  else {
                                    if (_SZGetLoggingHandle_onceToken != -1) {
                                      _dispatch_once(&_SZGetLoggingHandle_onceToken,
                                                     &___block_literal_global);
                                    }
                                    __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                                      "Failed to find last slash in plist path %s",
                                                      local_490);
                                  }
                                }
                                if ((bVar22 != 0) && (2 < _gSZDefaultLogLevel)) {
                                  uVar19 = 0x85;
                                  pcVar18 = &cf_Failedtofindlastslashinplistpath_s;
                                  pcVar14 = local_490;
                                  goto LAB_000a9ab9;
                                }
                                goto LAB_000a9ac0;
                              }
                              *pcVar16 = '\0';
                              local_470 = _CFStringCreateWithFileSystemRepresentation
                                                    (local_4a8,pcVar14);
                              *pcVar16 = '/';
                              if (local_470 == 0) {
                                bVar22 = _gSZLogToSyslog ^ 1;
                                if (_gSZLogToSyslog == 1) {
                                  iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                                  if (iVar7 == 0) {
                                    bVar22 = 1;
                                  }
                                  else {
                                    if (_SZGetLoggingHandle_onceToken != -1) {
                                      _dispatch_once(&_SZGetLoggingHandle_onceToken,
                                                     &___block_literal_global);
                                    }
                                    __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                                                                                            
                                                  "Failed to create CF string from plist path %s",
                                                  local_438);
                                  }
                                }
                                if ((bVar22 != 0) && (2 < _gSZDefaultLogLevel)) {
                                  uVar19 = 0x8d;
                                  pcVar18 = &cf_FailedtocreateCFstringfromplistpath_s;
                                  goto LAB_000a99a7;
                                }
                                goto LAB_000a9ac0;
                              }
                              lVar9 = _CFDictionaryGetValue(local_488,local_4e0);
                              if (lVar9 == 0) {
                                bVar22 = _gSZLogToSyslog ^ 1;
                                if (_gSZLogToSyslog == 1) {
                                  iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                                  if (iVar7 == 0) {
                                    bVar22 = 1;
                                  }
                                  else {
                                    if (_SZGetLoggingHandle_onceToken != -1) {
                                      _dispatch_once(&_SZGetLoggingHandle_onceToken,
                                                     &___block_literal_global);
                                    }
                                    __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                                                                                            
                                                  "Plist %s did not contain a value for kCFBundleExecutableKey"
                                                  ,local_438);
                                  }
                                }
                                if ((bVar22 != 0) && (2 < _gSZDefaultLogLevel)) {
                                  uVar19 = 0x93;
                                  pcVar18 = &cf_Plist_sdidnotcontainavalueforkCFBundleExecutableKey;
LAB_000a9bf5:
                                  __SZLog(3,"_OrderEarlyExecutable",uVar19,pcVar18,local_438);
                                }
                              }
                              else {
                                lVar11 = _CFStringGetTypeID();
                                lVar17 = _CFGetTypeID(lVar9);
                                if (lVar11 == lVar17) {
                                  pcVar14 = (char *)_CFStringCreateWithFormat
                                                              (local_4a8,0,&cf______,local_470,lVar9
                                                              );
                                  if (pcVar14 != (char *)0x0) {
                                    _CFArrayAppendValue(local_4b8,pcVar14);
                                    lVar11 = local_478;
                                    lVar17 = local_488;
                                    pvVar20 = local_450;
                                    lVar9 = local_458;
                                    param_1 = local_460;
                                    param_6 = local_468;
                                    goto LAB_000a9547;
                                  }
                                  bVar22 = _gSZLogToSyslog ^ 1;
                                  if (_gSZLogToSyslog == 1) {
                                    iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                                    if (iVar7 == 0) {
                                      bVar22 = 1;
                                    }
                                    else {
                                      if (_SZGetLoggingHandle_onceToken != -1) {
                                        _dispatch_once(&_SZGetLoggingHandle_onceToken,
                                                       &___block_literal_global);
                                      }
                                      __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                                                                                                
                                                  "Failed to construct path to bundle executable");
                                    }
                                  }
                                  if ((bVar22 != 0) && (2 < _gSZDefaultLogLevel)) {
                                    __SZLog(3,"_OrderEarlyExecutable",0x9e,
                                            &cf_Failedtoconstructpathtobundleexecutable);
                                  }
                                }
                                else {
                                  bVar22 = _gSZLogToSyslog ^ 1;
                                  if (_gSZLogToSyslog == 1) {
                                    iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                                    if (iVar7 == 0) {
                                      bVar22 = 1;
                                    }
                                    else {
                                      if (_SZGetLoggingHandle_onceToken != -1) {
                                        _dispatch_once(&_SZGetLoggingHandle_onceToken,
                                                       &___block_literal_global);
                                      }
                                      __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                                                                                                
                                                  "CFBundleExecutable was not a CFString for plist %s"
                                                  ,local_438);
                                    }
                                  }
                                  if ((bVar22 != 0) && (2 < _gSZDefaultLogLevel)) {
                                    uVar19 = 0x98;
                                    pcVar18 = &cf_CFBundleExecutablewasnotaCFStringforplist_s;
                                    goto LAB_000a9bf5;
                                  }
                                }
                              }
                            }
                            else {
                              bVar22 = _gSZLogToSyslog ^ 1;
                              if (_gSZLogToSyslog == 1) {
                                iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                                if (iVar7 == 0) {
                                  bVar22 = 1;
                                }
                                else {
                                  if (_SZGetLoggingHandle_onceToken != -1) {
                                    _dispatch_once(&_SZGetLoggingHandle_onceToken,
                                                   &___block_literal_global);
                                  }
                                  __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                                    "Plist %s did not contain a dictionary",
                                                    local_438);
                                }
                              }
                              if ((bVar22 != 0) && (2 < _gSZDefaultLogLevel)) {
                                uVar19 = 0x7e;
                                pcVar18 = &cf_Plist_sdidnotcontainadictionary;
LAB_000a99a7:
                                pcVar14 = local_438;
LAB_000a9ab9:
                                __SZLog(3,"_OrderEarlyExecutable",uVar19,pcVar18,pcVar14);
                              }
LAB_000a9ac0:
                              local_470 = 0;
                            }
                            pcVar14 = (char *)0x0;
                            lVar11 = local_478;
                            lVar17 = local_488;
                            pvVar20 = local_450;
                            lVar9 = local_458;
                            param_1 = local_460;
                            param_6 = local_468;
                          }
                        }
                      }
                      else {
                        bVar22 = _gSZLogToSyslog ^ 1;
                        if (_gSZLogToSyslog == 1) {
                          iVar7 = ___isPlatformVersionAtLeast(1,10,0xc);
                          if (iVar7 == 0) {
                            bVar22 = 1;
                          }
                          else {
                            if (_SZGetLoggingHandle_onceToken != -1) {
                              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global
                                            );
                            }
                            sVar5 = local_538;
                            puVar4 = _SZGetLoggingHandle_logHandle;
                            piVar13 = ___error();
                            pcVar14 = _strerror(*piVar13);
                            __os_log_internal(0,puVar4,0x10,
                                              "Failed to read %lld bytes from Info.plist at path %s: %s"
                                              ,sVar5,local_438,pcVar14);
                            param_6 = local_468;
                          }
                        }
                        lVar9 = local_458;
                        sVar5 = local_538;
                        if (bVar22 == 0) {
                          local_470 = 0;
                          pcVar14 = (char *)0x0;
                          lVar11 = 0;
                          lVar17 = 0;
                          pvVar20 = local_450;
                        }
                        else {
                          if (2 < _gSZDefaultLogLevel) {
                            piVar13 = ___error();
                            pcVar14 = _strerror(*piVar13);
                            __SZLog(3,"_OrderEarlyExecutable",0x6c,
                                    &cf_Failedtoread_lldbytesfromInfo_plistatpath_s__s,sVar5,
                                    local_438,pcVar14);
                          }
                          local_470 = 0;
                          pcVar14 = (char *)0x0;
                          lVar11 = 0;
                          lVar17 = 0;
                          pvVar20 = local_450;
                        }
                      }
                    }
                    else {
                      bVar22 = _gSZLogToSyslog ^ 1;
                      if (_gSZLogToSyslog == 1) {
                        iVar7 = ___isPlatformVersionAtLeast(1,10,0xc);
                        if (iVar7 == 0) {
                          bVar22 = 1;
                        }
                        else {
                          if (_SZGetLoggingHandle_onceToken != -1) {
                            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                          }
                          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                            "Found Info.plist but it was too big (larger than 500 MB): was %lld bytes"
                                            ,local_538);
                        }
                      }
                      if (bVar22 != 0) {
                        local_470 = 0;
                        pcVar14 = (char *)0x0;
                        lVar11 = 0;
                        lVar17 = 0;
                        pvVar20 = (void *)0x0;
                        if (_gSZDefaultLogLevel < 3) goto LAB_000a9547;
                        __SZLog(3,"_OrderEarlyExecutable",0x65,
                                &cf_FoundInfo_plistbutitwastoobig_largerthan500MB__was_lldbytes,
                                local_538);
                      }
LAB_000a9534:
                      local_470 = 0;
                      pcVar14 = (char *)0x0;
                      lVar11 = 0;
                      lVar17 = 0;
                      pvVar20 = (void *)0x0;
                    }
                  }
                  else {
                    bVar22 = _gSZLogToSyslog ^ 1;
                    if (_gSZLogToSyslog == 1) {
                      iVar7 = ___isPlatformVersionAtLeast(1,10,0xc);
                      if (iVar7 == 0) {
                        bVar22 = 1;
                      }
                      else {
                        if (_SZGetLoggingHandle_onceToken != -1) {
                          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                        }
                        puVar4 = _SZGetLoggingHandle_logHandle;
                        piVar13 = ___error();
                        pcVar14 = _strerror(*piVar13);
                        __os_log_internal(0,puVar4,0x10,"Failed to stat Info.plist at path %s: %s",
                                          local_438,pcVar14);
                      }
                    }
                    param_6 = local_468;
                    if (bVar22 == 0) {
                      local_470 = 0;
                      pcVar14 = (char *)0x0;
                      lVar11 = 0;
                      lVar17 = 0;
                      pvVar20 = (void *)0x0;
                    }
                    else {
                      local_470 = 0;
                      pcVar14 = (char *)0x0;
                      lVar11 = 0;
                      lVar17 = 0;
                      pvVar20 = (void *)0x0;
                      if (2 < _gSZDefaultLogLevel) {
                        piVar13 = ___error();
                        pcVar14 = _strerror(*piVar13);
                        __SZLog(3,"_OrderEarlyExecutable",0x60,&cf_FailedtostatInfo_plistatpath_s__s
                                ,local_438,pcVar14);
                        goto LAB_000a9534;
                      }
                    }
                  }
LAB_000a9547:
                  local_488 = lVar17;
                  local_478 = lVar11;
                  local_460 = pcVar14;
                  _close(local_494);
                  _free(pvVar20);
                  if (local_478 != 0) {
                    _CFRelease();
                  }
                  lVar11 = local_470;
                  if (local_488 != 0) {
                    _CFRelease();
                  }
                }
                if (local_4d0 != 0) {
                  _CFRelease();
                }
                local_4d0 = 0;
                if (lVar11 != 0) {
                  _CFRelease(lVar11);
                }
                lVar11 = local_4d8;
                if (local_460 != (char *)0x0) {
                  _CFRelease();
                  lVar11 = local_4d8;
                }
              }
            }
            if (lVar11 != 0) {
              _CFRelease(lVar11);
            }
            local_4a0 = local_4a0 + 1;
          }
          _free(local_490);
        }
      }
    } while (uVar1 == 6);
    if ((0x490U >> (uVar1 & 0x1f) & 1) == 0) {
LAB_000aa044:
      bVar22 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar7 == 0) {
          bVar22 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                            "fts_read returned unhandled fts_info value %d",
                            *(undefined2 *)(lVar11 + 0x58));
        }
      }
      uVar19 = 0;
      if ((bVar22 != 0) && (2 < _gSZDefaultLogLevel)) {
        uVar19 = 0;
        __SZLog(3,"_Prescan",0x101,&cf_fts_readreturnedunhandledfts_infovalue_d,
                *(undefined2 *)(lVar11 + 0x58));
      }
      goto LAB_000aa18c;
    }
    bVar22 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar7 == 0) {
        bVar22 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        puVar4 = _SZGetLoggingHandle_logHandle;
        local_4c0 = *(size_t *)(lVar11 + 0x30);
        pcVar14 = _strerror(*(int *)(lVar11 + 0x38));
        __os_log_internal(0,puVar4,0x10,"fts_read gave error for file %s: %s",local_4c0,pcVar14);
      }
    }
    uVar19 = 0;
    if ((bVar22 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_000aa18c;
    param_1 = *(char **)(lVar11 + 0x30);
    pcVar14 = _strerror(*(int *)(lVar11 + 0x38));
    pcVar18 = &cf_fts_readgaveerrorforfile_s__s;
    uVar12 = 0xfc;
  }
  uVar19 = 0;
  __SZLog(3,"_Prescan",uVar12,pcVar18,param_1,pcVar14);
LAB_000aa18c:
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  if (local_4c8 != 0) {
    _CFRelease();
  }
  if (lVar10 != 0) {
    _fts_close_INODE64(lVar10);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar19;
}

