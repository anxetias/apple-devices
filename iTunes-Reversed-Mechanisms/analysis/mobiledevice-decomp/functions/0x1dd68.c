// rea decompile_all
// name: _ccrsa_priv_crypt_blinded_ws
// address: 0x1dd68
// body: available
// range: 0x1dd68-0x1e484 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _ccrsa_priv_crypt_blinded_ws
               (long param_1,undefined8 *param_2,long *param_3,undefined8 param_4,undefined8 param_5
               )

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  void *pvVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  
  lVar2 = *param_3;
  uVar6 = _ccrsa_ctx_private_zp(param_3);
  uVar6 = _ccctr_context_size(uVar6);
  lVar7 = _ccrsa_ctx_private_zp(param_3);
  plVar8 = (long *)_ccrsa_ctx_private_zp(param_3);
  uVar9 = _ccctr_context_size(*plVar8 * 0x10 + lVar7 + 0x20);
  lVar10 = _ccrsa_ctx_private_zp(param_3);
  plVar8 = (long *)_ccrsa_ctx_private_zp(param_3);
  lVar7 = *plVar8;
  plVar8 = (long *)_ccrsa_ctx_private_zp(param_3);
  uVar11 = _ccn_bitlen_internal(uVar6,*plVar8 * 0x10 + lVar7 * 0x10 + lVar10 + 0x40);
  uVar30 = 0xffffffe4;
  if (1 < uVar11) {
    lVar12 = _ccrsa_ctx_private_zp(param_3);
    plVar8 = (long *)_ccrsa_ctx_private_zp(param_3);
    lVar7 = *plVar8;
    plVar8 = (long *)_ccrsa_ctx_private_zp(param_3);
    lVar10 = *plVar8;
    plVar8 = (long *)_ccrsa_ctx_private_zp(param_3);
    uVar11 = _ccn_bitlen_internal(uVar9,lVar10 * 0x10 + lVar7 * 0x10 + lVar12 + *plVar8 * 8 + 0x40);
    if ((1 < uVar11) &&
       (uVar11 = _ccn_bitlen_internal(lVar2,param_3 + *param_3 * 2 + 4), 1 < uVar11)) {
      iVar4 = _ccn_cmp_internal(lVar2,param_5,param_3 + 3);
      uVar30 = 0xffffffe9;
      if (iVar4 < 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        uVar13 = (**(code **)(param_1 + 0x18))(param_1,lVar2);
        pvVar14 = (void *)(**(code **)(param_1 + 0x18))(param_1,lVar2);
        _ccn_set(lVar2,pvVar14,param_5);
        uVar15 = _ccrsa_ctx_private_zp(param_3);
        lVar7 = _ccrsa_ctx_private_zp(param_3);
        plVar8 = (long *)_ccrsa_ctx_private_zp(param_3);
        lVar29 = lVar7 + *plVar8 * 0x10 + 0x20;
        lVar16 = _ccrsa_ctx_private_zp(param_3);
        plVar8 = (long *)_ccrsa_ctx_private_zp(param_3);
        lVar7 = *plVar8;
        plVar8 = (long *)_ccrsa_ctx_private_zp(param_3);
        lVar10 = *plVar8;
        lVar17 = _ccrsa_ctx_private_zp(param_3);
        plVar8 = (long *)_ccrsa_ctx_private_zp(param_3);
        lVar12 = *plVar8;
        plVar8 = (long *)_ccrsa_ctx_private_zp(param_3);
        lVar24 = *plVar8;
        plVar8 = (long *)_ccrsa_ctx_private_zp(param_3);
        lVar25 = *plVar8;
        uVar11 = _ccctr_context_size(lVar29);
        uVar18 = _ccctr_context_size(uVar15);
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        puVar19 = (undefined8 *)(**(code **)(param_1 + 0x18))(param_1,7);
        lVar20 = (**(code **)(param_1 + 0x18))(param_1);
        uVar21 = (**(code **)(param_1 + 0x18))(param_1,uVar18 * 2 + 6);
        uVar22 = _cczp_bitlen(uVar15);
        uVar23 = _cczp_bitlen(lVar29);
        uVar5 = 0xffffffe4;
        if (((uVar23 <= uVar22) && (uVar11 <= uVar18)) &&
           (uVar5 = (*(code *)*param_2)(param_2,0x38,puVar19), uVar5 == 0)) {
          _ccn_mux_seed_mask(puVar19[6]);
          uVar5 = _ccrsa_crt_init_pq_star_ws(param_1,lVar29,uVar21,*puVar19);
          if (uVar5 == 0) {
            lVar1 = lVar20 + 8 + uVar18 * 8;
            _ccrsa_crt_exp_mod_pq_star_ws
                      (param_1,param_3,lVar29,uVar21,param_5,
                       lVar24 * 0x10 + lVar17 + lVar12 * 0x10 + lVar25 * 8 + 0x40,lVar1,puVar19 + 1)
            ;
            uVar5 = _ccrsa_crt_init_pq_star_ws(param_1,uVar15,uVar21,puVar19[3]);
            if (uVar5 == 0) {
              _ccrsa_crt_exp_mod_pq_star_ws
                        (param_1,param_3,uVar15,uVar21,param_5,
                         lVar10 * 0x10 + lVar16 + lVar7 * 0x10 + 0x40,lVar20,puVar19 + 4);
              uVar15 = _ccrsa_ctx_private_zp(param_3);
              lVar7 = _ccrsa_ctx_private_zp(param_3);
              plVar8 = (long *)_ccrsa_ctx_private_zp(param_3);
              lVar17 = lVar7 + *plVar8 * 0x10 + 0x20;
              lVar10 = _ccctr_context_size(uVar21);
              lVar12 = _ccctr_context_size(uVar15);
              lVar24 = _ccctr_context_size(lVar17);
              uVar15 = *(undefined8 *)(param_1 + 0x10);
              lVar25 = (**(code **)(param_1 + 0x18))(param_1);
              lVar16 = (**(code **)(param_1 + 0x18))(param_1,lVar10);
              uVar26 = (**(code **)(param_1 + 0x18))(param_1,lVar10);
              lVar7 = lVar10 + 2;
              uVar27 = _cczp_prime(uVar21);
              if (lVar10 != 0) {
                _ccn_set(lVar10,lVar25,uVar27);
              }
              _ccn_zero(2,lVar10 * 8 + lVar25);
              _ccn_shift_left_multi(lVar7,lVar25,lVar25,0x21);
              _ccn_addn(lVar7,lVar25,lVar25,lVar10,lVar20);
              _ccn_subn(lVar7,lVar25,lVar25,lVar24 + 1,lVar1);
              _cczp_modn_ws(param_1,uVar21,uVar26,lVar7,lVar25);
              lVar28 = _ccrsa_ctx_private_zp(param_3);
              plVar8 = (long *)_ccrsa_ctx_private_zp(param_3);
              lVar7 = *plVar8;
              plVar8 = (long *)_ccrsa_ctx_private_zp(param_3);
              lVar29 = *plVar8;
              plVar8 = (long *)_ccrsa_ctx_private_zp(param_3);
              lVar3 = *plVar8;
              plVar8 = (long *)_ccrsa_ctx_private_zp(param_3);
              if (lVar12 != 0) {
                _ccn_set(lVar12,lVar25,
                         lVar29 * 0x10 + lVar28 + lVar7 * 0x10 + lVar3 * 8 + *plVar8 * 8 + 0x40);
              }
              _ccn_zero(lVar10 - lVar12,lVar12 * 8 + lVar25);
              _cczp_mul_ws(param_1,uVar21,uVar26,uVar26,lVar25);
              uVar27 = _cczp_prime(lVar17);
              if (lVar24 != 0) {
                _ccn_set(lVar24,lVar16,uVar27);
              }
              _ccn_zero(lVar10 - lVar24,lVar16 + lVar24 * 8);
              _cczp_to_ws(param_1,uVar21,uVar26,uVar26);
              _ccn_mul_ws(param_1,lVar10,lVar25,lVar16,uVar26);
              _ccn_addn(lVar10 * 2,lVar20,lVar25,lVar24 + 1,lVar1);
              *(undefined8 *)(param_1 + 0x10) = uVar15;
              _cczp_modn_ws(param_1,param_3,param_4,uVar18 * 2 + 2,lVar20);
              uVar5 = 0;
            }
          }
        }
        *(undefined8 *)(param_1 + 0x10) = uVar9;
        uVar9 = _ccrsa_ctx_public(param_3);
        _ccrsa_pub_crypt_ws(param_1,uVar9,uVar13,param_4);
        iVar4 = _ccn_cmp_internal(lVar2,uVar13,pvVar14);
        uVar30 = (uVar5 != 0) - 1 & -(uint)(iVar4 != 0) & 0xffffffe5 | uVar5;
        _memset(pvVar14,0xaa,lVar2 * 8);
        _ccn_mux(lVar2,uVar5 != 0,param_4,pvVar14,param_4);
        *(undefined8 *)(param_1 + 0x10) = uVar6;
      }
    }
  }
  return uVar30;
}

