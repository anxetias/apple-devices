// rea decompile_all
// name: __RPSocksProxyStart
// address: 0x198b7d
// body: available
// range: 0x198b7d-0x198f06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __RPSocksProxyStart(long param_1,char param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined2 local_3c [2];
  int local_38;
  undefined2 local_32;
  
  local_32 = 0;
  local_38 = -1;
  lVar2 = _RPSocksProxyConnect(param_1,*(undefined2 *)(param_1 + 0x7c));
  if (lVar2 == 0) {
    uVar7 = 0;
    goto LAB_00198e19;
  }
  if (param_2 == '\0') {
    cVar1 = _RPSocketWriteMessage(lVar2,"BeginCtrl");
    if (cVar1 == '\0') goto LAB_00198de6;
    lVar3 = _createCommandDictionary(&cf_BeginCtrl);
    _setDictionaryIntValue(lVar3,&cf_CtrlProtoVersion,2);
    cVar1 = _RPSocketWriteDictionary(lVar2,lVar3);
    if ((cVar1 != '\0') && (lVar4 = _RPSocketReadDictionary(lVar2), lVar4 != 0)) {
      cVar1 = _getDictionaryIntValue(lVar4,&cf_CtrlProtoVersion,&local_38);
      if (cVar1 == '\0') {
        lVar5 = *(long *)(param_1 + 0x90);
        if (((lVar5 != 0) || (lVar5 = _getDefaultLogCtx(), lVar5 != 0)) &&
           (2 < *(int *)(lVar5 + 0x10))) {
          uVar6 = _baseName(
                           "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                           );
          uVar7 = 0;
          _LogMsg(3,lVar5,uVar6,0xe7,"_RPSocksProxyStart",0,&cf_Devicedidn_tspecifyctrlprotoversion)
          ;
          goto LAB_00198def;
        }
      }
      else {
        if (((local_38 != 2) &&
            ((lVar5 = *(long *)(param_1 + 0x90), lVar5 != 0 ||
             (lVar5 = _getDefaultLogCtx(), lVar5 != 0)))) && (2 < *(int *)(lVar5 + 0x10))) {
          uVar6 = _baseName(
                           "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                           );
          _LogMsg(3,lVar5,uVar6,0xec,"_RPSocksProxyStart",0,
                  &cf_Mismatchedctrlprotoversion_expected_d_got_d__thismayormaynotwork,2,local_38);
        }
        cVar1 = _getDictionaryIntValue(lVar4,&cf_ConnPort,local_3c);
        if (cVar1 != '\0') {
          local_32 = local_3c[0];
          goto LAB_00198d24;
        }
        lVar5 = *(long *)(param_1 + 0x90);
        if (((lVar5 != 0) || (lVar5 = _getDefaultLogCtx(), lVar5 != 0)) &&
           (2 < *(int *)(lVar5 + 0x10))) {
          uVar6 = _baseName(
                           "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                           );
          _LogMsg(3,lVar5,uVar6,0xf1,"_RPSocksProxyStart",0,&cf_Devicedidn_tspecifyconnportnumber);
        }
      }
      uVar7 = 0;
      goto LAB_00198def;
    }
LAB_00198dec:
    uVar7 = 0;
    lVar4 = 0;
LAB_00198def:
    _RPSocketInvalidate(lVar2);
    _RPRelease(lVar2);
  }
  else {
    cVar1 = _RPSocketWriteMessage(lVar2,"HelloCtrl");
    if (((cVar1 == '\0') ||
        (cVar1 = _RPSocketReceiveExpectedMessage(lVar2,"HelloCtrl"), cVar1 == '\0')) ||
       (cVar1 = _RPSocketReadBuffer(lVar2,&local_32,2), cVar1 == '\0')) {
LAB_00198de6:
      lVar3 = 0;
      goto LAB_00198dec;
    }
    local_38 = 1;
    lVar3 = 0;
    lVar4 = 0;
LAB_00198d24:
    lVar5 = *(long *)(param_1 + 0x90);
    if (((lVar5 != 0) || (lVar5 = _getDefaultLogCtx(), lVar5 != 0)) && (6 < *(int *)(lVar5 + 0x10)))
    {
      uVar6 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                       );
      _LogMsg(7,lVar5,uVar6,0xf7,"_RPSocksProxyStart",0,&cf_connport_d,local_32);
    }
    _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
    lVar5 = *(long *)(param_1 + 0x70);
    *(long *)(param_1 + 0x70) = lVar2;
    *(int *)(param_1 + 0x78) = local_38;
    *(undefined2 *)(param_1 + 0x7e) = local_32;
    _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
    _RPSocketSetClient(lVar2,_ControlMessage,param_1);
    _RPSocketResume(lVar2);
    uVar7 = CONCAT71((int7)((ulong)param_1 >> 8),1);
    lVar2 = lVar5;
    if (lVar5 != 0) goto LAB_00198def;
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
LAB_00198e19:
  return uVar7 & 0xffffffff;
}

