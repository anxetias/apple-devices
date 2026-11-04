// rea decompile_all
// name: -[FTABFileBackDeploy_writeToDestination].cold.3
// address: 0x239f65
// body: available
// range: 0x239f65-0x239feb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x239fe7 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __FTABFileBackDeploy_writeToDestination__cold_3(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_38;
  undefined8 local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar1 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"tag");
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  local_38 = 0x8400102;
  local_34 = uVar1;
  __os_log_error_impl(0,param_2,0x10,"Failed to write \'%@\'",&local_38,0xc);
  (*(code *)PTR__objc_release_004410a0)(uVar1);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

