// rea decompile_all
// name: _get_time_nsec
// address: 0x9094
// body: available
// range: 0x9094-0x90ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _get_time_nsec(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = _clock_gettime(6);
  if (iVar1 == 0) {
    return 0;
  }
  _get_time_nsec_cold_1();
  uVar2 = _ccrng_process_atfork_prepare(&_process_rng_ctx);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  _atfork_prepare_cold_1();
  uVar2 = _ccrng_process_atfork_parent(&_process_rng_ctx);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  _atfork_parent_cold_1();
  uVar2 = _ccrng_process_atfork_child(&_process_rng_ctx);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  _atfork_child_cold_1();
  iVar1 = (*_process_rng_ctx)(&_process_rng_ctx);
  if (iVar1 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  _generate_cold_1();
}

