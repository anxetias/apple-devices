// rea decompile_all
// name: _AMDeviceSecureTransferPath
// address: 0x14d73d
// body: available
// range: 0x14d73d-0x14f5ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x14f3f5 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceSecureTransferPath
              (long param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
              undefined8 param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  size_t sVar13;
  tm *ptVar14;
  time_t tVar15;
  undefined8 uVar16;
  char *pcVar17;
  char *pcVar18;
  undefined4 uVar19;
  ulong uVar20;
  bool bVar21;
  undefined1 local_26c0 [4];
  ushort local_26bc;
  undefined8 local_2690;
  undefined1 local_2630 [32];
  uint local_2610;
  ulong local_25f8;
  undefined8 local_25c8;
  undefined1 local_25a8 [16];
  long local_2598;
  long local_2590;
  ulong local_2588;
  char *local_2580;
  long local_2578;
  long local_2570;
  long local_2568;
  long local_2560;
  undefined8 local_2558;
  long local_2550;
  long local_2548;
  undefined8 local_2540;
  cfstringStruct *local_2538;
  long local_2530;
  long local_2528;
  undefined8 local_2520;
  undefined8 local_2518;
  undefined4 local_250c;
  undefined8 local_2508;
  long local_2500;
  long local_24f8;
  ulong local_24f0;
  long local_24e8;
  long local_24e0;
  long local_24d8;
  uint local_24cc;
  undefined1 local_24c8 [1040];
  undefined1 local_20b8 [1040];
  char local_1ca8 [1040];
  char local_1898 [1040];
  char local_1488 [1040];
  undefined1 local_1078 [1040];
  char local_c68 [1039];
  char acStack_859 [1041];
  time_t local_448 [6];
  long local_418;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_2540 = param_6;
  ___bzero(local_1078,0x401);
  local_2568 = 0;
  local_2560 = 0;
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  local_24f8 = 0;
  __os_log_internal(0,_md_log_log,1,"Transferring package at path %@ to device %@",param_3,param_2);
  if (param_1 == 0 && param_2 == 0) {
    iVar2 = -0x17fffff9;
LAB_0014d7e4:
    local_2548 = 0;
  }
  else {
    local_2538 = &cf_PublicStaging;
    local_2520 = param_5;
    local_2508 = param_3;
    local_24f0 = param_4;
    local_24d8 = param_2;
    if (param_4 == 0) {
      bVar21 = true;
      uVar19 = 0;
    }
    else {
      lVar6 = _CFDictionaryGetValue(param_4,&cf_DisableDeltaTransfer);
      if (lVar6 == 0) {
        uVar19 = 0;
      }
      else {
        cVar1 = _CFEqual(lVar6,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
        uVar19 = (undefined4)CONCAT71((int7)(param_4 >> 8),cVar1 != '\0');
      }
      lVar6 = _CFDictionaryGetValue(local_24f0,&cf_DisableUnzipOnTheFly);
      if (lVar6 == 0) {
        bVar21 = true;
      }
      else {
        cVar1 = _CFEqual(lVar6,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
        bVar21 = cVar1 == '\0';
      }
      pcVar7 = (cfstringStruct *)_CFDictionaryGetValue(local_24f0,&cf_InputStagingPathKey);
      if (pcVar7 != (cfstringStruct *)0x0) {
        lVar6 = _CFGetTypeID(pcVar7);
        lVar8 = _CFStringGetTypeID();
        param_5 = local_2520;
        if (lVar6 == lVar8) {
          local_2538 = pcVar7;
        }
      }
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar7 = local_2538;
    local_2518 = CONCAT44(local_2518._4_4_,uVar19);
    pcVar18 = "TRUE";
    pcVar17 = "TRUE";
    if ((char)uVar19 == '\0') {
      pcVar17 = "FALSE";
    }
    local_2558 = CONCAT71(local_2558._1_7_,bVar21);
    if (bVar21 == false) {
      pcVar18 = "FALSE";
    }
    __os_log_internal(0,_md_log_log,1,"disableDelta: %s, unzipOnFly: %s, StagingPath: %@",pcVar17,
                      pcVar18,local_2538);
    _fire_callback_3230(param_5,local_2540,0,&cf_PreflightingTransfer);
    cVar1 = _CFPreferencesGetAppBooleanValue(&cf_DisableSZConduit,&cf_com_apple_MobileDevice,0);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar12 = local_24f0;
    local_2500 = param_1;
    if (cVar1 == '\0') {
      __os_log_internal(0,_md_log_log,0,"Trying SZConduit for transfer");
      if (uVar12 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = _CFDictionaryGetValue(uVar12,&cf_IsUserInitiated);
        if (lVar6 != 0) {
          uVar16 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
          cVar1 = _CFEqual(lVar6,uVar16);
          if (cVar1 == '\0') goto LAB_0014dc2b;
          lVar6 = _CFDictionaryCreateMutable
                            (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                             PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          if (lVar6 != 0) {
            _CFDictionarySetValue(lVar6,&cf_UserInitiatedTransfer,uVar16);
            goto LAB_0014dc2e;
          }
joined_r0x0014df8e:
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_24f8 = 0;
          __os_log_internal(0,_md_log_log,0x10,"Failed to create options dictionary.");
          iVar2 = -0x17fffffd;
          goto LAB_0014d7e4;
        }
LAB_0014dc2b:
        lVar6 = 0;
LAB_0014dc2e:
        lVar8 = _CFDictionaryGetValue(uVar12,&cf_PreferWifi);
        if (lVar8 != 0) {
          uVar16 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
          cVar1 = _CFEqual(lVar8,uVar16);
          if (cVar1 != '\0') {
            if ((lVar6 == 0) &&
               (lVar6 = _CFDictionaryCreateMutable
                                  (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                   PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                   PTR__kCFTypeDictionaryValueCallBacks_004411b8), lVar6 == 0))
            goto joined_r0x0014df8e;
            _CFDictionarySetValue(lVar6,&cf_PreferWifi,uVar16);
          }
        }
      }
      local_24f8 = 0;
      iVar2 = __AMDeviceTransferAndInstallUsingSZConduit
                        (local_24d8,local_2508,pcVar7,lVar6,0,(char)local_2558 != '\0',param_5,
                         local_2540);
      if (iVar2 != -0x17fffff1) {
        local_2548 = lVar6;
        if (iVar2 != 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_24f8 = 0;
          __os_log_internal(0,_md_log_log,0x10,"SZConduitSendPathWithPreflight returned %d",iVar2);
        }
        goto LAB_0014de0d;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar16 = local_2508;
      __os_log_internal(0,_md_log_log,2,
                        "SZConduitSendPathWithPreflight returned unsupported for this device; falling back to AFC"
                       );
      iVar2 = -0x17fffff1;
    }
    else {
      lVar6 = 0;
      __os_log_internal(0,_md_log_log,2,"SZConduit transport is disabled via defaults");
      iVar2 = -0x17ffffff;
      uVar16 = local_2508;
    }
    cVar1 = _CFURLGetFileSystemRepresentation(uVar16,1,local_1488,0x401);
    local_2548 = lVar6;
    if (cVar1 == '\x01') {
      iVar2 = _preflight_transfer(local_1488,local_26c0,local_25a8);
      if (iVar2 == 0) {
        if (((local_26bc & 0xf000) == 0x4000) || ((local_26bc & 0xf000) == 0x8000)) {
          if (local_24d8 != 0) {
            lVar6 = _AMDeviceCreateCopy();
            if (lVar6 == 0) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              iVar2 = 0;
              __os_log_internal(0,_md_log_log,1,"Could not unserialize a copy of the device");
              goto LAB_0014ee65;
            }
            iVar2 = _AMDeviceConnect(lVar6);
            if (iVar2 == 0) {
              iVar2 = _AMDeviceStartSession(lVar6);
              if (iVar2 == 0) {
                uVar12 = 0;
                local_2528 = lVar6;
                lVar6 = _AMDeviceCopyValueWithError(lVar6,0,&cf_ProductVersion,0);
                lVar8 = local_2500;
                cVar1 = (char)local_2518;
                if (lVar6 != 0) {
                  cVar1 = true;
                  if ((char)local_2518 == '\0') {
                    lVar9 = _CFStringCompare(lVar6,&cf_3_2,0x40);
                    cVar1 = lVar9 == -1;
                  }
                  lVar9 = _CFStringCompare(lVar6,&cf_5_0,0x40);
                  uVar12 = (ulong)(lVar9 != -1);
                  _CFRelease(lVar6);
                }
                lVar6 = local_2528;
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                pcVar17 = "false";
                if ((char)uVar12 != '\0') {
                  pcVar17 = "true";
                }
                local_2570 = 0;
                __os_log_internal(0,_md_log_log,2,"initialising tryImmutable at %s",pcVar17);
                if (lVar8 != 0) {
LAB_0014dfaa:
                  local_2530 = 0;
                  if ((cVar1 == '\0') && ((local_26bc & 0xf000) == 0x4000)) {
                    _snprintf(local_1898,0x400,"%s%cInfo.plist",local_1488,0x2f);
                    lVar6 = __CreateDictFromFileContents(local_1898);
                    if (lVar6 == 0) {
                      local_2530 = 0;
                      lVar6 = local_2528;
                    }
                    else {
                      lVar9 = _CFDictionaryGetValue(lVar6,&cf_CFBundleExecutable);
                      if (lVar9 == 0) {
                        local_2530 = 0;
                      }
                      else {
                        lVar10 = _CFGetTypeID(lVar9);
                        lVar11 = _CFStringGetTypeID();
                        if (lVar10 == lVar11) {
                          _CFRetain(lVar9);
                          local_2530 = lVar9;
                          cVar1 = _CFStringGetCString(lVar9,local_1078,0x401,0x8000100);
                          param_5 = local_2520;
                          if ((cVar1 != '\0') &&
                             (lVar9 = _CFDictionaryGetValue(lVar6,&cf_CFBundleIdentifier),
                             param_5 = local_2520, lVar9 != 0)) {
                            if (_md_log_onceToken != -1) {
                              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                            }
                            __os_log_internal(0,_md_log_log,0x10,
                                              "Using delta for package at path %@ ID is %@",
                                              local_2508,lVar9);
                            _AMDeviceCreateHouseArrestService(local_2528,lVar9,0,&local_2560);
                          }
                        }
                        else {
                          local_2530 = 0;
                          param_5 = local_2520;
                        }
                      }
                      _CFRelease(lVar6);
                      lVar6 = local_2528;
                    }
                  }
                  _AMDeviceStopSession(lVar6);
                  _AMDeviceDisconnect(lVar6);
                  goto LAB_0014e13a;
                }
                iVar2 = _AMDeviceSecureStartService(lVar6,&cf_com_apple_afc,0,&local_2568);
                if (iVar2 == 0) {
                  local_250c = 0;
                  if (local_2568 == 0) {
                    uVar19 = 0xffffffff;
                  }
                  else {
                    uVar19 = *(undefined4 *)(local_2568 + 0x10);
                  }
                  lVar8 = _AFCConnectionCreate
                                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,uVar19,0,0,
                                     &local_250c);
                  if (lVar8 != 0) {
                    if (local_2568 == 0) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = *(undefined8 *)(local_2568 + 0x18);
                    }
                    _AFCConnectionSetSecureContext(lVar8,uVar16);
                    local_2570 = lVar8;
                    goto LAB_0014dfaa;
                  }
                  iVar2 = -0x17fffffd;
                }
                else {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  __os_log_internal(0,_md_log_log,2,"failed to start service %@",&cf_com_apple_afc);
                  lVar6 = local_2528;
                }
                _AMDeviceStopSession(lVar6);
              }
              _AMDeviceDisconnect(lVar6);
            }
            local_24f8 = 0;
            lVar8 = 0;
            lVar10 = 0;
            lVar9 = 0;
            goto LAB_0014de15;
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          lVar8 = local_2500;
          uVar12 = 0;
          __os_log_internal(0,_md_log_log,2,"leaving tryImmutable at %s","false");
          lVar6 = 0;
          local_2530 = 0;
          local_2570 = 0;
LAB_0014e13a:
          _fire_callback_3230(param_5,local_2540,10,&cf_TransferringPackage);
          lVar9 = _CFURLCopyLastPathComponent(local_2508);
          local_24d8 = lVar9;
          if (lVar9 == 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            iVar2 = 0;
            __os_log_internal(0,_md_log_log,2,"failed to copy last path component of %@",local_2508)
            ;
            local_24f8 = 0;
            lVar8 = 0;
            lVar10 = 0;
            lVar9 = local_24d8;
          }
          else {
            cVar1 = _CFStringGetCString(lVar9,local_24c8,0x401,0x8000100);
            if (cVar1 == '\x01') {
              local_250c = 0;
              uVar3 = _afc_stat(lVar8,".",local_448);
              pcVar7 = local_2538;
              local_24f0 = uVar12;
              if ((uVar3 == 0) && (local_418 != 0)) {
                local_250c = 1;
                local_2508 = CONCAT44(local_2508._4_4_,1);
              }
              else {
                if (uVar3 != 0) {
                  if (uVar3 < 0x19) {
                    iVar2 = *(int *)(&DAT_00449878 + (ulong)uVar3 * 0x10);
                  }
                  else {
                    iVar2 = -0x17ffffff;
                  }
                  goto LAB_0014ef78;
                }
                local_2508 = CONCAT44(local_2508._4_4_,local_250c);
              }
              uVar16 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
              local_24e0 = _CFStringCreateWithFormat(uVar16,0,&cf____c_s,local_2538,0x2f,local_24c8)
              ;
              cVar1 = _CFStringGetFileSystemRepresentation(local_24e0,local_1ca8,0x400);
              if (cVar1 == '\0') {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,0x10,"Failed to convert dest path to C string");
                local_24f8 = 0;
LAB_0014e4dc:
                lVar10 = 0;
                iVar2 = 0;
                lVar8 = 0;
              }
              else {
                lVar10 = __AMDCFURLCreateWithFileSystemPathRelativeToBase(uVar16,pcVar7,0,1);
                if (lVar10 == 0) {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  lVar10 = 0;
                  __os_log_internal(0,_md_log_log,2,"failed to create staging URL");
                  local_24f8 = 0;
                  iVar2 = 0;
                  lVar9 = local_24d8;
                  lVar8 = 0;
                }
                else {
                  local_2518 = uVar16;
                  local_24f8 = lVar10;
                  lVar10 = _CFURLCreateCopyAppendingPathComponent(uVar16,lVar10,lVar9,1);
                  if (lVar10 == 0) {
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    lVar9 = local_24d8;
                    __os_log_internal(0,_md_log_log,2,
                                      "failed to create staging URL by appending component \"%@\" to \"%@\""
                                      ,local_24d8,local_24f8);
                    goto LAB_0014e4dc;
                  }
                  ___strlcpy_chk(local_20b8,local_24c8,0x400,0x401);
                  local_24e8 = lVar10;
                  uVar3 = _nuke_path(lVar8,lVar10);
                  uVar12 = local_24f0;
                  if ((uVar3 & 0xfffffff7) != 0) {
                    if (uVar3 < 0x19) {
                      iVar2 = *(int *)(&DAT_00449878 + (ulong)uVar3 * 0x10);
                    }
                    else {
                      iVar2 = -0x17ffffff;
                    }
                    lVar10 = 0;
                    lVar8 = local_24e8;
                    goto LAB_0014f34e;
                  }
                  if ((local_26bc & 0xf000) == 0x4000) {
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    __os_log_internal(0,_md_log_log,1,
                                      "%s:%d starting delta_transfer_directory, ref_afc: %p\n",
                                      "AMDeviceSecureTransferPath",0x7c1,local_2560);
                    uVar12 = uVar12 & 0xff;
                    uVar3 = _delta_transfer_directory
                                      (local_1488,lVar8,local_1ca8,local_2560,local_20b8,local_2520,
                                       local_2540,local_25a8,uVar12);
                    if (uVar3 == 0) {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      __os_log_internal(0,_md_log_log,1,"%s:%d finished delta_transfer_directory\n",
                                        "AMDeviceSecureTransferPath",0x7c4);
                      uVar3 = _afc_transfer_missing(local_1078,local_1488,lVar8,local_1ca8,uVar12);
                      if ((((uVar3 == 0) &&
                           (uVar3 = _afc_transfer_missing
                                              ("Info.plist",local_1488,lVar8,local_1ca8,uVar12),
                           uVar3 == 0)) &&
                          (uVar3 = _afc_transfer_missing
                                             ("ResourceRules.plist",local_1488,lVar8,local_1ca8,
                                              uVar12), uVar3 == 0)) &&
                         (uVar3 = _afc_transfer_missing
                                            ("CodeResources",local_1488,lVar8,local_1ca8,uVar12),
                         uVar3 == 0)) {
                        uVar3 = _afc_transfer_missing
                                          ("_CodeSignature/CodeResources",local_1488,lVar8,
                                           local_1ca8,uVar12);
                        goto joined_r0x0014f33c;
                      }
                    }
joined_r0x0014f38d:
                    if (uVar3 < 0x19) {
                      iVar2 = *(int *)(&DAT_00449878 + (ulong)uVar3 * 0x10);
                    }
                    else {
                      iVar2 = -0x17ffffff;
                    }
                  }
                  else {
                    local_2588 = local_24f0 & 0xff;
                    local_2500 = lVar8;
                    if (((char)local_2558 != '\0') && ((int)local_2508 != 0)) {
                      local_2578 = 0;
                      local_2550 = 0;
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      __os_log_internal(0,_md_log_log,2,"src_path is %s",local_1488);
                      pcVar7 = _malloc(0x100000);
                      local_2528 = lVar6;
                      if (pcVar7 == (cfstringStruct *)0x0) {
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        uVar12 = 0;
                        __os_log_internal(0,_md_log_log,1,"Can\'t allocate read buffer");
                        local_24cc = 3;
                        lVar8 = local_2500;
                        lVar9 = local_24d8;
                      }
                      else {
                        uVar12 = _unzOpen(local_1488);
                        local_2538 = pcVar7;
                        local_24f0 = uVar12;
                        if (uVar12 == 0) {
                          if (_md_log_onceToken != -1) {
                            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                          }
                          pcVar18 = "Can\'t open zip file %s";
                          pcVar17 = local_1488;
LAB_0014f2bc:
                          __os_log_internal(0,_md_log_log,1,pcVar18,pcVar17);
                          local_24cc = 4;
                          uVar12 = local_24f0;
                          lVar8 = local_2500;
                          lVar9 = local_24d8;
                        }
                        else {
                          local_25a8 = (undefined1  [16])0x0;
                          do {
                            iVar2 = _unz64local_GetCurrentFileInfoInternal(uVar12,local_2630,0,0,0);
                            if (iVar2 != 0) {
                              if (_md_log_onceToken != -1) {
                                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                              }
                              pcVar17 = "Unable to read file info from zip";
                              goto LAB_0014ecca;
                            }
                            local_25a8._8_8_ = local_25f8 + local_25a8._8_8_;
                            local_25a8._0_8_ = local_25a8._0_8_ + 1;
                            iVar2 = _unzGoToNextFile(uVar12);
                          } while (iVar2 == 0);
                          *(undefined8 *)(uVar12 + 0x88) = *(undefined8 *)(uVar12 + 0xa8);
                          *(undefined8 *)(uVar12 + 0x80) = 0;
                          iVar2 = _unz64local_GetCurrentFileInfoInternal
                                            (uVar12,uVar12 + 0xb0,uVar12 + 0x138,0,0);
                          *(ulong *)(uVar12 + 0x90) = (ulong)(iVar2 == 0);
                          local_24cc = 1;
                          local_2580 = "Symlink target in %s is too long";
                          uVar16 = local_2518;
                          do {
                            iVar2 = _unz64local_GetCurrentFileInfoInternal
                                              (uVar12,local_2630,0,acStack_859 + 1,0x401);
                            if (iVar2 != 0) {
                              if (_md_log_onceToken != -1) {
                                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                              }
                              pcVar17 = "Unable to read file info";
LAB_0014ecca:
                              __os_log_internal(0,_md_log_log,1,pcVar17);
                              local_24cc = 4;
                              goto LAB_0014f2e7;
                            }
                            if (acStack_859[1] != '\0') {
                              local_2558 = local_25c8;
                              pcVar17 = acStack_859 + 1;
                              sVar13 = _strlen(pcVar17);
                              cVar1 = pcVar17[sVar13 - 1];
                              _snprintf(local_c68,0x401,"%s/%s",local_1ca8,pcVar17);
                              lVar6 = _CFStringCreateWithCString(uVar16,local_c68,0x8000100);
                              uVar12 = local_24f0;
                              lVar9 = local_24d8;
                              if (lVar6 == 0) goto LAB_0014f2e7;
                              lVar8 = __AMDCFURLCreateWithFileSystemPathRelativeToBase
                                                (uVar16,lVar6,0,cVar1 == '/');
                              local_2508 = CONCAT71(local_2508._1_7_,cVar1);
                              if (lVar8 == 0) {
                                iVar2 = -1;
LAB_0014e763:
                                _CFRelease(lVar6);
                              }
                              else {
                                lVar9 = _CFURLCreateCopyDeletingLastPathComponent(uVar16,lVar8);
                                if (lVar9 == 0) {
                                  iVar2 = -1;
                                }
                                else {
                                  iVar2 = _make_path_if_needed(local_2500,lVar9,&local_2578);
                                  iVar2 = -(uint)(iVar2 != 0);
                                }
                                _CFRelease(lVar6);
                                _CFRelease(lVar8);
                                lVar6 = lVar9;
                                if (lVar9 != 0) goto LAB_0014e763;
                              }
                              lVar9 = local_24d8;
                              uVar12 = local_24f0;
                              lVar8 = local_2500;
                              uVar16 = local_2540;
                              uVar20 = local_25f8;
                              if (iVar2 != 0) goto LAB_0014f2e7;
                              if ((char)local_2508 == '/') {
                                sVar13 = _strlen(local_c68);
                                lVar6 = _CFURLCreateFromFileSystemRepresentation
                                                  (0,local_c68,sVar13,1);
                                if (lVar6 != 0) {
                                  uVar3 = _make_path_if_needed(lVar8,lVar6,&local_2578);
                                  _CFRelease(lVar6);
                                  local_24cc = uVar3;
joined_r0x0014ea44:
                                  if (local_24cc == 0) {
LAB_0014ea4a:
                                    local_2598 = local_2598 + 1;
                                    local_24cc = 0;
                                    uVar16 = local_2518;
                                    goto LAB_0014ea5b;
                                  }
                                }
                                goto LAB_0014f2e7;
                              }
                              if (((uint)local_2558 & 0xf0000000) == 0xa0000000) {
                                ___bzero(local_448,0x401);
                                if (uVar20 < 0x401) {
                                  iVar2 = _unzOpenCurrentFile(uVar12);
                                  if (iVar2 == 0) {
                                    uVar3 = _unzReadCurrentFile(uVar12,local_448,uVar20 & 0xffffffff
                                                               );
                                    if (uVar20 == uVar3) {
                                      *(undefined1 *)((long)local_448 + uVar20) = 0;
                                      uVar3 = _AFCLinkPath(lVar8,2,local_448,local_c68);
                                      if (uVar3 == 0) {
                                        _unzCloseCurrentFile(uVar12);
                                        goto LAB_0014ea4a;
                                      }
                                      local_24cc = uVar3;
                                      _pretty_afc_error("make_symlink",
                                                        "Could not create symlink on device",uVar3);
                                    }
                                    else {
                                      if (_md_log_onceToken != -1) {
                                        _dispatch_once(&_md_log_onceToken,
                                                       &___block_literal_global_2470);
                                      }
                                      __os_log_internal(0,_md_log_log,0x10,
                                                        "Could not read symlink from %s",
                                                        acStack_859 + 1);
                                      local_24cc = 1;
                                      uVar12 = local_24f0;
                                      lVar8 = local_2500;
                                      lVar9 = local_24d8;
                                    }
                                    _unzCloseCurrentFile(uVar12);
                                    goto LAB_0014f2e7;
                                  }
                                  local_24cc = 4;
                                  local_2580 = "Could not open %s in zip file";
                                }
                                else {
                                  local_24cc = 1;
                                }
                                if (_md_log_onceToken != -1) {
                                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                                }
                                __os_log_internal(0,_md_log_log,0x10,local_2580,acStack_859 + 1);
                                uVar12 = local_24f0;
                                lVar8 = local_2500;
                                lVar9 = local_24d8;
                              }
                              else {
                                _fire_transfer_callback
                                          (local_2520,local_2540,local_25a8,acStack_859 + 1);
                                uVar3 = _AMDeviceOpenWriteTruncateImmutable
                                                  (lVar8,local_c68,&local_2550,local_2588);
                                if (uVar3 == 0) {
                                  iVar2 = _unzOpenCurrentFile(uVar12);
                                  if (iVar2 != 0) {
                                    if (_md_log_onceToken != -1) {
                                      _dispatch_once(&_md_log_onceToken,
                                                     &___block_literal_global_2470);
                                    }
                                    pcVar18 = "Could not open %s in zip file";
                                    pcVar17 = acStack_859 + 1;
                                    goto LAB_0014f2bc;
                                  }
                                  if (local_25f8 != 0) {
                                    uVar12 = 0;
                                    do {
                                      pcVar7 = local_2538;
                                      uVar20 = local_25f8 - uVar12;
                                      if (0xfffff < uVar20) {
                                        uVar20 = 0x100000;
                                      }
                                      uVar3 = _unzReadCurrentFile(local_24f0,local_2538,
                                                                  uVar20 & 0xffffffff);
                                      if (uVar20 != uVar3) {
                                        if (_md_log_onceToken != -1) {
                                          _dispatch_once(&_md_log_onceToken,
                                                         &___block_literal_global_2470);
                                        }
                                        pcVar18 = "Could not read from %s";
                                        local_24cc = 0;
                                        pcVar17 = acStack_859 + 1;
LAB_0014ec96:
                                        lVar9 = local_24d8;
                                        uVar12 = local_24f0;
                                        __os_log_internal(0,_md_log_log,1,pcVar18,pcVar17);
                                        goto LAB_0014f2e7;
                                      }
                                      uVar3 = _AFCFileRefWrite(lVar8,local_2550,pcVar7,uVar20);
                                      if (uVar3 != 0) {
                                        if (_md_log_onceToken != -1) {
                                          _dispatch_once(&_md_log_onceToken,
                                                         &___block_literal_global_2470);
                                        }
                                        if (uVar3 < 0x19) {
                                          pcVar17 = *(char **)(&_afcErrors + (ulong)uVar3 * 0x10);
                                        }
                                        else {
                                          pcVar17 = (char *)0x0;
                                        }
                                        pcVar18 = "Could not write to file on device: %s";
                                        local_24cc = uVar3;
                                        goto LAB_0014ec96;
                                      }
                                      uVar12 = uVar12 + uVar20;
                                      local_2590 = local_2590 + uVar20;
                                      _fire_transfer_callback
                                                (local_2520,uVar16,local_25a8,local_1488);
                                    } while (uVar12 < local_25f8);
                                  }
                                  _unzCloseCurrentFile(local_24f0);
                                  uVar4 = _AFCFileRefClose(lVar8,local_2550);
                                  uVar3 = local_2610;
                                  local_2550 = 0;
                                  if (uVar4 == 0) {
                                    local_448[0] = _time((time_t *)0x0);
                                    ptVar14 = _localtime(local_448);
                                    ptVar14->tm_sec = uVar3 * 2 & 0x3e;
                                    ptVar14->tm_min = uVar3 >> 5 & 0x3f;
                                    ptVar14->tm_hour = uVar3 >> 0xb & 0x1f;
                                    ptVar14->tm_mday = uVar3 >> 0x10 & 0x1f;
                                    ptVar14->tm_mon = (uVar3 >> 0x15 & 0xf) - 1;
                                    ptVar14->tm_year = (uVar3 >> 0x19) + 0x50;
                                    tVar15 = _mktime(ptVar14);
                                    local_24cc = _afc_touch(lVar8,local_c68,tVar15);
                                    uVar12 = local_24f0;
                                    lVar9 = local_24d8;
                                    goto joined_r0x0014ea44;
                                  }
                                  local_24cc = uVar4;
                                  if (_md_log_onceToken != -1) {
                                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470)
                                    ;
                                  }
                                  if (local_24cc < 0x19) {
                                    uVar16 = *(undefined8 *)(&_afcErrors + (ulong)local_24cc * 0x10)
                                    ;
                                  }
                                  else {
                                    uVar16 = 0;
                                  }
                                  pcVar18 = "Couldn\'t close %s on device: %s";
                                  pcVar17 = local_1ca8;
                                }
                                else {
                                  local_24cc = uVar3;
                                  if (_md_log_onceToken != -1) {
                                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470)
                                    ;
                                  }
                                  if (local_24cc < 0x19) {
                                    uVar16 = *(undefined8 *)(&_afcErrors + (ulong)local_24cc * 0x10)
                                    ;
                                  }
                                  else {
                                    uVar16 = 0;
                                  }
                                  pcVar18 = "Couldn\'t create %s on device: %s";
                                  pcVar17 = local_c68;
                                }
                                __os_log_internal(0,_md_log_log,1,pcVar18,pcVar17,uVar16);
                                uVar12 = local_24f0;
                                lVar8 = local_2500;
                                lVar9 = local_24d8;
                              }
                              goto LAB_0014f2e7;
                            }
LAB_0014ea5b:
                            iVar2 = _unzGoToNextFile(uVar12);
                          } while (iVar2 == 0);
                          local_24cc = 0;
                        }
LAB_0014f2e7:
                        _free(local_2538);
                      }
                      lVar6 = local_2528;
                      if (local_2550 != 0) {
                        _AFCFileRefClose(lVar8);
                      }
                      if (local_2578 != 0) {
                        _CFRelease();
                      }
                      uVar3 = local_24cc;
                      if (uVar12 != 0) {
                        _unzCloseCurrentFile(uVar12);
                        _unzClose(uVar12);
                        uVar3 = local_24cc;
                      }
joined_r0x0014f33c:
                      if (uVar3 == 0) {
                        lVar10 = 0;
                        iVar2 = 0;
                        lVar8 = local_24e8;
                        goto LAB_0014f34e;
                      }
                      goto joined_r0x0014f38d;
                    }
                    lVar10 = _CFURLCreateCopyDeletingLastPathComponent(local_2518,local_24e8);
                    lVar8 = local_2500;
                    iVar2 = 0;
                    if (lVar10 != 0) {
                      iVar5 = _make_path(local_2500,lVar10);
                      if (iVar5 == 0) {
                        uVar3 = _copy_touch_file(local_25a8,local_2520,local_2540,lVar8,local_1488,
                                                 local_1ca8,local_2690,local_2588);
                        lVar9 = local_24d8;
                        lVar8 = local_24e8;
                        if (uVar3 != 0) {
                          if (0x18 < uVar3) goto LAB_0014f3a3;
                          iVar2 = *(int *)(&DAT_00449878 + (ulong)uVar3 * 0x10);
                        }
                      }
                      else {
LAB_0014f3a3:
                        iVar2 = -0x17ffffff;
                        lVar9 = local_24d8;
                        lVar8 = local_24e8;
                      }
                      goto LAB_0014f34e;
                    }
                  }
                  lVar10 = 0;
                  lVar9 = local_24d8;
                  lVar8 = local_24e8;
                }
              }
LAB_0014f34e:
              if (local_24e0 != 0) {
                _CFRelease();
              }
            }
            else {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              lVar9 = local_24d8;
              iVar2 = 0;
              __os_log_internal(0,_md_log_log,2,"failed to get C string from string %@");
LAB_0014ef78:
              local_24f8 = 0;
              lVar8 = 0;
              lVar10 = 0;
            }
          }
          if (local_2530 != 0) {
            _CFRelease();
          }
          if (local_2570 != 0) {
            _AFCConnectionClose();
          }
          goto LAB_0014de15;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        local_24f8 = 0;
        __os_log_internal(0,_md_log_log,1,"Unsupported path type");
        iVar2 = -0x17fffff1;
      }
      else {
LAB_0014ee65:
        local_24f8 = 0;
      }
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      local_24f8 = 0;
      __os_log_internal(0,_md_log_log,0x10,"Could not convert package string to path");
    }
  }
LAB_0014de0d:
  lVar8 = 0;
  lVar10 = 0;
  lVar9 = 0;
  lVar6 = 0;
LAB_0014de15:
  if (local_2568 != 0) {
    _CFRelease();
  }
  if (local_24f8 != 0) {
    _CFRelease();
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (local_2560 != 0) {
    _AFCConnectionClose();
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  if (lVar10 != 0) {
    _CFRelease(lVar10);
  }
  if (local_2548 != 0) {
    _CFRelease();
  }
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,2,"returning 0x%x.",iVar2);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

