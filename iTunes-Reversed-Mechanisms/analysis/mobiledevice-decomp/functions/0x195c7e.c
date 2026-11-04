// rea decompile_all
// name: RPSocket_host::RPSocket_host
// address: 0x195c7e
// body: available
// range: 0x195c7e-0x195db6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket_host::RPSocket_host($_0*, __CFString const*, unsigned short, __CFDictionary const*) */

void __thiscall
RPSocket_host::RPSocket_host
          (RPSocket_host *this,__0 *param_1,__CFString *param_2,ushort param_3,
          __CFDictionary *param_4)

{
  long lVar1;
  undefined8 uVar2;
  dispatch_object_t object;
  dispatch_semaphore_t pdVar3;
  
  RPSocket::RPSocket((RPSocket *)this);
  *(undefined ***)this = &PTR_read_0044abe8;
  RPSocket::set_log_ctx((RPSocket *)this,param_1);
  lVar1 = *(long *)(this + 0x28);
  if (lVar1 == 0) {
    lVar1 = _getDefaultLogCtx();
    if (lVar1 == 0) goto LAB_00195d12;
  }
  if (4 < *(int *)(lVar1 + 0x10)) {
    uVar2 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    _LogMsg(5,lVar1,uVar2,0x667,"RPSocket_host",0,&cf_CreatingRPSocket_host__p,this);
  }
LAB_00195d12:
  *(__CFString **)(this + 0x100) = param_2;
  if (param_2 != (__CFString *)0x0) {
    _CFRetain(param_2);
  }
  *(ushort *)(this + 0x108) = param_3;
  if (param_4 != (__CFDictionary *)0x0) {
    _CFRetain(param_4);
  }
  *(__CFDictionary **)(this + 0x118) = param_4;
  object._os_obj =
       (_os_object_s *)
       _dispatch_queue_create("com.apple.PurpleReverseProxy.EventQueue",(dispatch_queue_attr_t)0x0);
  *(dispatch_object_t *)(this + 0x120) = object;
  _dispatch_suspend(object);
  this[0x130] = (RPSocket_host)0x0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  pdVar3 = _dispatch_semaphore_create(0);
  *(dispatch_semaphore_t *)(this + 0x128) = pdVar3;
  _CFRetain(*(undefined8 *)(this + 8));
  uVar2 = _RPStreamCreate(param_2,param_3,_RPStreamAvailableCB,this,*(undefined8 *)(this + 0x38));
  *(undefined8 *)(this + 0x110) = uVar2;
  return;
}

