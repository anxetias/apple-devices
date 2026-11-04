// rea decompile_all
// name: ___doSRPPair_block_invoke
// address: 0x175592
// body: available
// range: 0x175592-0x17571c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1756d0 to 0x2aa272 _dispatch_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___doSRPPair_block_invoke(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,1,"SRP completion.");
  if (param_2 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar4 = 1;
    __os_log_internal(0,_md_log_log,1,"SRP_SUCCEED");
  }
  else {
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_2,"code");
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar1 = _md_log_log;
    if (lVar3 == -0x1a35) {
      __os_log_internal(0,_md_log_log,0x10,"SRP_RESET");
      uVar4 = 2;
    }
    else {
      uVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_2,"code");
      uVar4 = 0;
      __os_log_internal(0,uVar1,0x10,"SRP_FAIL (%d)",uVar2);
    }
  }
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar4;
  _dispatch_semaphore_signal
            (*(dispatch_semaphore_t *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  _dispatch_release(*(dispatch_object_t *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}

