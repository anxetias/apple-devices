// rea decompile_all
// name: RPSocket::RPSocket
// address: 0x1965fc
// body: available
// range: 0x1965fc-0x196760 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket::RPSocket() */

void __thiscall RPSocket::RPSocket(RPSocket *this)

{
  dispatch_queue_t pdVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  
  *(undefined ***)this = &PTR____cxa_pure_virtual_0044aab0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  pdVar1 = _dispatch_queue_create((char *)0x0,(dispatch_queue_attr_t)0x0);
  *(dispatch_queue_t *)(this + 0x30) = pdVar1;
  pdVar1 = _dispatch_queue_create
                     ("com.apple.PurpleReverseProxy.RPSocket",(dispatch_queue_attr_t)0x0);
  *(dispatch_queue_t *)(this + 0x38) = pdVar1;
  add_synced_to_queue_hint(pdVar1,pdVar1);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  pvVar2 = _calloc(1,0x10);
  *(void **)(this + 0xe8) = pvVar2;
  *(undefined8 *)(this + 0xe0) = 0;
  _pthread_mutex_init((pthread_mutex_t *)(this + 0x90),(pthread_mutexattr_t *)0x0);
  _pthread_mutex_init((pthread_mutex_t *)(this + 0x48),(pthread_mutexattr_t *)0x0);
  lVar3 = ___CreateCFObject(&RPSocket()::__reg,0x18);
  *(long *)(this + 8) = lVar3;
  if (lVar3 == 0) {
    lVar3 = _getDefaultLogCtx();
    if ((lVar3 != 0) && (2 < *(int *)(lVar3 + 0x10))) {
      uVar4 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      _LogMsg(3,lVar3,uVar4,0xa1,"RPSocket",0,&cf_couldnotallocatesocket);
    }
  }
  else {
    *(RPSocket **)(lVar3 + 0x10) = this;
  }
  lVar3 = _getDefaultLogCtx();
  if ((lVar3 != 0) && (4 < *(int *)(lVar3 + 0x10))) {
    uVar4 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    _LogMsg(5,lVar3,uVar4,0xa5,"RPSocket",0,&cf_CreatingRPSocket__p__sockRef__p_,this,
            *(undefined8 *)(this + 8));
  }
  return;
}

