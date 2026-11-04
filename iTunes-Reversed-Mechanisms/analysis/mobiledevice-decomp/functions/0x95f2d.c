// rea decompile_all
// name: _SZConduitSendPathWithPreflight
// address: 0x95f2d
// body: available
// range: 0x95f2d-0x9754b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x9749f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _SZConduitSendPathWithPreflight
              (undefined8 param_1,char *param_2,ulong param_3,undefined4 param_4,long param_5,
              ulong param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  ulong uVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  dispatch_object_t object;
  cfstringStruct *pcVar14;
  undefined8 uVar15;
  byte bVar16;
  long local_638 [2];
  ulong local_628;
  int iStack_624;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 local_5f8;
  ulong uStack_5f0;
  undefined8 local_5e8;
  code *pcStack_5e0;
  long *local_5d8;
  undefined8 uStack_5d0;
  code *local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  code *pcStack_5b0;
  long *local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 local_588;
  char *local_580;
  cfstringStruct *local_578;
  cfstringStruct *local_570;
  undefined8 local_568;
  long local_560;
  long local_558;
  long local_550;
  long local_548;
  long local_540;
  undefined4 local_534;
  long local_530;
  ulong local_528;
  long local_520;
  int local_514;
  ulong local_510;
  undefined8 local_508;
  undefined1 local_4a8 [48];
  char local_478 [1024];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  cfstringStruct *pcStack_50;
  cfstringStruct *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_588 = param_1;
  local_580 = param_2;
  local_534 = param_4;
  local_528 = param_3;
  local_510 = param_6;
  ___bzero(local_478,0x400);
  uVar1 = *(ulong *)PTR__kCFAllocatorDefault_004410e8;
  lVar6 = _CFDictionaryCreateMutable
                    (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  local_548 = 0;
  local_570 = *(cfstringStruct **)PTR__kCFBooleanFalse_00441108;
  local_514 = 0;
  local_638[0] = 0;
  local_638[1] = 0;
  local_628 = 0;
  uStack_620 = 0;
  local_618 = 0;
  uStack_610 = 0;
  local_608 = 0;
  local_5f8 = 0;
  uStack_5f0 = 0;
  local_5e8 = 0;
  pcStack_5e0 = (code *)0x0;
  local_5d8 = (long *)0x0;
  uStack_5d0 = 0;
  local_5c8 = (code *)0x0;
  uStack_5c0 = 0;
  local_5b8 = 0;
  pcStack_5b0 = (code *)0x0;
  local_5a8 = (long *)0x0;
  uStack_5a0 = 0;
  local_598 = 0;
  _gSZLogPrefix = "SZConduit";
  local_578 = local_570;
  local_520 = lVar6;
  if (param_5 != 0) {
    pcVar7 = (cfstringStruct *)_CFDictionaryGetValue(param_5,&cf_UseFactoryService);
    pcVar14 = *(cfstringStruct **)PTR__kCFBooleanTrue_00441110;
    local_568 = CONCAT71((int7)((ulong)pcVar7 >> 8),pcVar14 == pcVar7);
    pcVar7 = (cfstringStruct *)_CFDictionaryGetValue(param_5,&cf_InstallTransferredDirectory);
    if (pcVar14 == pcVar7) {
      local_570 = pcVar14;
    }
    pcVar7 = (cfstringStruct *)_CFDictionaryGetValue(param_5,&cf_UserInitiatedTransfer);
    if (pcVar14 == pcVar7) {
      local_578 = pcVar14;
    }
    pcVar7 = (cfstringStruct *)_CFDictionaryGetValue(param_5,&cf_PreferWifi);
    if (pcVar14 != pcVar7) {
      local_540 = 0;
LAB_00096146:
      local_560 = _CFDictionaryGetValue(param_5,&cf_SpringBoardIconLayoutData);
      local_558 = _CFDictionaryGetValue(param_5,&cf_InstallOptionsDictionary);
      lVar8 = _CFDictionaryGetValue(param_5,&cf_CompressionLevel);
      lVar6 = local_520;
      if (lVar8 == 0) {
LAB_0009633a:
        if (local_514 == 0) goto LAB_000963d6;
        if (local_514 != -1) {
          _CFDictionarySetValue(lVar6,&cf_CompressionOptions,&cf_TryRecompress);
          uVar15 = _CFNumberCreate(uVar1,9,&local_514);
          _CFDictionarySetValue(lVar6,&cf_ZlibCompressionLevel,uVar15);
          _CFRelease(uVar15);
          goto LAB_000963ec;
        }
        pcVar7 = &cf_PreserveCompression;
      }
      else {
        cVar3 = _CFNumberGetValue(lVar8,9,&local_514);
        lVar6 = local_520;
        if (cVar3 == '\0') {
          bVar16 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar4 == 0) {
              bVar16 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,
                                "Failed to convert compression option number back to integer");
            }
          }
          if ((bVar16 != 0) && (4 < _gSZDefaultLogLevel)) {
            __SZLog(5,"SZConduitSendPathWithPreflight",0x1ab,
                    &cf_Failedtoconvertcompressionoptionnumberbacktointeger);
          }
        }
        if (0xfffffff4 < local_514 - 10U) goto LAB_0009633a;
        bVar16 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar4 == 0) {
            bVar16 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,
                              "Compression value specified is out of range; assuming 0");
          }
        }
        if ((bVar16 != 0) && (4 < _gSZDefaultLogLevel)) {
          __SZLog(5,"SZConduitSendPathWithPreflight",0x1ae,
                  &cf_Compressionvaluespecifiedisoutofrange_assuming0);
        }
        local_514 = 0;
