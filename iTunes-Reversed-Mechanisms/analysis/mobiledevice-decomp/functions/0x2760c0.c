// rea decompile_all
// name: _AMAuthInstallApCreateImagePropertiesWithDeviceMapZipped
// address: 0x2760c0
// body: available
// range: 0x2760c0-0x2762db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApCreateImagePropertiesWithDeviceMapZipped
              (long param_1,long param_2,long param_3,char param_4,undefined4 param_5,long *param_6)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_40;
  long local_38;
  
  local_38 = 0;
  local_40 = 0;
  lVar4 = 0;
  iVar2 = 1;
  if (((param_1 != 0) && (param_2 != 0)) && (param_6 != (long *)0x0)) {
    if (param_4 == '\x01' && param_3 != 0) {
      iVar2 = _AMAuthInstallApExtractZippedDeviceMap(param_3,&local_40);
      if (iVar2 != 0) {
        _AMAuthInstallLog(3,"AMAuthInstallApCreateImagePropertiesWithDeviceMapZipped",
                          "failed to extract zipped device map");
        lVar4 = 0;
        goto LAB_0027628d;
      }
    }
    else if (param_3 != 0 && param_4 == '\0') {
      local_40 = _CFRetain(param_3);
    }
    iVar2 = _AMAuthInstallApCreateMeasurementsWithTag
                      (param_1,param_2,0,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x70),0,param_5
                       ,&local_38);
    lVar4 = local_38;
    if (iVar2 == 0) {
      if (local_38 == 0) {
        iVar2 = 0xe;
        lVar4 = 0;
      }
      else {
        iVar2 = _AMAuthInstallApApplyRequestRules(param_1,local_40,param_2,local_38);
        if (iVar2 != 0) {
          _AMAuthInstallLog(4,"AMAuthInstallApCreateImagePropertiesWithDeviceMapZipped",
                            "WARNING: Could not retrieve image properties from devicemap.");
          if (*(char *)(*(long *)(param_1 + 0x10) + 0x98) == '\0') {
            uVar3 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
            _CFDictionarySetValue(local_38,&cf_Trusted,uVar3);
            uVar1 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
            uVar5 = uVar3;
            if (*(char *)(*(long *)(param_1 + 0x10) + 0x14) == '\0') {
              uVar5 = uVar1;
            }
            _CFDictionarySetValue(local_38,&cf_EPRO,uVar5);
            if (*(char *)(*(long *)(param_1 + 0x10) + 0x48) == '\0') {
              uVar3 = uVar1;
            }
            _CFDictionarySetValue(local_38,&cf_ESEC,uVar3);
            _AMAuthInstallLog(4,"AMAuthInstallApCreateImagePropertiesWithDeviceMapZipped",
                              "WARNING: Consider setting alternate device_map, ie in a device-specific SDK path.  Setting default RestoreRequestRules to: %@"
                              ,local_38);
          }
          _AMAuthInstallLog(4,"AMAuthInstallApCreateImagePropertiesWithDeviceMapZipped",
                            "WARNING: Note: This default behavior may change in the future into a hard error."
                           );
        }
        uVar3 = _CFGetAllocator(param_1);
        lVar4 = _CFDictionaryCreateCopy(uVar3,local_38);
        *param_6 = lVar4;
        iVar2 = (uint)(lVar4 == 0) * 2;
        lVar4 = local_38;
      }
    }
  }
LAB_0027628d:
  _SafeRelease(lVar4);
  _SafeRelease(local_40);
  return iVar2;
}

