// rea decompile_all
// name: __block_handleAsyncImageDataRequest
// address: 0xcb049
// body: available
// range: 0xcb049-0xcb187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* __block_handleAsyncImageDataRequest(void*) */

void __block_handleAsyncImageDataRequest(void *param_1)

{
  __AMRestoreModeDevice *p_Var1;
  __AMRestoreModeDevice *p_Var2;
  uint uVar3;
  int iVar4;
  __CFDictionary *p_Var5;
  undefined8 uVar6;
  int extraout_EDX;
  undefined1 local_34 [4];
  
  p_Var1 = *(__AMRestoreModeDevice **)param_1;
  iVar4 = *(int *)((long)param_1 + 8);
  p_Var2 = *(__AMRestoreModeDevice **)((long)param_1 + 0x20);
  uVar3 = _runASRServer(p_Var1,iVar4,*(__CFString **)((long)param_1 + 0x10),
                        *(char **)((long)param_1 + 0x18),(__CFDictionary *)p_Var2,'\x01');
  _AMRestoreCloseTransferSocket(iVar4,uVar3);
  iVar4 = _processASRResult(p_Var2,(__CFDictionary *)(ulong)uVar3,extraout_EDX);
  if (iVar4 != 0) {
    uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    p_Var5 = (__CFDictionary *)
             _CFDictionaryCreateMutable
                       (uVar6,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    _CFDictionarySetValue(p_Var5,&cf_MsgType,&cf_StatusMsg);
    uVar6 = _CFNumberCreate(uVar6,9,local_34);
    _CFDictionarySetValue(p_Var5,&cf_Status,uVar6);
    _CFDictionarySetValue(p_Var5,&cf_AMRError,uVar6);
    _CFDictionarySetValue(p_Var5,&cf_Successful,*(undefined8 *)PTR__kCFBooleanFalse_00441108);
    _send_internal_message(p_Var1,p_Var5);
    _CFRelease(p_Var5);
    _CFRelease(uVar6);
  }
  _AMSupportSafeRelease(*(undefined8 *)param_1);
  _AMSupportSafeRelease(*(undefined8 *)((long)param_1 + 0x10));
  _AMSupportSafeFree(*(undefined8 *)((long)param_1 + 0x18));
  _AMSupportSafeRelease(*(undefined8 *)((long)param_1 + 0x20));
  _AMSupportSafeFree(param_1);
  return;
}

