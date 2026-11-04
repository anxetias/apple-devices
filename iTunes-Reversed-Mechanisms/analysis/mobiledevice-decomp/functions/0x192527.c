// rea decompile_all
// name: _FinalizeRPSocksClient
// address: 0x192527
// body: available
// range: 0x192527-0x19260d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x192604 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _FinalizeRPSocksClient(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = _getDefaultLogCtx();
    if (lVar1 == 0) goto LAB_00192589;
  }
  if (6 < *(int *)(lVar1 + 0x10)) {
    uVar2 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                     );
    _LogMsg(7,lVar1,uVar2,0x44,"FinalizeRPSocksClient",0,&cf_releasingclient__,param_1);
  }
LAB_00192589:
  if (*(long *)(param_1 + 0x10) != 0) {
    _RPSocketInvalidate();
    _RPRelease(*(undefined8 *)(param_1 + 0x10));
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    _RPSocketInvalidate();
    _RPRelease(*(undefined8 *)(param_1 + 0x18));
  }
  _free(*(void **)(param_1 + 0x28));
  _free(*(void **)(param_1 + 0x30));
  _free(*(void **)(param_1 + 0x38));
  _free(*(void **)(param_1 + 0x40));
  if (*(long *)(param_1 + 0x48) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    _CFRelease();
    return;
  }
  return;
}

