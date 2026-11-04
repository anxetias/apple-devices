// rea decompile_all
// name: __DLBulkOperationContextCreateResult
// address: 0x3fc3
// body: available
// range: 0x3fc3-0x404f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__DLBulkOperationContextCreateResult
          (int param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined4 in_EAX;
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = _CFDictionaryCreateMutable
                      (0,4,PTR__kCFTypeDictionaryKeyCallBacks_00015050,
                       PTR__kCFTypeDictionaryValueCallBacks_00015058,param_5,param_6,
                       CONCAT44(param_1,in_EAX));
    lVar2 = _CFNumberCreate(0,9,&stack0xffffffffffffffdc);
    _CFDictionarySetValue(uVar1,&cf_DLFileErrorCode,lVar2);
    if (lVar2 != 0) {
      _CFRelease(lVar2);
    }
    if (param_2 != 0) {
      _CFDictionarySetValue(uVar1,&cf_DLFileErrorString,param_2);
    }
  }
  return uVar1;
}

