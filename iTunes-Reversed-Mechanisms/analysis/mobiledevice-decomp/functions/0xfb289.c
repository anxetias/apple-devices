// rea decompile_all
// name: __AMRAuthInstallCopyOptionOrPreference
// address: 0xfb289
// body: available
// range: 0xfb289-0xfb371 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfb2e8 to 0x2a97b6 _CFRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMRAuthInstallCopyOptionOrPreference
               (long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  if (((param_1 != 0) && (lVar1 = _CFDictionaryGetValue(param_1,param_3), lVar1 != 0)) &&
     (lVar2 = _CFGetTypeID(lVar1), lVar2 == param_4)) {
    if (param_2 != 0) {
      _AMRLog(6,&cf_Notusingpreferencesvaluefor___Found__inoptions_,param_3,lVar1);
    }
    lVar1 = _CFRetain(lVar1);
    return lVar1;
  }
  lVar1 = _CFPreferencesCopyAppValue
                    (param_3,*(undefined8 *)PTR__kCFPreferencesCurrentApplication_00441170);
  if (lVar1 != 0) {
    lVar2 = _CFGetTypeID(lVar1);
    if (lVar2 == param_4) {
      if (param_2 == 0) {
        return lVar1;
      }
      _AMRLog(6,&cf_Settingpreferencesvaluefor__to__,param_3,lVar1);
      _CFDictionarySetValue(param_2,param_3,lVar1);
      return lVar1;
    }
    _AMRLog(3,&cf_Mistypedpreferencesvaluefor___expected_lu_,param_3,param_4);
    _CFRelease(lVar1);
  }
  return 0;
}

