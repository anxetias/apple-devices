// rea decompile_all
// name: _AMDeviceNotificationUnsubscribe
// address: 0x133f89
// body: available
// range: 0x133f89-0x134080 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMDeviceNotificationUnsubscribe(long param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input.");
    uVar1 = 0xe8000007;
  }
  else {
    uVar1 = 0;
    if (*(char *)(param_1 + 0x78) == '\0') {
      *(undefined1 *)(param_1 + 0x78) = 1;
      __UnsubscribeForMuxNotifications(param_1);
      __AMDRemotePairingNotificationUnsubscribe(param_1);
      local_28 = 3;
      local_30 = 0;
      local_20 = param_1;
      (**(code **)(param_1 + 0x80))(&local_30,*(undefined8 *)(param_1 + 0x88));
      _CFRelease(param_1);
    }
  }
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,2,"returning 0x%x on notification reference %p.",uVar1,param_1);
  return uVar1;
}

