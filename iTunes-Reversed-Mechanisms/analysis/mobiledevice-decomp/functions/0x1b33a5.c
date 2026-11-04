// rea decompile_all
// name: _AMAuthInstallUpdaterCryptex1GetTags
// address: 0x1b33a5
// body: available
// range: 0x1b33a5-0x1b357a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMAuthInstallUpdaterCryptex1GetTags
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar1 = _CFArrayCreateMutable(uVar7,0x1c,PTR__kCFTypeArrayCallBacks_004411a8);
  if (lVar1 == 0) {
    _AMAuthInstallUpdaterCryptex1GetTags_cold_5(param_4);
    uVar7 = extraout_RDX_00;
  }
  else {
    lVar2 = __AMAuthInstallCryptex1CopyManifestProperties();
    if (lVar2 != 0) {
      lVar3 = __AMAuthInstallCryptex1CopyObjectTags();
      if (lVar3 == 0) {
        _AMAuthInstallUpdaterCryptex1GetTags_cold_3(param_4);
        lVar5 = 0;
        lVar6 = 0;
        lVar3 = 0;
        uVar7 = extraout_RDX_02;
      }
      else {
        uVar4 = _CFArrayGetCount(lVar2);
        _CFArrayAppendArray(lVar1,lVar2,0,uVar4);
        uVar4 = _CFArrayGetCount(lVar3);
        _CFArrayAppendArray(lVar1,lVar3,0,uVar4);
        lVar5 = _CFArrayCreateMutable(uVar7,1,PTR__kCFTypeArrayCallBacks_004411a8);
        if (lVar5 == 0) {
          _AMAuthInstallUpdaterCryptex1GetTags_cold_2(param_4);
          lVar5 = 0;
          uVar7 = extraout_RDX_03;
        }
        else {
          _CFArrayAppendValue(lVar5,&cf_Cryptex1_Ticket);
          lVar6 = _CFDictionaryCreateMutable
                            (uVar7,2,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          if (lVar6 != 0) {
            _CFDictionaryAddValue(lVar6,&cf_BuildIdentityTags,lVar1);
            _CFDictionaryAddValue(lVar6,&cf_ResponseTags,lVar5);
            uVar7 = extraout_RDX;
            goto LAB_001b34c7;
          }
          _AMAuthInstallUpdaterCryptex1GetTags_cold_1(param_4);
          uVar7 = extraout_RDX_04;
        }
        lVar6 = 0;
      }
      goto LAB_001b34c7;
    }
    _AMAuthInstallUpdaterCryptex1GetTags_cold_4(param_4);
    uVar7 = extraout_RDX_01;
  }
  lVar5 = 0;
  lVar6 = 0;
  lVar3 = 0;
  lVar2 = 0;
LAB_001b34c7:
  if ((param_4 == (long *)0x0) || (*param_4 == 0)) {
    _AMSupportSafeRelease(lVar2);
    _AMSupportSafeRelease(lVar3);
    _AMSupportSafeRelease(lVar1);
    _AMSupportSafeRelease(lVar5);
  }
  else {
    lVar6 = 0;
    __AMAuthInstallCryptex1Log(param_2,param_3,uVar7,"AMAuthInstallUpdaterCryptex1GetTags");
  }
  return lVar6;
}

