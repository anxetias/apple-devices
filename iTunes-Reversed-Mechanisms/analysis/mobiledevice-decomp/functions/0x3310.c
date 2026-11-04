// rea decompile_all
// name: _AMSupportCFArrayCreateWithObjects
// address: 0x3310
// body: available
// range: 0x3310-0x3482 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x347e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMSupportCFArrayCreateWithObjects
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long local_1e8 [4];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 local_138;
  long *plStack_130;
  long *local_128;
  long local_118 [33];
  long local_10;
  
  local_1e8[1] = param_10;
  local_1e8[2] = param_11;
  local_1e8[3] = param_12;
  local_1c8 = param_13;
  local_1c0 = param_14;
  if (in_AL != '\0') {
    local_1b8 = param_1;
    local_1a8 = param_2;
    local_198 = param_3;
    local_188 = param_4;
    local_178 = param_5;
    local_168 = param_6;
    local_158 = param_7;
    local_148 = param_8;
  }
  local_10 = *(long *)PTR____stack_chk_guard_004412b8;
  local_118[0x1e] = 0;
  local_118[0x1f] = 0;
  local_118[0x1c] = 0;
  local_118[0x1d] = 0;
  local_118[0x1a] = 0;
  local_118[0x1b] = 0;
  local_118[0x18] = 0;
  local_118[0x19] = 0;
  local_118[0x16] = 0;
  local_118[0x17] = 0;
  local_118[0x14] = 0;
  local_118[0x15] = 0;
  local_118[0x12] = 0;
  local_118[0x13] = 0;
  local_118[0x10] = 0;
  local_118[0x11] = 0;
  local_118[0xe] = 0;
  local_118[0xf] = 0;
  local_118[0xc] = 0;
  local_118[0xd] = 0;
  local_118[10] = 0;
  local_118[0xb] = 0;
  local_118[8] = 0;
  local_118[9] = 0;
  local_118[6] = 0;
  local_118[7] = 0;
  local_118[4] = 0;
  local_118[5] = 0;
  local_118[2] = 0;
  local_118[3] = 0;
  local_118[0] = 0;
  local_118[1] = 0;
  local_128 = local_1e8;
  local_138 = 0x3000000008;
  plVar4 = (long *)&stack0x00000008;
  plStack_130 = plVar4;
  uVar2 = 8;
  uVar1 = 0;
  lVar3 = 0;
  while( true ) {
    if (uVar2 < 0x29) {
      uVar5 = (ulong)uVar2;
      uVar2 = uVar2 + 8;
      local_138 = CONCAT44(local_138._4_4_,uVar2);
      plVar6 = (long *)((long)local_1e8 + uVar5);
    }
    else {
      plStack_130 = plVar4 + 1;
      plVar6 = plVar4;
      plVar4 = plVar4 + 1;
    }
    if (*plVar6 == 0) break;
    local_118[lVar3] = *plVar6;
    lVar3 = lVar3 + 1;
    if (lVar3 == 0x20) {
LAB_00003465:
      if (*(long *)PTR____stack_chk_guard_004412b8 != local_10) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return uVar1;
    }
  }
  uVar1 = _CFArrayCreate(param_9,local_118,lVar3,PTR__kCFTypeArrayCallBacks_004411a8);
  goto LAB_00003465;
}

