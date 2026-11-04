// rea decompile_all
// name: -[FTABFileBackDeploy_addSubfileWithTagName:contentsOfURL:].cold.1
// address: 0x239ccb
// body: available
// range: 0x239ccb-0x239d46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x239d42 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __FTABFileBackDeploy_addSubfileWithTagName_contentsOfURL___cold_1
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  undefined8 local_2a;
  undefined2 local_22;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_004412b8;
  local_38 = 0x8200302;
  local_34 = "-[FTABFileBackDeploy addSubfileWithTagName:contentsOfURL:]";
  local_2c = 0x840;
  local_22 = 0x840;
  local_2a = param_1;
  local_20 = param_2;
  __os_log_error_impl(0,param_3,0x10,"%s: Unable to open file at %@ (%@)",&local_38,0x20);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

