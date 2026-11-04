// rea decompile_all
// name: __RPSocksProxyConnectToUSBMux
// address: 0x1988f9
// body: available
// range: 0x1988f9-0x1989f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __RPSocksProxyConnectToUSBMux(long param_1,ushort param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = 0;
  _CFNumberGetValue(param_3,3,&local_28);
  local_24 = 0xffffffff;
  iVar1 = _USBMuxConnectByPort(local_28,param_2 << 8 | param_2 >> 8);
  piVar2 = ___error();
  *piVar2 = iVar1;
  if (iVar1 == 0) {
    uVar4 = _RPSocksProxyCreateConnectionWithSocket(param_1,local_24);
    return uVar4;
  }
  piVar2 = ___error();
  *piVar2 = iVar1;
  lVar3 = *(long *)(param_1 + 0x90);
  if (((lVar3 != 0) || (lVar3 = _getDefaultLogCtx(), lVar3 != 0)) && (2 < *(int *)(lVar3 + 0x10))) {
    uVar4 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/ReverseProxyHost/ReverseProxyHost.c"
                     );
    piVar2 = ___error();
    pcVar5 = _strerror(*piVar2);
    uVar6 = _CFStringCreateWithCString(0,pcVar5,0x8000100);
    _LogMsg(3,lVar3,uVar4,0x14f,"_RPSocksProxyConnectToUSBMux",uVar6,&cf_USBMuxConnectByPort);
    return 0;
  }
  return 0;
}

