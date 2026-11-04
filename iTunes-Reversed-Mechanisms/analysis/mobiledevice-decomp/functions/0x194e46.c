// rea decompile_all
// name: _RPSocketWriteDictionary
// address: 0x194e46
// body: available
// range: 0x194e46-0x195128 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _RPSocketWriteDictionary(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_R15;
  ulong uVar7;
  undefined4 local_3c;
  long local_38;
  
  local_38 = 0;
  if (param_2 == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
    if (((lVar2 == 0) && (lVar2 = _getDefaultLogCtx(), lVar2 == 0)) || (*(int *)(lVar2 + 0x10) < 3))
    {
      uVar7 = 0;
    }
    else {
      uVar5 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      uVar7 = 0;
      _LogMsg(3,lVar2,uVar5,0x2cf,"RPSocketWriteDictionary",0,&cf_nodictionarytosendto__,param_1);
    }
    goto LAB_00195109;
  }
  lVar2 = _CFPropertyListCreateData(0,param_2,200,0,&local_38);
  if ((lVar2 == 0) || (local_38 != 0)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
    if (((lVar3 != 0) || (lVar3 = _getDefaultLogCtx(), lVar3 != 0)) && (2 < *(int *)(lVar3 + 0x10)))
    {
      uVar5 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      _LogMsg(3,lVar3,uVar5,0x2d5,"RPSocketWriteDictionary",0,&cf_failedtoserializedictionaryto_____
              ,param_1,local_38);
    }
    uVar7 = 0;
    if (lVar2 == 0) goto LAB_00195109;
  }
  else {
    lVar3 = _CFDataGetLength(lVar2);
    if (lVar3 < 0x80000000) {
      local_3c = (undefined4)lVar3;
      cVar1 = _RPSocketWrite(param_1,&local_3c,4);
      if (cVar1 == '\0') {
        lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
        if (((lVar3 == 0) && (lVar3 = _getDefaultLogCtx(), lVar3 == 0)) ||
           (*(int *)(lVar3 + 0x10) < 3)) goto LAB_001950fe;
        uVar5 = _baseName(
                         "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                         );
        uVar6 = 0x2e0;
LAB_001950ea:
        uVar7 = 0;
        _LogMsg(3,lVar3,uVar5,uVar6,"RPSocketWriteDictionary",0,&cf_failedtowritelengthto__,param_1)
        ;
      }
      else {
        uVar5 = _CFDataGetBytePtr(lVar2);
        cVar1 = _RPSocketWrite(param_1,uVar5,lVar3);
        uVar7 = CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
        if (cVar1 == '\0') {
          lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
          if (((lVar3 != 0) || (lVar3 = _getDefaultLogCtx(), lVar3 != 0)) &&
             (2 < *(int *)(lVar3 + 0x10))) {
            uVar5 = _baseName(
                             "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                             );
            uVar6 = 0x2e5;
            goto LAB_001950ea;
          }
LAB_001950fe:
          uVar7 = 0;
        }
      }
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
      if (((lVar4 == 0) && (lVar4 = _getDefaultLogCtx(), lVar4 == 0)) ||
         (*(int *)(lVar4 + 0x10) < 3)) goto LAB_001950fe;
      uVar5 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      uVar7 = 0;
      _LogMsg(3,lVar4,uVar5,0x2db,"RPSocketWriteDictionary",0,&cf_datatoobigfor____lu,param_1,lVar3)
      ;
    }
  }
  _CFRelease(lVar2);
LAB_00195109:
  if (local_38 != 0) {
    _CFRelease();
  }
  return uVar7 & 0xffffffff;
}

