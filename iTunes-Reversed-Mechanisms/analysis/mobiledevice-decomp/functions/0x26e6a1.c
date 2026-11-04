// rea decompile_all
// name: _AMRAuthInstallCopyBuildIdentity
// address: 0x26e6a1
// body: available
// range: 0x26e6a1-0x26e792 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_AMRAuthInstallCopyBuildIdentity(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 == 0) {
    return 1;
  }
  if (param_4 == (long *)0x0) {
    return 1;
  }
  lVar3 = _CFDictionaryGetValue(param_2,&cf_RestoreBundlePath);
  if (lVar3 == 0) {
    _AMRLog(3,&cf_kAMRestoreOptionsRestoreBundlePathnotfoundinoptionsdictionary);
    return 1;
  }
  uVar4 = _CFGetAllocator(param_1);
  lVar5 = _CFURLCreateWithFileSystemPath(uVar4,lVar3,0,1);
  if (lVar5 == 0) {
    _AMRLog(3,&cf_failedtocreatebundleURLfrom____,lVar3);
    return 0x12;
  }
  iVar1 = _AMAuthInstallBundleCopyBuildIdentityForVariant(param_1,lVar5,param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (*param_4 != 0) goto LAB_0026e724;
    uVar2 = 0xbc6;
    pcVar6 = &cf_AMAuthInstallBundleCopyBuildIdentityForVariantfailedtocreatebuildIdentity;
  }
  else {
    uVar2 = _AMAuthInstallToRestoreError(iVar1);
    pcVar6 = &cf_AMAuthInstallBundleCopyBuildIdentityForVariantfailed;
  }
  _AMRLog(3,pcVar6);
LAB_0026e724:
  _CFRelease(lVar5);
  return uVar2;
}

