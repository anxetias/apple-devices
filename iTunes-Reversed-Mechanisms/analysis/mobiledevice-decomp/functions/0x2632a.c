// rea decompile_all
// name: _ccec_verify_internal_with_base_ws
// address: 0x2632a
// body: available
// range: 0x2632a-0x267d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _ccec_verify_internal_with_base_ws
              (long param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  size_t sVar13;
  void *pvVar14;
  void *pvVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  
  plVar1 = (long *)*param_2;
  lVar2 = *plVar1;
  if (param_3 < 0x10) {
    _ccec_verify_internal_with_base_ws_cold_1(param_3);
  }
  iVar5 = _ccec_validate_scalar(plVar1,param_5);
  iVar6 = -7;
  if ((iVar5 == 0) && (iVar5 = _ccec_validate_scalar(plVar1,param_6), iVar5 == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = (**(code **)(param_1 + 0x18))(param_1,lVar2);
    uVar8 = (**(code **)(param_1 + 0x18))(param_1,lVar2);
    uVar9 = (**(code **)(param_1 + 0x18))(param_1,lVar2);
    uVar10 = (**(code **)(param_1 + 0x18))(param_1,lVar2);
    uVar11 = (**(code **)(param_1 + 0x18))(param_1,lVar2 * 3);
    uVar12 = (**(code **)(param_1 + 0x18))(param_1,lVar2 * 3);
    sVar13 = _ccec_signature_r_s_size(param_2);
    pvVar14 = (void *)(**(code **)(param_1 + 0x18))(param_1,lVar2);
    _memset(pvVar14,0xaa,sVar13);
    pvVar15 = (void *)(**(code **)(param_1 + 0x18))(param_1,lVar2);
    _memset(pvVar15,0xff,sVar13);
    uVar16 = _cczp_bitlen(plVar1 + *plVar1 * 5 + 4);
    uVar20 = uVar16 + 7 >> 3;
    if (param_3 <= uVar20) {
      uVar20 = param_3;
    }
    iVar6 = _ccn_read_uint_internal(lVar2,uVar7,uVar20,param_4);
    if (-1 < iVar6) {
      plVar17 = plVar1 + lVar2 * 5 + 4;
      if (uVar16 < param_3 << 3) {
        _ccn_shift_right(lVar2,uVar7,uVar7,-(int)uVar16 & 7);
      }
      uVar18 = _cczp_prime(plVar17);
      lVar19 = _ccn_sub_ws(param_1,lVar2,uVar8,uVar7,uVar18);
      if (lVar19 == 0) {
        _ccn_set(lVar2,uVar7,uVar8);
      }
      iVar5 = _cczp_inv_ws(param_1,plVar17,uVar8,param_6);
      iVar21 = -7;
      iVar6 = iVar21;
      if (iVar5 == 0) {
        _cczp_mul_ws(param_1,plVar17,uVar9,uVar7,uVar8);
        _cczp_mul_ws(param_1,plVar17,uVar10,param_5,uVar8);
        lVar19 = _ccn_n(lVar2,param_2 + *plVar1 * 2 + 2);
        if ((((lVar19 == 1) && (param_2 = param_2 + 2, param_2[*plVar1 * 2] == 1)) &&
            (iVar6 = _ccec_projectify_ws(param_1,plVar1,uVar11,param_7,0), iVar6 == 0)) &&
           ((iVar6 = _ccec_projectify_ws(param_1,plVar1,uVar12,param_2,0), iVar6 == 0 &&
            (cVar4 = _ccec_is_point_ws(param_1,plVar1,uVar12), iVar6 = iVar21, cVar4 != '\0')))) {
          lVar19 = *plVar1;
          iVar6 = _ccn_cmp_internal(lVar19,plVar1 + lVar19 * 3 + 4,param_2);
          if (iVar6 == 0) {
            uVar7 = *(undefined8 *)(param_1 + 0x10);
            uVar8 = (**(code **)(param_1 + 0x18))(param_1,lVar19 * 3);
            uVar18 = _cczp_bitlen(plVar1 + lVar19 * 5 + 4);
            iVar5 = _ccec_mult_ws(param_1,plVar1,uVar8,uVar9,uVar18,uVar11);
            iVar6 = -1;
            if (iVar5 == 0) {
              uVar9 = _cczp_bitlen(plVar1 + lVar19 * 5 + 4);
              iVar5 = _ccec_mult_ws(param_1,plVar1,uVar11,uVar10,uVar9,uVar12);
              if (iVar5 == 0) {
                _ccec_full_add_ws(param_1,plVar1,uVar11,uVar11,uVar8);
                iVar6 = 0;
              }
            }
            *(undefined8 *)(param_1 + 0x10) = uVar7;
          }
          else {
            iVar6 = _ccec_twin_mult_ws(param_1,plVar1,uVar11,uVar9,uVar11,uVar10,uVar12);
          }
          if (iVar6 == 0) {
            iVar5 = _ccec_affinify_x_only_ws(param_1,plVar1,uVar11,uVar11);
            iVar6 = -7;
            if (iVar5 == 0) {
              uVar7 = _cczp_prime(plVar17);
              iVar6 = _ccn_cmp_internal(lVar2,uVar11,uVar7);
              if (-1 < iVar6) {
                uVar7 = _cczp_prime(plVar17);
                _ccn_sub_ws(param_1,lVar2,uVar11,uVar11,uVar7);
              }
              iVar5 = _ccn_cmp_internal(lVar2,uVar11,param_5);
              iVar6 = -0x92;
              if (iVar5 == 0) {
                iVar6 = 0;
              }
              _ccn_write_uint_padded_ct_internal(lVar2,param_5,sVar13,pvVar14);
              _ccn_write_uint_padded_ct_internal(lVar2,uVar11,sVar13,pvVar15);
              _cc_fault_canary_set(param_8,&_CCEC_FAULT_CANARY,sVar13,pvVar14,pvVar15);
            }
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x10) = uVar3;
  }
  return iVar6;
}

