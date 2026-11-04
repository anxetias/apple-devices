// rea decompile_all
// name: _fRestoreUARPTxWatchdogSet
// address: 0x17bfc1
// body: available
// range: 0x17bfc1-0x17c07f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _fRestoreUARPTxWatchdogSet(void *param_1,undefined8 param_2,ushort param_3)

{
  dispatch_source_t pdVar1;
  dispatch_time_t start;
  int64_t delta;
  undefined8 uVar2;
  
  if (param_1 == (void *)0x0) {
    uVar2 = 0x1e;
  }
  else {
    _CoreUARPRestoreCancelWatchdogTimer();
    uVar2 = 0;
    pdVar1 = _dispatch_source_create
                       ((dispatch_source_type_t)PTR___dispatch_source_type_timer_004412e8,0,0,
                        *(dispatch_queue_t *)((long)param_1 + 0x7e8));
    *(dispatch_source_t *)((long)param_1 + 0x7f0) = pdVar1;
    delta = 1;
    if (param_3 != 0) {
      delta = (ulong)param_3 * 1000000;
    }
    start = _dispatch_time(0,delta);
    _dispatch_set_context(*(dispatch_object_t *)((long)param_1 + 0x7f0),param_1);
    _dispatch_source_set_timer
              (*(dispatch_source_t *)((long)param_1 + 0x7f0),start,0xffffffffffffffff,1000000);
    _dispatch_source_set_event_handler_f
              (*(dispatch_source_t *)((long)param_1 + 0x7f0),_fRestoreUARPWatchdogExpire);
    _dispatch_resume(*(dispatch_object_t *)((long)param_1 + 0x7f0));
  }
  return uVar2;
}

