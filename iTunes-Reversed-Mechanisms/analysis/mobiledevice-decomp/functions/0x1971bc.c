// rea decompile_all
// name: RPSocket::signal
// address: 0x1971bc
// body: available
// range: 0x1971bc-0x197236 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket::signal(unsigned long) */

void __thiscall RPSocket::signal(RPSocket *this,ulong param_1)

{
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  
  _pthread_mutex_lock((pthread_mutex_t *)(this + 0x90));
  local_50 = *(undefined8 *)(this + 0x38);
  local_48 = *(undefined8 *)(this + 0x28);
  local_40 = *(undefined8 *)(this + 0x18);
  local_38 = *(undefined8 *)(this + 8);
  local_28 = *(undefined8 *)(this + 0x20);
  local_30 = param_1;
  EventCallback::retain_all((EventCallback *)&local_50);
  _pthread_mutex_unlock((pthread_mutex_t *)(this + 0x90));
  EventCallback::send((EventCallback *)&local_50);
  EventCallback::release_all((EventCallback *)&local_50);
  return;
}

