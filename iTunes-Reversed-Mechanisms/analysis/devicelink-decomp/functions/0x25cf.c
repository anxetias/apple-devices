// rea decompile_all
// name: __DLHandlerThreadReadMessage
// address: 0x25cf
// body: available
// range: 0x25cf-0x268c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __DLHandlerThreadReadMessage(long param_1)

{
  char cVar1;
  int iVar2;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  if (*(long *)(param_1 + 0x40) == 0) {
    cVar1 = _DLShouldLog(4);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
              ,0xffff,4,&cf_ReadMessagecalledinHandlerThread_butStreamHandlerisNULL);
    }
  }
  else {
    iVar2 = _StreamHandlerReceive(*(long *)(param_1 + 0x40),&local_10,&local_18);
    if (iVar2 != 0) {
      cVar1 = _DLShouldLog(3);
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                ,0xffff,3,&cf_Couldnotreceivemessage_____,local_18);
      }
      if (local_10 != 0) {
        _CFRelease();
      }
      local_10 = 0;
    }
    if (local_18 != 0) {
      _CFRelease();
    }
  }
  return local_10;
}

