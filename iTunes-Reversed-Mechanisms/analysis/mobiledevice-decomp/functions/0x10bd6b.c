// rea decompile_all
// name: __AMDRemotePairingTakeTunnelUsageAssertion
// address: 0x10bd6b
// body: available
// range: 0x10bd6b-0x10c0fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMDRemotePairingTakeTunnelUsageAssertion(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  dispatch_object_t object;
  dispatch_queue_t pdVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  code *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  code *local_48;
  code *local_40;
  undefined8 local_38;
  
  local_88 = &local_90;
  local_90 = 0;
  local_80 = 0x3052000000;
  local_78 = ___Block_byref_object_copy_;
  local_70 = ___Block_byref_object_dispose_;
  local_68 = 0;
  local_58 = &local_60;
  local_60 = 0;
  local_50 = 0x3052000000;
  local_48 = ___Block_byref_object_copy_;
  local_40 = ___Block_byref_object_dispose_;
  local_38 = 0;
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    object._os_obj = (_os_object_s *)0x0;
    __os_log_internal(0,_md_log_log,0x10,
                      "Connecting over RemoteXPC is not supported for this connection type.");
    uVar5 = 0xe800000f;
  }
  else {
    uVar1 = (*(code *)PTR__objc_msgSend_00441098)();
    if ((uVar1 & 1) == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      object._os_obj = (_os_object_s *)0x0;
      __os_log_internal(0,_md_log_log,0x10,
                        "Acquiring tunnel usage assertion is not possible on an unpaired device.");
      uVar5 = 0xe800001b;
    }
    else {
      object._os_obj = (_os_object_s *)_dispatch_semaphore_create(0);
      if (object._os_obj == (_os_object_s *)0x0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        object._os_obj = (_os_object_s *)0x0;
        __os_log_internal(0,_md_log_log,0x10,"Failed to create semaphore.");
        uVar5 = 0xe8000003;
      }
      else {
        pdVar2 = _dispatch_get_global_queue(0,0);
        (*(code *)PTR__objc_msgSend_00441098)
                  (param_1,"createTunnelUsageAssertionWithTargetQueue:completionHandler:",pdVar2);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar5 = _md_log_log;
        uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"udid");
        __os_log_internal(0,uVar5,0x10,"Waiting for tunnel usage assertion for device \'%@\'",uVar3)
        ;
        _dispatch_semaphore_wait((dispatch_semaphore_t)object._os_obj,0xffffffffffffffff);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar3 = _md_log_log;
        uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"udid");
        uVar5 = 0;
        __os_log_internal(0,uVar3,0x10,
                          "Received reply about tunnel usage assertion for device \'%@\'",uVar4);
        if (local_58[5] == 0) {
          if (param_2 != (undefined8 *)0x0) {
            *param_2 = local_88[5];
            local_88[5] = 0;
          }
        }
        else {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,
                            "Failed to take usage assertion with remote device: %@",local_58[5]);
          uVar5 = 0xe8000112;
        }
      }
    }
  }
  (*(code *)PTR__objc_release_004410a0)(local_58[5]);
  (*(code *)PTR__objc_release_004410a0)(local_88[5]);
  if (object._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(object);
  }
  __Block_object_dispose(&local_60,8);
  __Block_object_dispose(&local_90,8);
  return uVar5;
}

