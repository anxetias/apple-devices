// rea decompile_all
// name: _UarpRestoreLayer3LogInfo
// address: 0x187287
// body: available
// range: 0x187287-0x187337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x187333 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _UarpRestoreLayer3LogInfo(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined8 local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  if ((param_1 == 0) || (*(code **)(param_1 + 0xc0) == (code *)0x0)) {
    uVar2 = _UarpRestoreLayer3LogTokenForCategory();
    cVar1 = _os_log_type_enabled(uVar2,1);
    if (cVar1 != '\0') {
      local_38 = 0x8200102;
      local_34 = param_3;
      __os_log_impl(0,uVar2,1,"%s",&local_38,0xc);
    }
    if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
                    /* WARNING: Could not recover jumptable at 0x001872cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0xc0))(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

