// rea decompile_all
// name: _AMRemoteServiceDeviceCopyAuthInstallPreflightOptions
// address: 0x100866
// body: available
// range: 0x100866-0x10117b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_AMRemoteServiceDeviceCopyAuthInstallPreflightOptions(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  cfstringStruct *pcVar12;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined4 local_34;
  
  lVar6 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_70 = 0;
  if (param_3 == (long *)0x0 || (param_2 == 0 || param_1 == 0)) {
    local_34 = 1;
    local_58 = CONCAT71((int7)((ulong)in_RAX >> 8),1);
    lVar7 = 0;
LAB_00100e12:
    lVar4 = 0;
  }
  else {
    local_40 = param_2;
    lVar4 = __copyAuthInstallPreflightProperty(param_1,1,__RSDeviceCopyPreflightKey);
    local_50 = lVar4;
    if (lVar4 == 0) {
      local_34 = 0xffffffff;
    }
    else {
      uVar5 = _CFGetAllocator(param_1);
      local_70 = _CFDictionaryCreateMutable
                           (uVar5,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                            PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (local_70 != 0) {
        local_98 = &local_a0;
        local_a0 = 0;
        local_90 = 0x2020000000;
        local_88 = 0;
        local_48 = param_1;
        if (*(long *)(param_1 + 0x18) == 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar11 = "Invalid argument(s).";
LAB_00100a1a:
          lVar6 = 0;
          __os_log_internal(0,_md_log_log,0x10,pcVar11);
        }
        else {
          lVar6 = _CFUUIDCreateString(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8);
          if (lVar6 == 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar11 = "Failed to create UUID.";
            goto LAB_00100a1a;
          }
          uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                            (_gConnection,"synchronousRemoteObjectProxyWithErrorHandler:",
                             &___block_literal_global_129);
          (*(code *)PTR__objc_msgSend_00441098)
                    (uVar5,"getApParameters:type:withReply:",lVar6,*(undefined4 *)(local_48 + 0x20))
          ;
        }
        uVar5 = (*(code *)PTR__objc_release_004410a0)(lVar6);
        local_34 = 0xffffffff;
        local_58 = CONCAT71((int7)((ulong)uVar5 >> 8),1);
        lVar8 = local_98[3];
        local_80 = param_3;
        __Block_object_dispose(&local_a0,8);
        if (lVar8 == 0) {
          lVar6 = 0;
          lVar7 = 0;
LAB_00100bae:
          param_2 = local_40;
          lVar4 = local_48;
          lVar8 = _CFUUIDCreateString(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                                      *(undefined8 *)(local_48 + 0x18));
          puVar1 = PTR__objc_msgSend_00441098;
          local_78 = lVar7;
          if (lVar8 == 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            lVar8 = 0;
            __os_log_internal(0,_md_log_log,0x10,"Failed to create UUID.");
          }
          else {
            uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                              (_gConnection,"synchronousRemoteObjectProxyWithErrorHandler:",
                               &___block_literal_global_124);
            (*(code *)puVar1)(uVar5,"generateNoncesForUUID:type:withReply:",lVar8,
                              *(undefined4 *)(lVar4 + 0x20));
          }
          (*(code *)PTR__objc_release_004410a0)(lVar8);
          if (local_68 == 0) {
LAB_00100cb3:
            _AMRLog(3,&cf_FailedtoretrieveApNoncefromdevice);
          }
          else {
            lVar7 = _CFGetTypeID();
            lVar4 = _CFDataGetTypeID();
            if (lVar7 != lVar4) goto LAB_00100cb3;
            _CFDictionarySetValue(local_50,&cf_ApNonce,local_68);
          }
          lVar4 = local_48;
          lVar7 = local_78;
          if (local_60 != 0) {
            lVar8 = _CFGetTypeID();
            lVar9 = _CFDataGetTypeID();
            if (lVar8 == lVar9) {
              _CFDictionarySetValue(local_50,&cf_SepNonce,local_60);
              goto LAB_00100d08;
            }
          }
          pcVar12 = &cf_Couldn_tgetSEPnonce_disablingpreflight;
        }
        else {
          lVar6 = _CFDictionaryGetValue(lVar8,&cf_ApNonce);
          local_68 = lVar6;
          if (lVar6 != 0) {
            _CFDictionarySetValue(lVar4,&cf_ApNonce,lVar6);
            _CFRetain(lVar6);
          }
          lVar6 = _CFDictionaryGetValue(lVar8,&cf_ApNonceSlotID);
          if (lVar6 != 0) {
            _CFDictionarySetValue(lVar4,&cf_ApNonceSlotID,lVar6);
            _CFRetain(lVar6);
          }
          lVar7 = _CFDictionaryGetValue(lVar8,&cf_SepNonce);
          local_60 = lVar7;
          if (lVar7 != 0) {
            _CFDictionarySetValue(lVar4,&cf_SepNonce,lVar7);
            _CFRetain(lVar7);
          }
          lVar7 = _CFDictionaryGetValue(lVar8,&cf_SepNonceSlotID);
          if (lVar7 != 0) {
            _CFDictionarySetValue(lVar4,&cf_SepNonceSlotID,lVar7);
            _CFRetain(lVar7);
          }
          uVar5 = _CFDictionaryGetCount(lVar8);
          _AMRLog(6,&cf_Passingin_luitemstoAMAuthInstallApSetParameters_,uVar5);
          _CFDictionaryApplyFunction(lVar8,__mergeDict,&local_50);
          lVar9 = local_60;
          lVar4 = local_68;
          _CFRelease(lVar8);
          if ((lVar4 == 0) || (lVar4 = local_48, param_2 = local_40, lVar9 == 0)) goto LAB_00100bae;
LAB_00100d08:
          uVar5 = _CFGetAllocator(lVar4);
          local_70 = _CFDictionaryCreateMutable
                               (uVar5,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          if (local_70 != 0) {
            local_a0 = 0;
            local_98 = &local_a0;
            local_90 = 0x2020000000;
            local_88 = 0;
            if (*(long *)(lVar4 + 0x18) == 0) {
              pcVar11 = "Invalid argument(s).";
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
LAB_00100ecc:
              lVar4 = 0;
              __os_log_internal(0,_md_log_log,0x10,pcVar11);
            }
            else {
              lVar4 = _CFUUIDCreateString(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8);
              if (lVar4 == 0) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                pcVar11 = "Failed to create UUID.";
                goto LAB_00100ecc;
              }
              uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                                (_gConnection,"synchronousRemoteObjectProxyWithErrorHandler:",
                                 &___block_literal_global_133);
              (*(code *)PTR__objc_msgSend_00441098)
                        (uVar5,"queryPreflightDictionaryForUUID:type:withReply:",lVar4,
                         *(undefined4 *)(local_48 + 0x20));
            }
            (*(code *)PTR__objc_release_004410a0)(lVar4);
            lVar4 = local_98[3];
            __Block_object_dispose(&local_a0,8);
            if (lVar4 != 0) {
              lVar8 = _CFGetTypeID(lVar4);
              lVar9 = _CFDictionaryGetTypeID();
              if (lVar8 != lVar9) {
                _AMRLog(3,&cf_deviceInfowrongtype);
                goto LAB_00100e14;
              }
              lVar8 = _CFDictionaryGetValue(lVar4,&cf_DeviceInfo);
              if (lVar8 != 0) {
                lVar9 = _CFGetTypeID(lVar8);
                lVar10 = _CFDictionaryGetTypeID();
                if (lVar9 == lVar10) {
                  _CFDictionaryApplyFunction(lVar8,__transformDeviceDict,&local_70);
                  if (local_70 != 0) {
                    uVar5 = _CFDictionaryGetCount(lVar8);
                    _AMRLog(3,&cf_Updaterpreflightqueryreturned_luentries_,uVar5);
                    param_2 = local_40;
                    goto LAB_00100fba;
                  }
                  pcVar12 = &cf_Failurewhentransforminginside_transformDeviceDict;
                }
                else {
                  pcVar12 = &cf_allDeviceInfowrongtype;
                }
                _AMRLog(3,pcVar12);
                param_2 = local_40;
                goto LAB_00100e14;
              }
              _AMRLog(3,&cf_Updaterpreflightqueryreturnedmalformedresults__MissingDeviceInfokey_);
LAB_00100fba:
              lVar8 = _CFDictionaryGetValue(lVar4,&cf_ApParameters);
              if (lVar8 != 0) {
                uVar5 = _CFDictionaryGetCount(lVar8);
                _AMRLog(6,&cf_Passingin_luitemstoAMAuthInstallApSetParameters_,uVar5);
                _CFDictionaryApplyFunction(lVar8,__mergeDict,&local_50);
              }
            }
            plVar2 = local_80;
            local_34 = _AMRAuthInstallCopyAllPreflightOptions(local_50,0,local_70,param_2,local_80);
            if (lVar7 == 0 && lVar6 == 0) {
              lVar6 = 0;
              lVar7 = 0;
            }
            else if (*plVar2 == 0) {
              lVar8 = _CFDictionaryCreateMutable
                                (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                 PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                 PTR__kCFTypeDictionaryValueCallBacks_004411b8);
              if (lVar6 != 0) {
                _CFDictionarySetValue(lVar8,&cf_ApNonceSlotID,lVar6);
              }
              if (lVar7 != 0) {
                _CFDictionarySetValue(lVar8,&cf_SepNonceSlotID,lVar7);
              }
              *local_80 = lVar8;
            }
            goto LAB_00100e14;
          }
          pcVar12 = &cf_failedtoallocategenericInfo;
        }
        local_58 = 0;
        _AMRLog(3,pcVar12);
        goto LAB_00100e12;
      }
      local_34 = 0xffffffff;
      _AMRLog(3,&cf_failedtoallocategenericInfo);
    }
    lVar6 = 0;
    lVar7 = 0;
    local_58 = 0;
    lVar4 = 0;
    param_2 = local_40;
  }
LAB_00100e14:
  if (local_68 != 0) {
    _CFRelease();
  }
  if (local_60 != 0) {
    _CFRelease();
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  uVar3 = local_34;
  uVar5 = local_58;
  if (local_50 != 0) {
    _CFRelease();
  }
  if (local_70 != 0) {
    _CFRelease();
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if ((char)uVar5 == '\0') {
    uVar3 = _AMRAuthInstallAttemptSimpleHttpRequest(param_2);
  }
  return uVar3;
}

