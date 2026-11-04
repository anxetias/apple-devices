// rea decompile_all
// name: __AMRestorableDeviceWatcherTimerFired
// address: 0x1627d9
// body: available
// range: 0x1627d9-0x162872 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16286e to 0x17415e __AMRHostLogMapCurrentThreadToDevice (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestorableDeviceWatcherTimerFired(dispatch_object_t *param_1)

{
  _os_object_s *p_Var1;
  char cVar2;
  
  p_Var1 = param_1[1]._os_obj;
  __AMRHostLogMapCurrentThreadToDevice(*(undefined8 *)(_gRestorableData + 0x78),p_Var1);
  if (p_Var1[0x79] == (_os_object_s)0x0) {
    _AMRSafeLog(3,&cf_skippingpaniccheck_deviceisnotrestoring);
    if (((*param_1)._os_obj != (_os_object_s *)0x0) && (*(char *)(param_1 + 2) == '\x01')) {
      _dispatch_suspend(*param_1);
      *(undefined1 *)(param_1 + 2) = 0;
    }
  }
  else {
    cVar2 = __AMRestorableDeviceDidPanic(p_Var1);
    if (cVar2 != '\0') {
      if (((*param_1)._os_obj != (_os_object_s *)0x0) && (*(char *)(param_1 + 2) == '\x01')) {
        _dispatch_suspend(*param_1);
        *(undefined1 *)(param_1 + 2) = 0;
      }
      __AMRestorableDeviceSetStateOnEventQueue(p_Var1,2);
    }
  }
  __AMRHostLogMapCurrentThreadToDevice(*(undefined8 *)(_gRestorableData + 0x78),0);
  return;
}

