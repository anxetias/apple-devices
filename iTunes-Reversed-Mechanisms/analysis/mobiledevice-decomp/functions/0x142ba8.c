// rea decompile_all
// name: ___60-[MDRemotePairingBrowser_initWithNotificationRef:withError:]_block_invoke.318
// address: 0x142ba8
// body: available
// range: 0x142ba8-0x142c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x142c5d to 0x2aa236 _dispatch_group_leave (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___60__MDRemotePairingBrowser_initWithNotificationRef_withError___block_invoke_318
               (long param_1,undefined8 param_2)

{
  dispatch_group_t group;
  long lVar1;
  
  group = (dispatch_group_t)_objc_loadWeak(param_1 + 0x20);
  if (group != (dispatch_group_t)0x0) {
    lVar1 = _objc_loadWeak(param_1 + 0x28);
    if (lVar1 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,2,"Browser unavailable.");
    }
    else {
      (*(code *)PTR__objc_msgSend_00441098)(lVar1,"rpBrowserCancelledWithError:",param_2);
    }
    _dispatch_group_leave(group);
    return;
  }
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,2,"Dispatch group unavailable.");
  return;
}

