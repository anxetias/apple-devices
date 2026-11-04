// rea decompile_all
// name: _ccec_twin_mult_ws
// address: 0x12ba2
// body: available
// range: 0x12ba2-0x12fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x12fbf to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _ccec_twin_mult_ws(long param_1,long *param_2,long param_3,undefined8 param_4,long param_5,
                      undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  int local_64;
  undefined8 local_60;
  long local_58;
  long *local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar1 = *param_2;
  local_c0 = *(undefined8 *)(param_1 + 0x10);
  local_88 = param_6;
  local_80 = param_4;
  local_58 = param_3;
  local_98 = (**(code **)(param_1 + 0x18))(param_1,lVar1);
  local_90 = (**(code **)(param_1 + 0x18))(param_1,lVar1);
  local_60 = (**(code **)(param_1 + 0x18))(param_1,lVar1);
  local_48 = (**(code **)(param_1 + 0x18))(param_1,lVar1 * 0xc);
  lVar10 = lVar1 * 0x30 + local_48;
  lVar9 = local_48 + lVar1 * 0x48;
  local_b8 = lVar1;
  local_a0 = lVar1 * 3;
  _ccec_full_add_ws(param_1,param_2,lVar10,param_5,param_7);
  _ccec_full_sub_ws(param_1,param_2,lVar9,param_5,param_7);
  uVar2 = local_98;
  local_b0 = param_5;
  _cczp_mul_ws(param_1,param_2,local_98,*param_2 * 0x10 + param_5,*param_2 * 0x10 + param_7);
  uVar3 = local_90;
  local_a8 = lVar10;
  local_78 = lVar9;
  _cczp_mul_ws(param_1,param_2,local_90,lVar10 + *param_2 * 0x10,*param_2 * 0x10 + lVar9);
  uVar4 = local_60;
  _cczp_mul_ws(param_1,param_2,local_60,uVar2,uVar3);
  local_50 = param_2;
  local_64 = _cczp_inv_ws(param_1,param_2,uVar4,uVar4);
  plVar5 = local_50;
  uVar2 = local_90;
  lVar9 = local_b0;
  if (local_64 == 0) {
    local_70 = local_48 + local_a0 * 8;
    _ccec_twin_mult_normalize_ws
              (param_1,local_50,local_48,local_b0,uVar4,*local_50 * 0x10 + param_7,local_90);
    _ccec_twin_mult_normalize_ws(param_1,plVar5,local_70,param_7,uVar4,*plVar5 * 0x10 + lVar9,uVar2)
    ;
    lVar9 = local_78;
    uVar2 = local_98;
    lVar1 = local_a8;
    _ccec_twin_mult_normalize_ws
              (param_1,plVar5,local_a8,local_a8,uVar4,local_98,*plVar5 * 0x10 + local_78);
    uVar3 = local_60;
    _ccec_twin_mult_normalize_ws(param_1,plVar5,lVar9,lVar9,local_60,uVar2,*plVar5 * 0x10 + lVar1);
    lVar9 = local_b8;
    _ccn_seti(local_b8,uVar3,1);
    lVar10 = local_48;
    _cczp_to_ws(param_1,plVar5,*plVar5 * 0x10 + local_48,local_60);
    _ccn_set(lVar9,local_70 + *plVar5 * 0x10,*plVar5 * 0x10 + lVar10);
    _ccn_set(lVar9,lVar1 + *plVar5 * 0x10,*plVar5 * 0x10 + lVar10);
    _ccn_set(lVar9,local_78 + *plVar5 * 0x10,*plVar5 * 0x10 + lVar10);
    uVar7 = _ccn_bitlen_internal(lVar9,local_80);
    uVar8 = _ccn_bitlen_internal(lVar9,local_88);
    if (uVar8 < uVar7) {
      uVar8 = uVar7;
    }
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    _ccn_recode_jsf_init(&local_d8,uVar8,local_80,local_88);
    lVar1 = local_58;
    _ccn_set(lVar9,local_58,*plVar5 * 0x10 + local_48);
    _ccn_set(lVar9,lVar1 + *plVar5 * 8,*plVar5 * 0x10 + local_48);
    _cc_clear(lVar9 << 3,*plVar5 * 0x10 + lVar1);
    if (uVar8 != 0xffffffffffffffff) {
      do {
        _ccec_double_ws(param_1,local_50,local_58);
        local_40 = 0;
        _ccn_recode_jsf_column(&local_d8,uVar8,&local_40);
        if (local_40._4_4_ != 0 || (int)local_40 != 0) {
          lVar9 = _ccn_recode_jsf_index(&local_40);
          lVar9 = local_48 + lVar9 * local_a0 * 8;
          iVar6 = _ccn_recode_jsf_direction(&local_40);
          if (iVar6 == 1) {
            _ccec_full_add_normalized_ws(param_1,local_50,local_58,local_58,lVar9);
          }
          else {
            _ccec_full_sub_normalized_ws(param_1,local_50,local_58,local_58,lVar9);
          }
        }
        bVar11 = uVar8 != 0;
        uVar8 = uVar8 - 1;
      } while (bVar11);
    }
  }
  *(undefined8 *)(param_1 + 0x10) = local_c0;
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

