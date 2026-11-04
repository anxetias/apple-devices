// rea decompile_all
// name: __AMRestoreConvertDmgToUDZO
// address: 0xe670c
// body: available
// range: 0xe670c-0xe67d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe67cf to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMRestoreConvertDmgToUDZO(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  long local_48;
  char *local_40;
  long local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_004412b8;
  local_68 = "/usr/bin/hdiutil";
  local_60 = "convert";
  local_58 = "-format";
  local_50 = "UDZO";
  local_40 = "-o";
  local_30 = "-shadow";
  local_20 = 0;
  local_48 = param_1;
  local_38 = param_2;
  local_28 = param_3;
  if (param_1 == 0) {
    pcVar2 = &cf__sdoesn_tnotsupportnullsourcepath_;
  }
  else {
    if (param_2 != 0) {
      uVar1 = __AMRestoreExecuteCmd(&local_68,0,0);
      goto LAB_000e67b9;
    }
    pcVar2 = &cf__sdoesn_tnotsupportnulloutputpath_;
  }
  _AMRLog(3,pcVar2,"_AMRestoreConvertDmgToUDZO");
  uVar1 = 1;
LAB_000e67b9:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_10) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

