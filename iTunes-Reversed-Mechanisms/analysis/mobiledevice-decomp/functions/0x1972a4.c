// rea decompile_all
// name: RPSocket_fd::~RPSocket_fd
// address: 0x1972a4
// body: available
// range: 0x1972a4-0x197349 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x197345 to 0x196926 RPSocket::~RPSocket (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket_fd::~RPSocket_fd() */

void __thiscall RPSocket_fd::~RPSocket_fd(RPSocket_fd *this)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined ***)this = &PTR_read_0044a9f0;
  lVar1 = *(long *)(this + 0x28);
  if (lVar1 == 0) {
    lVar1 = _getDefaultLogCtx();
    if (lVar1 == 0) goto LAB_00197316;
  }
  if (4 < *(int *)(lVar1 + 0x10)) {
    uVar2 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    _LogMsg(5,lVar1,uVar2,0x42e,"~RPSocket_fd",0,&cf_ReleasingRPSocket_fd__p,this);
  }
LAB_00197316:
  _dispatch_source_cancel(*(dispatch_source_t *)(this + 0x180));
  _dispatch_release(*(dispatch_object_t *)(this + 0x180));
  _dispatch_release(*(dispatch_object_t *)(this + 0xf8));
  RPSocket::~RPSocket((RPSocket *)this);
  return;
}

