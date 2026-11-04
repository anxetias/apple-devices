// rea decompile_all
// name: _AMRestoreReverseProxyDone
// address: 0xd121b
// body: available
// range: 0xd121b-0xd12ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd12a8 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMRestoreReverseProxyDone(RPSocksProxy*, void*) */

void _AMRestoreReverseProxyDone(RPSocksProxy *param_1,void *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _AMRLog(6,&cf_TearingdownPurpleReverseProxy_);
  lVar1 = _CFDictionaryGetValue(param_2,&cf_connections);
  if (lVar1 != 0) {
    lVar2 = _CFArrayGetCount(lVar1);
    if (0 < lVar2) {
      lVar4 = 0;
      do {
        uVar3 = _CFArrayGetValueAtIndex(lVar1,lVar4);
        _RPSocksProxyConnectionInvalidate(uVar3);
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
    }
    _CFArrayRemoveAllValues(lVar1);
  }
  _CFRelease(param_1);
  _CFRelease(param_2);
  return;
}

