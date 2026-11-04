// rea decompile_all
// name: _AMDRemoteObserveNotification
// address: 0x1739f0
// body: available
// range: 0x1739f0-0x173b0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMDRemoteObserveNotification(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0 || param_2 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid argument(s).");
    uVar3 = 0xe8000007;
  }
  else {
    uVar3 = 0;
    lVar1 = _xpc_dictionary_create(0,0,0);
    if (lVar1 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to create dictionary.");
      uVar3 = 0xe8000003;
    }
    else {
      _xpc_dictionary_set_string(lVar1,"Command","ObserveNotification");
      uVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_2,"UTF8String");
      _xpc_dictionary_set_string(lVar1,"Name",uVar2);
      _xpc_remote_connection_send_message(param_1,lVar1);
      _xpc_release(lVar1);
    }
  }
  return uVar3;
}

