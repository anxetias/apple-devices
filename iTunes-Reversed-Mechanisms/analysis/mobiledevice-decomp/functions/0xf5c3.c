// rea decompile_all
// name: _derive
// address: 0xf5c3
// body: available
// range: 0xf5c3-0xf72e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf72a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _derive(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,undefined8 param_10,uint param_11,undefined8 param_12,undefined8 param_13,
            undefined8 param_14)

{
  uint uVar1;
  char in_AL;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_128 [4];
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  undefined8 local_58 [7];
  long local_20;
  
  local_68 = local_128;
  if (in_AL != '\0') {
    local_f8 = param_1;
    local_e8 = param_2;
    local_d8 = param_3;
    local_c8 = param_4;
    local_b8 = param_5;
    local_a8 = param_6;
    local_98 = param_7;
    local_88 = param_8;
  }
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_78 = 0x3000000018;
  puVar8 = (undefined8 *)&stack0x00000008;
  puStack_70 = puVar8;
  if (param_11 == 0) {
    uVar5 = 0;
  }
  else {
    local_78._0_4_ = 0x18;
    uVar5 = (ulong)param_11;
    puVar2 = local_58;
    lVar3 = 0;
    uVar7 = uVar5;
    uVar6 = (uint)local_78;
    do {
      puVar4 = puVar2;
      if (uVar6 < 0x29) {
        uVar1 = uVar6 + 8;
        local_78 = CONCAT44(local_78._4_4_,uVar1);
        puVar2[1] = *(undefined8 *)((long)local_68 + (ulong)uVar6);
        if (0x20 < uVar6) {
          puVar4 = local_58 + lVar3 * 2;
          puVar9 = puVar8;
          uVar6 = uVar1;
          goto LAB_0000f6d5;
        }
        puVar9 = (undefined8 *)((long)local_68 + (ulong)uVar1);
        uVar6 = uVar6 + 0x10;
        local_78 = CONCAT44(local_78._4_4_,uVar6);
      }
      else {
        puVar9 = puVar8 + 1;
        puVar2[1] = *puVar8;
LAB_0000f6d5:
        puVar8 = puVar9 + 1;
        puStack_70 = puVar8;
      }
      *puVar4 = *puVar9;
      lVar3 = lVar3 + 1;
      puVar2 = puVar2 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  local_128[3] = param_12;
  local_108 = param_13;
  local_100 = param_14;
  _ccdrbg_df_derive_keys
            (*(undefined8 *)(param_9 + 0x50),uVar5,local_58,*(long *)(param_9 + 0x40) + 0x10,
             param_10);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

