// rea decompile_all
// name: -[FTABFileBackDeploy_parseFileData].cold.3
// address: 0x239ad7
// body: available
// range: 0x239ad7-0x239b6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x239b6b to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __FTABFileBackDeploy_parseFileData__cold_3(byte *param_1,undefined8 param_2)

{
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  uint local_2a;
  undefined2 local_26;
  uint local_24;
  undefined2 local_20;
  uint local_1e;
  undefined2 local_1a;
  uint local_18;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_004412b8;
  local_38 = 0x8200502;
  local_34 = "-[FTABFileBackDeploy parseFileData]";
  local_2c = 0x400;
  local_2a = (uint)*param_1;
  local_26 = 0x400;
  local_24 = (uint)param_1[1];
  local_20 = 0x400;
  local_1e = (uint)param_1[2];
  local_1a = 0x400;
  local_18 = (uint)param_1[3];
  __os_log_error_impl(0,param_2,0x10,"%s: File tag parse error (%02x %02x %02x %02x)",&local_38,0x24
                     );
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

