// rea decompile_all
// name: _RPSocksProxyStart
// address: 0x198acc
// body: available
// range: 0x198acc-0x198b7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _RPSocksProxyStart(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_R14;
  ulong uVar4;
  
  cVar1 = __RPSocksProxyStart(param_1,0);
  uVar4 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  if (cVar1 != '\0') goto LAB_00198b6f;
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 == 0) {
    lVar2 = _getDefaultLogCtx();
    if (lVar2 != 0) goto LAB_00198b04;
  }
  else {
LAB_00198b04:
    if (2 < *(int *)(lVar2 + 0x10)) {
      uVar3 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                       );
      _LogMsg(3,lVar2,uVar3,399,"RPSocksProxyStart",0,
              &cf_Devicedoesn_tsupportnewprotocol_fallingbacktooldprotocolfornow);
    }
  }
  cVar1 = __RPSocksProxyStart(param_1,1);
  if (cVar1 == '\0') {
    _CFRetain(param_1);
    _RPSocksProxyInvalidate(param_1);
    _CFRelease(param_1);
    uVar4 = 0;
  }
LAB_00198b6f:
  return uVar4 & 0xffffffff;
}

