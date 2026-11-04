// rea decompile_all
// name: _copyEntitlementsForSocketPeer
// address: 0x19852b
// body: available
// range: 0x19852b-0x1985f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _copyEntitlementsForSocketPeer(int param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  socklen_t local_28;
  undefined4 local_24;
  
  local_28 = 4;
  iVar1 = _getsockopt(param_1,6,0x204,&local_24,&local_28);
  if (iVar1 == 0) {
    uVar6 = _copyEntitlementsForPid(local_24);
  }
  else {
    lVar2 = _getDefaultLogCtx();
    if ((lVar2 == 0) || (*(int *)(lVar2 + 0x10) < 3)) {
      uVar6 = 0;
    }
    else {
      pcVar3 = _strrchr("/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/Utilities.c"
                        ,0x2f);
      pcVar7 = pcVar3 + 1;
      if (pcVar3 == (char *)0x0) {
        pcVar7 = 
        "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/Utilities.c"
        ;
      }
      piVar4 = ___error();
      pcVar3 = _strerror(*piVar4);
      uVar6 = 0;
      uVar5 = _CFStringCreateWithCString(0,pcVar3,0x8000100);
      _LogMsg(3,lVar2,pcVar7,0x12a,"copyEntitlementsForSocketPeer",uVar5,&cf_getsockopt);
    }
  }
  return uVar6;
}

