// rea decompile_all
// name: __AMAuthInstallBundleInstallPersonalizedBasebandFirmware
// address: 0x285256
// body: available
// range: 0x285256-0x28557b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMAuthInstallBundleInstallPersonalizedBasebandFirmware
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_78 = 0;
  local_40 = 0;
  local_38 = 0;
  local_70 = param_6;
  local_68 = param_3;
  local_60 = param_5;
  lVar2 = _CFDictionaryGetValue(**(undefined8 **)(param_1 + 0x80),&cf_VinylFirmware);
  local_48 = lVar2;
  if (lVar2 == 0) {
    lVar2 = _CFDictionaryGetValue(param_4,&cf_eUICC_Main);
    lVar4 = _CFDictionaryGetValue(param_4,&cf_eUICC_Gold);
    if (lVar4 != 0 && lVar2 != 0) {
      local_50 = param_2;
      lVar3 = __GetRelativePathForEntry(lVar2);
      lVar4 = __GetRelativePathForEntry(lVar4);
      lVar2 = 0;
      local_58 = lVar3;
      lVar3 = _CFStringCompare(lVar3,lVar4,0);
      iVar1 = 1;
      if (lVar3 != 0) goto LAB_002854a8;
      if (local_58 == 0 || lVar4 == 0) {
        _AMAuthInstallLog(3,"_AMAuthInstallBundleInstallPersonalizedBasebandFirmware",
                          "%@ OR %@ key not found, but that\'s okay. Moving along...",&cf_eUICC_Main
                          ,&cf_eUICC_Gold);
        param_2 = local_50;
      }
      else {
        uVar5 = _CFGetAllocator(param_1);
        lVar2 = 0;
        iVar1 = _AMAuthInstallPlatformCopyURLWithAppendedComponent
                          (uVar5,local_60,local_58,0,&local_48);
        param_2 = local_50;
        if (iVar1 != 0) goto LAB_002854a8;
      }
    }
  }
  else {
    _CFRetain(lVar2);
    _AMAuthInstallLog(8,"_AMAuthInstallBundleInstallPersonalizedBasebandFirmware",
                      "using vinyl firmware override: %@ = %@",&cf_VinylFirmware,lVar2);
  }
  lVar2 = _CFDictionaryGetValue(**(undefined8 **)(param_1 + 0x80),&cf_BasebandFirmware);
  local_40 = lVar2;
  if (lVar2 == 0) {
    lVar4 = __GetRelativePathForEntry(param_2);
    if (lVar4 == 0) {
      lVar2 = 0;
      _AMAuthInstallLog(3,"_AMAuthInstallBundleInstallPersonalizedBasebandFirmware",
                        "%@ key not found.",&cf_BasebandFirmware);
      iVar1 = 1;
      goto LAB_002854a8;
    }
    uVar5 = _CFGetAllocator(param_1);
    lVar2 = 0;
    iVar1 = _AMAuthInstallPlatformCopyURLWithAppendedComponent(uVar5,local_60,lVar4,0,&local_40);
    if (iVar1 != 0) goto LAB_002854a8;
  }
  else {
    _CFRetain(lVar2);
    param_2 = 0;
    _AMAuthInstallLog(8,"_AMAuthInstallBundleInstallPersonalizedBasebandFirmware",
                      "using baseband firmware override: %@ = %@",&cf_BasebandFirmware,lVar2);
  }
  iVar1 = _AMAuthInstallBundleCopyNextBasebandComponentName(param_1,&local_78);
  lVar2 = local_78;
  if (iVar1 != 0) goto LAB_002854a8;
  if (local_78 == 0) {
    lVar2 = 0;
    _AMAuthInstallLog(4,"_AMAuthInstallBundleInstallPersonalizedBasebandFirmware",
                      "server provided unneeded baseband data; ignoring it");
  }
  else {
    uVar5 = _CFGetAllocator(param_1);
    iVar1 = _AMAuthInstallPlatformCopyURLWithAppendedComponent(uVar5,local_70,lVar2,0,&local_38);
    if (iVar1 != 0) goto LAB_002854a8;
    iVar1 = _AMAuthInstallPlatformMakeDirectoryForURL(local_38);
    if (iVar1 != 0) {
      _AMAuthInstallLog(3,"_AMAuthInstallBundleInstallPersonalizedBasebandFirmware",
                        "failed to create output directory");
      goto LAB_002854a8;
    }
    iVar1 = _AMAuthInstallBasebandPersonalizeFirmwareInternal
                      (param_1,local_40,local_48,local_38,param_2,local_68,param_8);
    if (iVar1 != 0) goto LAB_002854a8;
    _CFArrayAppendValue(param_7,lVar2);
  }
  iVar1 = 0;
LAB_002854a8:
  _SafeRelease(lVar2);
  _SafeRelease(local_40);
  _SafeRelease(local_38);
  _SafeRelease(local_48);
  return iVar1;
}

