// rea decompile_all
// name: _AFCLockCreate
// address: 0xbaf5f
// body: available
// range: 0xbaf5f-0xbb021 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xbb01d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AFCLockCreate(void)

{
  int iVar1;
  long lVar2;
  pthread_mutexattr_t local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  iVar1 = _pthread_mutexattr_init(&local_38);
  if (iVar1 == 0) {
    _pthread_mutexattr_settype(&local_38,2);
    _pthread_once((pthread_once_t *)&_AFCLockGetTypeID_typeIDInit,___AFCLockRegisterClass);
    lVar2 = __CFRuntimeCreateInstance(0,___gAFCLockTypeID,0x40,0);
    if (lVar2 == 0) goto LAB_000bb006;
    iVar1 = _pthread_mutex_init((pthread_mutex_t *)(lVar2 + 0x10),&local_38);
    _pthread_mutexattr_destroy(&local_38);
    if (iVar1 == 0) goto LAB_000bafe8;
    _CFRelease(lVar2);
  }
  else {
LAB_000bb006:
    _pthread_mutexattr_destroy(&local_38);
  }
  lVar2 = 0;
LAB_000bafe8:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

