// rea decompile_all
// name: __AMAuthInstallGeneratePersonalizationEntries
// address: 0x28a8a6
// body: available
// range: 0x28a8a6-0x28ad6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMAuthInstallGeneratePersonalizationEntries
          (long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
          long *param_6,char param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  bool bVar9;
  long local_40;
  char local_32;
  char local_31;
  
  local_40 = 0;
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 == 0) {
    return 1;
  }
  if (param_6 == (long *)0x0) {
    return 1;
  }
  uVar5 = _CFGetAllocator();
  lVar6 = _CFArrayCreateMutable(uVar5,0,PTR__kCFTypeArrayCallBacks_004411a8);
  if (lVar6 == 0) {
    return 2;
  }
  cVar1 = __AMAuthInstallBundleShouldPersonalizeOS(param_1,param_2,param_3,&local_40);
  if (local_40 != 0) {
    if (param_7 != '\0') {
      _AMAuthInstallLog(3,"_AMAuthInstallGeneratePersonalizationEntries",
                        "OK to skip OS - continuing.");
      _CFRelease(local_40);
      local_40 = 0;
      goto LAB_0028a963;
    }
    pcVar7 = "failed to inspect the OS image entry %@";
LAB_0028ad3c:
    _AMAuthInstallLog(3,"_AMAuthInstallGeneratePersonalizationEntries",pcVar7);
    uVar5 = _CFErrorGetCode(local_40);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    goto LAB_0028ad53;
  }
LAB_0028a963:
  local_31 = cVar1;
  if (param_4 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = __AMAuthInstallBundleShouldPersonalizeOS(param_1,param_4,param_5,&local_40);
    if (local_40 != 0) {
      if (param_7 == '\0') {
        pcVar7 = "failed to inspect the recovery OS image entry %@";
        goto LAB_0028ad3c;
      }
      _AMAuthInstallLog(3,"_AMAuthInstallGeneratePersonalizationEntries",
                        "OK to skip recovery OS - continuing.");
      _CFRelease(local_40);
      local_40 = 0;
    }
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    cVar2 = _AMAuthInstallApPersonalizationEnabled(param_1);
    bVar9 = true;
    if (cVar2 == '\0') {
LAB_0028ad1b:
      _AMAuthInstallLog(5,"_AMAuthInstallGeneratePersonalizationEntries","nothing to personalize");
      goto LAB_0028ad53;
    }
LAB_0028aa31:
    _CFArrayAppendValue(lVar6,&cf_RestoreLogo);
    _CFArrayAppendValue(lVar6,&cf_RestoreDeviceTree);
    _CFArrayAppendValue(lVar6,&cf_RestoreKernelCache);
    _CFArrayAppendValue(lVar6,&cf_RestoreRamDisk);
    _CFArrayAppendValue(lVar6,&cf_OSRamdisk);
    _CFArrayAppendValue(lVar6,&cf_iBEC);
    _CFArrayAppendValue(lVar6,&cf_iBSS);
    _CFArrayAppendValue(lVar6,&cf_KernelCache);
    _CFArrayAppendValue(lVar6,&cf_ftap);
    _CFArrayAppendValue(lVar6,&cf_rfta);
    _CFArrayAppendValue(lVar6,&cf_ftsp);
    _CFArrayAppendValue(lVar6,&cf_rfts);
    _CFArrayAppendValue(lVar6,&cf_Ap_SystemVolumeCanonicalMetadata);
    _CFArrayAppendValue(lVar6,&cf_x86_SystemVolumeCanonicalMetadata);
    _CFArrayAppendValue(lVar6,&cf_BaseSystemVolume);
    _CFArrayAppendValue(lVar6,&cf_x86_BaseSystemVolume);
    _CFArrayAppendValue(lVar6,&cf_SystemVolume);
    _CFArrayAppendValue(lVar6,&cf_x86_SystemVolume);
    _CFArrayAppendValue(lVar6,&cf_Ap_BaseSystemTrustCache);
    cVar2 = _AMAuthInstallApIsImg4(param_1);
    if (cVar2 != '\0') {
      _CFArrayAppendValue(lVar6,&cf_Diags);
      _CFArrayAppendValue(lVar6,&cf_CFELoader);
      _CFArrayAppendValue(lVar6,&cf_RBM);
      _CFArrayAppendValue(lVar6,&cf_PHLEET);
      _CFArrayAppendValue(lVar6,&cf_PERTOS);
      _CFArrayAppendValue(lVar6,&cf_PEHammer);
      _CFArrayAppendValue(lVar6,&cf_Alamo);
    }
    if ((!bVar9) &&
       (_CFArrayAppendValue(lVar6,&cf_BasebandFirmware),
       *(long *)(*(long *)(param_1 + 0x30) + 0xa0) != 0)) {
      local_32 = '\x01';
      iVar4 = _AMAuthInstallVinylIsLegacyChipId(param_1);
      if ((iVar4 == 0) && (local_32 == '\0')) {
        _CFArrayAppendValue(lVar6,&cf_eUICC_Main);
        _CFArrayAppendValue(lVar6,&cf_eUICC_Gold);
      }
    }
    if (local_31 != '\0') {
      _CFArrayAppendValue(lVar6,&cf_OS);
    }
    if (cVar1 == '\0') goto LAB_0028ad53;
    _CFArrayAppendValue(lVar6,&cf_RecoveryOSOS);
    _CFArrayAppendValue(lVar6,&cf_RecoveryOSAppleLogo);
    _CFArrayAppendValue(lVar6,&cf_RecoveryOSDeviceTree);
    _CFArrayAppendValue(lVar6,&cf_RecoveryOSKernelCache);
    _CFArrayAppendValue(lVar6,&cf_RecoveryOSRamDisk);
    _CFArrayAppendValue(lVar6,&cf_RecoveryOSiBEC);
    _CFArrayAppendValue(lVar6,&cf_RecoveryOSiBSS);
    _CFArrayAppendValue(lVar6,&cf_RecoveryOSStaticTrustCache);
    _CFArrayAppendValue(lVar6,&cf_RecoveryOSiBootData);
    _CFArrayAppendValue(lVar6,&cf_RecoveryOSDiags);
    _CFArrayAppendValue(lVar6,&cf_RecoveryOSAp_SystemVolumeCanonicalMetadata);
    _CFArrayAppendValue(lVar6,&cf_RecoveryOSSystemVolume);
    _CFArrayAppendValue(lVar6,&cf_RecoveryOSBaseSystemVolume);
    pcVar8 = &cf_RecoveryOSAp_BaseSystemTrustCache;
  }
  else {
    cVar2 = _AMAuthInstallBasebandPersonalizationEnabled(param_1);
    bVar9 = cVar2 == '\0';
    cVar3 = _AMAuthInstallApPersonalizationEnabled(param_1);
    if (cVar3 != '\0') goto LAB_0028aa31;
    if (cVar2 == '\0') goto LAB_0028ad1b;
    _AMAuthInstallLog(5,"_AMAuthInstallGeneratePersonalizationEntries","personalizing baseband only"
                     );
    pcVar8 = &cf_BasebandFirmware;
  }
  _CFArrayAppendValue(lVar6,pcVar8);
LAB_0028ad53:
  *param_6 = lVar6;
  return 0;
}

