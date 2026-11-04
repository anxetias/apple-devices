// rea decompile_all
// name: __block_handleAsyncBasebandUpdaterRequest
// address: 0xcb7e2
// body: available
// range: 0xcb7e2-0xcb986 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* __block_handleAsyncBasebandUpdaterRequest(void*) */

void __block_handleAsyncBasebandUpdaterRequest(void *param_1)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  long lVar3;
  __CFDictionary *p_Var4;
  undefined8 uVar5;
  undefined8 in_R8;
  undefined8 in_R9;
  ulong uVar6;
  
  uVar6 = (ulong)in_EAX;
  iVar1 = _AMRestoreModeDeviceConnectToPortInternal
                    (*(__AMRestoreModeDevice **)((long)param_1 + 8),
                     *(ushort *)((long)param_1 + 0x10),0.0,0);
  if (iVar1 < 0) {
    uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
LAB_000cb880:
    lVar3 = 0;
LAB_000cb883:
    p_Var4 = (__CFDictionary *)
             _CFDictionaryCreateMutable
                       (uVar5,3,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    _CFDictionarySetValue(p_Var4,&cf_MsgType,&cf_StatusMsg);
    uVar5 = _CFNumberCreate(uVar5,9,&stack0xffffffffffffffcc);
    _CFDictionarySetValue(p_Var4,&cf_Status,uVar5);
    _CFDictionarySetValue(p_Var4,&cf_Successful,*(undefined8 *)PTR__kCFBooleanFalse_00441108);
    _send_internal_message(*(__AMRestoreModeDevice **)((long)param_1 + 8),p_Var4);
    _CFRelease(p_Var4);
    _CFRelease(uVar5);
    if (lVar3 == 0) goto LAB_000cb91f;
  }
  else {
    uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar3 = _CFDictionaryCreateMutable
                      (uVar5,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8,in_R8,in_R9,uVar6);
    if (lVar3 == 0) goto LAB_000cb880;
    _CFDictionarySetValue(lVar3,&cf_BasebandData,*(undefined8 *)param_1);
    iVar2 = _ramrod_send_message(iVar1,lVar3);
    if (iVar2 != 0) goto LAB_000cb883;
  }
  _CFRelease(lVar3);
LAB_000cb91f:
  if (*(long *)((long)param_1 + 8) != 0) {
    _CFRelease();
  }
  if (*(long *)param_1 != 0) {
    _CFRelease();
  }
  if (-1 < iVar1) {
    _AMRLog(6,&cf_sock_3d__s,iVar1,"closed");
    _close(iVar1);
  }
  _free(param_1);
  return;
}

