// rea decompile_all
// name: __AMRHostLogMapCurrentThreadToDevice
// address: 0x17415e
// body: available
// range: 0x17415e-0x1741fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1741cb to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1741f7 to 0x16f42d _AMRSafePrintLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRHostLogMapCurrentThreadToDevice(undefined8 *param_1,long param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    pcVar2 = &cf_Can_tupdatethreadmappingwithNULLmanager;
  }
  else {
    _dispatch_semaphore_wait((dispatch_semaphore_t)*param_1,0xffffffffffffffff);
    lVar1 = __copyCurrentThreadID();
    if (lVar1 != 0) {
      if (param_2 == 0) {
        _CFDictionaryRemoveValue(param_1[1],lVar1);
      }
      else {
        _CFDictionarySetValue(param_1[1],lVar1,param_2);
      }
      _dispatch_semaphore_signal((dispatch_semaphore_t)*param_1);
      _AMRSafePrintLogAndRelease(3,0);
      _CFRelease(lVar1);
      return;
    }
    _dispatch_semaphore_signal((dispatch_semaphore_t)*param_1);
    pcVar2 = &cf_Can_tupdatethreadIDwithinvalidvalue;
  }
  _AMRSafePrintLogAndRelease(3,pcVar2);
  return;
}