LAB_000963d6:
        pcVar7 = &cf_ForceUncompressed;
      }
      _CFDictionarySetValue(lVar6,&cf_CompressionOptions,pcVar7);
      goto LAB_000963ec;
    }
    local_508 = &cf_PreferWifi;
    local_58 = pcVar14;
    local_540 = _CFDictionaryCreate(uVar1,&local_508,&local_58,1,
                                    PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                    PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (local_540 != 0) goto LAB_00096146;
    bVar16 = _gSZLogToSyslog ^ 1;
    lVar6 = local_520;
    if (_gSZLogToSyslog == 1) {
      iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      lVar6 = local_520;
      if (iVar4 == 0) {
        bVar16 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,"Failed to create a dictionary");
      }
    }
    if ((bVar16 != 0) && (4 < _gSZDefaultLogLevel)) {
      __SZLog(5,"SZConduitSendPathWithPreflight",0x19f,&cf_Failedtocreateadictionary);
    }
    iVar4 = -0x17fffffd;
    lVar8 = 0;
    local_540 = 0;
    goto LAB_00096b36;
  }
  pcVar14 = *(cfstringStruct **)PTR__kCFBooleanTrue_00441110;
  local_560 = 0;
  local_558 = 0;
  local_540 = 0;
  local_568 = 0;
