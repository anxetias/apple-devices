// rea decompile_all
// name: __AMRestorableOperationChangedHandler
// address: 0x16c2f5
// body: available
// range: 0x16c2f5-0x16c3e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestorableOperationChangedHandler
               (undefined8 param_1,undefined4 param_2,long *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 in_EAX;
  long lVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  
  if ((param_3 != (long *)0x0) && (lVar1 = *param_3, lVar1 != 0)) {
    pcVar2 = (code *)param_3[1];
    lVar3 = param_3[2];
    if (pcVar2 == (code *)0x0) {
      pcVar7 = &cf_Can_tsendeventwithaNULLprogressHandler;
    }
    else {
      uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar5 = _CFDictionaryCreateMutable
                        (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8,param_5,param_6,
                         CONCAT44(param_2,in_EAX));
      if (lVar5 != 0) {
        lVar6 = _CFNumberCreate(uVar4,9,&stack0xffffffffffffffcc);
        if (lVar6 == 0) {
          pcVar7 = &cf_FailedtocreateoperationCFNumber;
          lVar6 = 0;
        }
        else {
          _CFDictionarySetValue(lVar5,&cf_Operation,lVar6);
          (*pcVar2)(lVar1,lVar5,lVar3);
          pcVar7 = (cfstringStruct *)0x0;
        }
        _AMRSafeLogAndRelease(3,pcVar7);
        _CFRelease(lVar5);
        if (lVar6 == 0) {
          return;
        }
        _CFRelease(lVar6);
        return;
      }
      pcVar7 = &cf_Failedtocreateinfodictionaryforoperationchange;
    }
    _AMRSafeLogAndRelease(3,pcVar7);
  }
  return;
}

