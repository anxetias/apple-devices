// rea decompile_all
// name: RPSocket::set_invalid
// address: 0x196eec
// body: available
// range: 0x196eec-0x196fa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x196f9f to 0x2aa206 _dispatch_async_f (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket::set_invalid() */

void __thiscall RPSocket::set_invalid(RPSocket *this)

{
  EventCallback *this_00;
  
  _pthread_mutex_lock((pthread_mutex_t *)(this + 0x90));
  this_00 = operator_new(0x30);
  *(undefined8 *)this_00 = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(this_00 + 8) = *(undefined8 *)(this + 0x28);
  *(undefined8 *)(this_00 + 0x10) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this_00 + 0x18) = *(undefined8 *)(this + 8);
  *(undefined8 *)(this_00 + 0x20) = 8;
  *(undefined8 *)(this_00 + 0x28) = *(undefined8 *)(this + 0x20);
  EventCallback::retain_all(this_00);
  *(undefined8 *)(this + 0x18) = 0;
  if (*(long *)(this + 0x20) != 0) {
    _CFRelease();
  }
  *(undefined8 *)(this + 0x20) = 0;
  if (*(long *)(this + 0x28) != 0) {
    _CFRelease();
  }
  *(undefined8 *)(this + 0x28) = 0;
  _pthread_mutex_unlock((pthread_mutex_t *)(this + 0x90));
  _dispatch_async_f(*(dispatch_queue_t *)this_00,this_00,EventCallback::invoke_and_delete_fn);
  return;
}