LAB_000963ec:
  uStack_620 = param_9;
  local_618 = param_7;
  uStack_610 = param_8;
  local_628 = local_628 & 0xffffffff;
  _CFDictionarySetValue(lVar6,&cf_NoSeekOutput,pcVar14);
  _CFDictionarySetValue(lVar6,&cf_UncompressBloatedFiles,pcVar14);
  _CFDictionarySetValue(lVar6,&cf_NoCentralDirectory,pcVar14);
  uStack_5c0 = 0;
  local_5c8 = __WriteOutput;
  pcStack_5b0 = __TellOutput;
  pcStack_5e0 = __TransferCallback;
  uStack_5f0 = local_510;
  local_5e8 = param_9;
  local_5d8 = local_638;
  local_5a8 = local_638;
  lVar8 = _CFStringCreateWithFileSystemRepresentation(uVar1,local_528);
  pcVar11 = local_580;
  if (lVar8 == 0) {
    bVar16 = _gSZLogToSyslog ^ 1;
    lVar6 = local_520;
    if (_gSZLogToSyslog == 1) {
      iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      lVar6 = local_520;
      if (iVar4 == 0) {
        bVar16 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,"Failed to create destPath");
      }
    }
    if ((bVar16 != 0) && (4 < _gSZDefaultLogLevel)) {
      __SZLog(5,"SZConduitSendPathWithPreflight",0x1d5,&cf_FailedtocreatedestPath);
    }
    lVar13 = 0;
    lVar8 = 0;
    lVar9 = 0;
    goto LAB_00096771;
  }
  lVar9 = _realpath_DARWIN_EXTSN(local_580,local_478);
  lVar6 = local_520;
  if (lVar9 == 0) {
    bVar16 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar4 == 0) {
        bVar16 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        puVar2 = _SZGetLoggingHandle_logHandle;
        piVar10 = ___error();
        pcVar12 = _strerror(*piVar10);
        __os_log_internal(0,puVar2,0,"Failed to realpath %s at %s : %s",pcVar11,local_478,pcVar12);
      }
    }
    iVar4 = -0x17fffff8;
    if ((bVar16 != 0) && (4 < _gSZDefaultLogLevel)) {
      piVar10 = ___error();
      _strerror(*piVar10);
      pcVar14 = &cf_Failedtorealpath_sat_s__s;
      pcVar11 = local_478;
      uVar15 = 0x1e3;
      pcVar12 = local_580;
LAB_00096893:
      iVar4 = -0x17fffff8;
      __SZLog(5,"SZConduitSendPathWithPreflight",uVar15,pcVar14,pcVar12,pcVar11);
    }
  }
  else {
    iVar4 = _lstat_INODE64(local_478,&local_508);
    lVar6 = local_520;
    if (iVar4 == 0) {
      if (((local_508._4_2_ & 0xf000) != 0x4000) && ((local_508._4_2_ & 0xf000) != 0x8000)) {
        bVar16 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar4 == 0) {
            bVar16 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,"Unsupported path type; mode 0%ho",
                              local_508._4_2_);
          }
        }
        if ((bVar16 != 0) && (4 < _gSZDefaultLogLevel)) {
          __SZLog(5,"SZConduitSendPathWithPreflight",0x1f1,&cf_Unsupportedpathtype_mode0_ho,
                  local_508._4_2_);
        }
        lVar13 = 0;
        lVar9 = 0;
        iVar4 = -0x17fffff1;
        goto LAB_00096b39;
      }
      local_550 = 0;
      local_528 = uVar1;
      lVar13 = _AMDeviceCreateCopy(local_588);
      if (lVar13 == 0) {
        bVar16 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar4 == 0) {
            bVar16 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,"AMDeviceCreateCopy failed");
          }
        }
        if ((bVar16 != 0) && (4 < _gSZDefaultLogLevel)) {
          __SZLog(5,"_CopyStreamingZipServiceConnectionForDevice",0x133,&cf_AMDeviceCreateCopyfailed
                 );
        }
        iVar4 = -0x17fffff9;
      }
      else {
        iVar4 = _AMDeviceConnect(lVar13);
        if (iVar4 == 0) {
          iVar4 = _AMDeviceStartSession(lVar13);
          if (iVar4 == 0) {
            local_48 = &cf_MinAppleTVVersion;
            local_58 = &cf_MinIPhoneVersion;
            pcStack_50 = &cf_MinWatchVersion;
            local_68 = &cf_9_0;
            local_78 = 0x452d90;
            uStack_74 = 0;
            uStack_70 = 0x452db0;
            uStack_6c = 0;
            lVar9 = _CFDictionaryCreate(local_528,&local_58,&local_78,3,
                                        PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            cVar3 = _AMDeviceIsAtLeastVersionOnPlatform(lVar13,lVar9);
            if (lVar9 != 0) {
              _CFRelease(lVar9);
            }
            if (cVar3 == '\0') {
              iVar4 = -0x17fffff1;
              lVar9 = 0;
            }
            else {
              local_58 = (cfstringStruct *)((ulong)local_58 & 0xffffffff00000000);
              lVar9 = _AMDeviceCopyValueWithError(lVar13,0,&cf_ProductType);
              local_530 = lVar8;
              if (lVar9 == 0) {
                bVar16 = _gSZLogToSyslog ^ 1;
                if (_gSZLogToSyslog == 1) {
                  iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                  if (iVar4 == 0) {
                    bVar16 = 1;
                  }
                  else {
                    if (_SZGetLoggingHandle_onceToken != -1) {
                      _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                    }
                    __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,
                                      "Failed to get device type for AMDeviceRef: 0x%x",
                                      (ulong)local_58 & 0xffffffff);
                  }
                }
                if ((bVar16 != 0) && (4 < _gSZDefaultLogLevel)) {
                  __SZLog(5,"_CompressionLevelForDevice",0x4b,
                          &cf_FailedtogetdevicetypeforAMDeviceRef_0x_x,(ulong)local_58 & 0xffffffff)
                  ;
                }
              }
              else {
                _CFRelease(lVar9);
              }
              local_514 = 0;
              pcVar14 = &cf_com_apple_streaming_zip_conduit;
              if ((char)local_568 != '\0') {
                pcVar14 = &cf_com_apple_streaming_zip_conduit_factory;
              }
              iVar4 = _AMDeviceSecureStartService(lVar13,pcVar14,local_540,&local_550);
              local_510 = CONCAT44(local_510._4_4_,iVar4);
              if (iVar4 == 0) {
                iVar4 = 0;
                lVar8 = local_530;
                lVar9 = local_550;
              }
              else {
                bVar16 = _gSZLogToSyslog ^ 1;
                if (_gSZLogToSyslog == 1) {
                  iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                  if (iVar4 == 0) {
                    bVar16 = 1;
                  }
                  else {
                    if (_SZGetLoggingHandle_onceToken != -1) {
                      _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                    }
                    puVar2 = _SZGetLoggingHandle_logHandle;
                    uVar15 = _CFStringGetCStringPtr(pcVar14,0x8000100);
                    __os_log_internal(0,puVar2,0,"Failed to start service %s: 0x%x",uVar15,
                                      local_510 & 0xffffffff);
                  }
                }
                if ((bVar16 != 0) && (4 < _gSZDefaultLogLevel)) {
                  uVar15 = _CFStringGetCStringPtr(pcVar14,0x8000100);
                  __SZLog(5,"_CopyStreamingZipServiceConnectionForDevice",0x153,
                          &cf_Failedtostartservice_s_0x_x,uVar15,local_510 & 0xffffffff);
                }
                lVar8 = local_530;
                if (local_550 != 0) {
                  _CFRelease();
                }
                local_550 = 0;
                lVar9 = 0;
                iVar4 = (int)local_510;
              }
            }
            _AMDeviceStopSession(lVar13);
          }
          else {
            local_510 = CONCAT44(local_510._4_4_,iVar4);
            bVar16 = _gSZLogToSyslog ^ 1;
            if (_gSZLogToSyslog == 1) {
              iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              if (iVar4 == 0) {
                bVar16 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,
                                  "AMDeviceStartSession failed: 0x%08x",local_510 & 0xffffffff);
              }
            }
            lVar9 = 0;
            iVar4 = (int)local_510;
            if ((bVar16 != 0) && (4 < _gSZDefaultLogLevel)) {
              lVar9 = 0;
              __SZLog(5,"_CopyStreamingZipServiceConnectionForDevice",0x141,
                      &cf_AMDeviceStartSessionfailed_0x_08x,local_510 & 0xffffffff);
            }
          }
          _AMDeviceDisconnect(lVar13);
          _CFRelease(lVar13);
          if (iVar4 != 0) {
            lVar13 = 0;
            goto LAB_00096b39;
          }
          local_638[0] = lVar9;
          lVar13 = _CFDictionaryCreateMutable
                             (local_528,2,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          if (lVar13 == 0) {
            bVar16 = _gSZLogToSyslog ^ 1;
            if (_gSZLogToSyslog == 1) {
              iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              if (iVar4 == 0) {
                bVar16 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,
                                  "Failed to create message dictionary");
              }
            }
            lVar13 = 0;
            if ((bVar16 != 0) && (4 < _gSZDefaultLogLevel)) {
              pcVar14 = &cf_Failedtocreatemessagedictionary;
              lVar13 = 0;
              uVar15 = 0x200;
LAB_00097264:
              __SZLog(5,"SZConduitSendPathWithPreflight",uVar15,pcVar14);
            }
LAB_00096771:
            iVar4 = -0x17fffffd;
            goto LAB_00096b39;
          }
          _CFDictionarySetValue(lVar13,&cf_MediaSubdir,lVar8);
          _CFDictionarySetValue(lVar13,&cf_InstallTransferredDirectory,local_570);
          _CFDictionarySetValue(lVar13,&cf_UserInitiatedTransfer,local_578);
          if (local_560 != 0) {
            _CFDictionarySetValue(lVar13,&cf_SpringBoardIconLayoutData);
          }
          if (local_558 != 0) {
            _CFDictionarySetValue(lVar13,&cf_InstallOptionsDictionary);
          }
          if (SBORROW2(0,local_508._4_2_ & 0xf000) && (char)local_534 == '\0') {
            uVar15 = _CFNumberCreate(local_528,4,local_4a8);
            _CFDictionarySetValue(lVar13,&cf_PassThroughFileWithLength,uVar15);
            _CFRelease(uVar15);
          }
          iVar4 = _AMDServiceConnectionSendMessage(lVar9,lVar13,200,0);
          if (iVar4 == 0) {
            object._os_obj = (_os_object_s *)__MonitorResult(local_638);
            if (object._os_obj == (_os_object_s *)0x0) {
              bVar16 = _gSZLogToSyslog ^ 1;
              if (_gSZLogToSyslog == 1) {
                iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                if (iVar4 == 0) {
                  bVar16 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,
                                    "Failed to monitor results from device.");
                }
              }
              if ((bVar16 != 0) && (4 < _gSZDefaultLogLevel)) {
                pcVar14 = &cf_Failedtomonitorresultsfromdevice_;
                uVar15 = 0x220;
                goto LAB_00097264;
              }
              goto LAB_00096771;
            }
            if (SBORROW2(0,local_508._4_2_ & 0xf000)) {
              if ((char)local_534 == '\0') {
                cVar3 = __PassThroughFile(local_478,&local_508,&local_5f8);
                if (cVar3 == '\0') goto LAB_000973a3;
                goto LAB_00097292;
              }
              cVar3 = _SZArchiverConvertZipArchiveToStreamable
                                (local_478,&local_5f8,lVar6,&local_548);
              if (cVar3 != '\0') goto LAB_00097292;
              bVar16 = _gSZLogToSyslog ^ 1;
              local_530 = lVar8;
              if (_gSZLogToSyslog == 1) {
                iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                if (iVar4 == 0) {
                  bVar16 = 1;
                  lVar6 = local_520;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,
                                    "Failed to convert zip archive at path \"%s\" to streamable.",
                                    local_478);
                  lVar6 = local_520;
                }
              }
              lVar8 = local_530;
              if ((bVar16 != 0) && (4 < _gSZDefaultLogLevel)) {
                pcVar14 = &cf_Failedtoconvertziparchiveatpath__s_tostreamable_;
                uVar15 = 0x228;
                goto LAB_0009739c;
              }
LAB_000973a3:
              iVar4 = _AMDServiceConnectionGetSocket(lVar9);
              _shutdown(iVar4,2);
              local_510 = CONCAT44(local_510._4_4_,0xe8000004);
            }
            else {
              cVar3 = _SZArchiverCreateStreamableZip(local_478,&local_5f8,lVar6,&local_548);
              if (cVar3 == '\0') {
                bVar16 = _gSZLogToSyslog ^ 1;
                local_530 = lVar8;
                if (_gSZLogToSyslog == 1) {
                  iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                  if (iVar4 == 0) {
                    bVar16 = 1;
                  }
                  else {
                    if (_SZGetLoggingHandle_onceToken != -1) {
                      _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                    }
                    __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,
                                      "Failed to create streamable zip archive from path \"%s\".",
                                      local_478);
                    lVar6 = local_520;
                  }
                }
                lVar8 = local_530;
                if ((bVar16 != 0) && (4 < _gSZDefaultLogLevel)) {
                  pcVar14 = &cf_Failedtocreatestreamableziparchivefrompath__s__;
                  uVar15 = 0x233;
LAB_0009739c:
                  lVar8 = local_530;
                  __SZLog(5,"SZConduitSendPathWithPreflight",uVar15,pcVar14,local_478);
                }
                goto LAB_000973a3;
              }
