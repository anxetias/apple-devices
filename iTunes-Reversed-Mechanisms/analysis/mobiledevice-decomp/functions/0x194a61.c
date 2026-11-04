// rea decompile_all
// name: _RPSocketReadDictionary
// address: 0x194a61
// body: available
// range: 0x194a61-0x194d56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _RPSocketReadDictionary(long param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int local_34;
  long local_30;
  
  local_30 = 0;
  local_34 = -1;
  bVar2 = _RPSocketReadBuffer(param_1,&local_34,4);
  iVar1 = local_34;
  if ((bVar2 & local_34 != -1) == 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
    if (((lVar4 != 0) || (lVar4 = _getDefaultLogCtx(), lVar4 != 0)) && (2 < *(int *)(lVar4 + 0x10)))
    {
      uVar5 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      _LogMsg(3,lVar4,uVar5,0x28a,"RPSocketReadDictionary",0,&cf_failedtoreadlengthfrom__,param_1);
      return 0;
    }
    return 0;
  }
  lVar8 = (long)local_34;
  lVar4 = _CFDataCreateMutable(0,lVar8);
  if (lVar4 == 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
    if ((lVar4 == 0) && (lVar4 = _getDefaultLogCtx(), lVar4 == 0)) {
      return 0;
    }
    if (*(int *)(lVar4 + 0x10) < 3) {
      return 0;
    }
    uVar5 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    _LogMsg(3,lVar4,uVar5,0x290,"RPSocketReadDictionary",0,
            &cf_CFDataCreateMutablefailedforlen_dfor__,iVar1,param_1);
    return 0;
  }
  _CFDataSetLength(lVar4,lVar8);
  uVar5 = _CFDataGetMutableBytePtr(lVar4);
  cVar3 = _RPSocketReadBuffer(param_1,uVar5,lVar8);
  if (cVar3 == '\0') {
    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
    if (((lVar8 != 0) || (lVar8 = _getDefaultLogCtx(), lVar8 != 0)) && (2 < *(int *)(lVar8 + 0x10)))
    {
      uVar5 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      lVar6 = 0;
      _LogMsg(3,lVar8,uVar5,0x296,"RPSocketReadDictionary",0,&cf_RPSocketReadBufferfailedfrom__,
              param_1);
      goto LAB_00194d3f;
    }
  }
  else {
    lVar6 = _CFPropertyListCreateWithData(0,lVar4,2,0,&local_30);
    if ((lVar6 == 0) || (local_30 != 0)) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
      if (((lVar8 != 0) || (lVar8 = _getDefaultLogCtx(), lVar8 != 0)) &&
         (2 < *(int *)(lVar8 + 0x10))) {
        uVar5 = _baseName(
                         "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                         );
        _LogMsg(3,lVar8,uVar5,0x29c,"RPSocketReadDictionary",0,
                &cf_failedtodeserializedictionaryfrom_____,param_1,local_30);
      }
      goto LAB_00194d3f;
    }
    lVar8 = _CFGetTypeID(lVar6);
    lVar7 = _CFDictionaryGetTypeID();
    if (lVar8 == lVar7) goto LAB_00194d3f;
    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
    if (((lVar8 != 0) || (lVar8 = _getDefaultLogCtx(), lVar8 != 0)) && (2 < *(int *)(lVar8 + 0x10)))
    {
      uVar5 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      _LogMsg(3,lVar8,uVar5,0x2a1,"RPSocketReadDictionary",0,&cf_plistfrom__wasnotadictionary,
              param_1);
    }
    _CFRelease(lVar6);
  }
  lVar6 = 0;
LAB_00194d3f:
  _CFRelease(lVar4);
  return lVar6;
}

