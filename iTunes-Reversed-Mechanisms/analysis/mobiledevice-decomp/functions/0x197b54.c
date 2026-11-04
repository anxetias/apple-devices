// rea decompile_all
// name: RPSocket_host::_invalidate
// address: 0x197b54
// body: available
// range: 0x197b54-0x197cdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x197cdb to 0x2aa752 _pthread_mutex_unlock (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket_host::_invalidate() */

void __thiscall RPSocket_host::_invalidate(RPSocket_host *this)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(this + 0x28);
  if (lVar1 == 0) {
    lVar1 = _getDefaultLogCtx();
    if (lVar1 != 0) goto LAB_00197b77;
  }
  else {
LAB_00197b77:
    if (4 < *(int *)(lVar1 + 0x10)) {
      uVar2 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      _LogMsg(5,lVar1,uVar2,0x6c9,"_invalidate",0,&cf_InvalidateRPSocket_host__p_Lockingmutex,this);
    }
  }
  _pthread_mutex_lock((pthread_mutex_t *)(this + 0x90));
  lVar1 = *(long *)(this + 0x28);
  if (lVar1 == 0) {
    lVar1 = _getDefaultLogCtx();
    if (lVar1 == 0) goto LAB_00197c2e;
  }
  if (4 < *(int *)(lVar1 + 0x10)) {
    uVar2 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    _LogMsg(5,lVar1,uVar2,0x6cc,"_invalidate",0,&cf_InvalidateRPSocket_host__p_invalidated__d,this,
            this[0x130]);
  }
LAB_00197c2e:
  if (this[0x130] == (RPSocket_host)0x0) {
    if (*(long *)(this + 0xf0) != 0) {
      _CFReadStreamClose();
      _CFReadStreamSetClient(*(undefined8 *)(this + 0xf0),0,0,0);
      _CFReadStreamSetDispatchQueue(*(undefined8 *)(this + 0xf0),0);
      _CFRelease(*(undefined8 *)(this + 0xf0));
      *(undefined8 *)(this + 0xf0) = 0;
    }
    if (*(long *)(this + 0xf8) != 0) {
      _CFWriteStreamClose();
      _CFRelease(*(undefined8 *)(this + 0xf8));
      *(undefined8 *)(this + 0xf8) = 0;
    }
    if (*(long *)(this + 0x110) != 0) {
      _RPStreamDestroy();
      *(undefined8 *)(this + 0x110) = 0;
    }
    this[0x130] = (RPSocket_host)0x1;
  }
  _pthread_mutex_unlock((pthread_mutex_t *)(this + 0x90));
  return;
}

