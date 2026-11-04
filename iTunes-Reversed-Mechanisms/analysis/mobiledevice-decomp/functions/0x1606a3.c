// rea decompile_all
// name: __resourceManagerHTTPDownloadCallback
// address: 0x1606a3
// body: available
// range: 0x1606a3-0x1607c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16076e to 0x17415e __AMRHostLogMapCurrentThreadToDevice (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1607b6 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __resourceManagerHTTPDownloadCallback
               (float param_1,undefined8 param_2,long param_3,char param_4,long param_5,
               long *param_6)

{
  if (param_6 == (long *)0x0) {
    _AMRLog((double)param_1,7,&cf_DownloadingRestoreBundle_progress__f);
    _AMRSafeLog(3,&cf___,&cf_Can_tprocessHTTPdownloadcallbackwithoutcontext);
    _CFRelease(&cf_Can_tprocessHTTPdownloadcallbackwithoutcontext);
    return;
  }
  if (*param_6 != 0) {
    __AMRHostLogMapCurrentThreadToDevice(*(undefined8 *)(_gRestorableData + 0x78));
  }
  _AMRLog((double)param_1,7,&cf_DownloadingRestoreBundle_progress__f);
  __AMRestorableDeviceNotifyStatusInfoChanged(*param_6,200,(int)param_1,0);
  if (param_4 != '\0') {
    *(bool *)(param_6 + 1) = param_5 == 0;
    param_6[4] = param_5;
    param_6[2] = param_3;
    if (param_3 != 0) {
      _CFRetain(param_3);
      param_5 = param_6[4];
    }
    if (param_5 != 0) {
      _CFRetain(param_5);
    }
    _dispatch_semaphore_signal((dispatch_semaphore_t)param_6[3]);
  }
  if (*param_6 != 0) {
    __AMRHostLogMapCurrentThreadToDevice(*(undefined8 *)(_gRestorableData + 0x78),0);
    return;
  }
  return;
}

