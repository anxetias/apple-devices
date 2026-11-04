// rea decompile_all
// name: __AMDDeviceListeningStopped
// address: 0x12d973
// body: available
// range: 0x12d973-0x12da67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMDDeviceListeningStopped(long param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  long local_18;
  
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar2 = "Received \'listening stopped\' notification with no notification reference.";
  }
  else {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar1 = _CFRunLoopGetCurrent();
      _CFRunLoopRemoveSource
                (uVar1,*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)PTR__kCFRunLoopCommonModes_00441188);
      _CFRelease(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    local_20 = 3;
    local_28 = 0;
    if (*(char *)(param_1 + 0x79) != '\x01') {
      return;
    }
    local_18 = param_1;
    if (*(code **)(param_1 + 0x80) != (code *)0x0) {
      (**(code **)(param_1 + 0x80))(&local_28,*(undefined8 *)(param_1 + 0x88));
      return;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar2 = "Callback is NULL while callbacks are enabled.";
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar2);
  return;
}

