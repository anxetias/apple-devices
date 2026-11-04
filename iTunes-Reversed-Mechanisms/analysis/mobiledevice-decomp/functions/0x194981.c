// rea decompile_all
// name: _RPSocketReceiveExpectedMessage
// address: 0x194981
// body: available
// range: 0x194981-0x194a60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _RPSocketReceiveExpectedMessage(long param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  sVar3 = _strlen(param_2);
  sVar3 = sVar3 + 1;
  pvVar4 = _malloc(sVar3);
  cVar1 = _RPSocketReadBuffer(param_1,pvVar4,sVar3);
  if (cVar1 != '\0') {
    iVar2 = _memcmp(pvVar4,param_2,sVar3);
    if (iVar2 == 0) {
      uVar7 = CONCAT71((int7)(sVar3 >> 8),1);
      goto LAB_00194a42;
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
    if (lVar5 == 0) {
      lVar5 = _getDefaultLogCtx();
      if (lVar5 == 0) goto LAB_00194a3a;
    }
    if (2 < *(int *)(lVar5 + 0x10)) {
      uVar6 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      uVar7 = 0;
      _LogMsg(3,lVar5,uVar6,0x278,"RPSocketReceiveExpectedMessage",0,
              &cf_invalidmessagefrom___expecting__s_,param_1,param_2);
      goto LAB_00194a42;
    }
  }
LAB_00194a3a:
  uVar7 = 0;
LAB_00194a42:
  if (pvVar4 != (void *)0x0) {
    _free(pvVar4);
  }
  return uVar7 & 0xffffffff;
}

