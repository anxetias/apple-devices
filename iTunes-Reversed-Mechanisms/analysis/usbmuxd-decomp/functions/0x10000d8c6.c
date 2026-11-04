// rea decompile_all
// name: FUN_10000d8c6
// address: 0x10000d8c6
// body: available
// range: 0x10000d8c6-0x10000da14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000da10 to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000d8c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  undefined1 local_8e8 [8];
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined8 local_8a8;
  undefined8 local_898;
  undefined8 local_888;
  undefined8 local_878;
  undefined8 local_868;
  undefined8 local_858;
  undefined8 local_848;
  char local_838 [2048];
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  long local_20;
  
  if (in_AL != '\0') {
    local_8b8 = param_1;
    local_8a8 = param_2;
    local_898 = param_3;
    local_888 = param_4;
    local_878 = param_5;
    local_868 = param_6;
    local_858 = param_7;
    local_848 = param_8;
  }
  local_20 = *(long *)PTR____stack_chk_guard_10001c070;
  local_8e0 = param_10;
  local_8d8 = param_11;
  local_8d0 = param_12;
  local_8c8 = param_13;
  local_8c0 = param_14;
  ___bzero(local_838,0x800);
  if (DAT_100022bd8 == 0) {
    DAT_100022bd8 = __os_log_create(0x100000000,"com.apple.usbmux","library");
  }
  local_28 = local_8e8;
  local_30 = &stack0x00000008;
  local_38 = 0x3000000008;
  _vsnprintf(local_838,0x800,param_9,&local_38);
  __os_log_internal(0x100000000,DAT_100022bd8,0,"%{public}s",local_838);
  if (DAT_100022be0 != (FILE *)0x0) {
    _fputs(local_838,DAT_100022be0);
  }
  if (*(long *)PTR____stack_chk_guard_10001c070 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

