// rea decompile_all
// name: _CPXStopListeningForPairedDevices
// address: 0x446b0
// body: available
// range: 0x446b0-0x44746 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _CPXStopListeningForPairedDevices(long param_1,undefined4 *param_2)

{
  dispatch_source_t source;
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0xe8000007;
  if (param_1 != 0) {
    _pthread_mutex_lock((pthread_mutex_t *)&_gActiveConnectionsMutex);
    if (_gActiveConnections != 0) {
      source = (dispatch_source_t)_CFDictionaryGetValue(_gActiveConnections,param_1);
      _CFDictionaryRemoveValue(_gActiveConnections,param_1);
      _pthread_mutex_unlock((pthread_mutex_t *)&_gActiveConnectionsMutex);
      uVar1 = 0;
      if (source != (dispatch_source_t)0x0) {
        _AMDServiceConnectionInvalidate(param_1);
        _dispatch_source_cancel(source);
        uVar1 = 1;
        uVar2 = 0;
      }
      goto LAB_00044736;
    }
    _pthread_mutex_unlock((pthread_mutex_t *)&_gActiveConnectionsMutex);
  }
  uVar1 = 0;
LAB_00044736:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar2;
  }
  return uVar1;
}

