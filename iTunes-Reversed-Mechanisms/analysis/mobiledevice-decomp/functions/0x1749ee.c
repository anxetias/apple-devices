// rea decompile_all
// name: __AMRResourceManagerSetIncrementedNumber
// address: 0x1749ee
// body: available
// range: 0x1749ee-0x174a96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRResourceManagerSetIncrementedNumber(long param_1,long param_2,undefined8 param_3)

{
  uint in_EAX;
  int iVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined8 uStack_28;
  
  uStack_28 = (ulong)in_EAX;
  if (param_2 == 0) {
    pcVar3 = &cf_Can_tsetnumberinNULLdictionary;
  }
  else {
    if (param_1 == 0) {
      iVar1 = 1;
    }
    else {
      _CFNumberGetValue(param_1,9,(long)&uStack_28 + 4);
      iVar1 = uStack_28._4_4_ + 1;
    }
    uStack_28 = CONCAT44(iVar1,(undefined4)uStack_28);
    lVar2 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,9);
    if (lVar2 != 0) {
      _CFDictionarySetValue(param_2,param_3,lVar2);
      _AMRSafeLogAndRelease(3,0);
      _CFRelease(lVar2);
      return;
    }
    pcVar3 = &cf_Failedtocreatenewincrementednumber;
  }
  _AMRSafeLogAndRelease(3,pcVar3);
  return;
}

