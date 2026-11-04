// rea decompile_all
// name: _AMAuthInstallPreferencesCopyStringValue
// address: 0x1b3a20
// body: available
// range: 0x1b3a20-0x1b3ab5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMAuthInstallPreferencesCopyStringValue(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = _CFPreferencesCopyAppValue
                      (param_1,*(undefined8 *)PTR__kCFPreferencesCurrentApplication_00441170);
    if (lVar1 != 0) goto LAB_001b3a89;
    lVar1 = _CFPreferencesCopyAppValue(param_1,&cf_com_apple_libauthinstall);
  }
  if (param_2 != 0 && lVar1 == 0) {
    lVar1 = _CFPreferencesCopyAppValue(param_2,&cf_com_apple_libauthinstall);
  }
  if (lVar1 == 0) {
    return 0;
  }
LAB_001b3a89:
  lVar2 = _CFGetTypeID(lVar1);
  lVar3 = _CFStringGetTypeID();
  if (lVar2 != lVar3) {
    _CFRelease(lVar1);
    return 0;
  }
  return lVar1;
}

