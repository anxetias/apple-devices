// rea decompile_all
// name: _AMRAuthInstallGetLocalizedStringForServerError
// address: 0xf5afa
// body: available
// range: 0xf5afa-0xf5bb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf5bb4 to 0x26eeea _AMRAuthInstallGetLocalizedStringForServerError.cold.1 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMRAuthInstallGetLocalizedStringForServerError(int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int local_1c;
  
  local_1c = param_1;
  if (param_1 - 4000U < 0xfffffc7c) {
    _AMRAuthInstallGetLocalizedStringForServerError_cold_2();
LAB_000f5bb4:
                    /* WARNING: Subroutine does not return */
    _AMRAuthInstallGetLocalizedStringForServerError_cold_1();
  }
  lVar2 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,9,&local_1c);
  if (lVar2 != 0) {
    iVar1 = _pthread_mutex_lock((pthread_mutex_t *)&__tssStatusStringsDictLock);
    if (iVar1 == 0) {
      if (__tssStatusStringsDict != 0) {
        lVar3 = _CFDictionaryGetValue(__tssStatusStringsDict,lVar2);
        _CFRelease(lVar2);
        if (lVar3 == 0) {
          _AMRLog(7,&cf__s_nocachedtextfortsserrorcode_d,
                  "AMRAuthInstallGetLocalizedStringForServerError",local_1c);
        }
        _pthread_mutex_unlock((pthread_mutex_t *)&__tssStatusStringsDictLock);
        return lVar3;
      }
      goto LAB_000f5bb4;
    }
    _CFRelease(lVar2);
  }
  return 0;
}

