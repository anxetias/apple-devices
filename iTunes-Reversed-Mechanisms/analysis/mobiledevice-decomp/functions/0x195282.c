// rea decompile_all
// name: RPSocket::reset_stats
// address: 0x195282
// body: available
// range: 0x195282-0x19531c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket::reset_stats() */

void __thiscall RPSocket::reset_stats(RPSocket *this)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((**(long **)(this + 0xe8) == 0) && ((*(long **)(this + 0xe8))[1] == 0)) {
    return;
  }
  lVar2 = *(long *)(this + 0x28);
  if (((lVar2 != 0) || (lVar2 = _getDefaultLogCtx(), lVar2 != 0)) && (4 < *(int *)(lVar2 + 0x10))) {
    uVar3 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    _LogMsg(5,lVar2,uVar3,0x102,"reset_stats",0,
            &cf_Resetstatsfor__afterreading_lldbytesandwriting_lldbytes,*(undefined8 *)(this + 8),
            **(undefined8 **)(this + 0xe8),(*(undefined8 **)(this + 0xe8))[1]);
  }
  puVar1 = *(undefined8 **)(this + 0xe8);
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}

