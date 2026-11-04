// rea decompile_all
// name: _AMAuthInstallUpdaterCryptex1LocalPolicyGetTags
// address: 0x1a645b
// body: available
// range: 0x1a645b-0x1a654e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMAuthInstallUpdaterCryptex1LocalPolicyGetTags(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 in_RCX;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar2 = _CFArrayCreateMutable(uVar1,0,PTR__kCFTypeArrayCallBacks_004411a8);
  if (lVar2 == 0) {
    _AMAuthInstallUpdaterCryptex1LocalPolicyGetTags_cold_3(in_RCX);
LAB_001a653d:
    lVar3 = 0;
  }
  else {
    lVar3 = _CFArrayCreateMutable(uVar1,1,PTR__kCFTypeArrayCallBacks_004411a8);
    if (lVar3 == 0) {
      _AMAuthInstallUpdaterCryptex1LocalPolicyGetTags_cold_2(in_RCX);
      goto LAB_001a653d;
    }
    _CFArrayAppendValue(lVar3,&cf_ApImg4Ticket);
    lVar4 = _CFDictionaryCreateMutable
                      (uVar1,2,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar4 != 0) {
      _CFDictionaryAddValue(lVar4,&cf_BuildIdentityTags,lVar2);
      _CFDictionaryAddValue(lVar4,&cf_ResponseTags,lVar3);
      goto LAB_001a650f;
    }
    _AMAuthInstallUpdaterCryptex1LocalPolicyGetTags_cold_1(in_RCX);
  }
  lVar4 = 0;
LAB_001a650f:
  _AMSupportSafeRelease(lVar2);
  _AMSupportSafeRelease(lVar3);
  return lVar4;
}

