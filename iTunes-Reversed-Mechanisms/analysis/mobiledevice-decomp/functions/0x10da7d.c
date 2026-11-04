// rea decompile_all
// name: _AMDeviceWakeupOperationInvalidate
// address: 0x10da7d
// body: available
// range: 0x10da7d-0x10db0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10dafc to 0x2aa752 _pthread_mutex_unlock (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMDeviceWakeupOperationInvalidate(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) == 0x656b6177)) {
    _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x18));
    lVar1 = 0x138;
    do {
      __deallocateResolveOperation(param_1 + lVar1);
      lVar1 = lVar1 + 0x18;
    } while (lVar1 != 0x390);
    if (*(long *)(param_1 + 0x390) != 0) {
      _CFRunLoopTimerInvalidate();
      _CFRelease(*(undefined8 *)(param_1 + 0x390));
      *(undefined8 *)(param_1 + 0x390) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0x17;
    _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x18));
    return;
  }
  return;
}

