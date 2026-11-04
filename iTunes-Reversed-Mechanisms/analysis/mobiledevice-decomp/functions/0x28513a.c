// rea decompile_all
// name: _AMAuthInstallBundleCopyFullPathForBuildIdentityKey
// address: 0x28513a
// body: available
// range: 0x28513a-0x285255 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBundleCopyFullPathForBuildIdentityKey
              (long param_1,long param_2,undefined8 param_3,long param_4,undefined8 *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_38;
  
  local_38 = 0;
  iVar1 = 1;
  lVar2 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_00285212;
  lVar2 = _CFDictionaryGetValue(**(undefined8 **)(param_1 + 0x80),param_3);
  local_38 = lVar2;
  if (lVar2 == 0) {
    if (param_4 == 0) {
      lVar2 = 0;
      goto LAB_00285212;
    }
    lVar2 = __GetRelativePathForEntry(param_4);
    if (lVar2 == 0) {
      _AMAuthInstallLog(3,"AMAuthInstallBundleCopyFullPathForBuildIdentityKey","%@ key not found.",
                        param_3);
      lVar2 = 0;
      goto LAB_00285212;
    }
    uVar3 = _CFGetAllocator(param_1);
    iVar1 = _AMAuthInstallPlatformCopyURLWithAppendedComponent(uVar3,param_2,lVar2,0,&local_38);
    lVar2 = local_38;
    if (iVar1 != 0) goto LAB_00285212;
  }
  else {
    _CFRetain(lVar2);
    _AMAuthInstallLog(8,"AMAuthInstallBundleCopyFullPathForBuildIdentityKey",
                      "using override: %@ = %@",param_3,lVar2);
  }
  uVar3 = _CFRetain(lVar2);
  *param_5 = uVar3;
  iVar1 = 0;
  lVar2 = local_38;
LAB_00285212:
  _SafeRelease(lVar2);
  return iVar1;
}

