// rea decompile_all
// name: _CreateThreadWithLargeStack
// address: 0xb2d78
// body: available
// range: 0xb2d78-0xb2e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb2e47 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _CreateThreadWithLargeStack(void **param_1,void *param_2)

{
  int iVar1;
  pthread_t local_78;
  size_t local_70;
  pthread_attr_t local_68;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  local_70 = 0;
  iVar1 = _pthread_attr_init(&local_68);
  if (iVar1 != 0) {
    _CreateThreadWithLargeStack_cold_1();
    goto LAB_000b2e06;
  }
  iVar1 = _pthread_attr_getstacksize(&local_68,&local_70);
  if (iVar1 == 0) {
    if (local_70 < 0x1000000) {
      iVar1 = _pthread_attr_setstacksize(&local_68,0x1000000);
      if (iVar1 != 0) {
        _CreateThreadWithLargeStack_cold_3();
        goto LAB_000b2dfd;
      }
    }
    iVar1 = _pthread_create(&local_78,&local_68,param_1,param_2);
    if (iVar1 == 0) {
      _pthread_detach(local_78);
      iVar1 = 0;
    }
    else {
      _CreateThreadWithLargeStack_cold_4();
    }
  }
  else {
    _CreateThreadWithLargeStack_cold_2();
  }
LAB_000b2dfd:
  _pthread_attr_destroy(&local_68);
LAB_000b2e06:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

