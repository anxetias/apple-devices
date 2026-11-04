// rea decompile_all
// name: _ccec_mult_default_ws
// address: 0x11bf1
// body: available
// range: 0x11bf1-0x124a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_ccec_mult_default_ws
          (long param_1,long *param_2,long param_3,uint *param_4,ulong param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  
  uVar6 = _cczp_bitlen(param_2 + *param_2 * 5 + 4);
  uVar7 = 0xfffffff9;
  if (param_5 <= uVar6) {
    lVar1 = *param_2;
    uVar6 = param_5 + 0x3f >> 6;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar8 = (**(code **)(param_1 + 0x18))(param_1);
    puVar9 = (uint *)(**(code **)(param_1 + 0x18))(param_1,lVar1);
    lVar10 = _ccn_n(lVar1,param_6);
    bVar26 = lVar10 == 0;
    if (0x3f < param_5 + 0x3f) {
      _ccn_set(uVar6,puVar9,param_4);
    }
    _ccn_zero(lVar1 - uVar6,puVar9 + uVar6 * 2);
    *(ulong *)(puVar9 + uVar6 * 2 + -2) =
         (ulong)(*(long *)(puVar9 + uVar6 * 2 + -2) << (-(char)param_5 & 0x3fU)) >>
         (-(char)param_5 & 0x3fU);
    _ccn_shift_right(uVar6,puVar9,puVar9,bVar26);
    _ccec_double_ws(param_1,param_2,lVar8,param_6);
    _ccn_mux(lVar1 * 3,!bVar26,lVar8,param_6,lVar8);
    lVar10 = _ccn_n(lVar1,lVar8);
    uVar7 = 0xffffffff;
    if (lVar10 != 0) {
      uVar11 = _cczp_bitlen(param_2 + *param_2 * 5 + 4);
      uVar7 = 0xfffffff9;
      if (param_5 <= uVar11) {
        lVar10 = *param_2;
        lVar12 = _ccn_n(lVar10,lVar8);
        uVar7 = 0xffffffff;
        if (lVar12 != 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x10);
          lVar4 = lVar10 * 2;
          lVar13 = (**(code **)(param_1 + 0x18))(param_1,lVar4);
          lVar14 = (**(code **)(param_1 + 0x18))(param_1,lVar4);
          lVar15 = (**(code **)(param_1 + 0x18))(param_1,lVar4);
          lVar3 = *param_2;
          lVar12 = lVar14 + lVar3 * 8;
          uVar19 = *(undefined8 *)(param_1 + 0x10);
          uVar16 = (**(code **)(param_1 + 0x18))(param_1,lVar3);
          uVar17 = (**(code **)(param_1 + 0x18))(param_1,lVar3);
          uVar18 = (**(code **)(param_1 + 0x18))(param_1,lVar3);
          _cczp_sqr_ws(param_1,param_2,uVar18,lVar8);
          _cczp_add_ws(param_1,param_2,lVar12,uVar18,uVar18);
          _cczp_add_ws(param_1,param_2,uVar18,uVar18,lVar12);
          _cczp_sqr_ws(param_1,param_2,lVar14,*param_2 * 0x10 + lVar8);
          _cczp_sqr_ws(param_1,param_2,lVar14,lVar14);
          _cczp_add_ws(param_1,param_2,uVar16,lVar14,lVar14);
          _cczp_add_ws(param_1,param_2,uVar16,uVar16,lVar14);
          _cczp_sub_ws(param_1,param_2,uVar18,uVar18,uVar16);
          _cczp_sqr_ws(param_1,param_2,lVar12,lVar8 + *param_2 * 8);
          _cczp_add_ws(param_1,param_2,lVar12,lVar12,lVar12);
          _cczp_add_ws(param_1,param_2,uVar16,lVar12,lVar12);
          _cczp_mul_ws(param_1,param_2,lVar14,uVar16,lVar8);
          _cczp_sqr_ws(param_1,param_2,uVar17,uVar18);
          _cczp_sub_ws(param_1,param_2,uVar17,uVar17,lVar14);
          _cczp_sub_ws(param_1,param_2,lVar13,uVar17,lVar14);
          _cczp_sub_ws(param_1,param_2,uVar17,lVar14,lVar13);
          _cczp_mul_ws(param_1,param_2,uVar17,uVar17,uVar18);
          _cczp_sqr_ws(param_1,param_2,lVar12,lVar12);
          _cczp_add_ws(param_1,param_2,lVar12,lVar12,lVar12);
          _cczp_sub_ws(param_1,param_2,lVar13 + lVar3 * 8,uVar17,lVar12);
          *(undefined8 *)(param_1 + 0x10) = uVar19;
          uVar21 = (uint)((*(ulong *)(puVar9 + (param_5 - 1 >> 6) * 2) >> (param_5 - 1 & 0x3f) & 1)
                         != 0);
          uVar24 = uVar21 ^ 1;
          param_5 = param_5 - 2;
          uVar22 = uVar24;
          if (param_5 != 0) {
            uVar20 = uVar21;
            uVar22 = uVar21;
            do {
              bVar25 = (*(ulong *)(puVar9 + (param_5 >> 6) * 2) >> (param_5 & 0x3f) & 1) != 0;
              uVar21 = (uint)bVar25;
              _cczp_cond_negate(param_2,uVar24,lVar14 + lVar10 * 8);
              _ccn_cond_swap(lVar4,uVar20 ^ uVar21 | uVar22 ^ 1,lVar13,lVar14);
              _ccec_mult_XYCZaddC_ws(param_1,param_2,lVar13,lVar14);
              _ccec_mult_XYCZadd_ws(param_1,param_2,lVar13,lVar14);
              uVar24 = (uVar22 ^ 1) & (uint)bVar25;
              uVar22 = uVar22 | uVar21;
              param_5 = param_5 - 1;
              uVar20 = uVar21;
            } while (param_5 != 0);
            uVar22 = uVar22 ^ 1;
          }
          _cczp_cond_negate(param_2,uVar24,lVar14 + lVar10 * 8);
          _ccn_cond_swap(lVar4,(uint)*(undefined8 *)puVar9 & 1 ^ uVar21,lVar13,lVar14);
          _ccec_mult_XYCZaddC_ws(param_1,param_2,lVar13,lVar14);
          _ccn_set(lVar4,lVar15,lVar14);
          uVar21 = (uint)*(undefined8 *)puVar9 & 1;
          _ccn_cond_swap(lVar4,uVar21,lVar13,lVar14);
          lVar3 = *param_2;
          lVar12 = param_3 + lVar3 * 8;
          lVar23 = lVar3 * 0x10 + param_3;
          uVar19 = *(undefined8 *)(param_1 + 0x10);
          _cczp_sub_ws(param_1,param_2,lVar23,lVar13,lVar14);
          _cczp_mul_ws(param_1,param_2,lVar23,lVar15 + lVar3 * 8,lVar23);
          _cczp_mul_ws(param_1,param_2,lVar23,lVar8,lVar23);
          _cczp_mul_ws(param_1,param_2,lVar23,*param_2 * 0x10 + lVar8,lVar23);
          _cczp_mul_ws(param_1,param_2,lVar12,lVar15,lVar8 + *param_2 * 8);
          _cczp_sqr_ws(param_1,param_2,param_3,lVar12);
          _cczp_mul_ws(param_1,param_2,lVar12,lVar12,param_3);
          *(undefined8 *)(param_1 + 0x10) = uVar19;
          _ccn_cond_swap(lVar4,uVar21,lVar13,lVar14);
          _ccec_mult_XYCZadd_ws(param_1,param_2,lVar13,lVar14);
          _ccn_mux(lVar4,uVar21,lVar13,lVar14,lVar13);
          _cczp_mul_ws(param_1,param_2,param_3,param_3,lVar13);
          lVar12 = param_3 + *param_2 * 8;
          _cczp_mul_ws(param_1,param_2,lVar12,lVar12,lVar13 + lVar10 * 8);
          uVar19 = _cczp_prime(param_2 + *param_2 * 5 + 4);
          _ccn_sub1(lVar10,lVar15,uVar19,1);
          uVar21 = _ccn_cmpn_internal(uVar6,puVar9,lVar10,lVar15);
          bVar5 = _ccec_is_point_at_infinity(param_2,lVar8);
          _ccn_mux(lVar10 * 3,(uint)bVar5 | ~uVar21 & 1 | uVar22,param_3,lVar8,param_3);
          _cczp_cond_negate(param_2,~uVar21 & 1,param_3 + *param_2 * 8);
          uVar22 = uVar22 & ~*puVar9;
          _ccn_cond_clear(lVar10,uVar22,*param_2 * 0x10 + param_3);
          _ccn_seti(lVar10,lVar13,1);
          _cczp_to_ws(param_1,param_2,lVar13,lVar13);
          _ccn_mux(lVar10,uVar22,param_3,lVar13,param_3);
          lVar12 = param_3 + *param_2 * 8;
          _ccn_mux(lVar10,uVar22,lVar12,lVar13,lVar12);
          *(undefined8 *)(param_1 + 0x10) = uVar7;
          _ccec_full_add_ws(param_1,param_2,lVar8,param_3,param_6);
          _ccn_mux(lVar1 * 3,(uint)bVar26 & *param_4,param_3,lVar8,param_3);
          uVar7 = 0;
        }
      }
    }
    *(undefined8 *)(param_1 + 0x10) = uVar2;
  }
  return uVar7;
}

