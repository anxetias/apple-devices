// rea decompile_all
// name: ___MDRSSRegisterForCallbacks_block_invoke_2
// address: 0x13d528
// body: available
// range: 0x13d528-0x13d62e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x13d56c to 0x13d41e _MDRSSRegisterForCallbacks (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___MDRSSRegisterForCallbacks_block_invoke_2(long param_1,long param_2,char param_3)

{
  uint uVar1;
  
  if (param_2 != 0) {
    if (param_3 == '\0') {
      uVar1 = _remote_device_get_type(param_2);
      if ((uVar1 < 0xc) && ((0xb20U >> (uVar1 & 0x1f) & 1) != 0)) {
        _remote_device_set_connected_callback(param_2,_gRSDEventQueue);
        _remote_device_set_disconnected_callback(param_2,_gRSDEventQueue);
        (*(code *)PTR__objc_msgSend_00441098)(_gRemoteDevices,"addObject:",param_2);
      }
    }
    else if (_gRSDBrowserKeepAlive == '\x01') {
      _MDRSSRegisterForCallbacks(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      return;
    }
  }
  return;
}

