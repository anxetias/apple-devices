// rea decompile_all
// name: __RPSocksProxyInvalidate
// address: 0x198f6d
// body: available
// range: 0x198f6d-0x199041 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x199032 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __RPSocksProxyInvalidate(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  lVar1 = *(long *)(param_1 + 0x68);
  lVar2 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar3 = *(long *)(param_1 + 0x90);
  uVar5 = _copyDefaultLogCtx();
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  pcVar4 = *(code **)(param_1 + 0x80);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1,uVar5);
  }
  if (lVar2 != 0) {
    _RPSocketInvalidate(lVar2);
    _RPRelease(lVar2);
  }
  if (lVar1 != 0) {
    _CFRelease();
  }
  if (lVar3 != 0) {
    _CFRelease();
    return;
  }
  return;
}

