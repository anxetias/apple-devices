// rea decompile_all
// name: RPSocket_fd::accept
// address: 0x196ae8
// body: available
// range: 0x196ae8-0x196bbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x196b32 to 0x1955c8 _RPCreateSocketForFD (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket_fd::accept(unsigned long long) */

undefined8 __thiscall RPSocket_fd::accept(RPSocket_fd *this,ulonglong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  if ((param_1 != 0) && (cVar1 = _WaitSocket(*(undefined4 *)(this + 0xf0)), cVar1 == '\0')) {
    return 0;
  }
  iVar2 = _accept(*(int *)(this + 0xf0),(sockaddr *)0x0,(socklen_t *)0x0);
  if (iVar2 != -1) {
    uVar3 = _RPCreateSocketForFD(iVar2,2);
    return uVar3;
  }
  lVar4 = *(long *)(this + 0x28);
  if ((lVar4 == 0) && (lVar4 = _getDefaultLogCtx(), lVar4 == 0)) {
    return 0;
  }
  if (2 < *(int *)(lVar4 + 0x10)) {
    uVar3 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    piVar5 = ___error();
    pcVar6 = _strerror(*piVar5);
    uVar7 = _CFStringCreateWithCString(0,pcVar6,0x8000100);
    _LogMsg(3,lVar4,uVar3,0x480,"accept",uVar7,&cf_acceptfor__,*(undefined8 *)(this + 8));
  }
  return 0;
}

