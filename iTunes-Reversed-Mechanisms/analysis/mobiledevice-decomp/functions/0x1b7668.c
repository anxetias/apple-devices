// rea decompile_all
// name: __CanaryGetTags
// address: 0x1b7668
// body: available
// range: 0x1b7668-0x1b77d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __CanaryGetTags(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar2 = _CFArrayCreateMutable(uVar1,0,PTR__kCFTypeArrayCallBacks_004411a8);
  if (lVar2 == 0) {
    __CanaryGetTags_cold_4(param_4);
LAB_001b77be:
    lVar3 = 0;
  }
  else {
    lVar3 = _CFArrayCreateMutable(uVar1,0,PTR__kCFTypeArrayCallBacks_004411a8);
    if (lVar3 == 0) {
      __CanaryGetTags_cold_3(param_4);
      goto LAB_001b77be;
    }
    lVar4 = _CFDictionaryCreateMutable
                      (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar4 != 0) {
      lVar5 = _CFDictionaryGetValue(param_1,&cf_DeviceInfo);
      if (lVar5 == 0) {
        __CanaryGetTags_cold_1(param_4);
      }
      else {
        _CFArrayAppendValue(lVar2,&cf_TestFirmware);
        _CFArrayAppendValue(lVar3,&cf_Test_Ticket_1);
        _CFArrayAppendValue(lVar3,&cf_Test_Ticket_2);
        lVar5 = _CFDictionaryGetValue(lVar5,&cf_QueryLoop0);
        pcVar6 = &cf_InstanceB;
        if (lVar5 == *(long *)PTR__kCFBooleanTrue_00441110) {
          pcVar6 = &cf_InstanceA;
        }
        _CFDictionarySetValue(lVar4,&cf_LoopInstance,pcVar6);
        _CFDictionarySetValue(lVar4,&cf_BuildIdentityTags,lVar2);
        _CFDictionarySetValue(lVar4,&cf_ResponseTags,lVar3);
      }
      goto LAB_001b778a;
    }
    __CanaryGetTags_cold_2(param_4);
  }
  lVar4 = 0;
LAB_001b778a:
  _AMSupportSafeRelease(lVar2);
  _AMSupportSafeRelease(lVar3);
  return lVar4;
}

