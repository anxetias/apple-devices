// rea decompile_all
// name: __AMDRemotePairingExtendedPairWithOptions
// address: 0x16e1ee
// body: available
// range: 0x16e1ee-0x16e5d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
__AMDRemotePairingExtendedPairWithOptions(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  dispatch_object_t object;
  dispatch_queue_t pdVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  code *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_88 = &local_90;
  local_90 = 0;
  local_80 = 0x3052000000;
  local_78 = ___Block_byref_object_copy__4347;
  local_70 = ___Block_byref_object_dispose__4348;
  local_68 = 0;
  local_58 = &local_60;
  local_60 = 0;
  local_50 = 0x2020000000;
  local_48 = 0xe8000001;
  iVar2 = _AMDeviceIsValid();
  if (iVar2 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    object._os_obj = (_os_object_s *)0x0;
    __os_log_internal(0,_md_log_log,0x10,"Device \'%@\' is no longer valid; cannot pair.",
                      *(undefined8 *)(param_1 + 0x20));
    uVar6 = 0xe8000084;
    goto LAB_0016e4df;
  }
  lVar1 = *(long *)(param_1 + 0xf8);
  local_40 = param_3;
  if (lVar1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar5 = "Invalid RemotePairing handle.";
    object._os_obj = (_os_object_s *)0x0;
  }
  else {
    local_38 = param_2;
    uVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar1,"authFlags");
    if ((uVar3 & 1) != 0) {
      object._os_obj = (_os_object_s *)0x0;
      uVar6 = 0;
      goto LAB_0016e4df;
    }
    object._os_obj = (_os_object_s *)_dispatch_semaphore_create(0);
    if (object._os_obj == (_os_object_s *)0x0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      object._os_obj = (_os_object_s *)0x0;
      __os_log_internal(0,_md_log_log,0x10,"Failed to create semaphore.");
      uVar6 = 0xe8000003;
      goto LAB_0016e4df;
    }
    if (*(int *)(param_1 + 0x30) == 1) {
      uVar3 = (*(code *)PTR__objc_msgSend_00441098)();
      if ((uVar3 & 4) != 0) {
        pdVar4 = _dispatch_get_global_queue(0,0);
        (*(code *)PTR__objc_msgSend_00441098)
                  (lVar1,"pairAllowingHostSideInteraction:withOptions:targetQueue:outcomeHandler:",0
                   ,local_38,pdVar4);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Waiting for pairing to complete.");
        _dispatch_semaphore_wait((dispatch_semaphore_t)object._os_obj,0xffffffffffffffff);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Pairing completed.");
        uVar6 = *(undefined4 *)(local_58 + 3);
        if (local_88[5] != 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"Failed to pair with device: %@",local_88[5]);
        }
        goto LAB_0016e4df;
      }
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar5 = "This API does not support wireless pairing.";
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar5);
  uVar6 = 0xe800000f;
LAB_0016e4df:
  (*(code *)PTR__objc_release_004410a0)(local_88[5]);
  if (object._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(object);
  }
  __Block_object_dispose(&local_60,8);
  __Block_object_dispose(&local_90,8);
  return uVar6;
}

