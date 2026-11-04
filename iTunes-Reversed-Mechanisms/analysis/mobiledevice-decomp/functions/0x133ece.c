// rea decompile_all
// name: _AMDeviceRegisterForCUStateNotificationsWithOptions
// address: 0x133ece
// body: available
// range: 0x133ece-0x133f58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMDeviceRegisterForCUStateNotificationsWithOptions(void *param_1,long param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  
  if (param_1 == (void *)0x0 || param_2 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input(s).");
    uVar2 = 0xe8000007;
  }
  else {
    if (*(void **)(param_2 + 0xe0) != (void *)0x0) {
      __Block_release(*(void **)(param_2 + 0xe0));
    }
    pvVar1 = __Block_copy(param_1);
    *(void **)(param_2 + 0xe0) = pvVar1;
    uVar2 = 0;
  }
  return uVar2;
}

