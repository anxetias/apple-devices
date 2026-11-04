// rea decompile_all
// name: _AMDeviceProxyGenericProgressCallbackV2
// address: 0x105b19
// body: available
// range: 0x105b19-0x105c41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x105c34 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMDeviceProxyGenericProgressCallbackV2(void const*, int, int, __CFDictionary const*, void*) */

void _AMDeviceProxyGenericProgressCallbackV2
               (void *param_1,int param_2,int param_3,__CFDictionary *param_4,void *param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  if ((param_1 != (void *)0x0) && (param_5 != (void *)0x0)) {
    if (param_4 == (__CFDictionary *)0x0) {
      lVar3 = _CFDictionaryCreateMutable
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,10,
                         PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    }
    else {
      lVar3 = _CFDictionaryCreateMutableCopy
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,10,param_4);
    }
    if (lVar3 != 0) {
      lVar4 = _CFDictionaryGetValue(lVar3,&cf_Operation);
      if (lVar4 == 0) {
        _AMSupportCFDictionarySetInteger32(lVar3,&cf_Operation,param_2);
      }
      lVar4 = _CFDictionaryGetValue(lVar3,&cf_Progress);
      if (lVar4 == 0) {
        _AMSupportCFDictionarySetInteger32(lVar3,&cf_Progress,param_3);
      }
      lVar4 = _CFDictionaryGetValue(lVar3,&cf_OverallProgress);
      if (lVar4 == 0) {
        _AMSupportCFDictionarySetInteger32(lVar3,&cf_OverallProgress,0xffffffff);
      }
      uVar2 = __AMDeviceProxyGetState(*(undefined8 *)((long)param_5 + 8));
      _AMSupportCFDictionarySetInteger32(lVar3,&cf_DeviceState,uVar2);
      if ((*(long *)((long)param_5 + 8) != 0) &&
         (pcVar1 = *(code **)(*(long *)((long)param_5 + 8) + 8), pcVar1 != (code *)0x0)) {
        (*pcVar1)(*(undefined8 *)param_5,lVar3);
      }
      _CFRelease(lVar3);
      return;
    }
  }
  return;
}

