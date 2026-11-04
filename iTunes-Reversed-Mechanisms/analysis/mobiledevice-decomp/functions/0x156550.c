// rea decompile_all
// name: __FinalizeNotificationContext
// address: 0x156550
// body: available
// range: 0x156550-0x15661f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __FinalizeNotificationContext(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 0x7a676d6f) {
    *(undefined4 *)(param_1 + 0x10) = 0x44414544;
    if (*(dispatch_source_t *)(param_1 + 0x30) != (dispatch_source_t)0x0) {
      _dispatch_source_cancel(*(dispatch_source_t *)(param_1 + 0x30));
      _dispatch_release(*(dispatch_object_t *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      _AMDServiceConnectionInvalidate();
      _CFRelease(*(undefined8 *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    if (*(code **)(param_1 + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00156606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x58))(*(undefined8 *)(param_1 + 0x48));
      return;
    }
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Magic value for listening context is incorrect. Bailing.")
    ;
  }
  return;
}

