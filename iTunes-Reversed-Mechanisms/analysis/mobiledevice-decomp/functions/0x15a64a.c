// rea decompile_all
// name: ___thr_AMRestorableCleanupDeviceData
// address: 0x15a64a
// body: available
// range: 0x15a64a-0x15be10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x15be0c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableCleanupDeviceData(void *param_1)

{
  undefined1 auVar1 [16];
  long *plVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  dispatch_queue_t queue;
  void *pvVar20;
  dispatch_source_t source;
  uintptr_t uVar21;
  dispatch_time_t when;
  cfstringStruct *pcVar22;
  uint uVar23;
  cfstringStruct *pcVar24;
  cfstringStruct *pcVar25;
  cfstringStruct *pcVar26;
  cfstringStruct *pcVar27;
  bool bVar28;
  undefined1 local_508 [24];
  undefined8 local_4f0;
  long local_4e8;
  undefined8 local_4e0;
  cfstringStruct *local_4d8;
  cfstringStruct *local_4d0;
  cfstringStruct *local_4c8;
  cfstringStruct *local_4c0;
  cfstringStruct *local_4b8;
  cfstringStruct *local_4b0;
  cfstringStruct *local_4a8;
  ulong local_4a0;
  ulong local_498;
  long local_490;
  void *local_488;
  char *local_480;
  cfstringStruct *local_478;
  cfstringStruct *local_470;
  cfstringStruct *local_468;
  cfstringStruct *local_460;
  cfstringStruct *local_458;
  undefined8 local_450;
  cfstringStruct *local_448;
  char local_439;
  undefined8 local_438;
  cfstringStruct *pcStack_430;
  cfstringStruct *local_428;
  cfstringStruct *pcStack_420;
  cfstringStruct *local_418;
  cfstringStruct *local_410;
  cfstringStruct *local_408;
  cfstringStruct *local_400;
  cfstringStruct *pcStack_3f8;
  cfstringStruct *local_3f0;
  cfstringStruct *local_3e8;
  cfstringStruct *local_3e0;
  cfstringStruct *local_3d8;
  long local_3d0;
  cfstringStruct *local_3c8;
  cfstringStruct *local_3c0;
  cfstringStruct *local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  char local_3a4;
  undefined1 local_3a3;
  undefined2 local_3a2;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_1 == (void *)0x0) {
    _AMRSafeLog(3,&cf___,&cf_Can_tremovepowerassertionfromNULLdevice);
    _CFRelease(&cf_Can_tremovepowerassertionfromNULLdevice);
  }
  else {
    if (*(int *)((long)param_1 + 0xe8) == 0) {
      pcVar9 = &cf_Devicedoesn_thaveapowerassertiontoremove;
    }
    else {
      iVar5 = _IOPMAssertionRelease();
      if (iVar5 == 0) {
        pcVar9 = (cfstringStruct *)0x0;
        _AMRSafeLog(7,&cf_Successfullyremovedpowerassertion);
      }
      else {
        pcVar9 = (cfstringStruct *)_AMRMakeString(&cf_Failedtoremovepowerassertion_error__d,iVar5);
      }
    }
    _AMRSafeLogAndRelease(3,pcVar9);
    *(undefined4 *)((long)param_1 + 0xe8) = 0;
  }
  *(undefined1 *)((long)param_1 + 0x79) = 0;
  if (((*(dispatch_object_t *)((long)param_1 + 0xa0))._os_obj != (_os_object_s *)0x0) &&
     (*(char *)((long)param_1 + 0xb0) == '\x01')) {
    _dispatch_suspend(*(dispatch_object_t *)((long)param_1 + 0xa0));
    *(undefined1 *)((long)param_1 + 0xb0) = 0;
  }
  if (*(long *)((long)param_1 + 0x10) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = _AMRestorableGetIdentifyingErrorCode();
  }
  uVar11 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  pcVar9 = (cfstringStruct *)_CFStringCreateMutable(uVar11,0);
  local_488 = param_1;
  local_450 = uVar11;
  if (pcVar9 == (cfstringStruct *)0x0) {
    _AMRSafeLogAndRelease(3,&cf_Failedtoallocatefinalrestoremsg);
  }
  else {
    uVar10 = ___thr_private_AMRestoreableDeviceGetElapsedRestoreTime(param_1);
    local_478 = (cfstringStruct *)
                _AMRMakeString(&cf_Restorecompleted_status__ldElapsedtime_inseconds___ld,lVar8,
                               uVar10);
    if (local_478 == (cfstringStruct *)0x0) {
      pcVar25 = &cf_Failedtoallocatefinalsummary;
      local_478 = (cfstringStruct *)0x0;
LAB_0015bd2e:
      _AMRSafeLogAndRelease(3,pcVar25);
      lVar12 = 0;
    }
    else {
      _CFStringAppend(pcVar9,local_478);
      if (lVar8 == 0) {
        plVar2 = *(long **)((long)param_1 + 0x110);
        pcVar25 = &cf_Successfullyrestored;
        if (plVar2 == (long *)0x0) {
LAB_0015a849:
          _CFStringAppendFormat
                    (pcVar9,0,&
                              cf_____________________________________________________________________________________________________________
                     ,pcVar25);
        }
        else {
          if (*plVar2 != 0) {
            _CFStringAppendFormat(pcVar9,0,&cf_Attestedrestoreunsupported____);
            goto LAB_0015a849;
          }
          if ((char)plVar2[3] == '\0') {
            _CFStringAppend(pcVar9,&cf_Attestedrestorenotrequested);
            goto LAB_0015a849;
          }
          if (*(char *)((long)plVar2 + 0x19) == '\0') {
            if (plVar2[5] == 0) {
              if (plVar2[4] == 0) {
                pcVar25 = &cf_Attestationunexpectedlyskipped;
              }
              else {
                pcVar25 = (cfstringStruct *)_CFErrorCopyDescription();
              }
            }
            else {
              pcVar25 = (cfstringStruct *)_CFRetain();
            }
            _CFStringAppendFormat
                      (pcVar9,0,&
                                cf______________________________________________________UNABLETOSECURELYATTESTRESTORE_______________________________________________________
                       ,pcVar25);
            _CFRelease(pcVar25);
            pcVar25 = &cf_Successfullyrestored_RESTOREATTESTATIONANOMALY_;
            goto LAB_0015a849;
          }
          pcVar25 = (cfstringStruct *)
                    _CFStringCreateWithFormat
                              (uVar11,0,&cf_Successfullyrestored_Level__attested_,plVar2[2]);
          _CFStringAppendFormat
                    (pcVar9,0,&
                              cf_____________________________________________________________________________________________________________
                     ,pcVar25);
          if (pcVar25 == (cfstringStruct *)0x0) goto LAB_0015a867;
        }
        _CFRelease(pcVar25);
      }
LAB_0015a867:
      if (*(long *)((long)param_1 + 0x10) == 0) {
        lVar12 = 0;
      }
      else {
        if (*(long *)((long)param_1 + 0x108) != 0) {
          uVar11 = _RestoreCheckpointCreateCheckpointFingerprint();
          uVar10 = _CFStringCreateWithFormat(0,0,&cf_RestoreCheckpointFingerprint___,uVar11);
          _CFStringAppend(pcVar9,uVar10);
          _CFRelease(uVar11);
          _CFRelease(uVar10);
        }
        _CFStringAppend(pcVar9,&cf_FailureDescription_);
        lVar8 = *(long *)((long)param_1 + 0x10);
        pcVar25 = &cf_Failedtocopyerrordescription;
        uVar11 = local_450;
        if ((lVar8 == 0) ||
           (lVar12 = _CFStringCreateMutable(local_450,0), uVar11 = local_450, lVar12 == 0))
        goto LAB_0015bd2e;
        local_448 = *(cfstringStruct **)PTR__kCFErrorLocalizedDescriptionKey_00441148;
        local_458 = *(cfstringStruct **)PTR__kCFErrorDescriptionKey_00441138;
        local_460 = *(cfstringStruct **)PTR__kCFErrorUnderlyingErrorKey_00441150;
        lVar13 = 0;
        iVar5 = 0;
        local_470 = pcVar9;
        do {
          if (lVar13 != 0) {
            _CFRelease(lVar13);
          }
          lVar13 = _CFErrorCopyUserInfo(lVar8);
          if (lVar13 == 0) goto LAB_0015aa0e;
          pcVar9 = (cfstringStruct *)_CFDictionaryGetValue(lVar13,local_448);
          if ((pcVar9 == (cfstringStruct *)0x0) &&
             (pcVar9 = (cfstringStruct *)_CFDictionaryGetValue(lVar13,local_458),
             pcVar9 == (cfstringStruct *)0x0)) {
            pcVar9 = &cf_invaliderrordescription;
          }
          uVar11 = _CFErrorGetCode(lVar8);
          lVar8 = _CFStringCreateWithFormat
                            (local_450,0,&cf_Depth__dCode__ldError___,iVar5,uVar11,pcVar9);
          if (lVar8 == 0) break;
          _CFStringAppend(lVar12,lVar8);
          _CFRelease(lVar8);
          lVar8 = _CFDictionaryGetValue(lVar13,local_460);
          _CFStringAppendCString(lVar12,"\n",0x8000100);
          iVar5 = iVar5 + 1;
        } while (lVar8 != 0);
        _CFRelease(lVar13);
LAB_0015aa0e:
        pcVar9 = local_470;
        _CFStringAppend(local_470,lVar12);
        param_1 = local_488;
        uVar11 = local_450;
      }
      __AMRestorableDeviceLogMessage(param_1,pcVar9,&cf_HostLogType);
      _AMRSafeLogAndRelease(3,0);
    }
    _CFRelease(pcVar9);
    if (local_478 != (cfstringStruct *)0x0) {
      _CFRelease();
    }
    if (lVar12 != 0) {
      _CFRelease(lVar12);
    }
  }
  lVar8 = *(long *)((long)param_1 + 0x50);
  if (lVar8 == 0) {
    local_4c0 = &cf__null_;
    local_480 = (char *)((ulong)local_480 & 0xffffffff00000000);
LAB_0015ab0f:
    iVar5 = __AMDeviceProxyGetState(*(undefined8 *)((long)param_1 + 0x20));
    if (iVar5 - 1U < 6) {
      local_4d0 = *(cfstringStruct **)(&DAT_0044a380 + (ulong)(iVar5 - 1U) * 8);
    }
    else {
      local_4d0 = &cf_Unknown;
    }
    lVar8 = __AMDeviceProxyGetDeviceRef(*(undefined8 *)((long)param_1 + 0x20));
    iVar5 = __AMDeviceProxyGetState(*(undefined8 *)((long)param_1 + 0x20));
    pcVar25 = &cf__unknown_;
    pcVar9 = &cf__unknown_;
    if (lVar8 != 0 && iVar5 == 4) {
      lVar12 = _CFGetTypeID(lVar8);
      if (__AMDeviceTypeID == 0) {
        __AMDeviceTypeID = __CFRuntimeRegisterClass(&_AMDeviceGetTypeID__AMDeviceClass);
      }
      pcVar9 = &cf__unknown_;
      if (lVar12 == __AMDeviceTypeID) {
        iVar5 = _AMDeviceConnect(lVar8);
        if (iVar5 == 0) {
          pcVar9 = (cfstringStruct *)_AMDeviceCopyValueWithError(lVar8,0,&cf_BuildVersion,0);
          _AMDeviceDisconnect(lVar8);
        }
        else {
          pcVar9 = &cf__unknown;
        }
      }
    }
    local_478 = pcVar9;
    if (*(long *)((long)param_1 + 0xd8) == 0) {
      lVar8 = 0;
      local_4b8 = &cf__unknown_;
      local_4b0 = &cf__unknown_;
      local_4c8 = &cf__unknown_;
    }
    else {
      pcVar25 = (cfstringStruct *)
                _CFDictionaryGetValue(*(long *)((long)param_1 + 0xd8),&cf_TargetOSVersion);
      local_4b0 = (cfstringStruct *)
                  _CFDictionaryGetValue(*(undefined8 *)((long)param_1 + 0xd8),&cf_BoardConfig);
      local_4b8 = (cfstringStruct *)
                  _CFDictionaryGetValue(*(undefined8 *)((long)param_1 + 0xd8),&cf_DeviceClass);
      local_4c8 = (cfstringStruct *)
                  _CFDictionaryGetValue(*(undefined8 *)((long)param_1 + 0xd8),&cf_BuildVersion);
      lVar8 = _CFDictionaryGetValue(*(undefined8 *)((long)param_1 + 0xd8),&cf_OTAUUID);
    }
    lVar12 = *(long *)((long)param_1 + 0x10);
    local_439 = lVar12 != 0;
    if (lVar12 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = _AMRestorableGetIdentifyingErrorCode(lVar12);
    }
    uVar23 = *(int *)((long)param_1 + 0x34) - 1;
    if (uVar23 < 6) {
      local_4a8 = *(cfstringStruct **)(&DAT_0044a380 + (ulong)uVar23 * 8);
    }
    else {
      local_4a8 = &cf_Unknown;
    }
    uVar7 = ___thr_private_AMRestoreableDeviceGetElapsedRestoreTime(param_1);
    local_508._0_16_ = (undefined1  [16])0x0;
    local_460 = pcVar25;
    if (*(long *)((long)param_1 + 0x108) == 0) {
      local_458 = (cfstringStruct *)0x0;
      local_470 = (cfstringStruct *)0x0;
      local_4a0 = 0;
    }
    else {
      lVar13 = *(long *)(*(long *)((long)param_1 + 0x108) + 0x18);
      local_4a0 = 0;
      if (((lVar13 == 0) || (lVar14 = _CFArrayGetCount(lVar13), lVar14 < 1)) ||
         (cVar4 = _CRIsAutoSubmitEnabled(), cVar4 == '\0')) {
        local_458 = (cfstringStruct *)0x0;
      }
      else {
        lVar14 = _CFArrayGetCount(lVar13);
        local_458 = (cfstringStruct *)_CFArrayGetValueAtIndex(lVar13,lVar14 + -1);
      }
      if (lVar12 == 0) {
        local_470 = (cfstringStruct *)0x0;
      }
      else {
        local_4a0 = (ulong)**(uint **)((long)param_1 + 0x108);
        auVar1 = *(undefined1 (*) [16])(*(uint **)((long)param_1 + 0x108) + 2);
        local_508._0_8_ = auVar1._8_8_;
        local_508._8_4_ = auVar1._0_4_;
        local_508._12_4_ = auVar1._4_4_;
        local_470 = (cfstringStruct *)_RestoreCheckpointCreateCheckpointFingerprint();
      }
    }
    plVar2 = *(long **)((long)param_1 + 0x110);
    if (plVar2 == (long *)0x0) {
      pcVar25 = &cf__notprovided_;
      local_468 = (cfstringStruct *)0x0;
      local_448 = (cfstringStruct *)0x0;
      pcVar9 = (cfstringStruct *)0x0;
    }
    else {
      pcVar9 = (cfstringStruct *)plVar2[2];
      if (*plVar2 == 0) {
        if ((char)plVar2[3] == '\0') {
          pcVar25 = &cf_disabled;
          local_468 = pcVar25;
          if (plVar2[1] == 0) {
            local_448 = &cf_unspecified;
          }
          else {
            local_448 = (cfstringStruct *)_CFRetain();
          }
        }
        else if (*(char *)((long)plVar2 + 0x19) == '\0') {
          if (plVar2[5] == 0) {
            pcVar25 = &cf_failed;
            local_468 = pcVar25;
            if (plVar2[4] == 0) {
              local_448 = &cf_notattempted;
            }
            else {
              local_448 = (cfstringStruct *)_CFErrorCopyDescription();
            }
          }
          else {
            local_448 = (cfstringStruct *)_CFRetain();
            pcVar25 = &cf_failed;
            local_468 = pcVar25;
          }
        }
        else {
          pcVar25 = &cf_passed;
          local_448 = (cfstringStruct *)0x0;
          local_468 = pcVar25;
        }
      }
      else {
        local_448 = (cfstringStruct *)_CFRetain();
        pcVar25 = &cf_unsupported;
        local_468 = pcVar25;
      }
    }
    local_4e8 = lVar8;
    local_4d8 = pcVar9;
    if (lVar12 == 0) {
      pcVar9 = (cfstringStruct *)0x0;
    }
    else if (*(long *)((long)param_1 + 0x10) == 0) {
      pcVar9 = &cf__null_;
    }
    else {
      pcVar9 = (cfstringStruct *)_CFErrorCopyDescription();
    }
    uVar11 = local_450;
    uVar10 = _CFDictionaryCreateMutable
                       (local_450,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    uVar15 = _CFArrayCreateMutable(uVar11,0,PTR__kCFTypeArrayCallBacks_004411a8);
    _CFDictionaryAddValue(uVar10,&cf_events,uVar15);
    _CFRelease(uVar15);
    local_4e0 = uVar10;
    uVar10 = _CFDictionaryGetValue(uVar10,&cf_events);
    pcVar24 = local_460;
    pcVar27 = local_478;
    pcVar26 = local_4c8;
    pcVar22 = local_4d0;
    local_438 = local_460;
    pcStack_430 = local_4c8;
    local_428 = local_4d0;
    pcStack_420 = local_4c0;
    local_418 = local_4b0;
    local_410 = local_4b8;
    local_408 = local_4a8;
    local_400 = (cfstringStruct *)local_508._0_8_;
    pcStack_3f8 = (cfstringStruct *)local_508._8_8_;
    local_3f0 = local_458;
    local_3e8 = local_470;
    local_3d8 = local_478;
    local_3d0 = local_4e8;
    local_3c8 = local_468;
    local_3c0 = local_448;
    local_3b8 = local_4d8;
    local_3ac = (undefined4)local_4a0;
    local_3a4 = local_439;
    local_3a3 = SUB81(local_480,0);
    local_3a2 = 0;
    local_3e0 = pcVar9;
    local_3b0 = uVar6;
    local_3a8 = uVar7;
    uVar11 = _CFDictionaryCreateMutable
                       (uVar11,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (pcVar24 == (cfstringStruct *)0x0) {
      pcVar24 = &cf__notprovided_;
    }
    local_460 = pcVar24;
    _CFDictionaryAddValue(uVar11,&cf_targetOSVersion);
    if (pcVar27 == (cfstringStruct *)0x0) {
      pcVar27 = &cf__notprovided_;
    }
    _CFDictionaryAddValue(uVar11,&cf_postRestoreOSVersion,pcVar27);
    if (pcVar26 == (cfstringStruct *)0x0) {
      pcVar26 = &cf__notprovided_;
    }
    _CFDictionaryAddValue(uVar11,&cf_originalOSVersion,pcVar26);
    lVar8 = local_4e8;
    if (pcVar22 == (cfstringStruct *)0x0) {
      pcVar22 = &cf__notprovided_;
    }
    _CFDictionaryAddValue(uVar11,&cf_currentStateType,pcVar22);
    pcVar22 = local_4c0;
    if (local_4c0 == (cfstringStruct *)0x0) {
      pcVar22 = &cf__notprovided_;
    }
    _CFDictionaryAddValue(uVar11,&cf_variant,pcVar22);
    pcVar22 = local_4b0;
    if (local_4b0 == (cfstringStruct *)0x0) {
      pcVar22 = &cf__notprovided_;
    }
    _CFDictionaryAddValue(uVar11,&cf_deviceModel,pcVar22);
    pcVar22 = local_4b8;
    if (local_4b8 == (cfstringStruct *)0x0) {
      pcVar22 = &cf__notprovided_;
    }
    _CFDictionaryAddValue(uVar11,&cf_deviceClass,pcVar22);
    pcVar22 = local_4a8;
    if (local_4a8 == (cfstringStruct *)0x0) {
      pcVar22 = &cf__notprovided_;
    }
    _CFDictionaryAddValue(uVar11,&cf_deviceStartState,pcVar22);
    _CFDictionaryAddValue(uVar11,&cf_targetOSVersion,local_460);
    local_460 = *(cfstringStruct **)PTR__kCFBooleanTrue_00441110;
    pcVar22 = *(cfstringStruct **)PTR__kCFBooleanFalse_00441108;
    pcVar26 = local_460;
    if ((char)local_480 == '\0') {
      pcVar26 = pcVar22;
    }
    if (pcVar26 == (cfstringStruct *)0x0) {
      pcVar26 = &cf__notprovided_;
    }
    _CFDictionaryAddValue(uVar11,&cf_eraseInstall,pcVar26);
    _CFDictionaryAddValue(uVar11,&cf_eventType,&cf_hostRestoreFinished);
    pcVar26 = local_458;
    if (local_458 == (cfstringStruct *)0x0) {
      pcVar26 = &cf__notprovided_;
    }
    _CFDictionaryAddValue(uVar11,&cf_checkpointInfo,pcVar26);
    _CFDictionaryAddValue(uVar11,&cf_attestedRestoreStatus,pcVar25);
    pcVar25 = local_448;
    if (local_448 == (cfstringStruct *)0x0) {
      pcVar25 = &cf__notprovided_;
    }
    _CFDictionaryAddValue(uVar11,&cf_attestedRestoreReason,pcVar25);
    pcVar25 = local_4d8;
    if (local_4d8 == (cfstringStruct *)0x0) {
      pcVar25 = &cf__notprovided_;
    }
    _CFDictionaryAddValue(uVar11,&cf_attestedRestoreLevel,pcVar25);
    if (lVar8 != 0) {
      _CFDictionaryAddValue(uVar11,&cf_otaUuid,lVar8);
    }
    uVar15 = local_450;
    pcVar26 = (cfstringStruct *)_CFNumberCreate(local_450,9,&local_3a8);
    pcVar25 = pcVar26;
    if (pcVar26 == (cfstringStruct *)0x0) {
      pcVar25 = &cf__notprovided_;
    }
    _CFDictionaryAddValue(uVar11,&cf_totalRestoreTime,pcVar25);
    _CFRelease(pcVar26);
    if (local_3a4 == '\0') {
      pcVar25 = &cf_restoreFailed;
    }
    else {
      pcVar22 = (cfstringStruct *)_CFNumberCreate(uVar15,9,&local_3b0);
      pcVar26 = (cfstringStruct *)_CFNumberCreate(uVar15,9,&local_3ac);
      pcVar25 = local_460;
      if (local_460 == (cfstringStruct *)0x0) {
        pcVar25 = &cf__notprovided_;
      }
      _CFDictionaryAddValue(uVar11,&cf_restoreFailed,pcVar25);
      pcVar25 = pcVar22;
      if (pcVar22 == (cfstringStruct *)0x0) {
        pcVar25 = &cf__notprovided_;
      }
      _CFDictionaryAddValue(uVar11,&cf_restoreErrorID,pcVar25);
      pcVar25 = pcVar26;
      if (pcVar26 == (cfstringStruct *)0x0) {
        pcVar25 = &cf__notprovided_;
      }
      _CFDictionaryAddValue(uVar11,&cf_lastCheckpointID,pcVar25);
      _CFRelease(pcVar22);
      _CFRelease(pcVar26);
      pcVar25 = local_400;
      if (local_400 == (cfstringStruct *)0x0) {
        pcVar25 = &cf__notprovided_;
      }
      _CFDictionaryAddValue(uVar11,&cf_checkpointError,pcVar25);
      pcVar25 = pcStack_3f8;
      if (pcStack_3f8 == (cfstringStruct *)0x0) {
        pcVar25 = &cf__notprovided_;
      }
      _CFDictionaryAddValue(uVar11,&cf_checkpointWarning,pcVar25);
      pcVar25 = local_3e0;
      if (local_3e0 == (cfstringStruct *)0x0) {
        pcVar25 = &cf__notprovided_;
      }
      _CFDictionaryAddValue(uVar11,&cf_hostFailureReason,pcVar25);
      pcVar25 = &cf_checkpointFingerprint;
      pcVar22 = local_3e8;
    }
    pcVar26 = &cf__notprovided_;
    if (pcVar22 != (cfstringStruct *)0x0) {
      pcVar26 = pcVar22;
    }
    _CFDictionaryAddValue(uVar11,pcVar25,pcVar26);
    _CFArrayAppendValue(uVar10,uVar11);
    _CFRelease(uVar11);
    uVar10 = _CFDictionaryCreateJSONCFStringRef(local_4e0);
    uVar11 = local_450;
    uVar15 = _CFStringCreateExternalRepresentation(local_450,uVar10,0x8000100,0);
    uVar16 = _CFStringCreateWithFormat
                       (uVar11,0,&cf_________,&cf_https___xp_apple_com_report,&cf_2,&cf_xp_psr_int);
    uVar17 = _CFURLCreateWithString(uVar11,uVar16,0);
    uVar18 = _CFHTTPMessageCreateRequest
                       (uVar11,&cf_POST,uVar17,*(undefined8 *)PTR__kCFHTTPVersion1_1_004413e8);
    _CFHTTPMessageSetHeaderFieldValue(uVar18,&cf_Content_Type,&cf_charset_utf_8);
    _CFHTTPMessageSetBody(uVar18,uVar15);
    _CFRelease(uVar16);
    _CFRelease(uVar10);
    _CFRelease(uVar17);
    _CFRelease(uVar15);
    uVar11 = local_450;
    pvVar20 = (void *)_CFReadStreamCreateForHTTPRequest(local_450,uVar18);
    _CFReadStreamSetProperty
              (pvVar20,*(undefined8 *)PTR__kCFStreamPropertyHTTPShouldAutoredirect_00441400,
               local_460);
    puVar19 = _calloc(1,0x1028);
    uVar10 = _CFRetain(pvVar20);
    *puVar19 = uVar10;
    puVar19[0x204] = 0;
    puVar19[1] = 0;
    puVar19[2] = 0;
    local_438 = (cfstringStruct *)0x0;
    local_428 = (cfstringStruct *)0x0;
    pcStack_420 = (cfstringStruct *)0x0;
    local_418 = (cfstringStruct *)0x0;
    pcStack_430 = (cfstringStruct *)puVar19;
    _CFReadStreamOpen(pvVar20);
    _CFReadStreamSetClient(pvVar20,0x1a,_readStreamCallback,&local_438);
    queue = _dispatch_get_global_queue(0,0);
    _dispatch_async_f(queue,pvVar20,__startRunLoop);
    _CFRelease(pvVar20);
    _CFRelease(uVar18);
    _CFRelease(local_4e0);
    if (pcVar9 != (cfstringStruct *)0x0) {
      _CFRelease();
    }
    pcVar25 = local_448;
    pcVar9 = local_470;
    param_1 = local_488;
    if (local_478 != (cfstringStruct *)0x0) {
      _CFRelease();
    }
    if (pcVar9 != (cfstringStruct *)0x0) {
      _CFRelease(pcVar9);
    }
    if (pcVar25 != (cfstringStruct *)0x0) {
      _CFRelease(pcVar25);
    }
  }
  else {
    lVar12 = _CFDictionaryGetValue(lVar8,&cf_DisableSplunk);
    if (lVar12 == 0) {
LAB_0015aad1:
      uVar6 = __AMDeviceProxyGetIsEraseInstall(lVar8);
      local_480 = (char *)CONCAT44(local_480._4_4_,uVar6);
      local_4c0 = (cfstringStruct *)_CFDictionaryGetValue(lVar8,&cf_AuthInstallVariant);
      goto LAB_0015ab0f;
    }
    lVar13 = _CFGetTypeID(lVar12);
    lVar14 = _CFBooleanGetTypeID();
    if ((lVar13 != lVar14) || (cVar4 = _CFBooleanGetValue(lVar12), cVar4 == '\0'))
    goto LAB_0015aad1;
    _AMRLog(7,&cf_Skippingsubmittingrestorestatus);
  }
  local_4f0 = 0;
  if ((*(long *)((long)param_1 + 0x50) == 0) ||
     (cVar4 = _CFDictionaryGetValueIfPresent
                        (*(long *)((long)param_1 + 0x50),&cf_WaitForSerialLogsOnFailure,&local_4f0),
     cVar4 == '\0')) {
    local_490 = 0;
  }
  else {
    _CFNumberGetValue(local_4f0,4,&local_490);
  }
  puVar19 = *(undefined8 **)(_gRestorableData + 0x78);
  local_438 = (void *)0x0;
  pcStack_430 = (cfstringStruct *)0x0;
  if (puVar19 == (undefined8 *)0x0) {
    pcVar9 = &cf_Can_twatchhostlogwithNULLmanager;
LAB_0015bd52:
    _AMRSafePrintLogAndRelease(3,pcVar9);
  }
  else {
    _dispatch_semaphore_wait((dispatch_semaphore_t)*puVar19,0xffffffffffffffff);
    local_438 = param_1;
    _CFDictionaryApplyFunction(puVar19[1],__findKeysForDevice,&local_438);
    pcVar9 = pcStack_430;
    if (pcStack_430 != (cfstringStruct *)0x0) {
      uVar10 = _CFArrayGetCount(pcStack_430);
      _CFArrayApplyFunction(pcVar9,0,uVar10,__removeKeysFromMap,puVar19[1]);
    }
    lVar8 = __copyECID(param_1);
    if (lVar8 == 0) {
      _dispatch_semaphore_signal((dispatch_semaphore_t)*puVar19);
      pcVar9 = &cf_Can_tstopwatchinghostlogwithNULLECID;
      goto LAB_0015bd52;
    }
    _CFDictionaryRemoveValue(puVar19[2],lVar8);
    _dispatch_semaphore_signal((dispatch_semaphore_t)*puVar19);
    _AMRSafePrintLogAndRelease(3,0);
    _CFRelease(lVar8);
  }
  if (pcStack_430 != (cfstringStruct *)0x0) {
    _CFRelease();
  }
  lVar8 = *(long *)(_gRestorableData + 0x88);
  local_438 = (cfstringStruct *)((ulong)local_438 & 0xffffffffffffff00);
  pvVar20 = (void *)_CFArrayCreateMutable(uVar11,3,0);
  _CFArrayAppendValue(pvVar20,lVar8);
  _CFArrayAppendValue(pvVar20,param_1);
  _CFArrayAppendValue(pvVar20,&local_438);
  _dispatch_sync_f(*(dispatch_queue_t *)(lVar8 + 0x10),pvVar20,___thr_AMRDeviceLogStopWatchingDevice
                  );
  if (((*(uint *)((long)param_1 + 0x2c) < 9) &&
      ((0x10cU >> (*(uint *)((long)param_1 + 0x2c) & 0x1f) & 1) != 0)) && (local_490 != 0)) {
    puVar19 = *(undefined8 **)(_gRestorableData + 0x80);
    _dispatch_semaphore_wait((dispatch_semaphore_t)*puVar19,0xffffffffffffffff);
    local_438 = param_1;
    ___thr_AMRestorableDeviceGetECID(&local_438);
    local_498 = (ulong)pcStack_430;
    if (pcStack_430 == (cfstringStruct *)0x0) {
      pcVar9 = &cf_Can_twatchserialwith0ECID;
      lVar8 = 0;
LAB_0015be04:
      bVar28 = false;
    }
    else {
      lVar8 = _CFNumberCreate(uVar11,4,&local_498);
      source = (dispatch_source_t)_CFDictionaryGetValue(puVar19[1],lVar8);
      if (source == (dispatch_source_t)0x0) {
        pcVar9 = &cf_Noserialdispatchsourcewatchingthisdevice;
        goto LAB_0015be04;
      }
      uVar21 = _dispatch_source_get_handle(source);
      iVar5 = _fstat_INODE64(uVar21 & 0xffffffff,&local_438);
      if (iVar5 != 0) {
        pcVar9 = &cf_fstatfailedfordeviceserialsource;
        goto LAB_0015be04;
      }
      bVar28 = local_438._6_2_ != 0;
      pcVar9 = (cfstringStruct *)0x0;
    }
    _dispatch_semaphore_signal((dispatch_semaphore_t)*puVar19);
    _AMRSafeLogAndRelease(3,pcVar9);
    if (lVar8 != 0) {
      _CFRelease(lVar8);
    }
    param_1 = local_488;
    if (!bVar28) goto LAB_0015b820;
    _CFRetain(local_488);
    _AMRSafeLog(7,&cf_Waiting_lldsecondsformoreseriallogs,local_490);
    when = _dispatch_time(0,local_490 * 1000000000);
    _dispatch_after_f(when,*(dispatch_queue_t *)((long)param_1 + 0x98),param_1,
                      __AMRStopCollectingLogsForDeviceContinue);
  }
  else {
LAB_0015b820:
    __AMRSerialLogStopWatchingDevice(*(undefined8 *)(_gRestorableData + 0x80),param_1);
    _dispatch_semaphore_wait(*(dispatch_semaphore_t *)((long)param_1 + 0x88),0xffffffffffffffff);
    _CFDictionaryApplyFunction
              (*(undefined8 *)((long)param_1 + 0x80),__AMRCloseLogWriteStreamsApplier,param_1);
    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)((long)param_1 + 0x88));
  }
  if (*(long *)((long)param_1 + 0x50) == 0) {
    pcVar9 = &cf_Can_tcleanupNULLrestoreoptions;
    goto LAB_0015bc6e;
  }
  if (*(long **)((long)param_1 + 0x20) == (long *)0x0) {
    AMDeviceProxy::Log(0,(__CFString *)((long)&MACH_HEADER.magic + 3),&cf___,
                       &cf_Can_tresetauthinstallsettingsonNULLproxy);
    _CFRelease(&cf_Can_tresetauthinstallsettingsonNULLproxy);
  }
  else {
    (**(code **)(**(long **)((long)param_1 + 0x20) + 0xa0))();
  }
  local_498 = local_498 & 0xffffffff00000000;
  if (*(long *)((long)param_1 + 0xd8) == 0) {
    pcVar9 = &cf_Can_tcleanupresourceswithNULLrestoreinfo;
  }
  else {
    _dispatch_semaphore_wait(*(dispatch_semaphore_t *)((long)param_1 + 0x88),0xffffffffffffffff);
    lVar8 = _CFDictionaryGetValue(*(undefined8 *)((long)param_1 + 0xd8),&cf_UsedResources);
    if (lVar8 == 0) {
      pcVar9 = (cfstringStruct *)0x0;
    }
    else {
      local_448 = (cfstringStruct *)_CFArrayGetCount(lVar8);
      puVar3 = PTR__objc_msgSend_00441098;
      if (0 < (long)local_448) {
        local_460 = (cfstringStruct *)0x43be78;
        local_470 = (cfstringStruct *)0x43d9e2;
        local_480 = "unmountDiskImage:";
        pcVar9 = (cfstringStruct *)0x0;
        do {
          uVar11 = _CFArrayGetValueAtIndex(lVar8,pcVar9);
          lVar12 = _CFDictionaryGetValue(uVar11,&cf_ResourceType);
          if (lVar12 == 0) {
            pcVar25 = &cf_Can_tcleanupresourcesinceit_smissingresourcetypekey;
LAB_0015b9fd:
            _AMRLog(3,pcVar25);
          }
          else {
            _CFNumberGetValue(lVar12,9,&local_498);
            lVar12 = _CFDictionaryGetValue(uVar11,&cf_ResourceURL);
            if (lVar12 == 0) {
              pcVar25 = &cf_Can_tcleanupresourcesinceit_smissingtheresourceURLkey;
              goto LAB_0015b9fd;
            }
            if ((int)local_498 == 0) {
              __AMRResourceManagerStoppedUsingResourceAtURL(lVar12);
            }
            else if ((int)local_498 == 2) {
              cVar4 = (*(code *)puVar3)(&objc::class_t::AMRManagedDiskImagesRegistry,local_460);
              if (cVar4 == '\0') {
LAB_0015ba3b:
                cVar4 = _CFURLGetFileSystemRepresentation(lVar12,0,&local_438,0x400);
                uVar11 = local_450;
                if (cVar4 == '\0') {
                  uVar11 = _AMRMakeString(&cf_FailedtogetfilesystemrepresentationfromURL___,lVar12);
                  _AMRSafeLogAndRelease(3,uVar11);
                  pcVar25 = &cf_Failedtounmountvolume;
                }
                else {
                  pcVar25 = (cfstringStruct *)_DASessionCreate(local_450);
                  if (pcVar25 == (cfstringStruct *)0x0) {
                    _AMRSafeLogAndRelease(3,&cf_Failedtocreatediskarbitrationsession);
                  }
                  else {
                    local_458 = pcVar25;
                    lVar13 = _DADiskCreateFromVolumePath(uVar11,pcVar25,lVar12);
                    if (lVar13 == 0) {
                      _AMRSafeLogAndRelease(3,&cf_FailedtocreatepartialDADisk);
                    }
                    else {
                      local_478 = (cfstringStruct *)_DADiskCopyWholeDisk(lVar13);
                      if (local_478 == (cfstringStruct *)0x0) {
                        pcVar22 = &cf_FailedtocreatewholeDADisk;
                        pcVar25 = (cfstringStruct *)0x0;
                      }
                      else {
                        iVar5 = _unmount((char *)&local_438,0);
                        pcVar25 = local_478;
                        if (iVar5 == 0) {
                          _DADiskEject(local_478,0,0,0);
                          pcVar22 = (cfstringStruct *)0x0;
                        }
                        else {
                          pcVar22 = (cfstringStruct *)
                                    _AMRMakeString(&cf_FailedtounmountvolumeatURL___error__d,lVar12,
                                                   iVar5);
                          pcVar25 = local_478;
                        }
                      }
                      _AMRSafeLogAndRelease(3,pcVar22);
                      _CFRelease(lVar13);
                      if (pcVar25 != (cfstringStruct *)0x0) {
                        _CFRelease(pcVar25);
                      }
                    }
                    _CFRelease(local_458);
                  }
                  pcVar25 = (cfstringStruct *)0x0;
                }
              }
              else {
                uVar11 = (*(code *)puVar3)(&objc::class_t::AMRManagedDiskImagesRegistry,local_470);
                cVar4 = (*(code *)puVar3)(uVar11,local_480,lVar12);
                if (cVar4 == '\0') goto LAB_0015ba3b;
                pcVar25 = (cfstringStruct *)0x0;
              }
              _AMRSafeLogAndRelease(3,pcVar25);
            }
            else {
              _AMRLog(3,&cf_Can_tcleanupresourcewithunknowntype_d);
            }
          }
          pcVar9 = (cfstringStruct *)((long)&pcVar9->field0_0x0 + 1);
        } while (local_448 != pcVar9);
      }
      param_1 = local_488;
      _CFDictionaryRemoveValue(*(undefined8 *)((long)local_488 + 0xd8),&cf_UsedResources);
      pcVar9 = (cfstringStruct *)0x0;
      uVar11 = local_450;
    }
  }
  _AMRSafeLogAndRelease(3,pcVar9);
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)((long)param_1 + 0x88));
  if (*(long **)((long)param_1 + 0x20) == (long *)0x0) {
    AMDeviceProxy::Log(0,(__CFString *)((long)&MACH_HEADER.magic + 3),&cf___,
                       &cf_Can_tresetthedevicerestorestatewithNULLproxy);
    _CFRelease(&cf_Can_tresetthedevicerestorestatewithNULLproxy);
  }
  else {
    (**(code **)(**(long **)((long)param_1 + 0x20) + 0xa8))();
  }
  lVar8 = _CFDictionaryGetValue
                    (*(undefined8 *)((long)param_1 + 0x50),&cf_PersonalizedRestoreBundlePath);
  if ((lVar8 == 0) ||
     (lVar12 = _CFDictionaryGetValue
                         (*(undefined8 *)((long)param_1 + 0x50),
                          &cf_AuthInstallPreservePersonalizedBundles), lVar12 == 0)) {
LAB_0015bc45:
    lVar8 = _AMAuthInstallSupportCreateURLFromString(uVar11,lVar8);
    if (lVar8 == 0) {
      pcVar9 = &cf_Can_tcleanuprestoreforNULLdevice;
      goto LAB_0015bc6e;
    }
    __AMRResourceManagerStoppedUsingResourceAtURL(lVar8);
    _CFRelease(lVar8);
  }
  else {
    lVar13 = _CFGetTypeID(lVar12);
    lVar14 = _CFBooleanGetTypeID();
    if ((lVar13 != lVar14) || (cVar4 = _CFBooleanGetValue(lVar12), cVar4 == '\0'))
    goto LAB_0015bc45;
  }
  pcVar9 = (cfstringStruct *)0x0;
LAB_0015bc6e:
  _AMRSafeLogAndRelease(3,pcVar9);
  _CFRelease(param_1);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

