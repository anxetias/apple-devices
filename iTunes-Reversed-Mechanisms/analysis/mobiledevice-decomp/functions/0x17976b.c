// rea decompile_all
// name: __MDRemotePairingBrowserCreateDeviceListCallback
// address: 0x17976b
// body: available
// range: 0x17976b-0x179987 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1798f3 to 0x2a97f2 _CFRunLoopStop (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __MDRemotePairingBrowserCreateDeviceListCallback(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_2 == (long *)0x0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar3 = "Callback received invalid context.";
  }
  else {
    lVar1 = *param_2;
    if (lVar1 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar3 = "Callback received invalid device list.";
    }
    else {
      lVar2 = param_2[1];
      if (lVar2 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar3 = "Callback received invalid runloop.";
      }
      else {
        if (param_1 != (long *)0x0) {
          if ((int)param_1[1] == 3) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,2,"Notifications stopped.");
            _CFRunLoopStop(lVar2);
            return;
          }
          if ((int)param_1[1] != 1) {
            return;
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,2,"Appending device: %@",*param_1);
          _CFArrayAppendValue(lVar1,*param_1);
          if (*param_1 != 0) {
            _CFRelease();
          }
          *param_1 = 0;
          return;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar3 = "Callback received invalid notification info.";
      }
    }
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar3);
  return;
}

