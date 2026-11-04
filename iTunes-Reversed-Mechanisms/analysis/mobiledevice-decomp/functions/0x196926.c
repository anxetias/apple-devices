// rea decompile_all
// name: RPSocket::~RPSocket
// address: 0x196926
// body: available
// range: 0x196926-0x196a2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x196a21 to 0x2aa374 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket::~RPSocket() */

void __thiscall RPSocket::~RPSocket(RPSocket *this)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined ***)this = &PTR____cxa_pure_virtual_0044aab0;
  lVar1 = *(long *)(this + 0x28);
  if (lVar1 == 0) {
    lVar1 = _getDefaultLogCtx();
    if (lVar1 == 0) goto LAB_001969a1;
  }
  if (4 < *(int *)(lVar1 + 0x10)) {
    uVar2 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    _LogMsg(5,lVar1,uVar2,0x80,"~RPSocket",0,&cf_ReleasingRPSocket__p__sockRef__p_,this,
            *(undefined8 *)(this + 8));
  }
LAB_001969a1:
  if (*(long *)(this + 0x20) != 0) {
    _CFRelease();
  }
  if (*(long *)(this + 0x28) != 0) {
    _CFRelease();
  }
  if (*(long *)(this + 0x10) != 0) {
    _CFRelease();
  }
  if ((*(dispatch_object_t *)(this + 0x30))._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(*(dispatch_object_t *)(this + 0x30));
  }
  if ((*(dispatch_object_t *)(this + 0x38))._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(*(dispatch_object_t *)(this + 0x38));
  }
  _pthread_mutex_destroy((pthread_mutex_t *)(this + 0x90));
  _pthread_mutex_destroy((pthread_mutex_t *)(this + 0x48));
  if (*(void **)(this + 0xe8) != (void *)0x0) {
    _free(*(void **)(this + 0xe8));
  }
  if (*(void **)(this + 0xe0) != (void *)0x0) {
    _free(*(void **)(this + 0xe0));
    return;
  }
  return;
}

