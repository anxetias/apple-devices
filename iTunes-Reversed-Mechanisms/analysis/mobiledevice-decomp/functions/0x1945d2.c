// rea decompile_all
// name: RPSocket::copy_target_queue
// address: 0x1945d2
// body: available
// range: 0x1945d2-0x194606 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket::copy_target_queue() */

dispatch_object_t __thiscall RPSocket::copy_target_queue(RPSocket *this)

{
  dispatch_object_t object;
  
  _pthread_mutex_lock((pthread_mutex_t *)(this + 0x90));
  object = *(dispatch_object_t *)(this + 0x30);
  _dispatch_retain(object);
  _pthread_mutex_unlock((pthread_mutex_t *)(this + 0x90));
  return (dispatch_object_t)object._os_obj;
}

