// rea decompile_all
// name: -[FTABFileBackDeploy_parseFileData].cold.1
// address: 0x239998
// body: available
// range: 0x239998-0x239a72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x239a6e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __FTABFileBackDeploy_parseFileData__cold_1(byte *param_1,long param_2,undefined8 param_3)

{
  undefined4 local_68;
  char *local_64;
  undefined2 local_5c;
  uint local_5a;
  undefined2 local_56;
  uint local_54;
  undefined2 local_50;
  uint local_4e;
  undefined2 local_4a;
  uint local_48;
  undefined2 local_44;
  uint local_42;
  undefined2 local_3e;
  uint local_3c;
  undefined2 local_38;
  uint local_36;
  undefined2 local_32;
  uint local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  local_68 = 0x8200902;
  local_64 = "-[FTABFileBackDeploy parseFileData]";
  local_5c = 0x400;
  local_5a = (uint)*param_1;
  local_56 = 0x400;
  local_54 = (uint)*(byte *)(param_2 + 0x21);
  local_50 = 0x400;
  local_4e = (uint)*(byte *)(param_2 + 0x22);
  local_4a = 0x400;
  local_48 = (uint)*(byte *)(param_2 + 0x23);
  local_44 = 0x400;
  local_42 = (uint)*(byte *)(param_2 + 0x24);
  local_3e = 0x400;
  local_3c = (uint)*(byte *)(param_2 + 0x25);
  local_38 = 0x400;
  local_36 = (uint)*(byte *)(param_2 + 0x26);
  local_32 = 0x400;
  local_30 = (uint)*(byte *)(param_2 + 0x27);
  __os_log_error_impl(0,param_3,0x10,
                      "%s: Unexpected header magic (%02x %02x %02x %02x %02x %02x %02x %02x)",
                      &local_68,0x3c);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

