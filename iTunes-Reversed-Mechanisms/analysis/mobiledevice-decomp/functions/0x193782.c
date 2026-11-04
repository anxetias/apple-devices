// rea decompile_all
// name: _SendAuthReply
// address: 0x193782
// body: available
// range: 0x193782-0x19383c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _SendAuthReply(long param_1,byte param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 local_22;
  byte local_21;
  
  local_22 = 1;
  local_21 = param_2 ^ 1;
  cVar1 = _RPSocketWrite(*(undefined8 *)(param_1 + 0x10),&local_22,2);
  if (cVar1 == '\0') {
    lVar2 = *(long *)(param_1 + 0x20);
    if (((lVar2 != 0) || (lVar2 = _getDefaultLogCtx(), lVar2 != 0)) && (2 < *(int *)(lVar2 + 0x10)))
    {
      uVar3 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                       );
      piVar4 = ___error();
      pcVar5 = _strerror(*piVar4);
      uVar6 = _CFStringCreateWithCString(0,pcVar5,0x8000100);
      _LogMsg(3,lVar2,uVar3,0x97,"SendAuthReply",uVar6,&cf_writeauthreply);
    }
    _RPSocketInvalidate(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}

