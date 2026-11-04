// rea decompile_all
// name: _AMAuthInstallBundleCopyPersonalizediBootFirmwareURLs
// address: 0x28cf34
// body: available
// range: 0x28cf34-0x28d02b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBundleCopyPersonalizediBootFirmwareURLs
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined8 local_38;
  
  local_38 = 0;
  iVar1 = _AMAuthInstallBundleCopyPersonalizedURLsMatchingType();
  if ((iVar1 == 0) &&
     (iVar1 = _AMAuthInstallBundleCopyPersonalizedURLsMatchingType
                        (param_1,param_2,param_3,&cf_IsLoadedByiBootStage1,&local_38), iVar1 == 0))
  {
    lVar2 = _CFDictionaryGetCount(local_38);
    pvVar3 = _malloc(lVar2 * 8);
    iVar1 = 0;
    _CFDictionaryGetKeysAndValues(local_38,pvVar3,0);
    if (lVar2 < 1) {
      if (pvVar3 == (void *)0x0) goto LAB_0028cf8b;
    }
    else {
      lVar4 = 0;
      do {
        _CFDictionaryRemoveValue(0,*(undefined8 *)((long)pvVar3 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
    }
    _free(pvVar3);
  }
  else {
    _AMAuthInstallLog(3,"AMAuthInstallBundleCopyPersonalizediBootFirmwareURLs",
                      "AMAuthInstallBundleCopyPersonalizedURLsMatchingType failed %d",iVar1);
  }
LAB_0028cf8b:
  _CFRelease(local_38);
  *param_4 = 0;
  return iVar1;
}

