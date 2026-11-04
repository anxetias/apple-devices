// rea decompile_all
// name: __AMDDevicePaired
// address: 0x12da68
// body: available
// range: 0x12da68-0x12dc9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMDDevicePaired(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long local_38;
  undefined4 local_30;
  long local_28;
  
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,
                      "Received \'paired\' notification with no notification reference.");
  }
  else {
    lVar4 = _AMDeviceNotificationGetDeviceWithDeviceID(param_1,param_3);
    if (lVar4 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Didn\'t Get Device for ID: %d",param_3);
    }
    else {
      local_30 = 4;
      if (*(char *)(param_1 + 0x79) == '\x01') {
        local_38 = lVar4;
        local_28 = param_1;
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,1,"Device Paired: \'%@\'.",lVar4);
        if (*(code **)(param_1 + 0x80) == (code *)0x0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"Callback is NULL while callbacks are enabled.");
        }
        else {
          (**(code **)(param_1 + 0x80))(&local_38,*(undefined8 *)(param_1 + 0x88));
        }
        if ((((*(char *)(param_1 + 0x7a) != '\0') ||
             ((*(char *)(param_1 + 0x7b) == '\x01' && (*(int *)(lVar4 + 0x30) == 1)))) &&
            (iVar3 = __AMDeviceListenForPairedDevices(lVar4,param_1), iVar3 != -0x17fffff1)) &&
           (iVar3 != 0)) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar2 = _md_log_log;
          uVar1 = *(undefined8 *)(lVar4 + 0x20);
          uVar5 = _AMDErrorString(iVar3);
          __os_log_internal(0,uVar2,0x10,
                            "Failed to listen for devices paired with \'%@\': 0x%x (%s)",uVar1,iVar3
                            ,uVar5);
        }
      }
    }
  }
  return;
}

