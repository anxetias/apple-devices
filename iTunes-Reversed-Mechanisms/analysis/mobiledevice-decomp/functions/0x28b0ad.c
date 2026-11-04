// rea decompile_all
// name: _AMAuthInstallBundlePersonalizeRecoveryOS
// address: 0x28b0ad
// body: available
// range: 0x28b0ad-0x28b313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_AMAuthInstallBundlePersonalizeRecoveryOS
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  long local_38;
  
  local_38 = 0;
  lVar5 = 0;
  uVar3 = 1;
  if (param_1 != 0) {
    lVar7 = 0;
    if (param_2 == 0) goto LAB_0028b2e9;
    __AMAuthInstallBundleShouldPersonalizeOS(param_1,param_2,param_4,&local_38);
    if (local_38 == 0) {
      uVar4 = _CFGetAllocator(param_1);
      puVar1 = PTR__kCFTypeArrayCallBacks_004411a8;
      lVar5 = _CFArrayCreateMutable(uVar4,0,PTR__kCFTypeArrayCallBacks_004411a8);
      uVar4 = _CFGetAllocator(param_1);
      lVar7 = _CFArrayCreateMutable(uVar4,0,puVar1);
      cVar2 = _AMAuthInstallApPersonalizationEnabled(param_1);
      if (cVar2 == '\0') {
        _CFArrayAppendValue(lVar5,&cf_RestoreRamDisk);
        _CFArrayAppendValue(lVar5,&cf_OSRamdisk);
        _CFArrayAppendValue(lVar5,&cf_KernelCache);
        _CFArrayAppendValue(lVar5,&cf_OS);
        _CFArrayAppendValue(lVar7,&cf_BuildManifest_plist);
        _CFArrayAppendValue(lVar7,&cf_Restore_plist);
        pcVar6 = &cf_Firmware_all_flash;
        pcVar8 = &cf_Firmware_dfu;
      }
      else {
        _CFArrayAppendValue(lVar5,&cf_OS);
        cVar2 = _AMAuthInstallApIsImg4(param_1);
        pcVar6 = &cf_Restore_plist;
        pcVar8 = &cf_BuildManifest_plist;
        if (cVar2 == '\0') {
          _CFArrayAppendValue(lVar5,&cf_Diags);
        }
      }
      _CFArrayAppendValue(lVar7,pcVar8);
      _CFArrayAppendValue(lVar7,pcVar6);
      _CFArrayAppendValue(lVar7,&cf_Firmware_device_map_txt);
      _CFArrayAppendValue(lVar7,&cf_Firmware_device_map_plist);
      _CFArrayAppendValue(lVar7,&cf_Firmware_SE);
      cVar2 = _AMAuthInstallBundleShouldPersonalizeOSImage(param_1,param_2,param_4,&local_38);
      if (cVar2 == '\0') {
        _CFArrayAppendValue(lVar5,&cf_RecoveryOSOS);
      }
      if (local_38 == 0) {
        uVar3 = 2;
        if (lVar5 != 0) {
          if (lVar7 != 0) {
            uVar3 = _AMAuthInstallBundlePersonalizePartialRecoveryOS
                              (param_1,param_3,param_2,param_4,lVar5,lVar7,0);
          }
        }
      }
      else {
        _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizeRecoveryOS",
                          "failed to inspect the OS image entry %@");
        uVar3 = _CFErrorGetCode(local_38);
      }
      goto LAB_0028b2e9;
    }
    _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizeRecoveryOS",
                      "failed to inspect the recovery OS image entry %@");
    uVar3 = _CFErrorGetCode(local_38);
  }
  lVar5 = 0;
  lVar7 = 0;
LAB_0028b2e9:
  _SafeRelease(lVar5);
  _SafeRelease(lVar7);
  _SafeRelease(local_38);
  return uVar3;
}

