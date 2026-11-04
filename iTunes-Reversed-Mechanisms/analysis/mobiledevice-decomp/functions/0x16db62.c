// rea decompile_all
// name: __AMDRemotePairingPairWithCallback
// address: 0x16db62
// body: available
// range: 0x16db62-0x16e188 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
__AMDRemotePairingPairWithCallback
          (long param_1,undefined8 param_2,undefined8 param_3,dispatch_object_t param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  dispatch_object_t dVar6;
  dispatch_queue_t pdVar7;
  char *pcVar8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  dispatch_object_t local_38;
  
  local_78 = &local_80;
  local_80 = 0;
  local_70 = 0x3052000000;
  local_68 = ___Block_byref_object_copy__4347;
  local_60 = ___Block_byref_object_dispose__4348;
  local_58 = 0;
  local_98 = &local_a0;
  local_a0 = 0;
  local_90 = 0x2020000000;
  local_88 = 0xe8000001;
  local_b8 = &local_c0;
  local_c0 = 0;
  local_b0 = 0x2020000000;
  local_a8 = 0;
  local_50 = param_2;
  local_38 = param_4;
  if (__AMDRemotePairingPairWithCallback_onceToken != -1) {
    _dispatch_once(&__AMDRemotePairingPairWithCallback_onceToken,&___block_literal_global_130);
  }
  iVar3 = _AMDeviceIsValid(param_1);
  if (iVar3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Device \'%@\' is no longer valid; cannot pair.",
                      *(undefined8 *)(param_1 + 0x20));
    uVar4 = 0xe8000084;
    goto LAB_0016dfa6;
  }
  if (__AMDRemotePairingPairWithCallback_pairingQueue == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar8 = "Failed to create queue.";
LAB_0016df48:
    __os_log_internal(0,_md_log_log,0x10,pcVar8);
    uVar4 = 0xe8000003;
  }
  else {
    lVar1 = *(long *)(param_1 + 0xf8);
    if (lVar1 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar8 = "Invalid RemotePairing handle.";
    }
    else {
      local_48 = param_3;
      local_40 = lVar1;
      uVar5 = (*(code *)PTR__objc_msgSend_00441098)(lVar1,"authFlags");
      uVar4 = 0;
      if ((uVar5 & 1) != 0) goto LAB_0016dfa6;
      cVar2 = __AMDRemotePairingIsWifiPairableRef();
      if (cVar2 == '\0') {
        uVar4 = __AMDRemotePairingExtendedPairWithOptions(param_1,local_48,local_38._os_obj);
        goto LAB_0016dfa6;
      }
      if (_RemotePairingLibrary_sOnce_4256 != -1) {
        _dispatch_once(&_RemotePairingLibrary_sOnce_4256,&___block_literal_global_252);
      }
      if (_RemotePairingLibrary_sLib_4257 != 0) {
        dVar6._os_obj = (_os_object_s *)_dispatch_semaphore_create(0);
        if (dVar6._os_obj != (_os_object_s *)0x0) {
          local_38._os_obj = dVar6._os_obj;
          (*(code *)PTR__objc_msgSend_00441098)
                    (local_40,"cancelPairingAttemptWithTargetQueue:completionHandler:",
                     __AMDRemotePairingPairWithCallback_pairingQueue);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"Waiting for pairing to cancel.");
          _dispatch_semaphore_wait((dispatch_semaphore_t)local_38._os_obj,0xffffffffffffffff);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"Pairing cancelled.");
          if (local_78[5] != 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"Failed to cancel previous pairing attempt: %@",
                              local_78[5]);
            (*(code *)PTR__objc_release_004410a0)();
            local_78[5] = 0;
          }
          pdVar7 = _dispatch_get_global_queue(0,0);
          (*(code *)PTR__objc_msgSend_00441098)
                    (local_40,
                     "pairAllowingHostSideInteraction:withOptions:targetQueue:outcomeHandler:",1,
                     local_48,pdVar7);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"Waiting for pairing to complete.");
          _dispatch_semaphore_wait((dispatch_semaphore_t)local_38._os_obj,0xffffffffffffffff);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"Pairing completed.");
          uVar4 = *(undefined4 *)(local_98 + 3);
          if (local_78[5] != 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"Failed to pair with device: %@",local_78[5]);
          }
          _dispatch_release(local_38);
          goto LAB_0016dfa6;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar8 = "Failed to create semaphore.";
        goto LAB_0016df48;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar8 = "RemotePairing.framework is not available.";
    }
    __os_log_internal(0,_md_log_log,0x10,pcVar8);
    uVar4 = 0xe800000f;
  }
LAB_0016dfa6:
  (*(code *)PTR__objc_release_004410a0)(0);
  (*(code *)PTR__objc_release_004410a0)(local_78[5]);
  __Block_object_dispose(&local_c0,8);
  __Block_object_dispose(&local_a0,8);
  __Block_object_dispose(&local_80,8);
  return uVar4;
}

