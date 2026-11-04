// rea decompile_all
// name: _ControlMessage
// address: 0x1991cc
// body: available
// range: 0x1991cc-0x199651 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1992d2 to 0x198f6d __RPSocksProxyInvalidate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ControlMessage(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar10;
  int local_2c;
  
  uVar10 = (undefined4)((ulong)in_stack_ffffffffffffffc0 >> 0x20);
  if (param_2 == 2) {
    iVar2 = _RPSocketReadInt();
    lVar3 = *(long *)(param_3 + 0x90);
    if (iVar2 == 2) {
      if (((lVar3 == 0) && (lVar3 = _getDefaultLogCtx(), lVar3 == 0)) ||
         (*(int *)(lVar3 + 0x10) < 7)) goto LAB_001992c3;
      uVar4 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                       );
      pcVar9 = &cf_wewereaskedtoshutdown;
      uVar7 = 7;
      uVar6 = 0xaf;
    }
    else {
      if (iVar2 == 1) {
        if (((lVar3 != 0) || (lVar3 = _getDefaultLogCtx(), lVar3 != 0)) &&
           (6 < *(int *)(lVar3 + 0x10))) {
          uVar4 = _baseName(
                           "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                           );
          _LogMsg(7,lVar3,uVar4,0x89,"ControlMessage",0,&cf_startingconnection__,param_1);
          uVar10 = (undefined4)((ulong)param_1 >> 0x20);
        }
        lVar3 = _RPSocksProxyConnect(param_3,*(undefined2 *)(param_3 + 0x7e));
        if (lVar3 == 0) goto LAB_001992c3;
        cVar1 = _RPSocketWriteMessage(lVar3,"HelloConn");
        if (cVar1 == '\0') {
LAB_0019956a:
          lVar5 = 0;
        }
        else if (*(int *)(param_3 + 0x78) == 1) {
          cVar1 = _RPSocketReceiveExpectedMessage(lVar3,"HelloConn");
          lVar5 = 0;
          lVar8 = 0;
          if (cVar1 != '\0') {
LAB_00199500:
            _RPHandleSocksClient
                      (lVar3,lVar8,*(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58));
            goto LAB_0019957d;
          }
        }
        else {
          lVar5 = _RPSocketReadDictionary(lVar3);
          if (lVar5 == 0) {
            lVar8 = *(long *)(param_3 + 0x90);
            if (((lVar8 == 0) && (lVar8 = _getDefaultLogCtx(), lVar8 == 0)) ||
               (*(int *)(lVar8 + 0x10) < 3)) goto LAB_0019956a;
            uVar4 = _baseName(
                             "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                             );
            pcVar9 = &cf_devicedidn_tsenddictionary;
            lVar5 = 0;
            uVar6 = 0x93;
LAB_00199643:
            _LogMsg(3,lVar8,uVar4,uVar6,"ControlMessage",0,pcVar9);
          }
          else {
            cVar1 = _getDictionaryIntValue(lVar5,&cf_ConnProtoVersion,&local_2c);
            if (cVar1 == '\0') {
              lVar8 = *(long *)(param_3 + 0x90);
              if (((lVar8 != 0) || (lVar8 = _getDefaultLogCtx(), lVar8 != 0)) &&
                 (2 < *(int *)(lVar8 + 0x10))) {
                uVar4 = _baseName(
                                 "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                                 );
                pcVar9 = &cf_Devicedidn_tspecifyconnprotoversion;
                uVar6 = 0x99;
                goto LAB_00199643;
              }
            }
            else {
              if (((local_2c != 2) &&
                  ((lVar8 = *(long *)(param_3 + 0x90), lVar8 != 0 ||
                   (lVar8 = _getDefaultLogCtx(), lVar8 != 0)))) && (2 < *(int *)(lVar8 + 0x10))) {
                uVar4 = _baseName(
                                 "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                                 );
                _LogMsg(3,lVar8,uVar4,0x9e,"ControlMessage",0,
                        &cf_Mismatchedconnprotoversion_expected_d_got_d__thismayormaynotwork,
                        CONCAT44(uVar10,2),local_2c);
              }
              lVar8 = _CFDictionaryGetValue(lVar5,&cf_Identifier);
              if (lVar8 != 0) {
                _RPSocketSetName(lVar3,&cf_Device___,lVar8);
                goto LAB_00199500;
              }
              lVar8 = *(long *)(param_3 + 0x90);
              if (((lVar8 != 0) || (lVar8 = _getDefaultLogCtx(), lVar8 != 0)) &&
                 (2 < *(int *)(lVar8 + 0x10))) {
                uVar4 = _baseName(
                                 "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                                 );
                pcVar9 = &cf_Devicedidn_tspecifyconnectionidentifier;
                uVar6 = 0xa3;
                goto LAB_00199643;
              }
            }
          }
        }
        _RPSocketInvalidate(lVar3);
        _RPSocketResume(lVar3);
LAB_0019957d:
        _RPRelease(lVar3);
        if (lVar5 != 0) {
          _CFRelease(lVar5);
        }
        return;
      }
      if (iVar2 == -1) {
        if (((lVar3 == 0) && (lVar3 = _getDefaultLogCtx(), lVar3 == 0)) ||
           (*(int *)(lVar3 + 0x10) < 7)) goto LAB_001992c3;
        uVar4 = _baseName(
                         "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                         );
        pcVar9 = &cf_shuttingdownproxythread;
        uVar7 = 7;
        uVar6 = 0x83;
      }
      else {
        if (((lVar3 == 0) && (lVar3 = _getDefaultLogCtx(), lVar3 == 0)) ||
           (*(int *)(lVar3 + 0x10) < 7)) goto LAB_001992c3;
        uVar4 = _baseName(
                         "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                         );
        pcVar9 = &cf_unknownmessage_u;
        uVar7 = 7;
        uVar6 = 0xb4;
      }
    }
  }
  else {
    lVar3 = *(long *)(param_3 + 0x90);
    if (((lVar3 == 0) && (lVar3 = _getDefaultLogCtx(), lVar3 == 0)) || (*(int *)(lVar3 + 0x10) < 3))
    goto LAB_001992c3;
    uVar4 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                     );
    pcVar9 = &cf_unexpectedevent_lu;
    uVar7 = 3;
    uVar6 = 0x7d;
  }
  _LogMsg(uVar7,lVar3,uVar4,uVar6,"ControlMessage",0,pcVar9);
LAB_001992c3:
  __RPSocksProxyInvalidate(param_3);
  return;
}

