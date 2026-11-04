// rea decompile_all
// name: _AFCConditionCreate
// address: 0xbbdb8
// body: available
// range: 0xbbdb8-0xbbe40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AFCConditionCreate(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  _pthread_once((pthread_once_t *)&_AFCConditionGetTypeID_typeIDInit,___AFCConditionRegisterClass);
  lVar2 = __CFRuntimeCreateInstance(param_1,___gAFCConditionTypeID,0x78,0);
  if (lVar2 != 0) {
    iVar1 = _pthread_mutex_init((pthread_mutex_t *)(lVar2 + 0x10),(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      iVar1 = _pthread_cond_init((pthread_cond_t *)(lVar2 + 0x50),(pthread_condattr_t *)0x0);
      if (iVar1 == 0) {
        *(undefined1 *)(lVar2 + 0x80) = 0;
        return lVar2;
      }
      _pthread_mutex_destroy((pthread_mutex_t *)(lVar2 + 0x10));
    }
    _CFRelease(lVar2);
  }
  return 0;
}

