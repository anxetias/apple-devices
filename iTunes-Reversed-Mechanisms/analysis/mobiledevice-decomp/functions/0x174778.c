// rea decompile_all
// name: __AMRSerialLogStopWatchingDevice
// address: 0x174778
// body: available
// range: 0x174778-0x174831 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17482d to 0x2aa28a _dispatch_semaphore_signal (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRSerialLogStopWatchingDevice(undefined8 *param_1,long param_2)

{
  long lVar1;
  dispatch_object_t object;
  long local_30;
  long local_28;
  
  _dispatch_semaphore_wait((dispatch_semaphore_t)*param_1,0xffffffffffffffff);
  local_30 = param_2;
  ___thr_AMRestorableDeviceGetECID(&local_30);
  local_30 = local_28;
  if (local_28 != 0) {
    lVar1 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,4,&local_30);
    object._os_obj = (_os_object_s *)_CFDictionaryGetValue(param_1[1],lVar1);
    if (object._os_obj != (_os_object_s *)0x0) {
      _dispatch_source_cancel((dispatch_source_t)object._os_obj);
      _CFDictionaryRemoveValue(param_1[1],lVar1);
      _dispatch_release(object);
    }
    _dispatch_semaphore_signal((dispatch_semaphore_t)*param_1);
    if (lVar1 != 0) {
      _CFRelease(lVar1);
    }
    return;
  }
  _dispatch_semaphore_signal((dispatch_semaphore_t)*param_1);
  return;
}

