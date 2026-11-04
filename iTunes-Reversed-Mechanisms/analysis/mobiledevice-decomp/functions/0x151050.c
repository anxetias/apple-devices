// rea decompile_all
// name: _fire_callback.3230
// address: 0x151050
// body: available
// range: 0x151050-0x15113f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fire_callback_3230(code *param_1,undefined8 param_2,undefined4 param_3,long param_4,
                        undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 in_EAX;
  long lVar2;
  long lVar3;
  
  if (param_1 != (code *)0x0) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar2 = _CFDictionaryCreateMutable
                      (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8,param_5,param_6,
                       CONCAT44(param_3,in_EAX));
    if (lVar2 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,1,"Could not create the status dictionary");
    }
    else {
      if (param_4 != 0) {
        _CFDictionarySetValue(lVar2,&cf_Status,param_4);
      }
      lVar3 = _CFNumberCreate(uVar1,3,&stack0xffffffffffffffcc);
      if (lVar3 != 0) {
        _CFDictionarySetValue(lVar2,&cf_PercentComplete,lVar3);
        _CFRelease(lVar3);
      }
      (*param_1)(lVar2,param_2);
    }
  }
  return;
}

