// rea decompile_all
// name: _RPSocketCopyLogCtx
// address: 0x194316
// body: available
// range: 0x194316-0x194350 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _RPSocketCopyLogCtx(long param_1)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  ppVar1 = (pthread_mutex_t *)(lVar2 + 0x90);
  _pthread_mutex_lock(ppVar1);
  lVar2 = *(long *)(lVar2 + 0x28);
  if (lVar2 != 0) {
    _CFRetain(lVar2);
  }
  _pthread_mutex_unlock(ppVar1);
  return lVar2;
}

