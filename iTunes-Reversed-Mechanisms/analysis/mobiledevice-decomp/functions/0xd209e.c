// rea decompile_all
// name: __block_restoreLoop_AsyncMessageHandler
// address: 0xd209e
// body: available
// range: 0xd209e-0xd21d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* __block_restoreLoop_AsyncMessageHandler(void*) */

void __block_restoreLoop_AsyncMessageHandler(void *param_1)

{
  __AMRestoreModeDevice *p_Var1;
  AMRestoreMuxedDeviceMessage *pAVar2;
  dispatch_group_t group;
  long lVar3;
  __CFDictionary *p_Var4;
  undefined8 uVar5;
  __CFError *local_48;
  __AMRestoreModeDevice *local_40;
  int local_34;
  
  local_34 = 0;
  p_Var1 = *(__AMRestoreModeDevice **)param_1;
  pAVar2 = *(AMRestoreMuxedDeviceMessage **)((long)param_1 + 0x10);
  group = *(dispatch_group_t *)((long)param_1 + 0x20);
  local_48 = (__CFError *)0x0;
  if (*(long *)((long)param_1 + 0x18) != 0) {
    lVar3 = _CFStringCompare(*(long *)((long)param_1 + 0x18),&cf_AsyncDataRequestMsg,0);
    if (lVar3 == 0) {
      local_34 = _handleAsyncDataRequestMessage(pAVar2,&local_48);
      if (local_34 != 0) {
        local_40 = *(__AMRestoreModeDevice **)PTR__kCFAllocatorDefault_004410e8;
        p_Var4 = (__CFDictionary *)
                 _CFDictionaryCreateMutable
                           (local_40,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                            PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        _CFDictionarySetValue(p_Var4,&cf_MsgType,&cf_StatusMsg);
        uVar5 = _CFNumberCreate(local_40,9,&local_34);
        local_40 = p_Var1;
        _CFDictionarySetValue(p_Var4,&cf_Status,uVar5);
        _CFDictionarySetValue(p_Var4,&cf_AMRError,uVar5);
        _CFDictionarySetValue(p_Var4,&cf_Successful,*(undefined8 *)PTR__kCFBooleanFalse_00441108);
        _send_internal_message(local_40,p_Var4);
        _CFRelease(p_Var4);
      }
    }
  }
  if (pAVar2 != (AMRestoreMuxedDeviceMessage *)0x0) {
    (**(code **)(*(long *)pAVar2 + 8))(pAVar2);
  }
  _dispatch_group_leave(group);
  _free(param_1);
  return;
}

