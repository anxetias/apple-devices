// rea decompile_all
// name: _AMAuthInstallBundlePersonalizeWithRecoveryOS
// address: 0x28ad70
// body: available
// range: 0x28ad70-0x28b0ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBundlePersonalizeWithRecoveryOS
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
              undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *pcVar11;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  
  local_60 = 0;
  local_40 = 0;
  if (param_1 == 0) {
    iVar5 = 1;
  }
  else {
    local_58 = param_5;
    iVar5 = __AMAuthInstallGeneratePersonalizationEntries
                      (param_1,param_2,param_4,param_5,param_6,&local_60,0);
    if (iVar5 == 0) {
      local_50 = param_6;
      cVar3 = __AMAuthInstallBundleShouldPersonalizeOS(param_1,param_2,param_4,&local_40);
      if (local_40 == 0) {
        if ((local_58 == 0) ||
           (__AMAuthInstallBundleShouldPersonalizeOS(param_1,local_58,local_50,&local_40),
           local_40 == 0)) {
          lVar8 = local_40;
          uVar6 = _CFGetAllocator(param_1);
          puVar1 = PTR__kCFTypeArrayCallBacks_004411a8;
          local_38 = _CFArrayCreateMutable(uVar6,0,PTR__kCFTypeArrayCallBacks_004411a8);
          uVar6 = _CFGetAllocator(param_1);
          lVar7 = _CFArrayCreateMutable(uVar6,0,puVar1);
          if (*(long *)(param_1 + 0x30) != 0) {
            _AMAuthInstallBasebandPersonalizationEnabled(param_1);
          }
          cVar4 = _AMAuthInstallApPersonalizationEnabled(param_1);
          lVar2 = local_38;
          if (cVar4 == '\0') {
            _CFArrayAppendValue(local_38,&cf_RestoreRamDisk);
            _CFArrayAppendValue(local_38,&cf_OSRamdisk);
            _CFArrayAppendValue(local_38,&cf_KernelCache);
            if (cVar3 == '\0') {
              _CFArrayAppendValue(local_38,&cf_OS);
            }
            _CFArrayAppendValue(lVar7,&cf_BuildManifest_plist);
            _CFArrayAppendValue(lVar7,&cf_Restore_plist);
            pcVar11 = &cf_Firmware_all_flash;
            pcVar10 = &cf_Firmware_dfu;
            local_44 = 0;
          }
          else {
            _CFArrayAppendValue(local_38,&cf_OS);
            cVar3 = _AMAuthInstallApIsImg4(param_1);
            local_44 = (undefined4)CONCAT71((int7)((ulong)lVar8 >> 8),1);
            if (cVar3 == '\0') {
              _CFArrayAppendValue(lVar2,&cf_Diags);
            }
            pcVar10 = &cf_BuildManifest_plist;
            pcVar11 = &cf_Restore_plist;
          }
          _CFArrayAppendValue(lVar7,pcVar10);
          _CFArrayAppendValue(lVar7,pcVar11);
          _CFArrayAppendValue(lVar7,&cf_Firmware_device_map_txt);
          _CFArrayAppendValue(lVar7,&cf_Firmware_device_map_plist);
          _CFArrayAppendValue(lVar7,&cf_Firmware_SE);
          if (local_58 != 0) {
            cVar3 = _AMAuthInstallBundleShouldPersonalizeOSImage
                              (param_1,local_58,local_50,&local_40);
            if (cVar3 == '\0') {
              _CFArrayAppendValue(local_38,&cf_RecoveryOSOS);
            }
            if (local_40 != 0) {
              _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizeWithRecoveryOS",
                                "failed to inspect the OS image entry %@");
              iVar5 = _CFErrorGetCode(local_40);
              lVar8 = local_38;
              goto LAB_0028ae16;
            }
          }
          lVar8 = local_38;
          iVar5 = 2;
          if ((local_38 != 0) && (iVar5 = 2, lVar7 != 0)) {
            iVar5 = _AMAuthInstallBundlePersonalizePartialWithRecoveryOS
                              (param_1,param_2,param_3,param_4,local_58,local_50,local_60,local_38,
                               lVar7,(undefined1)local_44);
          }
          goto LAB_0028ae16;
        }
        pcVar9 = "failed to inspect the recovery OS image entry %@";
      }
      else {
        pcVar9 = "failed to inspect the OS image entry %@";
      }
      _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizeWithRecoveryOS",pcVar9);
      iVar5 = _CFErrorGetCode(local_40);
    }
    else {
      _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizeWithRecoveryOS",
                        "failed to generate personalization entries");
    }
  }
  lVar7 = 0;
  lVar8 = 0;
LAB_0028ae16:
  _SafeRelease(local_60);
  _SafeRelease(lVar8);
  _SafeRelease(lVar7);
  _SafeRelease(local_40);
  return iVar5;
}

