// rea decompile_all
// name: _srvSocketOpened
// address: 0x1938db
// body: available
// range: 0x1938db-0x193d12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _srvSocketOpened(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  cfstringStruct *pcVar10;
  char cVar11;
  int local_3c;
  long local_38;
  
  if (param_2 == 0x10) {
    lVar3 = *(long *)(param_3 + 0x20);
    if (((lVar3 == 0) && (lVar3 = _getDefaultLogCtx(), lVar3 == 0)) || (*(int *)(lVar3 + 0x10) < 7))
    goto LAB_00193ce1;
    uVar4 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                     );
    pcVar10 = &cf_kCFStreamEventEndEncountered;
    uVar9 = 7;
    uVar8 = 0x113;
  }
  else {
    if (param_2 == 8) {
      lVar3 = _RPSocketCopyError();
      if (lVar3 == 0) {
        lVar3 = *(long *)(param_3 + 0x20);
        if ((lVar3 == 0) && (lVar3 = _getDefaultLogCtx(), lVar3 == 0)) {
          cVar11 = '\x01';
        }
        else {
          cVar11 = '\x01';
          if (6 < *(int *)(lVar3 + 0x10)) {
            uVar4 = _baseName(
                             "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                             );
            _LogMsg(7,lVar3,uVar4,0x10a,"srvSocketOpened",0,&cf_kCFStreamEventErrorOccurred);
          }
        }
      }
      else {
        lVar5 = _CFErrorGetDomain(lVar3);
        local_38 = _CFErrorGetCode(lVar3);
        lVar6 = _CFErrorCopyUserInfo(lVar3);
        lVar7 = *(long *)(param_3 + 0x20);
        if (((lVar7 != 0) || (lVar7 = _getDefaultLogCtx(), lVar7 != 0)) &&
           (2 < *(int *)(lVar7 + 0x10))) {
          uVar4 = _baseName(
                           "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                           );
          _LogMsg(3,lVar7,uVar4,0xee,"srvSocketOpened",0,
                  &cf_kCFStreamEventErrorOccurredfor____d________ld_userinfo____,
                  *(undefined8 *)(param_3 + 0x50),*(undefined2 *)(param_3 + 0x15c),lVar3,lVar5,
                  local_38,lVar6);
        }
        cVar11 = '\x01';
        if (lVar5 != 0) {
          cVar1 = _CFEqual(lVar5,*(undefined8 *)PTR__kCFErrorDomainPOSIX_00441140);
          if (cVar1 == '\0') {
            cVar1 = _CFEqual(lVar5,&cf_kCFErrorDomainCFNetwork);
            if (cVar1 != '\0') {
              bVar2 = _getDictionaryIntValue(lVar6,&cf_kCFGetAddrInfoFailureKey,&local_3c);
              cVar11 = (local_3c == 8 & bVar2) * '\x03' + '\x01';
            }
          }
          else if (local_38 == 0x41) {
            cVar11 = '\x04';
          }
          else if (local_38 == 0x3d) {
            cVar11 = '\x05';
          }
          else if (local_38 == 0x33) {
            cVar11 = '\x03';
          }
        }
        _CFRelease(lVar3);
        if (lVar6 != 0) {
          _CFRelease(lVar6);
        }
      }
      _SendReply(param_3,cVar11);
      goto LAB_00193ce1;
    }
    if (param_2 == 1) {
      if (*(char *)(param_3 + 0x161) == '\0') {
        *(undefined1 *)(param_3 + 0x161) = 1;
        lVar3 = *(long *)(param_3 + 0x20);
        if (((lVar3 != 0) || (lVar3 = _getDefaultLogCtx(), lVar3 != 0)) &&
           (4 < *(int *)(lVar3 + 0x10))) {
          uVar4 = _baseName(
                           "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                           );
          _LogMsg(5,lVar3,uVar4,0xd3,"srvSocketOpened",0,&cf_Successfullyconnectedto____d,
                  *(undefined8 *)(param_3 + 0x50),*(undefined2 *)(param_3 + 0x15c));
        }
        _SendReply(param_3,0);
        _RPSocketExchangeData(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
        _RPSocketResume(*(undefined8 *)(param_3 + 0x10));
        _RPRelease(*(undefined8 *)(param_3 + 0x10));
        *(undefined8 *)(param_3 + 0x10) = 0;
        _RPRelease(*(undefined8 *)(param_3 + 0x18));
        *(undefined8 *)(param_3 + 0x18) = 0;
        return;
      }
      lVar3 = *(long *)(param_3 + 0x20);
      if ((lVar3 == 0) && (lVar3 = _getDefaultLogCtx(), lVar3 == 0)) {
        return;
      }
      if (*(int *)(lVar3 + 0x10) < 3) {
        return;
      }
      uVar4 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                       );
      _LogMsg(3,lVar3,uVar4,0xce,"srvSocketOpened",0,&cf_Alreadyconnectedto____d_,
              *(undefined8 *)(param_3 + 0x50),*(undefined2 *)(param_3 + 0x15c));
      return;
    }
    lVar3 = *(long *)(param_3 + 0x20);
    if (((lVar3 == 0) && (lVar3 = _getDefaultLogCtx(), lVar3 == 0)) || (*(int *)(lVar3 + 0x10) < 3))
    goto LAB_00193ce1;
    uVar4 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                     );
    pcVar10 = &cf_unknowncallbacktype_lu;
    uVar9 = 3;
    uVar8 = 0x118;
  }
  _LogMsg(uVar9,lVar3,uVar4,uVar8,"srvSocketOpened",0,pcVar10);
LAB_00193ce1:
  _RPSocketInvalidate(*(undefined8 *)(param_3 + 0x10));
  _RPSocketInvalidate(*(undefined8 *)(param_3 + 0x18));
  _RPSocketResume(*(undefined8 *)(param_3 + 0x10));
  return;
}

