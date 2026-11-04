// rea decompile_all
// name: _tss_submit
// address: 0x1bbb12
// body: available
// range: 0x1bbb12-0x1bbbec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _tss_submit(void *param_1)

{
  pthread_t *pp_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (param_1 == (void *)0x0) {
    _AMAuthInstallLog(3,"tss_submit","NULL session");
    return 0x2719;
  }
  if (*(long *)((long)param_1 + 0x18) == 0) {
    _AMAuthInstallLog(3,"tss_submit","NULL request in session");
    uVar3 = 0x2718;
    uVar2 = 0x2718;
  }
  else {
    if (*(long *)((long)param_1 + 0x30) == 0) {
      _tss_submit_job_with_retry(param_1);
      return *(undefined4 *)((long)param_1 + 0x40);
    }
    pp_Var1 = _malloc(8);
    *(pthread_t **)((long)param_1 + 0x38) = pp_Var1;
    if (pp_Var1 != (pthread_t *)0x0) {
      _pthread_create(pp_Var1,(pthread_attr_t *)0x0,(void **)_tss_submit_job_with_retry,param_1);
      return 0;
    }
    _AMAuthInstallLog(3,"tss_submit_non_block","out of memory");
    uVar3 = 0x2716;
    uVar2 = 0x2716;
  }
  _tss_set_last_error(param_1,uVar2);
  return uVar3;
}

