// rea decompile_all
// name: RPSocket::set_target_queue
// address: 0x194608
// body: available
// range: 0x194608-0x194665 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19465c to 0x2aa272 _dispatch_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket::set_target_queue(dispatch_queue_s*) */

void __thiscall RPSocket::set_target_queue(RPSocket *this,dispatch_queue_s *param_1)

{
  dispatch_object_t object;
  void *pvVar1;
  dispatch_object_t dVar2;
  
  _dispatch_retain((dispatch_object_t)param_1);
  _pthread_mutex_lock((pthread_mutex_t *)(this + 0x90));
  object = (dispatch_object_t)((dispatch_object_t *)(this + 0x30))->_dq;
  dVar2 = object;
  pvVar1 = _dispatch_queue_get_specific((dispatch_queue_t)object._os_obj,*(void **)(this + 0x38));
  if (pvVar1 == (void *)0x0) {
    *(dispatch_queue_s **)(this + 0x30) = param_1;
    _pthread_mutex_unlock((pthread_mutex_t *)(this + 0x90));
    _dispatch_release(object);
    return;
  }
  set_target_queue(dVar2._dq);
  suspend(*(RPSocket **)(dVar2._os_obj + 0x10));
  return;
}

