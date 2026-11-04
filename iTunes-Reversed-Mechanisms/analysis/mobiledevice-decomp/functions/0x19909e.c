// rea decompile_all
// name: _RPSocksProxyConnect
// address: 0x19909e
// body: available
// range: 0x19909e-0x1991cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _RPSocksProxyConnect(long param_1,undefined2 param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    lVar3 = *(long *)(param_1 + 0x90);
    if ((lVar3 == 0) && (lVar3 = _getDefaultLogCtx(), lVar3 == 0)) {
      return 0;
    }
    if (*(int *)(lVar3 + 0x10) < 3) {
      return 0;
    }
    uVar4 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                     );
    pcVar8 = &cf_unabletoconnectafterinvalidation;
    uVar7 = 0x26;
    uVar6 = 0;
  }
  else {
    piVar1 = ___error();
    *piVar1 = 0;
    lVar2 = (**(code **)(param_1 + 0x60))(param_1,param_2,*(undefined8 *)(param_1 + 0x68));
    lVar3 = *(long *)(param_1 + 0x90);
    if (lVar2 != 0) {
      _RPSocketSetLogCtx(lVar2,lVar3);
      return lVar2;
    }
    if (((lVar3 == 0) && (lVar3 = _getDefaultLogCtx(), lVar3 == 0)) || (*(int *)(lVar3 + 0x10) < 3))
    {
      return 0;
    }
    uVar4 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                     );
    piVar1 = ___error();
    pcVar5 = _strerror(*piVar1);
    uVar6 = _CFStringCreateWithCString(0,pcVar5,0x8000100);
    pcVar8 = &cf_failedtoconnect;
    uVar7 = 0x2d;
  }
  _LogMsg(3,lVar3,uVar4,uVar7,"RPSocksProxyConnect",uVar6,pcVar8);
  return 0;
}

