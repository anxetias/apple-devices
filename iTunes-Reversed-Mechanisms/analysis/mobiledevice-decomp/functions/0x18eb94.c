// rea decompile_all
// name: _SharedBufferDestroy
// address: 0x18eb94
// body: available
// range: 0x18eb94-0x18ebff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18ebfa to 0x2aa374 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _SharedBufferDestroy(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = _pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x10));
    if (iVar1 == 0) {
      iVar1 = _pthread_cond_destroy((pthread_cond_t *)((long)param_1 + 0x50));
      if (iVar1 == 0) {
        _free(*(void **)((long)param_1 + 8));
      }
    }
    iVar1 = _pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x90));
    if (iVar1 == 0) {
      iVar1 = _pthread_cond_destroy((pthread_cond_t *)((long)param_1 + 0xd0));
      if (iVar1 == 0) {
        _free(*(void **)((long)param_1 + 0x88));
      }
    }
    _free(param_1);
    return;
  }
  return;
}

