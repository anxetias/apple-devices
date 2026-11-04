// rea decompile_all
// name: _AMSupportCopyHexStringFromUInt64
// address: 0x385b
// body: available
// range: 0x385b-0x390b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3907 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0000389d) */
/* WARNING: Removing unreachable block (ram,0x000038fe) */
/* WARNING: Removing unreachable block (ram,0x000038a4) */

undefined8 _AMSupportCopyHexStringFromUInt64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)PTR____stack_chk_guard_004412b8;
  iVar2 = _AMSupportCommonCopyHexStringFromUInt64(param_2);
  if (iVar2 == 0) {
    _AMSupportCopyHexStringFromUInt64_cold_2();
  }
  else {
    _AMSupportLogInternal
              (3,"AMSupportCopyHexStringFromUInt64",
               "AMSupportCommonCopyHexStringFromUInt64 failed (%d)",iVar2);
  }
  _free((void *)0x0);
  if (*(long *)PTR____stack_chk_guard_004412b8 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

