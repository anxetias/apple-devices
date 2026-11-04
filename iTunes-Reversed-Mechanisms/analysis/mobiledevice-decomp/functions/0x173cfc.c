// rea decompile_all
// name: __handleLogEvent
// address: 0x173cfc
// body: available
// range: 0x173cfc-0x173dc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x173da2 to 0x16f42d _AMRSafePrintLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __handleLogEvent(long param_1,undefined4 param_2)

{
  long *context;
  long lVar1;
  cfstringStruct *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = &cf_Can_tprocessNULLmessage;
  }
  else {
    context = _calloc(1,0x18);
    if (context == (long *)0x0) {
      pcVar2 = &cf_Failedtoallocateloghandlercontext;
    }
    else {
      context[1] = param_1;
      *(undefined4 *)(context + 2) = param_2;
      lVar1 = _AMRLogGetQueueCallbackContext();
      *context = lVar1;
      if (lVar1 == 0) {
        lVar1 = __AMRHostLogGetDeviceForCurrentThread(__gHostLogManager);
        *context = lVar1;
      }
      if (context[1] != 0) {
        _CFRetain();
        lVar1 = *context;
      }
      if (lVar1 != 0) {
        _CFRetain(lVar1);
      }
      if (*(dispatch_queue_t *)(_gRestorableData + 0x18) == (dispatch_queue_t)0x0) {
        pcVar2 = &cf_Can_thandlelogmessageswithoutqueue;
      }
      else {
        _dispatch_async_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),context,
                          ___thr_handleLogEvent);
        pcVar2 = (cfstringStruct *)0x0;
      }
    }
  }
  _AMRSafePrintLogAndRelease(3,pcVar2);
  return;
}

