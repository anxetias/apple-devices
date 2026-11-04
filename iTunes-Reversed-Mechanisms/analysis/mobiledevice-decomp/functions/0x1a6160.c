// rea decompile_all
// name: _AMAuthInstallUpdaterCryptex1LocalPolicyCopyDeviceInfo
// address: 0x1a6160
// body: available
// range: 0x1a6160-0x1a645a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMAuthInstallUpdaterCryptex1LocalPolicyCopyDeviceInfo
               (long param_1,long param_2,long param_3,long param_4,long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 local_88 [16];
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  if (param_1 == 0) {
    _AMAuthInstallUpdaterCryptex1LocalPolicyCopyDeviceInfo_cold_9(param_6);
LAB_001a6433:
    lVar5 = 0;
  }
  else {
    local_38 = param_6;
    _AMAuthInstallApCopyParameters(param_1,&local_40);
    if (local_40 == 0) {
      _AMAuthInstallUpdaterCryptex1LocalPolicyCopyDeviceInfo_cold_8(local_38);
      goto LAB_001a6433;
    }
    local_78 = param_5;
    local_70 = param_4;
    local_68 = param_3;
    local_60 = param_2;
    lVar1 = _CFDictionaryGetValue(local_40,&cf_ApBoardID);
    lVar2 = _CFDictionaryGetValue(local_40,&cf_ApChipID);
    lVar3 = _CFDictionaryGetValue(local_40,&cf_ECID);
    lVar4 = _CFDictionaryGetValue(local_40,&cf_ApProductionMode);
    lVar5 = _CFDictionaryGetValue(local_40,&cf_ApSecurityDomain);
    lVar6 = _CFDictionaryGetValue(local_40,&cf_ApSecurityMode);
    if (lVar1 == 0) {
      _AMAuthInstallUpdaterCryptex1LocalPolicyCopyDeviceInfo_cold_7(local_38);
      goto LAB_001a6433;
    }
    if (lVar2 == 0) {
      _AMAuthInstallUpdaterCryptex1LocalPolicyCopyDeviceInfo_cold_6(local_38);
      goto LAB_001a6433;
    }
    if (lVar3 == 0) {
      _AMAuthInstallUpdaterCryptex1LocalPolicyCopyDeviceInfo_cold_5(local_38);
      goto LAB_001a6433;
    }
    if (lVar4 == 0) {
      _AMAuthInstallUpdaterCryptex1LocalPolicyCopyDeviceInfo_cold_4(local_38);
      goto LAB_001a6433;
    }
    if (lVar5 == 0) {
      _AMAuthInstallUpdaterCryptex1LocalPolicyCopyDeviceInfo_cold_3(local_38);
      goto LAB_001a6433;
    }
    if (lVar6 == 0) {
      _AMAuthInstallUpdaterCryptex1LocalPolicyCopyDeviceInfo_cold_2(local_38);
      goto LAB_001a6433;
    }
    local_48 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    local_58 = lVar5;
    local_50 = lVar6;
    lVar5 = _CFDictionaryCreateMutable
                      (local_48,10,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar5 == 0) {
      _AMAuthInstallUpdaterCryptex1LocalPolicyCopyDeviceInfo_cold_1(local_38);
      goto LAB_001a6433;
    }
    _CFDictionarySetValue(lVar5,&cf_ApBoardID,lVar1);
    _CFDictionarySetValue(lVar5,&cf_ApChipID,lVar2);
    _CFDictionarySetValue(lVar5,&cf_ApECID,lVar3);
    _CFDictionarySetValue(lVar5,&cf_ApProductionMode,lVar4);
    _CFDictionarySetValue(lVar5,&cf_ApSecurityDomain,local_58);
    _CFDictionarySetValue(lVar5,&cf_ApSecurityMode,local_50);
    if (local_60 != 0) {
      _CFDictionarySetValue(lVar5,&cf_Ap_RecoveryOSPolicyNonceHash);
    }
    lVar2 = local_70;
    lVar1 = local_78;
    if (local_68 != 0) {
      _CFDictionarySetValue(lVar5,&cf_Ap_NextStageIM4MHash);
    }
    if (lVar2 != 0) {
      _CFDictionarySetValue(lVar5,&cf_Ap_NextStageCryptex1IM4MHash,lVar2);
    }
    if (lVar1 != 0) {
      local_88 = _CFUUIDGetUUIDBytes(lVar1);
      uVar7 = _CFDataCreate(local_48,local_88,0x10);
      _CFDictionarySetValue(lVar5,&cf_Ap_VolumeUUID,uVar7);
      goto LAB_001a6438;
    }
  }
  uVar7 = 0;
LAB_001a6438:
  _AMSupportSafeRelease(local_40);
  _AMSupportSafeRelease(uVar7);
  return lVar5;
}

