// rea decompile_all
// name: RPSocket_host::prepare_stream
// address: 0x19790e
// body: available
// range: 0x19790e-0x197ab6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket_host::prepare_stream(__CFReadStream*, __CFWriteStream*) */

void __thiscall
RPSocket_host::prepare_stream(RPSocket_host *this,__CFReadStream *param_1,__CFWriteStream *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  _pthread_mutex_lock((pthread_mutex_t *)(this + 0x90));
  *(__CFReadStream **)(this + 0xf0) = param_1;
  *(__CFWriteStream **)(this + 0xf8) = param_2;
  lVar2 = *(long *)(this + 0x28);
  if (lVar2 == 0) {
    lVar2 = _getDefaultLogCtx();
    if (lVar2 != 0) goto LAB_00197959;
  }
  else {
LAB_00197959:
    if (4 < *(int *)(lVar2 + 0x10)) {
      uVar3 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      _LogMsg(5,lVar2,uVar3,0x639,"prepare_stream",0,&cf_Newstream_rd__p_wt__p_forRPSocket__p,
              *(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8),this);
    }
  }
  _CFRetain(*(undefined8 *)(this + 0xf0));
  _CFRetain(*(undefined8 *)(this + 0xf8));
  cVar1 = _CFReadStreamSetClient(*(undefined8 *)(this + 0xf0),0x1b,event_handler);
  if (cVar1 == '\0') {
    lVar2 = *(long *)(this + 0x28);
    if (lVar2 == 0) {
      lVar2 = _getDefaultLogCtx();
      if (lVar2 == 0) goto LAB_00197a83;
    }
    if (2 < *(int *)(lVar2 + 0x10)) {
      uVar3 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      _LogMsg(3,lVar2,uVar3,0x647,"prepare_stream",0,&cf_CFReadStreamSetClientfor__failedto____d,
              *(undefined8 *)(this + 8),*(undefined8 *)(this + 0x100),*(undefined2 *)(this + 0x108))
      ;
    }
  }
LAB_00197a83:
  _CFReadStreamSetDispatchQueue(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0x120));
  _pthread_mutex_unlock((pthread_mutex_t *)(this + 0x90));
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(this + 0x128));
  return;
}

