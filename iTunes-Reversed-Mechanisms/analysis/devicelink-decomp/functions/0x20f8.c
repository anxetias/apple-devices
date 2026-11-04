// rea decompile_all
// name: __DLCallHistoryMain
// address: 0x20f8
// body: available
// range: 0x20f8-0x214b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2136 to 0xecff _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2142 to 0x5b22 __DLCallHistoryAddEntry (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __DLCallHistoryMain(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    __DLCallHistoryAddEntry(param_1);
    return;
  }
  lVar1 = _CFStringCreateWithFormat(0,0,&cf______,param_1,param_2);
  __DLCallHistoryAddEntry(lVar1);
  if (lVar1 != param_1) {
    _CFRelease(lVar1);
    return;
  }
  return;
}

