// rea decompile_all
// name: _ccec_add_normalized_ws
// address: 0x10b4c
// body: available
// range: 0x10b4c-0x10e9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccec_add_normalized_ws
               (long param_1,long *param_2,long param_3,long param_4,long param_5,int param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar3 = *param_2;
  lVar1 = param_4 + lVar3 * 8;
  lVar2 = param_4 + lVar3 * 0x10;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = (**(code **)(param_1 + 0x18))(param_1,lVar3);
  uVar6 = (**(code **)(param_1 + 0x18))(param_1,lVar3);
  uVar7 = (**(code **)(param_1 + 0x18))(param_1,lVar3);
  _cczp_sqr_ws(param_1,param_2,uVar7,lVar2);
  _cczp_mul_ws(param_1,param_2,uVar5,param_5,uVar7);
  _cczp_mul_ws(param_1,param_2,uVar7,lVar2,uVar7);
  _cczp_mul_ws(param_1,param_2,uVar6,param_5 + lVar3 * 8,uVar7);
  _cczp_sub_ws(param_1,param_2,uVar5,param_4,uVar5);
  if (param_6 == 0) {
    _cczp_sub_ws(param_1,param_2,uVar6,lVar1,uVar6);
  }
  else {
    _cczp_add_ws(param_1,param_2,uVar6,lVar1,uVar6);
  }
  lVar8 = _ccn_n(lVar3,uVar5);
  if (lVar8 == 0) {
    lVar8 = _ccn_n(lVar3,uVar6);
    if (lVar8 == 0) {
      _ccec_double_ws(param_1,param_2,param_3,param_5);
      goto LAB_00010e83;
    }
  }
  lVar8 = param_3 + lVar3 * 8;
  lVar10 = lVar3 * 0x10 + param_3;
  lVar9 = _ccn_n(lVar3,uVar5);
  if (lVar9 == 0) {
    lVar9 = _ccn_n(lVar3,uVar6);
    if (lVar9 != 0) {
      _ccn_seti(lVar3,param_3,1);
      _cczp_to_ws(param_1,param_2,param_3,param_3);
      _ccn_set(lVar3,lVar8,param_3);
      _cc_clear(lVar3 << 3,lVar10);
      goto LAB_00010e83;
    }
  }
  _cczp_add_ws(param_1,param_2,param_3,param_4,param_4);
  _cczp_sub_ws(param_1,param_2,param_3,param_3,uVar5);
  _cczp_add_ws(param_1,param_2,lVar8,lVar1,lVar1);
  _cczp_sub_ws(param_1,param_2,lVar8,lVar8,uVar6);
  _cczp_mul_ws(param_1,param_2,lVar10,lVar2,uVar5);
  _cczp_sqr_ws(param_1,param_2,uVar7,uVar5);
  _cczp_mul_ws(param_1,param_2,uVar5,uVar5,uVar7);
  _cczp_mul_ws(param_1,param_2,uVar7,param_3,uVar7);
  _cczp_sqr_ws(param_1,param_2,param_3,uVar6);
  _cczp_sub_ws(param_1,param_2,param_3,param_3,uVar7);
  _cczp_sub_ws(param_1,param_2,uVar7,uVar7,param_3);
  _cczp_sub_ws(param_1,param_2,uVar7,uVar7,param_3);
  _cczp_mul_ws(param_1,param_2,uVar6,uVar6,uVar7);
  _cczp_mul_ws(param_1,param_2,uVar5,lVar8,uVar5);
  _cczp_sub_ws(param_1,param_2,lVar8,uVar6,uVar5);
  _cczp_div2_ws(param_1,param_2,lVar8,lVar8);
LAB_00010e83:
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  return;
}

