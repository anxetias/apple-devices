// rea decompile_all
// name: _AMAuthInstallApImg3ServerRequestAddRequiredTags
// address: 0x276ab7
// body: available
// range: 0x276ab7-0x276c63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApImg3ServerRequestAddRequiredTags
              (long param_1,long param_2,char param_3,char param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long local_38;
  
  iVar5 = 1;
  if (((param_1 != 0) && (param_2 != 0)) &&
     (plVar2 = *(long **)(param_1 + 0x10), plVar2 != (long *)0x0)) {
    local_38 = param_2;
    if (*plVar2 != 0) {
      __CFDictionarySetInteger64(param_2,&cf_ApECID);
      plVar2 = *(long **)(param_1 + 0x10);
    }
    __CFDictionarySetInteger32(param_2,&cf_ApChipID,(int)plVar2[1]);
    __CFDictionarySetInteger32
              (param_2,&cf_ApBoardID,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0xc));
    lVar3 = *(long *)(param_1 + 0x10);
    if (*(char *)(lVar3 + 0x74) == '\0') {
      __CFDictionarySetBoolean(param_2,&cf_ApProductionMode,*(undefined1 *)(lVar3 + 0x14));
      lVar3 = *(long *)(param_1 + 0x10);
    }
    __CFDictionarySetInteger32(param_2,&cf_ApSecurityDomain,*(undefined4 *)(lVar3 + 0x10));
    if (param_3 != '\0') {
      uVar4 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
      _CFDictionarySetValue(param_2,&cf__APTicket,uVar4);
      lVar3 = *(long *)(param_1 + 0x10);
      if ((*(long *)(lVar3 + 0x18) != 0) && (*(char *)(lVar3 + 0x74) == '\0')) {
        _CFDictionarySetValue(param_2,&cf_ApNonce);
        lVar3 = *(long *)(param_1 + 0x10);
      }
      if (*(char *)(lVar3 + 0x40) != '\0') {
        _CFDictionarySetValue(param_2,&cf_ApRelaxedImageVerification,uVar4);
      }
    }
    iVar5 = 0;
    if (param_4 == '\0' && *(long *)(param_1 + 0x1a8) != 0) {
      lVar3 = _CFDictionaryGetValue(*(long *)(param_1 + 0x1a8),&cf_ApRequestEntries);
      if (lVar3 != 0) {
        uVar4 = _CFGetAllocator(param_1);
        iVar1 = _AMAuthInstallSupportApplyDictionaryOverrides(uVar4,lVar3,&local_38,0);
        iVar5 = 0;
        if (iVar1 != 0) {
          _AMAuthInstallLog(3,"AMAuthInstallApImg3ServerRequestAddRequiredTags",
                            "failed to set Ap entitlements");
          iVar5 = iVar1;
        }
      }
    }
  }
  return iVar5;
}

