// rea decompile_all
// name: __downloadCallback
// address: 0x1793e6
// body: available
// range: 0x1793e6-0x17946e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x179437 to 0x16f4c7 _AMRSafeLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x17946a to 0x2aa28a _dispatch_semaphore_signal (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __downloadCallback(float param_1,undefined8 param_2,int param_3,long param_4,
                       undefined8 *param_5)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    if (param_4 == 0) {
      uVar1 = 0;
      _AMRSafeLog(6,&cf_Successfullydownloadedmetadata);
    }
    else {
      _AMRSafeLog(3,&cf_Failedtodownloadmetadata_error___,param_4);
      uVar1 = _CFRetain(param_4);
    }
    param_5[2] = uVar1;
    *(bool *)(param_5 + 1) = param_4 == 0;
    _dispatch_semaphore_signal((dispatch_semaphore_t)*param_5);
    return;
  }
  _AMRSafeLog((double)param_1,7,&cf_Downloadingbuildmetadata_file___progress__f,param_2);
  return;
}

