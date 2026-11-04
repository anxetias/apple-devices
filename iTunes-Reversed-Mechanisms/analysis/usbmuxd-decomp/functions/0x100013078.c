// rea decompile_all
// name: FUN_100013078
// address: 0x100013078
// body: available
// range: 0x100013078-0x1000130e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000130de to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100013078(void)

{
  int iVar1;
  pthread_mutexattr_t local_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10001c070;
  iVar1 = _pthread_mutexattr_init(&local_28);
  if (iVar1 == 0) {
    _pthread_mutexattr_settype(&local_28,2);
    iVar1 = _pthread_mutex_init((pthread_mutex_t *)&DAT_1000212d8,&local_28);
    if (iVar1 == 0) {
      _pthread_mutexattr_destroy(&local_28);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10001c070 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

