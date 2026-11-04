// rea decompile_all
// name: _MDRemoteServiceDeviceProviderCopyRemoteDevice
// address: 0x1713d1
// body: available
// range: 0x1713d1-0x171487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x171405 to 0x60aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _MDRemoteServiceDeviceProviderCopyRemoteDevice(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar3 = "Invalid input.";
  }
  else {
    cVar1 = (*(code *)PTR__objc_msgSend_00441098)
                      (param_1,"respondsToSelector:","copyMDRemoteServiceDevice");
    if (cVar1 != '\0') {
      uVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"copyMDRemoteServiceDevice");
      return uVar2;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar3 = "Input does not conform to protocol.";
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar3);
  return 0;
}

