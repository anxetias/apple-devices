// rea decompile_all
// name: RPSocket::EventCallback::invoke
// address: 0x197044
// body: available
// range: 0x197044-0x197154 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket::EventCallback::invoke() */

void __thiscall RPSocket::EventCallback::invoke(EventCallback *this)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(this + 8);
  if (((lVar1 != 0) || (lVar1 = _getDefaultLogCtx(), lVar1 != 0)) && (4 < *(int *)(lVar1 + 0x10))) {
    uVar2 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    _LogMsg(5,lVar1,uVar2,0xe4,"invoke",0,
            &cf_RPSocket_p_ref__p__gotsignalwithevent_dandcurrent_cb__p,
            *(undefined8 *)(*(long *)(this + 0x18) + 0x10),*(long *)(this + 0x18),
            *(undefined4 *)(this + 0x20),*(undefined8 *)(this + 0x10));
  }
  if (*(code **)(this + 0x10) == (code *)0x0) {
    lVar1 = *(long *)(this + 8);
    if (((lVar1 != 0) || (lVar1 = _getDefaultLogCtx(), lVar1 != 0)) && (2 < *(int *)(lVar1 + 0x10)))
    {
      uVar2 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      _LogMsg(3,lVar1,uVar2,0xe8,"invoke",0,&cf_Noclientcallback_missingevent_dforsocket_p,
              *(undefined4 *)(this + 0x20),*(undefined8 *)(*(long *)(this + 0x18) + 0x10));
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001970de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this + 0x10))
            (*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28))
  ;
  return;
}

