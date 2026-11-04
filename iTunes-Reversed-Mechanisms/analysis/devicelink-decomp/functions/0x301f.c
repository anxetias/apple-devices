// rea decompile_all
// name: _DLConnect
// address: 0x301f
// body: available
// range: 0x301f-0x3176 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x305e to 0xa706 _DLSetStatus (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 _DLConnect(undefined4 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_1 = 2;
  lVar3 = *(long *)(param_1 + 0x1e);
  if (lVar3 == param_2 || param_2 == 0) {
    if (lVar3 == 0) {
      uVar2 = _DLSetStatus(0xfffffffd,param_3,
                           &cf_DLConnect_infoparameterisNULLandnoinfopreviouslyset);
      return uVar2;
    }
  }
  else {
    if (lVar3 != 0) {
      _CFRelease();
    }
    *(long *)(param_1 + 0x1e) = param_2;
    _CFRetain(param_2);
    lVar3 = *(long *)(param_1 + 0x1e);
  }
  cVar1 = _CFDictionaryContainsKey(lVar3,&cf_DLInfoSessionNumberKey);
  if (cVar1 == '\0') {
    __sConnectionSerial = (__sConnectionSerial & 0xffffff00) + 0x100;
    param_1[1] = __sConnectionSerial;
  }
  else {
    uVar2 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 0x1e),&cf_DLInfoSessionNumberKey);
    _CFNumberGetValue(uVar2,3,param_1 + 1);
  }
  cVar1 = _DLShouldLog(7);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
            ,"DLConnect",7,&cf_Nextexpectedsessionnumber__d_connection__p,(int)param_1[1] >> 8,
            param_1);
  }
  *(undefined1 *)((long)param_1 + 0x91) = 1;
  if (_sSaveCallHistory == '\x01') {
    __DLCallHistoryAddEntry(&cf_Connect);
  }
  cVar1 = _DLShouldLog(6);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
            ,"DLConnect",6,&cf_Sendingconnectmessagetohandlerthread);
  }
  if (*(long *)(param_1 + 0x1a) == 0) {
    __DLHandlerThreadMessagePortCallback(0,3,0,param_1);
  }
  else {
    _DLThreadSendMessage();
  }
  return 0;
}

