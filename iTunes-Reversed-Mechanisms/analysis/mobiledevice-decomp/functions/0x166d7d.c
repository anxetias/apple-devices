// rea decompile_all
// name: _AMRestorableDeviceRestoreWithError
// address: 0x166d7d
// body: available
// range: 0x166d7d-0x166e01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
_AMRestorableDeviceRestoreWithError
          (long param_1,undefined8 param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  undefined1 uVar1;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  undefined8 local_30;
  long local_28;
  
  local_38 = &local_28;
  local_28 = 0;
  local_50 = param_1;
  local_48 = param_2;
  local_40 = param_3;
  local_30 = param_5;
  _dispatch_sync_f(*(dispatch_queue_t *)(param_1 + 0x98),&local_50,___thr_AMRestorableDeviceRestore)
  ;
  if (local_28 == 0) {
    __AMRestorableDeviceWatcherResume(param_1 + 0xa0);
    uVar1 = 1;
  }
  else {
    if (param_4 == (long *)0x0) {
      _CFRelease();
    }
    else {
      *param_4 = local_28;
    }
    uVar1 = 0;
  }
  return uVar1;
}

