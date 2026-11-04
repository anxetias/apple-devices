// rea decompile_all
// name: __DeviceLinkThreadMessageCallback
// address: 0xa280
// body: available
// range: 0xa280-0xa3b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__DeviceLinkThreadMessageCallback(long param_1,ulong param_2,long param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_38;
  
  cVar1 = _DLShouldLog(7);
  if (cVar1 != '\0') {
    uVar2 = _decodeMsgId(param_2 & 0xff);
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = _CFDataGetLength(param_3);
    }
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkThread.c"
            ,"_DeviceLinkThreadMessageCallback",7,
            &cf_Callbackwithmessage____dand_dbytesofdata_0x_08x_,uVar2,(param_2 & 0xffffffff) >> 8,
            uVar3,param_3);
  }
  local_38 = 0;
  if (param_3 != 0) {
    lVar4 = _CFDataGetLength(param_3);
    if (lVar4 == 8) {
      _CFDataGetBytes(param_3,0,8,&local_38);
    }
  }
  if (param_1 != 0) {
    cVar1 = _CFMessagePortIsValid(param_1);
    if (cVar1 != '\0') {
      uVar2 = (*(code *)param_4[1])(param_1,param_2 & 0xffffffff,local_38,*param_4);
      goto LAB_0000a391;
    }
  }
  cVar1 = _DLShouldLog(3);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkThread.c"
            ,"_DeviceLinkThreadMessageCallback",3,&cf_Can_tsendmessagetonilorinvalidport);
  }
LAB_0000a391:
  if (local_38 != 0) {
    _CFRelease();
  }
  return uVar2;
}

