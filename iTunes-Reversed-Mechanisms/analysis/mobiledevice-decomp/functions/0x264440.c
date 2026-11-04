// rea decompile_all
// name: _ccder_decode_rsa_priv_ws
// address: 0x264440
// body: available
// range: 0x264440-0x264813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_ccder_decode_rsa_priv_ws(long param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulong *local_58;
  ulong *local_50;
  ulong *local_48;
  long local_40;
  undefined8 local_38;
  
  uVar12 = *param_2;
  local_80 = *(undefined8 *)(param_1 + 0x10);
  local_40 = param_1;
  local_38 = param_4;
  uVar2 = _ccder_decode_constructed_tl(0x2000000000000010,&local_38);
  local_88 = 0;
  lVar3 = _ccder_decode_uint(1,&local_88,uVar2,local_38);
  uVar2 = 0;
  if ((lVar3 != 0) && (local_88 == 0)) {
    uVar2 = _ccder_decode_uint(uVar12,param_2 + 3,lVar3,local_38);
    uVar2 = _ccder_decode_uint(uVar12,param_2 + *param_2 * 2 + 4,uVar2,local_38);
    lVar3 = _ccder_decode_uint(uVar12,param_2 + *param_2 * 3 + 4,uVar2,local_38);
    if (lVar3 != 0) {
      uVar2 = 0;
      iVar1 = _cczp_mm_init_ws(local_40,param_2,uVar12,0);
      if (iVar1 != 0) goto LAB_002647f1;
      uVar12 = (uVar12 & 0x3fffffffffffffe) * 0x20 + 0x40 >> 6;
      local_50 = param_2;
      puVar4 = (ulong *)_ccrsa_ctx_private_zp();
      lVar3 = _ccder_decode_uint(uVar12,puVar4 + 3,lVar3,local_38);
      if (lVar3 != 0) {
        uVar2 = _cczp_prime(puVar4);
        lVar5 = _ccn_bitlen_internal(uVar12,uVar2);
        *puVar4 = lVar5 + 0x3fU >> 6;
        iVar1 = _cczp_init_ws(local_40,puVar4);
        puVar11 = local_50;
        if (iVar1 == 0) {
          lVar6 = _ccrsa_ctx_private_zp(local_50);
          plVar7 = (long *)_ccrsa_ctx_private_zp(puVar11);
          lVar5 = *plVar7;
          local_78 = _ccder_decode_uint(uVar12,lVar6 + lVar5 * 0x10 + 0x38,lVar3,local_38);
          if (local_78 != 0) {
            puVar11 = (ulong *)(lVar6 + lVar5 * 0x10 + 0x20);
            uVar2 = _cczp_prime(puVar11);
            lVar3 = _ccn_bitlen_internal(uVar12,uVar2);
            *puVar11 = lVar3 + 0x3fU >> 6;
            iVar1 = _cczp_init_ws(local_40,puVar11);
            if (iVar1 == 0) {
              uVar12 = _cczp_bitlen(puVar4);
              uVar8 = _cczp_bitlen(puVar11);
              if (uVar8 <= uVar12) {
                lVar5 = _ccctr_context_size(puVar4);
                lVar6 = _cczp_prime(puVar4);
                local_48 = puVar4;
                local_68 = _ccctr_context_size(puVar11);
                local_58 = puVar11;
                local_60 = _cczp_prime(puVar11);
                lVar3 = local_40;
                local_70 = *(undefined8 *)(local_40 + 0x10);
                lVar9 = (**(code **)(local_40 + 0x18))(local_40,lVar5 + 1);
                *(ulong *)(lVar9 + lVar5 * 8) = *(ulong *)(lVar6 + -8 + lVar5 * 8) >> 0x3f;
                _ccn_shift_left(lVar5,lVar9,lVar6,1);
                iVar1 = _ccn_cmpn_internal(lVar5 + 1,lVar9,local_68,local_60);
                *(undefined8 *)(lVar3 + 0x10) = local_70;
                if ((iVar1 + 1U & 0xfffffffe) == 2) {
                  uVar2 = _ccctr_context_size(local_48);
                  puVar4 = local_50;
                  lVar5 = _ccrsa_ctx_private_zp(local_50);
                  plVar7 = (long *)_ccrsa_ctx_private_zp(puVar4);
                  lVar3 = *plVar7;
                  plVar7 = (long *)_ccrsa_ctx_private_zp(puVar4);
                  uVar2 = _ccder_decode_uint(uVar2,*plVar7 * 0x10 + lVar3 * 0x10 + lVar5 + 0x40,
                                             local_78,local_38);
                  uVar10 = _ccctr_context_size(local_58);
                  lVar6 = _ccrsa_ctx_private_zp(puVar4);
                  plVar7 = (long *)_ccrsa_ctx_private_zp(puVar4);
                  lVar3 = *plVar7;
                  plVar7 = (long *)_ccrsa_ctx_private_zp(puVar4);
                  lVar5 = *plVar7;
                  plVar7 = (long *)_ccrsa_ctx_private_zp(puVar4);
                  uVar2 = _ccder_decode_uint(uVar10,lVar5 * 0x10 + lVar3 * 0x10 + lVar6 +
                                                    *plVar7 * 8 + 0x40,uVar2,local_38);
                  uVar10 = _ccctr_context_size(local_48);
                  lVar9 = _ccrsa_ctx_private_zp(puVar4);
                  plVar7 = (long *)_ccrsa_ctx_private_zp(puVar4);
                  lVar3 = *plVar7;
                  plVar7 = (long *)_ccrsa_ctx_private_zp(puVar4);
                  lVar5 = *plVar7;
                  plVar7 = (long *)_ccrsa_ctx_private_zp(puVar4);
                  lVar6 = *plVar7;
                  plVar7 = (long *)_ccrsa_ctx_private_zp(puVar4);
                  uVar2 = _ccder_decode_uint(uVar10,lVar5 * 0x10 + lVar3 * 0x10 + lVar9 + lVar6 * 8
                                                    + *plVar7 * 8 + 0x40,uVar2,local_38);
                  goto LAB_002647f1;
                }
              }
            }
          }
        }
      }
    }
    uVar2 = 0;
  }
LAB_002647f1:
  *(undefined8 *)(local_40 + 0x10) = local_80;
  return uVar2;
}

