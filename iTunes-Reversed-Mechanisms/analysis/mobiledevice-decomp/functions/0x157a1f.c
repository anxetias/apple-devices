// rea decompile_all
// name: __AMMuxedVersion3DeviceConnected
// address: 0x157a1f
// body: available
// range: 0x157a1f-0x157ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x157ac8 to 0x2aa206 _dispatch_async_f (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x157adf to 0xdf44a _AMRLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMMuxedVersion3DeviceConnected(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long *context;
  dispatch_queue_t queue;
  dispatch_object_t object;
  
  _AMRLog(7,&cf_Muxversion3eventhappened);
  lVar2 = _CFDictionaryGetValue(param_3,_kUSBMuxProperty_LinkType);
  if (lVar2 != 0) {
    cVar1 = _CFEqual(lVar2,_kUSBMuxPropertyLinkType_USB);
    if (cVar1 == '\0') {
      _AMRLog(7,&cf_Droppingmuxeventsinceit_snotforaUSBdevice_);
      return;
    }
  }
  context = _calloc(1,0x18);
  *context = param_3;
  context[1] = (long)___thr_AMRestorableProcessDeviceConnected;
  object = *(dispatch_object_t *)(_gRestorableData + 0x18);
  *(dispatch_object_t *)(context + 2) = object;
  if (param_3 != 0) {
    _CFRetain(param_3);
    object = *(dispatch_object_t *)(context + 2);
  }
  _dispatch_retain(object);
  queue = _dispatch_get_global_queue(0,0);
  _dispatch_async_f(queue,context,___thr_AMRestorableDetermineMuxDeviceTypeInBackground);
  return;
}

