// rea decompile_all
// name: _RPSocksServerInvalidate
// address: 0x198686
// body: available
// range: 0x198686-0x198776 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x198767 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _RPSocksServerInvalidate(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _RPSocketCopyLogCtx();
  lVar2 = lVar1;
  if ((lVar1 == 0) && (lVar2 = _getDefaultLogCtx(), lVar2 == 0)) {
    _RPSocketInvalidate(param_1);
  }
  else {
    if (2 < *(int *)(lVar2 + 0x10)) {
      uVar3 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                       );
      _LogMsg(3,lVar2,uVar3,299,"RPSocksServerInvalidate",0,&cf_Proxyshuttingdown__);
    }
    _RPSocketInvalidate(param_1);
    lVar2 = lVar1;
    if (lVar1 != 0) goto LAB_00198716;
  }
  lVar2 = _getDefaultLogCtx();
  if (lVar2 == 0) {
    return;
  }
LAB_00198716:
  if (2 < *(int *)(lVar2 + 0x10)) {
    uVar3 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                     );
    _LogMsg(3,lVar2,uVar3,0x12d,"RPSocksServerInvalidate",0,&cf_Proxyshutdowncomplete__);
  }
  if (lVar1 == 0) {
    return;
  }
  _CFRelease(lVar1);
  return;
}

