// rea decompile_all
// name: add_synced_to_queue_hint
// address: 0x196cae
// body: available
// range: 0x196cae-0x196ce2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x196cde to 0x2aa26c _dispatch_queue_set_specific (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* add_synced_to_queue_hint(dispatch_queue_s*, dispatch_queue_s*) */

void add_synced_to_queue_hint(dispatch_queue_s *param_1,dispatch_queue_s *param_2)

{
  void *pvVar1;
  
  if (param_2 != (dispatch_queue_s *)0x0) {
    pvVar1 = _dispatch_queue_get_specific(param_1,param_2);
    if (pvVar1 == (void *)0x0) {
      _dispatch_queue_set_specific(param_1,param_2,param_2,(dispatch_function_t)0x0);
      return;
    }
  }
  return;
}

