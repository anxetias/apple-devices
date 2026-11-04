// rea decompile_all
// name: RPSocket_host::~RPSocket_host
// address: 0x197ce0
// body: available
// range: 0x197ce0-0x197dc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x197dc0 to 0x196926 RPSocket::~RPSocket (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket_host::~RPSocket_host() */

void __thiscall RPSocket_host::~RPSocket_host(RPSocket_host *this)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined ***)this = &PTR_read_0044abe8;
  lVar1 = *(long *)(this + 0x28);
  if (lVar1 == 0) {
    lVar1 = _getDefaultLogCtx();
    if (lVar1 == 0) goto LAB_00197d52;
  }
  if (4 < *(int *)(lVar1 + 0x10)) {
    uVar2 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    _LogMsg(5,lVar1,uVar2,0x680,"~RPSocket_host",0,&cf_DeleteRPSocket_host__p,this);
  }
LAB_00197d52:
  (**(code **)(*(long *)this + 0x20))(this);
  if ((*(dispatch_object_t *)(this + 0x128))._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(*(dispatch_object_t *)(this + 0x128));
    *(undefined8 *)(this + 0x128) = 0;
  }
  if ((*(dispatch_object_t *)(this + 0x120))._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(*(dispatch_object_t *)(this + 0x120));
    *(undefined8 *)(this + 0x120) = 0;
  }
  if (*(long *)(this + 0x118) != 0) {
    _CFRelease();
  }
  if (*(long *)(this + 0x100) != 0) {
    _CFRelease();
  }
  RPSocket::~RPSocket((RPSocket *)this);
  return;
}

