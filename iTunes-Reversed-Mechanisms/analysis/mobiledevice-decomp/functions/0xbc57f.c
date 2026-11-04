// rea decompile_all
// name: __MISAgentPerformOperation
// address: 0xbc57f
// body: available
// range: 0xbc57f-0xbc69f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __MISAgentPerformOperation
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
              long *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long local_38;
  int local_2c;
  
  lVar2 = _CFDictionaryCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_2,param_3,
                              param_4,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar2 == 0) {
    iVar1 = -0x17ff7ff6;
  }
  else {
    local_38 = lVar2;
    iVar1 = __MISAgentSendMessage(param_1,lVar2);
    _CFRelease(lVar2);
    if ((iVar1 == 0) &&
       (iVar1 = __MISAgentReceiveMessage(param_1,&local_38), lVar2 = local_38, iVar1 == 0)) {
      local_2c = 0;
      lVar3 = _CFDictionaryGetValue(local_38,&cf_MessageType);
      if ((lVar3 == 0) ||
         ((lVar3 = _CFStringCompare(lVar3,&cf_Response,0), lVar3 != 0 ||
          (lVar3 = _CFDictionaryGetValue(lVar2,&cf_Status), lVar3 == 0)))) {
        local_2c = -0x17ff7ff3;
      }
      else {
        _CFNumberGetValue(lVar3,9,&local_2c);
        if ((param_5 != (long *)0x0) && (local_2c == 0)) {
          lVar3 = _CFDictionaryGetValue(lVar2,&cf_Payload);
          *param_5 = lVar3;
          if (lVar3 != 0) {
            _CFRetain(lVar3);
          }
        }
      }
      iVar1 = local_2c;
      _CFRelease(lVar2);
    }
  }
  return iVar1;
}

