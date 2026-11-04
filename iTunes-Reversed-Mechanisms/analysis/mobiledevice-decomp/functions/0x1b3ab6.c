// rea decompile_all
// name: _AMAuthInstallPreferencesGetBooleanValue
// address: 0x1b3ab6
// body: available
// range: 0x1b3ab6-0x1b3b49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 _AMAuthInstallPreferencesGetBooleanValue(long param_1,long param_2,char *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  char local_29;
  
  local_29 = '\0';
  if (param_1 == 0) {
    bVar2 = true;
    uVar1 = 0;
  }
  else {
    uVar1 = _CFPreferencesGetAppBooleanValue
                      (param_1,*(undefined8 *)PTR__kCFPreferencesCurrentApplication_00441170,
                       &local_29);
    if (local_29 != '\0') goto LAB_001b3b30;
    uVar1 = _CFPreferencesGetAppBooleanValue(param_1,&cf_com_apple_libauthinstall,&local_29);
    bVar2 = local_29 == '\0';
  }
  if ((param_2 != 0) && (bVar2)) {
    uVar1 = _CFPreferencesGetAppBooleanValue(param_2,&cf_com_apple_libauthinstall,&local_29);
  }
LAB_001b3b30:
  if (param_3 != (char *)0x0) {
    *param_3 = local_29;
  }
  return uVar1;
}

