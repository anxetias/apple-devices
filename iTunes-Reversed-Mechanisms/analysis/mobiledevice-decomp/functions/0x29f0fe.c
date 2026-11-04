// rea decompile_all
// name: _AMAuthInstallSupportGetValueForKeyWithFormat
// address: 0x29f0fe
// body: available
// range: 0x29f0fe-0x29f1e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x29f1dd to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallSupportGetValueForKeyWithFormat
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long lVar1;
  undefined8 uVar2;
  undefined1 local_f8 [24];
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
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  long local_30;
  
  local_38 = local_f8;
  if (in_AL != '\0') {
    local_c8 = param_1;
    local_b8 = param_2;
    local_a8 = param_3;
    local_98 = param_4;
    local_88 = param_5;
    local_78 = param_6;
    local_68 = param_7;
    local_58 = param_8;
  }
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  local_40 = &stack0x00000008;
  local_48 = 0x3000000018;
  local_e0 = param_12;
  local_d8 = param_13;
  local_d0 = param_14;
  if (param_11 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    lVar1 = _CFStringCreateWithFormatAndArguments(param_9,0,param_11,&local_48);
    if (lVar1 != 0) {
      uVar2 = _AMAuthInstallSupportGetValueForKeyPathInDict(param_9,param_10,lVar1);
      _CFRelease(lVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

