// rea decompile_all
// name: _WaitSocket
// address: 0x1980dd
// body: available
// range: 0x1980dd-0x198296 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _WaitSocket(int param_1,ulong param_2)

{
  int kq;
  int iVar1;
  long lVar2;
  char *pcVar3;
  int *piVar4;
  undefined8 uVar5;
  char *pcVar6;
  bool bVar7;
  kevent local_58;
  timespec local_38;
  
  kq = _kqueue();
  if (kq == -1) {
    lVar2 = _getDefaultLogCtx();
    if ((lVar2 == 0) || (*(int *)(lVar2 + 0x10) < 3)) {
      bVar7 = false;
    }
    else {
      pcVar3 = _strrchr("/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/Utilities.c"
                        ,0x2f);
      pcVar6 = pcVar3 + 1;
      if (pcVar3 == (char *)0x0) {
        pcVar6 = 
        "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/Utilities.c"
        ;
      }
      piVar4 = ___error();
      pcVar3 = _strerror(*piVar4);
      bVar7 = false;
      uVar5 = _CFStringCreateWithCString(0,pcVar3,0x8000100);
      _LogMsg(3,lVar2,pcVar6,0xce,"WaitSocket",uVar5,&cf_kqueue);
    }
  }
  else {
    local_38.tv_sec = (__darwin_time_t)(int)(param_2 / 1000000000);
    local_38.tv_nsec = param_2 % 1000000000;
    local_58.ident = (uintptr_t)param_1;
    local_58.filter = -1;
    local_58.flags = 0x11;
    local_58._12_8_ = 0;
    local_58._20_8_ = 0;
    local_58.udata._4_4_ = 0;
    iVar1 = _kevent(kq,&local_58,1,&local_58,1,&local_38);
    if (iVar1 == -1) {
      lVar2 = _getDefaultLogCtx();
      if ((lVar2 == 0) || (*(int *)(lVar2 + 0x10) < 3)) {
        bVar7 = false;
      }
      else {
        pcVar3 = _strrchr("/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/Utilities.c"
                          ,0x2f);
        pcVar6 = pcVar3 + 1;
        if (pcVar3 == (char *)0x0) {
          pcVar6 = 
          "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/Utilities.c"
          ;
        }
        piVar4 = ___error();
        pcVar3 = _strerror(*piVar4);
        bVar7 = false;
        uVar5 = _CFStringCreateWithCString(0,pcVar3,0x8000100);
        _LogMsg(3,lVar2,pcVar6,0xd8,"WaitSocket",uVar5,&cf_kevent);
      }
    }
    else {
      bVar7 = 0 < iVar1;
    }
    _close(kq);
  }
  return bVar7;
}

