// rea decompile_all
// name: _AMAuthInstallProvisioningRequestManifest
// address: 0x29a5f1
// body: available
// range: 0x29a5f1-0x29a6bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallProvisioningRequestManifest(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long local_20;
  
  local_20 = 0;
  iVar1 = 1;
  if ((param_1 == 0) || (param_2 == (long *)0x0)) goto LAB_0029a652;
  if (*(long *)(param_1 + 0x138) == 0) {
    iVar1 = _AMAuthInstallProvisioningSendRequest(param_1,&cf_100,&local_20);
    if (iVar1 == 0) {
      iVar1 = 0;
      goto LAB_0029a62f;
    }
    pcVar3 = "AMAuthInstallProvisioningSendRequest failed";
  }
  else {
    local_20 = _CFRetain(*(long *)(param_1 + 0x138));
    iVar1 = 99;
LAB_0029a62f:
    if (local_20 == 0) {
      pcVar3 = "responseDict is NULL";
    }
    else {
      lVar2 = _CFDictionaryGetValue(local_20,&cf_MANIFESTDATA);
      *param_2 = lVar2;
      if (lVar2 != 0) {
        _CFRetain(lVar2);
        iVar1 = 0;
        goto LAB_0029a652;
      }
      pcVar3 = "*manifestData is NULL";
    }
  }
  _AMAuthInstallLog(3,"AMAuthInstallProvisioningRequestManifest",pcVar3);
LAB_0029a652:
  _SafeRelease(local_20);
  return iVar1;
}

