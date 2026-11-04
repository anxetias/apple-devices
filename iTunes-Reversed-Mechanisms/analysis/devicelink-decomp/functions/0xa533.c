// rea decompile_all
// name: __DLThreadSendMessage
// address: 0xa533
// body: available
// range: 0xa533-0xa6ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __DLThreadSendMessage(long param_1,ulong param_2,long param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  local_40 = 0;
  local_48 = param_3;
  cVar1 = _DLShouldLog(7);
  if (cVar1 != '\0') {
    local_34 = param_4;
    uVar3 = _decodeMsgId(param_2 & 0xff);
    if (param_3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = _CFDataGetLength(param_3);
    }
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkThread.c"
            ,"_DLThreadSendMessage",7,&cf_Invokedwithmessage____dand_dbytesofdata_0x_08x_,uVar3,
            (param_2 & 0xffffffff) >> 8,uVar4,param_3);
    param_4 = local_34;
  }
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = _CFDataCreate(0,&local_48,8);
  }
  if ((param_1 == 0) || (cVar1 = _CFMessagePortIsValid(param_1), cVar1 != '\x01')) {
    cVar1 = _DLShouldLog(3);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkThread.c"
              ,"_DLThreadSendMessage",3,&cf_Can_tsendmessagetonilorinvalidport);
    }
  }
  else {
    uVar3 = 0;
    if ((char)param_4 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 0x40f5180000000000;
      uVar3 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_00015038;
    }
    iVar2 = _CFMessagePortSendRequest
                      (0x4014000000000000,uVar4,param_1,param_2 & 0xffffffff,lVar5,uVar3,&local_40);
    if ((iVar2 != 0) && (cVar1 = _DLShouldLog(3), cVar1 != '\0')) {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkThread.c"
              ,"_DLThreadSendMessage",3,&cf_Error_dreturnedfromcalltoCFMessagePortSendRequest,iVar2)
      ;
    }
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  return local_40;
}

