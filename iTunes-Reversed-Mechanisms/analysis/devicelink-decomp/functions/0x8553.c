// rea decompile_all
// name: _SocketStreamHandlerAccept
// address: 0x8553
// body: available
// range: 0x8553-0x8717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x8666 to 0xa706 _DLSetStatus (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _SocketStreamHandlerAccept(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ulong in_RAX;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  undefined8 local_38;
  
  local_38 = in_RAX;
  if (*(long *)(param_1 + 0x30) != 0) {
    _SocketDelete();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar2 = _CFDictionaryGetValue(param_2,&cf_DLInfoPortKey);
  lVar3 = _CFDictionaryGetValue(param_2,&cf_DLInfoSocketKey);
  lVar4 = _CFDictionaryGetValue(param_2,&cf_DLInfoLockdownAccept);
  if (lVar2 == 0) {
    if (lVar3 == 0) {
      uVar5 = _DLSetStatus(0xfffffffd,param_3,
                           &cf_SocketStreamHandlerAccept_Noportorsocketininfodictionary);
      return uVar5;
    }
    cVar1 = _CFNumberGetValue(lVar3,9,(long)&local_38 + 4);
    if (cVar1 == '\0') {
      pcVar6 = &cf_SocketStreamHandlerAccept_Socketininfodictionaryisinvalid___;
      goto LAB_00008679;
    }
    lVar3 = _SocketCreateServerWithSocket(local_38._4_4_);
    if ((lVar4 == 0) || (lVar4 == *(long *)PTR__kCFBooleanFalse_00015020)) {
      cVar1 = _DLShouldLog(4);
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/SocketStreamHandler.c"
                ,"SocketStreamHandlerAccept",4,&cf_Notusinglockdown);
      }
      goto LAB_000086bc;
    }
LAB_00008630:
    *(long *)(param_1 + 0x30) = lVar3;
  }
  else {
    cVar1 = _CFNumberGetValue(lVar2,9,&local_38);
    if (cVar1 == '\0') {
      pcVar6 = &cf_SocketStreamHandlerAccept_Portininfodictionaryisinvalid___;
      lVar3 = lVar2;
LAB_00008679:
      pcVar6 = (cfstringStruct *)_CFStringCreateWithFormat(0,0,pcVar6,lVar3);
      uVar5 = 0xfffffffd;
      goto LAB_00008700;
    }
    lVar3 = _SocketCreateServer(local_38 & 0xffffffff,1);
    if ((lVar4 != 0) && (lVar4 != *(long *)PTR__kCFBooleanFalse_00015020)) goto LAB_00008630;
LAB_000086bc:
    uVar5 = _SocketAccept(lVar3);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    _SocketDelete(lVar3);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 4) == 0) {
      return 0;
    }
    _SocketDelete(lVar3);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  pcVar6 = &cf_SocketStreamHandlerAccept_errorcallingacceptonsocket;
  uVar5 = 0xffffffff;
LAB_00008700:
  uVar5 = _DLSetStatus(uVar5,param_3,pcVar6);
  return uVar5;
}

