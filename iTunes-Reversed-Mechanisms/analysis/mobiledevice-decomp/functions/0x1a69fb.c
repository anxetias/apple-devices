// rea decompile_all
// name: _AMAuthInstallBundleCopyPublishedVariantsArray
// address: 0x1a69fb
// body: available
// range: 0x1a69fb-0x1a6b39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBundleCopyPublishedVariantsArray
              (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  iVar1 = _AMAuthInstallPlatformCopyURLWithAppendedComponent
                    (param_1,param_2,&cf_BuildManifest_plist,0);
  if (iVar1 == 0) {
    iVar1 = _AMAuthInstallSupportCreateDictionaryFromFileURL(param_1,&local_30,local_38);
    if (iVar1 != 0) {
      _AMAuthInstallLog(3,"AMAuthInstallBundleCopyPublishedVariantsArray",
                        "No build manifest. Checking for a different file.");
      _SafeRelease(local_38);
      local_38 = 0;
      iVar1 = _AMAuthInstallPlatformCopyURLWithAppendedComponent
                        (param_1,param_2,&cf_BuildManifesto_plist,0,&local_38);
      if ((iVar1 != 0) ||
         (iVar1 = _AMAuthInstallSupportCreateDictionaryFromFileURL(param_1,&local_30,local_38),
         iVar1 != 0)) goto LAB_001a6a35;
    }
    lVar2 = _CFDictionaryGetValue(local_30,&cf_BuildIdentities);
    if (lVar2 == 0) {
      _AMAuthInstallLog(3,"AMAuthInstallBundleCopyPublishedVariantsArray",
                        "the specified restore bundle contains a malformed build manifest");
      _AMAuthInstallLog(8,"AMAuthInstallBundleCopyPublishedVariantsArray","bundle: %@",param_2);
      iVar1 = 1;
    }
    else {
      uVar3 = _CFRetain(lVar2);
      *param_3 = uVar3;
      iVar1 = 0;
    }
  }
LAB_001a6a35:
  _SafeRelease(local_38);
  _SafeRelease(local_30);
  return iVar1;
}

