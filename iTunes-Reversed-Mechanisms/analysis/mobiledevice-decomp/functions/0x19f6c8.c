// rea decompile_all
// name: _AMAuthInstallApplyRequestEntries
// address: 0x19f6c8
// body: available
// range: 0x19f6c8-0x19f7d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19f753 to 0x2a95b2 _CFDictionaryApplyFunction (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x19f7a2 to 0x19f83e _AMAuthInstallSetFDRRequestEntry (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x19f7d1 to 0x273a95 _AMAuthInstallSetRequestEntry (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMAuthInstallApplyRequestEntries(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  cfstringStruct *pcVar5;
  
  lVar2 = _CFStringCompare(param_1,&cf__ApImg4Ticket,0);
  if (lVar2 == 0) {
    lVar2 = _CFDictionaryGetTypeID();
    lVar3 = _CFGetTypeID(param_2);
    if (lVar2 == lVar3) {
      pcVar4 = __AMAuthInstallApplyApRequestEntries;
      goto LAB_0019f745;
    }
  }
  lVar2 = _CFStringCompare(param_1,&cf__BBTicket,0);
  if (lVar2 == 0) {
    lVar2 = _CFDictionaryGetTypeID();
    lVar3 = _CFGetTypeID(param_2);
    if (lVar2 == lVar3) {
      pcVar4 = __AMAuthInstallApplyBbRequestEntries;
LAB_0019f745:
      _CFDictionaryApplyFunction(param_2,pcVar4,param_3);
      return;
    }
  }
  cVar1 = _CFStringHasPrefix(param_1,&cf_Ap);
  if (cVar1 == '\0') {
    cVar1 = _CFStringHasPrefix(param_1,&cf_Bb);
    if (cVar1 == '\0') {
      cVar1 = _CFStringHasPrefix(param_1,&cf_FDR);
      if (cVar1 != '\0') {
        _AMAuthInstallSetFDRRequestEntry(param_3,param_1,param_2);
        return;
      }
      return;
    }
    pcVar5 = &cf_BbRequestEntries;
  }
  else {
    pcVar5 = &cf_ApRequestEntries;
  }
  _AMAuthInstallSetRequestEntry(param_3,pcVar5,param_1,param_2);
  return;
}

