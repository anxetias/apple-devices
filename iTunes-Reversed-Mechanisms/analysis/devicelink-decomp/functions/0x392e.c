// rea decompile_all
// name: _DLKillConnection
// address: 0x392e
// body: available
// range: 0x392e-0x3a92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DLKillConnection(int *param_1)

{
  char cVar1;
  int iVar2;
  long local_18;
  
  local_18 = 0;
  if (*param_1 == 1) {
    cVar1 = _DLShouldLog(5);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
              ,"DLKillConnection",5,&cf_Notkillingwaitingconnection_becausethatwouldberude);
    }
  }
  else {
    param_1[1] = 0;
    cVar1 = _DLShouldLog(7);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
              ,"DLKillConnection",7,&cf_KillingConnection_Nextexpectedsessionnumber__d_Connection__p
              ,param_1[1] >> 8,param_1);
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      iVar2 = _StreamHandlerClose(*(long *)(param_1 + 0x10),&local_18);
      if (iVar2 != 0) {
        cVar1 = _DLShouldLog(3);
        if (cVar1 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                  ,"DLKillConnection",3,&cf_ClosingthestreamhandlerdirectlyinDLKillConnection_____,
                  local_18);
        }
      }
      if (local_18 != 0) {
        _CFRelease();
        local_18 = 0;
      }
    }
    if (_sSaveCallHistory == '\x01') {
      __DLCallHistoryAddEntry(&cf_Kill);
    }
    if (*(long *)(param_1 + 0x1a) == 0) {
      __DLHandlerThreadMessagePortCallback(0,9,0,param_1);
    }
    else {
      _DLThreadSendMessage();
    }
    cVar1 = _DLShouldLog(7);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
              ,"DLKillConnection",7,&cf_After_SendMessage__d_Connection__p,param_1[1] >> 8,param_1);
    }
  }
  return 0;
}

