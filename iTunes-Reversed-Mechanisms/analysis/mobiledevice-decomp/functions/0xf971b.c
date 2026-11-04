// rea decompile_all
// name: __AMRAuthInstallRegisterLocalizedServerError
// address: 0xf971b
// body: available
// range: 0xf971b-0xf97b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRAuthInstallRegisterLocalizedServerError(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int local_1c;
  
  if (0xfffffc7b < param_2 - 4000U) {
    local_1c = param_2;
    iVar1 = _pthread_mutex_lock((pthread_mutex_t *)&__tssStatusStringsDictLock);
    if (iVar1 == 0) {
      lVar2 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,9,&local_1c);
      if (lVar2 == 0) {
        _pthread_mutex_unlock((pthread_mutex_t *)&__tssStatusStringsDictLock);
      }
      else {
        lVar3 = _AMAuthInstallGetLocalizedStatusString(param_1,local_1c);
        if (lVar3 != 0) {
          _CFDictionarySetValue(__tssStatusStringsDict,lVar2,lVar3);
        }
        _pthread_mutex_unlock((pthread_mutex_t *)&__tssStatusStringsDictLock);
        _CFRelease(lVar2);
      }
    }
  }
  return;
}

