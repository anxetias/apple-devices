// rea decompile_all
// name: _AMAuthInstallProvisioningSendRequest
// address: 0x29a2cf
// body: available
// range: 0x29a2cf-0x29a3ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallProvisioningSendRequest(long param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  
  lVar3 = 0;
  iVar1 = 1;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (long *)0x0)) {
    uVar2 = _CFGetAllocator();
    lVar3 = _CFDictionaryCreateMutable
                      (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar3 == 0) {
      iVar1 = 2;
      lVar3 = 0;
    }
    else {
      iVar1 = _AMAuthInstallProvisioningPopulateRequestDict(param_1,lVar3,param_2);
      if (iVar1 == 0) {
        uVar2 = _CFGetAllocator(param_1);
        iVar1 = _AMAuthInstallProvisioningServerSendSyncRequest
                          (uVar2,*(undefined8 *)(param_1 + 0x128),lVar3,param_3);
        if (iVar1 == 0) {
          if (*param_3 != 0) {
            _SafeRelease(*(undefined8 *)(param_1 + 0x138));
            uVar2 = _CFRetain(*param_3);
            *(undefined8 *)(param_1 + 0x138) = uVar2;
            iVar1 = 0;
            goto LAB_0029a38a;
          }
          pcVar4 = "*outResponseDict is NULL";
          iVar1 = 0;
        }
        else {
          pcVar4 = "AMAuthInstallProvisioningServerSendSyncRequest failed";
        }
      }
      else {
        pcVar4 = "AMAuthInstallProvisioningPopulateRequestDict failed";
      }
      _AMAuthInstallLog(3,"AMAuthInstallProvisioningSendRequest",pcVar4);
    }
  }
LAB_0029a38a:
  _SafeRelease(lVar3);
  return iVar1;
}

