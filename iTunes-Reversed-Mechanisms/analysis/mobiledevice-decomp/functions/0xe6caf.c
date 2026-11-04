// rea decompile_all
// name: _AMRestoreDetachDiskImage
// address: 0xe6caf
// body: available
// range: 0xe6caf-0xe6d34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe6d30 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRestoreDetachDiskImage(long param_1)

{
  undefined8 uVar1;
  char *local_38;
  char *local_30;
  long local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_004412b8;
  local_38 = "/usr/bin/hdiutil";
  local_30 = "detach";
  local_20 = 0;
  local_28 = param_1;
  if (param_1 == 0) {
    _AMRLog(3,&cf__sdoesn_tnotsupportnullsourcepath_,"_AMRestoreDetachImage");
    uVar1 = 1;
  }
  else {
    uVar1 = __AMRestoreExecuteCmd(&local_38,0,0);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_10) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

