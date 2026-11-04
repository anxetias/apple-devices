// rea decompile_all
// name: _AMDeviceCreateWakeupToken
// address: 0x10c6fd
// body: available
// range: 0x10c6fd-0x10cda8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMDeviceCreateWakeupToken(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  dispatch_group_t group;
  dispatch_time_t timeout;
  long lVar4;
  dispatch_queue_t pdVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  code *local_80;
  code *local_78;
  undefined8 local_70;
  ulong local_68;
  ulong *local_60;
  undefined8 local_58;
  code *local_50;
  code *local_48;
  undefined8 local_40;
  dispatch_queue_t local_38;
  
  uVar9 = 0xe8000007;
  if (param_3 == (long *)0x0 || param_1 == 0) goto LAB_0010ca68;
  if (*(long *)(param_1 + 0xf8) == 0) {
    cVar1 = __AMDeviceIsBackedByRSD(param_1);
    if (cVar1 != '\0') {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,
                        "Creating wakeup token is unsupported for remote devices.");
      uVar9 = 0xe800000f;
      goto LAB_0010ca68;
    }
    if (*(long *)(param_1 + 0x88) == 0) {
      pdVar5 = (dispatch_queue_t)_AMDeviceCreateCopy(param_1);
      if (pdVar5 == (dispatch_queue_t)0x0) goto LAB_0010ca68;
      uVar3 = _AMDeviceConnect(pdVar5);
      local_68 = CONCAT44(local_68._4_4_,uVar3);
      if (uVar3 == 0) {
        lVar4 = _AMDeviceCopyValueWithError
                          (pdVar5,&cf_com_apple_mobile_wireless_lockdown,&cf_BonjourFullServiceName,
                           &local_68);
        if ((int)local_68 == 0) {
          if (lVar4 != 0) {
            lVar8 = _CFGetTypeID(lVar4);
            lVar6 = _CFStringGetTypeID();
            if (lVar8 == lVar6) {
              *(long *)(param_1 + 0x88) = lVar4;
              goto LAB_0010c93f;
            }
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"Invalid bonjour full service name from device %u.",
                            *(undefined4 *)(param_1 + 0x10));
          uVar9 = 0xe8000013;
        }
        else {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,
                            "Could not get bonjour full service name from device %u 0x%x.",
                            *(undefined4 *)(param_1 + 0x10),local_68 & 0xffffffff);
          uVar9 = local_68 & 0xffffffff;
        }
        goto LAB_0010cc56;
      }
      uVar9 = (ulong)uVar3;
    }
    else {
      pdVar5 = (dispatch_queue_t)0x0;
LAB_0010c93f:
      local_38 = pdVar5;
      lVar4 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,4);
      uVar9 = 0xe8000001;
      if ((lVar4 != 0) &&
         (lVar8 = __AMDeviceCreateWakeupTokenPropertyList(0,*(undefined8 *)(param_1 + 0x88),lVar4),
         lVar8 != 0)) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar9 = 0;
        __os_log_internal(0,_md_log_log,2,
                          "Created wakeup token for device %u, interface %u, name %@.",
                          *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x90),
                          *(undefined8 *)(param_1 + 0x88));
        *param_3 = lVar8;
      }
      pdVar5 = local_38;
      if (local_38 != (dispatch_queue_t)0x0) {
LAB_0010cc56:
        _CFRelease(pdVar5);
      }
      pdVar5 = (dispatch_queue_t)lVar4;
      if (pdVar5 == (dispatch_queue_t)0x0) goto LAB_0010ca68;
    }
    _CFRelease(pdVar5);
    goto LAB_0010ca68;
  }
  local_60 = &local_68;
  local_68 = 0;
  local_58 = 0x3052000000;
  local_50 = ___Block_byref_object_copy__4347;
  local_48 = ___Block_byref_object_dispose__4348;
  local_40 = 0;
  local_90 = &local_98;
  local_98 = 0;
  local_88 = 0x3052000000;
  local_80 = ___Block_byref_object_copy__4347;
  local_78 = ___Block_byref_object_dispose__4348;
  local_70 = 0;
  group = _dispatch_group_create();
  local_38 = _dispatch_get_global_queue(0,0);
  iVar2 = _AMDeviceIsValid(param_1);
  if (iVar2 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    lVar4 = 0;
    __os_log_internal(0,_md_log_log,0x10,"Device \'%@\' is not valid.",
                      *(undefined8 *)(param_1 + 0x20));
    uVar9 = 0xe8000084;
LAB_0010ca24:
    uVar7 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0xf8);
    if (lVar4 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      lVar4 = 0;
      __os_log_internal(0,_md_log_log,0x10,"Invalid RemotePairing handle.");
      uVar9 = 0xe800000f;
      goto LAB_0010ca24;
    }
    cVar1 = (*(code *)PTR__objc_msgSend_00441098)
                      (lVar4,"respondsToSelector:",
                       "requestWakeupTokenWithTargetQueue:completionHandler:");
    if (cVar1 != '\0') {
      _dispatch_group_enter(group);
      (*(code *)PTR__objc_msgSend_00441098)
                (lVar4,"requestWakeupTokenWithTargetQueue:completionHandler:",local_38);
      timeout = _dispatch_time(0,10000000000);
      lVar4 = _dispatch_group_wait(group,timeout);
      if (lVar4 == 0) {
        if (local_60[5] == 0) {
          uVar7 = (*(code *)PTR__objc_msgSend_00441098)(local_90[5],"data");
          lVar4 = __AMDeviceCreateWakeupTokenPropertyList(uVar7,0,0);
          if (lVar4 == 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            lVar4 = 0;
            __os_log_internal(0,_md_log_log,0x10,"Failed to create wakeup token dictionary.");
            uVar9 = 0xe8000003;
          }
          else {
            lVar8 = (*(code *)PTR__objc_retain_004410a8)(lVar4);
            *param_3 = lVar8;
            uVar9 = 0;
          }
        }
        else {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"Failed to create RemotePairing wakeup token: %@",
                            local_60[5]);
          uVar9 = (*(code *)PTR__objc_msgSend_00441098)(local_60[5],"code");
          lVar4 = 0;
        }
      }
      else {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        lVar4 = 0;
        __os_log_internal(0,_md_log_log,0x10,
                          "Timed out waiting for wakeup token from RemotePairing.");
        uVar9 = 0xe800000c;
      }
      goto LAB_0010ca24;
    }
    uVar7 = __AMDRemotePairingCopyFrameworkVersion();
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    lVar4 = 0;
    __os_log_internal(0,_md_log_log,0x10,
                      "Wakeup tokens are not supported in RemotePairing version \'%@\'",uVar7);
    uVar9 = 0xe800000f;
  }
  (*(code *)PTR__objc_release_004410a0)(uVar7);
  (*(code *)PTR__objc_release_004410a0)(local_90[5]);
  (*(code *)PTR__objc_release_004410a0)(lVar4);
  __Block_object_dispose(&local_98,8);
  __Block_object_dispose(&local_68,8);
LAB_0010ca68:
  return uVar9 & 0xffffffff;
}

