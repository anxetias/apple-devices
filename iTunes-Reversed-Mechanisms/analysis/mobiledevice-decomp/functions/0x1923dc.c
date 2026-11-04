// rea decompile_all
// name: _RPHandleSocksClient
// address: 0x1923dc
// body: available
// range: 0x1923dc-0x192526 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1924ab to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x192522 to 0x194718 _RPSocketInvalidate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _RPHandleSocksClient(undefined8 param_1,long param_2,char *param_3,char *param_4)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  lVar1 = _RPSocketCopyLogCtx();
  lVar2 = ___CreateCFObject(&_RPHandleSocksClient___reg,0x168);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x20) = lVar1;
    *(undefined8 *)(lVar2 + 0x10) = param_1;
    _CFRetain(param_1);
    if (param_3 != (char *)0x0) {
      pcVar3 = _strdup(param_3);
      *(char **)(lVar2 + 0x28) = pcVar3;
    }
    if (param_4 != (char *)0x0) {
      pcVar3 = _strdup(param_4);
      *(char **)(lVar2 + 0x30) = pcVar3;
    }
    if (param_2 != 0) {
      *(long *)(lVar2 + 0x48) = param_2;
      _CFRetain(param_2);
    }
    *(undefined4 *)(lVar2 + 0x158) = 1;
    *(undefined1 *)(lVar2 + 0x15e) = 2;
    *(undefined1 *)(lVar2 + 0x161) = 0;
    _RPSocketSetClient(*(undefined8 *)(lVar2 + 0x10),_ClientHasData,lVar2);
    _RPSocketResume(*(undefined8 *)(lVar2 + 0x10));
    _CFRelease(lVar2);
    return;
  }
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = _getDefaultLogCtx();
    if (lVar2 == 0) goto LAB_00192511;
  }
  if (2 < *(int *)(lVar2 + 0x10)) {
    uVar4 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                     );
    _LogMsg(3,lVar2,uVar4,0x23f,"RPHandleSocksClient",0,&cf_couldnotallocateproxy);
  }
  if (lVar1 != 0) {
    _CFRelease(lVar1);
  }
LAB_00192511:
  _RPSocketInvalidate(param_1);
  return;
}

