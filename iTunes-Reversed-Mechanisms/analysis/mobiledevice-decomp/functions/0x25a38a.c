// rea decompile_all
// name: SERestoreInfo::SERestoreInfoLog::FormatMsg
// address: 0x25a38a
// body: available
// range: 0x25a38a-0x25a43f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25a43b to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::SERestoreInfoLog::FormatMsg(char const*, ...) */

char * SERestoreInfo::SERestoreInfoLog::FormatMsg(char *param_1,...)

{
  char in_AL;
  int iVar1;
  undefined8 in_RCX;
  undefined8 in_RDX;
  char *pcVar2;
  char *in_RSI;
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
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  char *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  long local_18;
  
  local_28 = local_f8;
  if (in_AL != '\0') {
    local_c8 = in_XMM0_Qa;
    local_b8 = in_XMM1_Qa;
    local_a8 = in_XMM2_Qa;
    local_98 = in_XMM3_Qa;
    local_88 = in_XMM4_Qa;
    local_78 = in_XMM5_Qa;
    local_68 = in_XMM6_Qa;
    local_58 = in_XMM7_Qa;
  }
  local_18 = *(long *)PTR____stack_chk_guard_004412b8;
  local_30 = &stack0x00000008;
  local_38 = 0x3000000010;
  local_40 = (char *)0x0;
  local_e8 = in_RDX;
  local_e0 = in_RCX;
  local_d8 = in_R8;
  local_d0 = in_R9;
  iVar1 = _vasprintf(&local_40,in_RSI,&local_38);
  pcVar2 = (char *)0x0;
  if (0 < iVar1) {
    pcVar2 = local_40;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_18) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

