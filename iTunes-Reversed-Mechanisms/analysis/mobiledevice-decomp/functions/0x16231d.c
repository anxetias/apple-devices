// rea decompile_all
// name: _AMRestorableDeviceCopyPSDProbe
// address: 0x16231d
// body: available
// range: 0x16231d-0x1623b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMRestorableDeviceCopyPSDProbe(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 local_28;
  int local_20;
  
  pvVar1 = _dispatch_get_specific(__AMRestorableRunningOnEventQueue);
  local_28 = param_1;
  if (pvVar1 == (void *)0x0) {
    _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_28,
                     ___thr_AMRestorableDeviceGetLocationID);
  }
  else {
    ___thr_AMRestorableDeviceGetLocationID(&local_28);
  }
  if (local_20 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = _PSDProbeCopyProbeForUSBLocationID(local_20,0,0);
    if (lVar2 == 0) {
      lVar2 = 0;
      _AMRSafeLog(3,&cf__s_Failuretolocateprobefor___x_inIORegistry,"AMRestorableDeviceCopyPSDProbe"
                  ,local_20);
    }
  }
  return lVar2;
}

