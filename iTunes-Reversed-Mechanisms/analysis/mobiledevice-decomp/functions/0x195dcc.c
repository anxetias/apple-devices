// rea decompile_all
// name: RPSocket_host::wait_for_connection_establishment
// address: 0x195dcc
// body: available
// range: 0x195dcc-0x195e9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket_host::wait_for_connection_establishment() */

void __thiscall RPSocket_host::wait_for_connection_establishment(RPSocket_host *this)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(this + 0x28);
  if (((lVar1 != 0) || (lVar1 = _getDefaultLogCtx(), lVar1 != 0)) && (4 < *(int *)(lVar1 + 0x10))) {
    uVar2 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    _LogMsg(5,lVar1,uVar2,0x692,"wait_for_connection_establishment",0,
            &cf_waitingconnectionestablishmentforsocket__p,this);
  }
  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(this + 0x128),0xffffffffffffffff);
  lVar1 = *(long *)(this + 0x28);
  if ((lVar1 == 0) && (lVar1 = _getDefaultLogCtx(), lVar1 == 0)) {
    return;
  }
  if (4 < *(int *)(lVar1 + 0x10)) {
    uVar2 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    _LogMsg(5,lVar1,uVar2,0x694,"wait_for_connection_establishment",0,
            &cf_connectionestablishedforsocket__p,this);
  }
  return;
}

