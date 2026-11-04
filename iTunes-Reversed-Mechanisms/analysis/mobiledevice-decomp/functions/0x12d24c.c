// rea decompile_all
// name: __SubscribeForMuxNotifications
// address: 0x12d24c
// body: available
// range: 0x12d24c-0x12d520 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __SubscribeForMuxNotifications(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined4 local_60 [2];
  long local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  uint local_30;
  undefined4 local_2c;
  
  local_2c = 0;
  local_60[0] = 3;
  local_50 = __AMDDeviceAttachedCallbackv3;
  local_48 = __AMDDeviceDetached;
  local_40 = __AMDDeviceListeningStopped;
  local_38 = __AMDDevicePaired;
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar7 = 0xe8000007;
  local_58 = param_1;
  if (uVar1 < 3) {
    uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar3 = _CFDictionaryCreateMutable
                      (uVar7,3,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar3 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to create filter dictionary");
      return 0xc;
    }
    local_30 = uVar1;
    lVar4 = _CFNumberCreate(uVar7,9);
    if (lVar4 != 0) {
      _CFDictionaryAddValue(lVar3,_kUSBMuxProperty_LinkType,lVar4);
      _CFRelease(lVar4);
    }
    lVar4 = _CFNumberCreate(uVar7,9,&local_2c);
    if (lVar4 != 0) {
      _CFDictionaryAddValue(lVar3,_kUSBMuxProperty_LocationID,lVar4);
      _CFRelease(lVar4);
    }
    _CFRetain(param_1);
    iVar2 = _USBMuxListenerCreateFiltered(local_60,lVar3,param_1 + 0x20);
    if (iVar2 == 0) {
      lVar4 = _USBMuxListenerGetRunLoopSource(*(undefined8 *)(param_1 + 0x20));
      *(long *)(param_1 + 0x28) = lVar4;
      if (lVar4 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Could not get run loop source for USB mux listener");
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x20) = 0;
        _USBMuxListenerClose(uVar7);
        _CFRelease(param_1);
        uVar7 = 0xe8000064;
      }
      else {
        _CFRetain(lVar4);
        uVar7 = _CFRunLoopGetCurrent();
        _CFRunLoopAddSource(uVar7,*(undefined8 *)(param_1 + 0x28),
                            *(undefined8 *)PTR__kCFRunLoopCommonModes_00441188);
        uVar7 = 0;
      }
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar7 = _md_log_log;
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      __os_log_internal(0,uVar7,0x10,"USBMuxListenerCreate: %s",pcVar6);
      uVar7 = 0xe8000063;
    }
    _CFRelease(lVar3);
  }
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,2,"returned 0x%x.",uVar7);
  return uVar7;
}

