// rea decompile_all
// name: _AMRestoreOptionsAreLegacy
// address: 0xe0685
// body: available
// range: 0xe0685-0xe06ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe06ad to 0x2a94a4 _CFBooleanGetValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMRestoreOptionsAreLegacy(long param_1)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    _AMRLog(3,&cf_Can_tcheckforlegacyoptionsonNULLdictionary);
    bVar3 = true;
  }
  else {
    lVar1 = _CFDictionaryGetValue(param_1,&cf_IsLegacy);
    if (lVar1 != 0) {
      uVar2 = _CFBooleanGetValue(lVar1);
      return uVar2;
    }
    lVar1 = _CFDictionaryGetValue(param_1,&cf_AuthInstallRestoreBehavior);
    if (lVar1 == 0) {
      lVar1 = _CFDictionaryGetValue(param_1,&cf_AuthInstallVariant);
      bVar3 = lVar1 == 0;
    }
    else {
      bVar3 = false;
    }
  }
  return (ulong)bVar3;
}

