// rea decompile_all
// name: RPSocket_host::open_streams
// address: 0x195e9e
// body: available
// range: 0x195e9e-0x195f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x195f53 to 0x2aa752 _pthread_mutex_unlock (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket_host::open_streams() */

void __thiscall RPSocket_host::open_streams(RPSocket_host *this)

{
  long lVar1;
  undefined8 uVar2;
  
  _pthread_mutex_lock((pthread_mutex_t *)(this + 0x90));
  lVar1 = *(long *)(this + 0x28);
  if (lVar1 == 0) {
    lVar1 = _getDefaultLogCtx();
    if (lVar1 == 0) goto LAB_00195f24;
  }
  if (4 < *(int *)(lVar1 + 0x10)) {
    uVar2 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    _LogMsg(5,lVar1,uVar2,0x69a,"open_streams",0,&cf_openstreamsrd__pwt__pforsocket__p,
            *(undefined4 *)(this + 0xf0),*(undefined4 *)(this + 0xf8),this);
  }
LAB_00195f24:
  if (*(long *)(this + 0xf8) != 0) {
    _CFWriteStreamOpen();
  }
  if (*(long *)(this + 0xf0) != 0) {
    _CFReadStreamOpen();
  }
  _pthread_mutex_unlock((pthread_mutex_t *)(this + 0x90));
  return;
}

