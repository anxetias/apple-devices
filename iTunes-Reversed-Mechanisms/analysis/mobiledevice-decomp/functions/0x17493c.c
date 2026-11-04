// rea decompile_all
// name: __AMRResourceManagerStartedUsingResourceAtURL
// address: 0x17493c
// body: available
// range: 0x17493c-0x1749ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1749a7 to 0x2aa28a _dispatch_semaphore_signal (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1749e9 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRResourceManagerStartedUsingResourceAtURL(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (_once != -1) {
    _dispatch_once_f(&_once,(void *)0x0,__thr_AMRResourceManagerInit);
  }
  if (_didInitSuccessfully == '\x01') {
    _dispatch_semaphore_wait((dispatch_semaphore_t)*_gResourceData,0xffffffffffffffff);
    uVar1 = _CFDictionaryGetValue(_gResourceData[1],param_1);
    __AMRResourceManagerSetIncrementedNumber(uVar1,_gResourceData[1],param_1);
    _dispatch_semaphore_signal((dispatch_semaphore_t)*_gResourceData);
    return;
  }
  _AMRSafeLog(3,&cf___,&cf_Failedtoinitializeresourcemanager);
  _CFRelease(&cf_Failedtoinitializeresourcemanager);
  return;
}

