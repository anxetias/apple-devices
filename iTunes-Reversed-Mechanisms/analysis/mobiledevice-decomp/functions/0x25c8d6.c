// rea decompile_all
// name: SavageRestoreInfoLog
// address: 0x25c8d6
// body: available
// range: 0x25c8d6-0x25c9c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25c9c4 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SavageRestoreInfoLog(char const*, ...) */

void SavageRestoreInfoLog(char *param_1,...)

{
  char in_AL;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined1 local_10e8 [8];
  undefined8 local_10e0;
  undefined8 local_10d8;
  undefined8 local_10d0;
  undefined8 local_10c8;
  undefined8 local_10c0;
  undefined8 local_10b8;
  undefined8 local_10a8;
  undefined8 local_1098;
  undefined8 local_1088;
  undefined8 local_1078;
  undefined8 local_1068;
  undefined8 local_1058;
  undefined8 local_1048;
  undefined8 local_1038;
  undefined1 *local_1030;
  undefined1 *local_1028;
  char local_1018 [4096];
  long local_18;
  
  if (in_AL != '\0') {
    local_10b8 = in_XMM0_Qa;
    local_10a8 = in_XMM1_Qa;
    local_1098 = in_XMM2_Qa;
    local_1088 = in_XMM3_Qa;
    local_1078 = in_XMM4_Qa;
    local_1068 = in_XMM5_Qa;
    local_1058 = in_XMM6_Qa;
    local_1048 = in_XMM7_Qa;
  }
  local_18 = *(long *)PTR____stack_chk_guard_004412b8;
  local_10e0 = in_RSI;
  local_10d8 = in_RDX;
  local_10d0 = in_RCX;
  local_10c8 = in_R8;
  local_10c0 = in_R9;
  if (logSinkFunc != (code *)0x0) {
    local_1028 = local_10e8;
    local_1030 = &stack0x00000008;
    local_1038 = 0x3000000008;
    _vsnprintf(local_1018,0x1000,param_1,&local_1038);
    (*logSinkFunc)(logContext,local_1018);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

