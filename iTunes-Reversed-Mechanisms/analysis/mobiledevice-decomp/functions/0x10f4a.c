// rea decompile_all
// name: _ccec_full_add_default_ws
// address: 0x10f4a
// body: available
// range: 0x10f4a-0x115a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccec_full_add_default_ws(long param_1,long *param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  bool bVar17;
  bool bVar18;
  
  lVar16 = *param_2;
  lVar1 = param_4 + lVar16 * 8;
  lVar15 = param_5 + lVar16 * 8;
  lVar14 = param_3 + lVar16 * 8;
  lVar3 = lVar16 * 0x10 + param_3;
  uVar4 = _ccctr_context_size(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = (**(code **)(param_1 + 0x18))(param_1,uVar4);
  uVar6 = (**(code **)(param_1 + 0x18))(param_1,uVar4);
  uVar7 = (**(code **)(param_1 + 0x18))(param_1,uVar4);
  uVar8 = (**(code **)(param_1 + 0x18))(param_1,uVar4);
  uVar9 = (**(code **)(param_1 + 0x18))(param_1,uVar4);
  uVar10 = (**(code **)(param_1 + 0x18))(param_1,uVar4);
  uVar11 = (**(code **)(param_1 + 0x18))(param_1,uVar4);
  uVar12 = (**(code **)(param_1 + 0x18))(param_1,uVar4);
  uVar4 = (**(code **)(param_1 + 0x18))(param_1,uVar4);
  _ccec_map_to_homogeneous_ws(param_1,param_2,param_4,uVar10,uVar11);
  _ccec_map_to_homogeneous_ws(param_1,param_2,param_5,uVar12,uVar4);
  _cczp_mul_ws(param_1,param_2,uVar5,uVar10,uVar12);
  _cczp_mul_ws(param_1,param_2,uVar6,lVar1,lVar15);
  _cczp_mul_ws(param_1,param_2,uVar7,uVar11,uVar4);
  _cczp_add_ws(param_1,param_2,uVar8,uVar10,lVar1);
  _cczp_add_ws(param_1,param_2,uVar9,uVar12,lVar15);
  _cczp_mul_ws(param_1,param_2,uVar8,uVar8,uVar9);
  _cczp_add_ws(param_1,param_2,uVar9,uVar5,uVar6);
  _cczp_sub_ws(param_1,param_2,uVar8,uVar8,uVar9);
  _cczp_add_ws(param_1,param_2,uVar9,lVar1,uVar11);
  _cczp_add_ws(param_1,param_2,param_3,lVar15,uVar4);
  _cczp_mul_ws(param_1,param_2,uVar9,uVar9,param_3);
  _cczp_add_ws(param_1,param_2,param_3,uVar6,uVar7);
  _cczp_sub_ws(param_1,param_2,uVar9,uVar9,param_3);
  _cczp_add_ws(param_1,param_2,param_3,uVar10,uVar11);
  _cczp_add_ws(param_1,param_2,lVar14,uVar12,uVar4);
  _cczp_mul_ws(param_1,param_2,param_3,param_3,lVar14);
  _cczp_add_ws(param_1,param_2,lVar14,uVar5,uVar7);
  _cczp_sub_ws(param_1,param_2,lVar14,param_3,lVar14);
  _cczp_mul_ws(param_1,param_2,lVar3,param_2 + lVar16 * 2 + 4,uVar7);
  _cczp_sub_ws(param_1,param_2,param_3,lVar14,lVar3);
  _cczp_add_ws(param_1,param_2,lVar3,param_3,param_3);
  _cczp_add_ws(param_1,param_2,param_3,param_3,lVar3);
  _cczp_sub_ws(param_1,param_2,lVar3,uVar6,param_3);
  _cczp_add_ws(param_1,param_2,param_3,uVar6,param_3);
  _cczp_mul_ws(param_1,param_2,lVar14,param_2 + lVar16 * 2 + 4,lVar14);
  _cczp_add_ws(param_1,param_2,uVar6,uVar7,uVar7);
  _cczp_add_ws(param_1,param_2,uVar7,uVar6,uVar7);
  _cczp_sub_ws(param_1,param_2,lVar14,lVar14,uVar7);
  _cczp_sub_ws(param_1,param_2,lVar14,lVar14,uVar5);
  _cczp_add_ws(param_1,param_2,uVar6,lVar14,lVar14);
  _cczp_add_ws(param_1,param_2,lVar14,uVar6,lVar14);
  _cczp_add_ws(param_1,param_2,uVar6,uVar5,uVar5);
  _cczp_add_ws(param_1,param_2,uVar5,uVar6,uVar5);
  _cczp_sub_ws(param_1,param_2,uVar5,uVar5,uVar7);
  _cczp_mul_ws(param_1,param_2,uVar6,uVar9,lVar14);
  _cczp_mul_ws(param_1,param_2,uVar7,uVar5,lVar14);
  _cczp_mul_ws(param_1,param_2,lVar14,param_3,lVar3);
  _cczp_add_ws(param_1,param_2,lVar14,lVar14,uVar7);
  _cczp_mul_ws(param_1,param_2,param_3,uVar8,param_3);
  _cczp_sub_ws(param_1,param_2,param_3,param_3,uVar6);
  _cczp_mul_ws(param_1,param_2,lVar3,uVar9,lVar3);
  _cczp_mul_ws(param_1,param_2,uVar6,uVar8,uVar5);
  _cczp_add_ws(param_1,param_2,lVar3,lVar3,uVar6);
  uVar4 = _ccctr_context_size(param_2);
  lVar15 = *param_2;
  lVar1 = param_3 + lVar15 * 8;
  uVar5 = (**(code **)(param_1 + 0x18))(param_1,uVar4);
  plVar13 = (long *)(**(code **)(param_1 + 0x18))(param_1,uVar4);
  _ccn_set(uVar4,uVar5,lVar1);
  _cczp_from_ws(param_1,param_2,plVar13,lVar1);
  lVar14 = _ccn_n(uVar4,plVar13);
  if (lVar14 == 1) {
    bVar18 = *plVar13 == 1;
  }
  else {
    bVar18 = false;
  }
  lVar16 = lVar15 * 0x10 + param_3;
  lVar15 = _ccn_n(uVar4,param_3);
  lVar14 = _ccn_n(uVar4,lVar16);
  bVar17 = false;
  if (lVar14 == 0 && lVar15 == 0) {
    bVar17 = bVar18;
  }
  _cczp_mul_ws(param_1,param_2,param_3,param_3,lVar16);
  _cczp_sqr_ws(param_1,param_2,plVar13,lVar16);
  _cczp_mul_ws(param_1,param_2,lVar1,lVar1,plVar13);
  _ccn_mux(uVar4,bVar17,param_3,uVar5,param_3);
  _ccn_mux(uVar4,bVar17,lVar1,uVar5,lVar1);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}

