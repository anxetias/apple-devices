// rea decompile_all
// name: __AMRestorableDeviceLogMessageData
// address: 0x161d21
// body: available
// range: 0x161d21-0x161e22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x161dcc to 0x2aa206 _dispatch_async_f (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x161dff to 0x16f42d _AMRSafePrintLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x161e15 to 0x161e23 ___thr_AMRestorableDeviceLogMessageData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestorableDeviceLogMessageData(long param_1,long param_2,long param_3,char param_4)

{
  char cVar1;
  long *context;
  cfstringStruct *pcVar2;
  
  context = _calloc(1,0x18);
  if (context == (long *)0x0) {
    pcVar2 = &cf_Can_thandlelogmessagesinceargallocationfailed;
  }
  else {
    cVar1 = __AMRestoreInitGlobalData();
    if (cVar1 == '\0') {
      pcVar2 = &cf_Failedtoallocateglobaldatacan_thandleloggingnow;
    }
    else {
      if (*(long *)(_gRestorableData + 0x18) != 0) {
        *context = param_1;
        context[2] = param_2;
        context[1] = param_3;
        if (param_1 != 0) {
          _CFRetain(param_1);
          param_2 = context[2];
        }
        if (param_2 != 0) {
          _CFRetain(param_2);
        }
        if (context[1] != 0) {
          _CFRetain();
        }
        if (param_4 != '\0') {
          _dispatch_async_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),context,
                            ___thr_AMRestorableDeviceLogMessageData);
          return;
        }
        ___thr_AMRestorableDeviceLogMessageData(context);
        return;
      }
      pcVar2 = &cf_Can_thandlelogmessagewithoutdeviceeventqueue;
    }
    _free(context);
  }
  _AMRSafePrintLogAndRelease(3,pcVar2);
  return;
}

