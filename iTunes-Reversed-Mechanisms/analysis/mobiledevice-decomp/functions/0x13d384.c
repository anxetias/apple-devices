// rea decompile_all
// name: _MDRSSDeregisterForCallbacks
// address: 0x13d384
// body: available
// range: 0x13d384-0x13d3e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x13d3c7 to 0x2aa2ea _dispatch_sync (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _MDRSSDeregisterForCallbacks(void)

{
  int iVar1;
  
  if (_initializeSupportInterface_onceToken != -1) {
    _dispatch_once(&_initializeSupportInterface_onceToken,&___block_literal_global_141);
  }
  _dispatch_assert_queue_not_V2(_gRSDBrowserQueue);
  iVar1 = ___isPlatformVersionAtLeast(1,10,0xd,0);
  if (iVar1 != 0) {
    _dispatch_sync(_gRSDBrowserQueue,&___block_literal_global_1655);
    return;
  }
  return;
}

