// rea decompile_all
// name: _SendReply
// address: 0x19360c
// body: available
// range: 0x19360c-0x193781 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19377d to 0x2aa374 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _SendReply(long param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  size_t sVar5;
  long lVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    lVar6 = 0;
    lVar3 = 0;
  }
  else {
    uVar2 = _CFStringGetLength();
    lVar3 = _CFStringGetMaximumSizeForEncoding(uVar2,0x8000100);
    lVar6 = *(long *)(param_1 + 0x50);
  }
  lVar10 = 5;
  if (5 < lVar3) {
    lVar10 = lVar3;
  }
  puVar4 = _malloc(lVar10 + 8);
  if (lVar6 == 0) {
LAB_00193681:
    puVar4[9] = 0x72;
    *(undefined4 *)(puVar4 + 5) = 0x6f727265;
  }
  else {
    cVar1 = _CFStringGetCString(lVar6,puVar4 + 5,lVar10 + 3,0x8000100);
    if (cVar1 == '\0') goto LAB_00193681;
  }
  sVar5 = _strlen(puVar4 + 5);
  if (0xff < sVar5) {
    builtin_strncpy(puVar4 + 5,"error",5);
    sVar5 = 5;
  }
  *puVar4 = 5;
  puVar4[1] = param_2;
  *(undefined2 *)(puVar4 + 2) = 0x300;
  puVar4[4] = (char)sVar5;
  *(ushort *)(puVar4 + sVar5 + 5) =
       *(ushort *)(param_1 + 0x15c) << 8 | *(ushort *)(param_1 + 0x15c) >> 8;
  cVar1 = _RPSocketWrite(*(undefined8 *)(param_1 + 0x10),puVar4,sVar5 + 7);
  if (cVar1 != '\0') goto LAB_0019376c;
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 == 0) {
    lVar6 = _getDefaultLogCtx();
    if (lVar6 != 0) goto LAB_00193706;
  }
  else {
LAB_00193706:
    if (2 < *(int *)(lVar6 + 0x10)) {
      uVar2 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Socks5/Socks5Server.c"
                       );
      piVar7 = ___error();
      pcVar8 = _strerror(*piVar7);
      uVar9 = _CFStringCreateWithCString(0,pcVar8,0x8000100);
      _LogMsg(3,lVar6,uVar2,0x7e,"SendReply",uVar9,&cf_writereply);
    }
  }
  _RPSocketInvalidate(*(undefined8 *)(param_1 + 0x10));
LAB_0019376c:
  _free(puVar4);
  return;
}