LAB_00097292:
              local_510 = local_510 & 0xffffffff00000000;
            }
            _dispatch_semaphore_wait((dispatch_semaphore_t)object._os_obj,0xffffffffffffffff);
            _dispatch_release(object);
            iVar4 = iStack_624;
            if (iStack_624 != 0) goto LAB_00096b39;
          }
          else {
            local_510 = CONCAT44(local_510._4_4_,iVar4);
            piVar10 = ___error();
            bVar16 = _gSZLogToSyslog ^ 1;
            iVar5 = *piVar10;
            if (_gSZLogToSyslog == 1) {
              local_528 = CONCAT44(local_528._4_4_,*piVar10);
              iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              if (iVar4 == 0) {
                bVar16 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,
                                  "Failed to send initial message: %x (error %d)",
                                  local_510 & 0xffffffff,local_528 & 0xffffffff);
              }
              iVar5 = (int)local_528;
            }
            if ((bVar16 != 0) && (4 < _gSZDefaultLogLevel)) {
              iVar4 = (int)local_510;
              __SZLog(5,"SZConduitSendPathWithPreflight",0x21a,
                      &cf_Failedtosendinitialmessage__x_error_d_,local_510 & 0xffffffff,iVar5);
              goto LAB_00096b39;
            }
          }
          iVar4 = (int)local_510;
          goto LAB_00096b39;
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
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,"AMDeviceConnect failed: 0x%08x",
                              iVar4);
          }
        }
        if ((bVar16 != 0) && (4 < _gSZDefaultLogLevel)) {
          __SZLog(5,"_CopyStreamingZipServiceConnectionForDevice",0x13a,
                  &cf_AMDeviceConnectfailed_0x_08x,iVar4);
        }
        _CFRelease(lVar13);
      }
    }
    else {
      bVar16 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar4 == 0) {
          bVar16 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          puVar2 = _SZGetLoggingHandle_logHandle;
          piVar10 = ___error();
          pcVar11 = _strerror(*piVar10);
          __os_log_internal(0,puVar2,0,"Failed to stat path \"%s\": %s",local_478,pcVar11);
        }
      }
      iVar4 = -0x17fffff8;
      if ((bVar16 != 0) && (4 < _gSZDefaultLogLevel)) {
        piVar10 = ___error();
        pcVar11 = _strerror(*piVar10);
        pcVar14 = &cf_Failedtostatpath__s___s;
        uVar15 = 0x1eb;
        pcVar12 = local_478;
        goto LAB_00096893;
      }
    }
  }
LAB_00096b36:
  lVar13 = 0;
  lVar9 = 0;
LAB_00096b39:
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (local_548 != 0) {
    _CFRelease();
  }
  local_548 = 0;
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  if (lVar13 != 0) {
    _CFRelease(lVar13);
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (local_540 != 0) {
    _CFRelease();
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

