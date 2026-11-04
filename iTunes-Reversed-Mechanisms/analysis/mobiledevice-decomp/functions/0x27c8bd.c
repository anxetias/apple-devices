// rea decompile_all
// name: _AMAuthInstallBasebandLocalSigningEnabled
// address: 0x27c8bd
// body: available
// range: 0x27c8bd-0x27c966 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallBasebandLocalSigningEnabled(long param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 uVar4;
  char local_2a;
  undefined1 local_29;
  
  if (((param_1 != 0) && (param_2 != (undefined1 *)0x0)) && (*(long *)(param_1 + 0x30) != 0)) {
    iVar2 = _AMAuthInstallBasebandSupportsServerSigning(param_1,&local_2a);
    if (iVar2 == 0) {
      cVar1 = _AMAuthInstallPreferencesGetBooleanValue(&cf_AuthInstallEnableLocalSigning,0,0);
      if (((local_2a != '\0') && (uVar4 = 0, cVar1 != '\x01')) ||
         (iVar2 = _AMAuthInstallBasebandSupportsLocalSigning(param_1,&local_29), uVar4 = local_29,
         iVar2 == 0)) {
        *param_2 = uVar4;
        return 0;
      }
      pcVar3 = "failed to query is local signing is supported.";
    }
    else {
      pcVar3 = "failed to query is server signing is supported.";
    }
    _AMAuthInstallLog(3,"AMAuthInstallBasebandLocalSigningEnabled",pcVar3);
  }
  return 1;
}

