// rea decompile_all
// name: __block_handleStreamedImageFileRequest
// address: 0xcaaf6
// body: available
// range: 0xcaaf6-0xcac18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* __block_handleStreamedImageFileRequest(void*) */

void __block_handleStreamedImageFileRequest(void *param_1)

{
  __AMRestoreModeDevice *p_Var1;
  __CFDictionary *p_Var2;
  undefined8 uVar3;
  int local_2c;
  
  p_Var1 = *(__AMRestoreModeDevice **)param_1;
  local_2c = _handleStreamedImageFileRequest_Impl
                       (p_Var1,*(undefined4 *)((long)param_1 + 8),
                        *(undefined8 *)((long)param_1 + 0x10),*(undefined4 *)((long)param_1 + 0x18),
                        1);
  if (local_2c != 0) {
    _AMRLog(3,&cf__handleStreamedImageFileRequestfailedasynchronously__d,local_2c);
    uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    p_Var2 = (__CFDictionary *)
             _CFDictionaryCreateMutable
                       (uVar3,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    _CFDictionarySetValue(p_Var2,&cf_MsgType,&cf_StatusMsg);
    uVar3 = _CFNumberCreate(uVar3,9,&local_2c);
    _CFDictionarySetValue(p_Var2,&cf_Status,uVar3);
    _CFDictionarySetValue(p_Var2,&cf_AMRError,uVar3);
    _CFDictionarySetValue(p_Var2,&cf_Successful,*(undefined8 *)PTR__kCFBooleanFalse_00441108);
    _send_internal_message(p_Var1,p_Var2);
    _CFRelease(p_Var2);
    _CFRelease(uVar3);
  }
  _AMSupportSafeRelease(*(undefined8 *)param_1);
  _AMSupportSafeRelease(*(undefined8 *)((long)param_1 + 0x10));
  _AMSupportSafeRelease(*(undefined8 *)((long)param_1 + 0x20));
  _free(param_1);
  return;
}

