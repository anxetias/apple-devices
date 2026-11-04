// rea decompile_all
// name: __AMRestorableDeviceLogStateChange
// address: 0x158a3c
// body: available
// range: 0x158a3c-0x158ac2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x158a93 to 0xdf44a _AMRLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x158abe to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestorableDeviceLogStateChange(long param_1,char param_2)

{
  int iVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  
  if (param_1 != 0) {
    iVar1 = __AMDeviceProxyGetState();
    if (iVar1 - 1U < 6) {
      pcVar3 = *(cfstringStruct **)(&DAT_0044a380 + (ulong)(iVar1 - 1U) * 8);
    }
    else {
      pcVar3 = &cf_Unknown;
    }
    pcVar2 = &cf_disconnected;
    if (param_2 != '\0') {
      pcVar2 = &cf_connected;
    }
    _AMRLog(5,&cf___modedevice__,pcVar3,pcVar2);
    return;
  }
  _AMRSafeLog(5,&cf___,&cf_Can_tlogstatechangeonNULLproxy);
  _CFRelease(&cf_Can_tlogstatechangeonNULLproxy);
  return;
}

