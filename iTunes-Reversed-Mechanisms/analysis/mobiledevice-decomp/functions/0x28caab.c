// rea decompile_all
// name: _AMAuthInstallBundleProcessRulesWithEntryDict
// address: 0x28caab
// body: available
// range: 0x28caab-0x28cb0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x28cb01 to 0x28cb0b _AMAuthInstallBundleProcessRules (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallBundleProcessRulesWithEntryDict(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_20;
  
  uStack_20 = 1;
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar1 = _CFDictionaryGetValue(param_2,&cf_Info);
    if (lVar1 == 0) {
      uStack_20 = 7;
    }
    else {
      lVar1 = _CFDictionaryGetValue(lVar1,&cf_RestoreRequestRules);
      uStack_20 = 0;
      if (lVar1 != 0) {
        uVar2 = _AMAuthInstallBundleProcessRules(param_1,lVar1,param_2);
        return uVar2;
      }
    }
  }
  return uStack_20;
}

