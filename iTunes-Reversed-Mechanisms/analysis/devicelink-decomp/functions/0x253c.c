// rea decompile_all
// name: __DLHandlerThreadWriteMessage
// address: 0x253c
// body: available
// range: 0x253c-0x257b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2576 to 0xa79e __DLLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __DLHandlerThreadWriteMessage(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    if (param_2 != 0) {
      uVar2 = _CFDataGetBytePtr(param_2);
      uVar3 = _CFDataGetLength(param_2);
      __DLSendBytesAndDisconnectOnError(param_1,uVar2,uVar3);
      return;
    }
    _DLSetStatus(0xfffffffd,0,&cf__DLSendDataAndDisconnectOnError_dataparameterisNULL);
    return;
  }
  cVar1 = _DLShouldLog(4);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
            ,"_DLHandlerThreadWriteMessage",4,
            &cf_WriteMessagecalledinHandlerThread_butStreamHandlerisNULL);
    return;
  }
  return;
}

