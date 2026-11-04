// rea decompile_all
// name: __CreateRelativePathForManifestEntry
// address: 0x28baca
// body: available
// range: 0x28baca-0x28bbcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__CreateRelativePathForManifestEntry
          (long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  undefined8 local_30;
  
  local_30 = 0;
  uVar2 = 0;
  if (((param_1 != 0) && (param_3 != 0)) && (param_5 != 0)) {
    iVar1 = _AMAuthInstallBundleCopyReceiptCreateIfNecessary(param_1,param_3,&local_30);
    if (iVar1 == 0) {
      uVar2 = _CFGetAllocator(param_1);
      pcVar5 = &cf_PersonalizedPath;
      lVar3 = _AMAuthInstallSupportGetValueForKeyWithFormat
                        (uVar2,local_30,&cf____________,&cf_Manifest,param_5,&cf_Info,
                         &cf_PersonalizedPath);
      if (lVar3 == 0) {
        uVar4 = _CFGetAllocator(param_1);
        uVar2 = 0;
        lVar3 = _AMAuthInstallSupportGetValueForKeyWithFormat
                          (uVar4,param_4,&cf_________,param_5,&cf_Info,&cf_Path,pcVar5);
        if (lVar3 == 0) goto LAB_0028bb9a;
      }
      uVar2 = _CFRetain(lVar3);
    }
    else {
      uVar2 = 0;
      _AMAuthInstallLog(3,"_CreateRelativePathForManifestEntry","failed to create receipt dict");
    }
  }
LAB_0028bb9a:
  _SafeRelease(local_30);
  return uVar2;
}

