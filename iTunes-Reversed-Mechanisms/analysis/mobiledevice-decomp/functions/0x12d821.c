// rea decompile_all
// name: __AMDDeviceDetached
// address: 0x12d821
// body: available
// range: 0x12d821-0x12d972 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMDDeviceDetached(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long local_38;
  undefined4 uStack_30;
  long local_28;
  
  if ((param_1 != 0) &&
     (lVar2 = _AMDeviceNotificationGetDeviceWithDeviceID(param_1,param_3), lVar2 != 0)) {
    _CFRetain(lVar2);
    _AMDeviceNotificationRemoveDevice(param_1,lVar2);
    *(undefined1 *)(lVar2 + 0x94) = 0;
    uStack_30 = 2;
    local_38 = lVar2;
    local_28 = param_1;
    if ((*(char *)(param_1 + 0x79) == '\x01') &&
       ((*(char *)(param_1 + 0x7c) != '\0' ||
        (cVar1 = _AMDeviceIsWiFiPairableRef(lVar2), cVar1 == '\0')))) {
      uVar3 = (undefined4)local_38;
      uVar4 = uStack_30;
      lVar5 = local_28;
      __AMDeviceDetachPairedDevices(lVar2,param_1);
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,2,"Device \'%@\' detached.",lVar2,param_6,uVar3,uVar4,lVar5);
      if (*(code **)(param_1 + 0x80) == (code *)0x0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Callback is NULL while callbacks are enabled.");
      }
      else {
        (**(code **)(param_1 + 0x80))(&local_38,*(undefined8 *)(param_1 + 0x88));
      }
    }
    _CFRelease(lVar2);
  }
  return;
}

