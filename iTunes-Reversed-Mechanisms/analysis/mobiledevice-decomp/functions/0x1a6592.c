// rea decompile_all
// name: _AMAuthInstallUpdaterCryptex1LocalPolicyCreateRequest
// address: 0x1a6592
// body: available
// range: 0x1a6592-0x1a682f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMAuthInstallUpdaterCryptex1LocalPolicyCreateRequest
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar2 = _CFDictionaryCreateMutable
                    (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar2 == 0) {
    _AMAuthInstallUpdaterCryptex1LocalPolicyCreateRequest_cold_4(param_4);
LAB_001a67f6:
    lVar4 = 0;
LAB_001a6804:
    lVar3 = 0;
  }
  else {
    lVar3 = _CFDictionaryGetValue(param_1,&cf_DeviceInfo);
    if (lVar3 == 0) {
      _AMAuthInstallUpdaterCryptex1LocalPolicyCreateRequest_cold_3(param_4);
      goto LAB_001a67f6;
    }
    lVar4 = _CFArrayCreateMutable(uVar1,0xd,PTR__kCFTypeArrayCallBacks_004411a8);
    _CFArrayAppendValue(lVar4,&cf_ApBoardID);
    _CFArrayAppendValue(lVar4,&cf_ApChipID);
    _CFArrayAppendValue(lVar4,&cf_ApECID);
    _CFArrayAppendValue(lVar4,&cf_ApProductionMode);
    _CFArrayAppendValue(lVar4,&cf_ApSecurityDomain);
    _CFArrayAppendValue(lVar4,&cf_ApSecurityMode);
    _CFArrayAppendValue(lVar4,&cf_Ap_RecoveryOSPolicyNonceHash);
    _CFArrayAppendValue(lVar4,&cf_Ap_NextStageIM4MHash);
    _CFArrayAppendValue(lVar4,&cf_Ap_NextStageCryptex1IM4MHash);
    _CFArrayAppendValue(lVar4,&cf_Ap_VolumeUUID);
    lVar5 = _CFArrayGetCount(lVar4);
    if (0 < lVar5) {
      lVar5 = 0;
      do {
        uVar6 = _CFArrayGetValueAtIndex(lVar4,lVar5);
        lVar7 = _CFDictionaryGetValue(lVar3,uVar6);
        if (lVar7 != 0) {
          _CFDictionarySetValue(lVar2,uVar6,lVar7);
        }
        lVar5 = lVar5 + 1;
        lVar7 = _CFArrayGetCount(lVar4);
      } while (lVar5 < lVar7);
    }
    uVar6 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
    _CFDictionarySetValue(lVar2,&cf__ApImg4Ticket,uVar6);
    _CFDictionarySetValue(lVar2,&cf_Ap_LocalBoot,uVar6);
    lVar3 = _CFDictionaryCreateMutable
                      (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar3 == 0) {
      _AMAuthInstallUpdaterCryptex1LocalPolicyCreateRequest_cold_2(param_4);
      goto LAB_001a6804;
    }
    lVar5 = _AMAuthInstallLocalPolicyCopyPayloadDigestSHA384();
    if (lVar5 != 0) {
      _CFDictionarySetValue(lVar3,&cf_Digest,lVar5);
      _CFDictionarySetValue(lVar3,&cf_Trusted,uVar6);
      _CFDictionarySetValue(lVar2,&cf_Ap_LocalPolicy,lVar3);
      _AMSupportSafeRelease(lVar5);
      _AMSupportSafeRelease(lVar3);
      lVar3 = lVar2;
      lVar2 = lVar4;
      goto LAB_001a67ca;
    }
    _AMAuthInstallUpdaterCryptex1LocalPolicyCreateRequest_cold_1(param_4);
  }
  _AMSupportSafeRelease(0);
  _AMSupportSafeRelease(lVar3);
  _AMSupportSafeRelease(lVar4);
  lVar3 = 0;
LAB_001a67ca:
  _AMSupportSafeRelease(lVar2);
  return lVar3;
}

