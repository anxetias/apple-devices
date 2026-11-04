// rea decompile_all
// name: _enqueue_message
// address: 0xd2ae2
// body: available
// range: 0xd2ae2-0xd2b30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd2b2c to 0x2aa752 _pthread_mutex_unlock (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _enqueue_message(__AMRestoreModeDevice*, AMRestoreMuxedDeviceMessage*) */

void _enqueue_message(__AMRestoreModeDevice *param_1,AMRestoreMuxedDeviceMessage *param_2)

{
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x1c8));
  _CFArrayAppendValue(*(undefined8 *)(param_1 + 0x238),param_2);
  _pthread_cond_signal((pthread_cond_t *)(param_1 + 0x208));
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x1c8));
  return;
}

