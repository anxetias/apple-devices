// rea decompile_all
// name: __copyRestoreOptionOrPreferences
// address: 0xc9b1c
// body: available
// range: 0xc9b1c-0xc9b54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xc9b38 to 0x2a97b6 _CFRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xc9b50 to 0x2a970e _CFPreferencesCopyAppValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __copyRestoreOptionOrPreferences(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = _CFDictionaryGetValue();
  if (lVar1 != 0) {
    _CFRetain(lVar1);
    return;
  }
  _CFPreferencesCopyAppValue(param_2,*(undefined8 *)PTR__kCFPreferencesCurrentApplication_00441170);
  return;
}

