// rea decompile_all
// name: ___AMDRemoteListenForNotifications_block_invoke
// address: 0x173884
// body: available
// range: 0x173884-0x1739d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1739a3 to 0x60ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___AMDRemoteListenForNotifications_block_invoke(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined *)_xpc_get_type(param_2);
  if (puVar1 == PTR___xpc_type_error_00441320) {
    pvVar2 = (void *)_xpc_copy_description(param_2);
  }
  else {
    puVar1 = (undefined *)_xpc_get_type(param_2);
    if (puVar1 == PTR___xpc_type_dictionary_00441318) {
      lVar3 = _xpc_dictionary_get_string(param_2,"Name");
      if (lVar3 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar4 = 0;
        __os_log_internal(0,_md_log_log,0x10,"Failed to read notification name from XPC message.");
      }
      else {
        uVar4 = _objc_alloc(&_OBJC_CLASS___NSString);
        uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"initWithCString:encoding:",lVar3,4);
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar4);
      }
      goto LAB_0017399c;
    }
    pvVar2 = (void *)_xpc_copy_description(param_2);
  }
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar4 = 0;
    __os_log_internal(0,_md_log_log,0x10,"Unexpected XPC event: %s",pvVar2);
    _free(pvVar2);
  }
LAB_0017399c:
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  return;
}

