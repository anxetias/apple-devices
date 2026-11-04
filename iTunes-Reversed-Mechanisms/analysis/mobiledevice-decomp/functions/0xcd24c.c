// rea decompile_all
// name: _AMRestoreModeDeviceCopyProductionMode
// address: 0xcd24c
// body: available
// range: 0xcd24c-0xcd29d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xcd292 to 0x2a97b6 _CFRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRestoreModeDeviceCopyProductionMode(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0xf8) != 0) {
    lVar1 = _CFDictionaryGetValue(*(long *)(param_1 + 0xf8),&cf_ProductionMode);
    if (lVar1 != 0) {
      lVar2 = _CFGetTypeID(lVar1);
      lVar3 = _CFBooleanGetTypeID();
      if (lVar2 == lVar3) {
        uVar4 = _CFRetain(lVar1);
        return uVar4;
      }
    }
  }
  return 0;
}

