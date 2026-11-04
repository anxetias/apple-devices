// rea decompile_all
// name: _AMRestoreDeviceGetFwImages
// address: 0xf153c
// body: available
// range: 0xf153c-0xf161c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRestoreDeviceGetFwImages(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = _CFDictionaryGetValue(param_2,&cf_PersonalizedRestoreBundlePath);
  uVar3 = _CFDictionaryGetValue(param_2,&cf_AuthInstallVariant);
  if (lVar2 == 0) {
    uVar5 = 0;
    _AMRLog(3,&cf_kAMRestoreOptionsRestoreBundlePathisNULL);
  }
  else {
    uVar4 = _CFGetAllocator(param_1);
    uVar5 = 0;
    lVar2 = _CFURLCreateWithFileSystemPath(uVar4,lVar2,0,1);
    if (lVar2 == 0) {
      _AMRLog(3,&cf_failedtocreateurlforrestorebundle);
      uVar5 = 0x12;
    }
    else {
      iVar1 = _AMAuthInstallBundleCopyPersonalizedFirmwareImages
                        (*(undefined8 *)(param_1 + 200),lVar2,uVar3,param_3);
      if (iVar1 != 0) {
        _AMRLog(3,&cf_AMAuthInstallBundleCopyPersonalizediBootFirmwareURLsreturned_d,iVar1);
        uVar5 = 6;
      }
      _CFRelease(lVar2);
    }
  }
  return uVar5;
}

