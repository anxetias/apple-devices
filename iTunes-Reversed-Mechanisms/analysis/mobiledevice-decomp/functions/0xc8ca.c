// rea decompile_all
// name: _ccec_sign_internal_ws
// address: 0xc8ca
// body: available
// range: 0xc8ca-0xcb76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _ccec_sign_internal_ws
              (long param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  
  plVar1 = (long *)*param_2;
  lVar2 = *plVar1;
  if (param_3 < 0x10) {
    _ccec_sign_internal_ws_cold_1(param_3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = (**(code **)(param_1 + 0x18))(param_1,lVar2);
  uVar7 = (**(code **)(param_1 + 0x18))(param_1,lVar2);
  uVar8 = (**(code **)(param_1 + 0x18))(param_1,lVar2);
  uVar9 = (**(code **)(param_1 + 0x18))(param_1,lVar2 * 3);
  iVar5 = _ccec_projectify_ws(param_1,plVar1,uVar9,plVar1 + *plVar1 * 3 + 4,param_7);
  if (iVar5 == 0) {
    lVar4 = *(long *)*param_2;
    uVar10 = _cczp_bitlen(plVar1 + *plVar1 * 5 + 4);
    uVar12 = uVar10 + 7 >> 3;
    if (param_3 <= uVar12) {
      uVar12 = param_3;
    }
    iVar5 = _ccn_read_uint_internal(lVar2,uVar6,uVar12,param_4);
    if (-1 < iVar5) {
      if (uVar10 < param_3 << 3) {
        _ccn_shift_right(lVar2,uVar6,uVar6,-(int)uVar10 & 7);
      }
      uVar11 = _cczp_prime(plVar1 + lVar2 * 5 + 4);
      uVar11 = _ccn_sub_ws(param_1,lVar2,param_5,uVar6,uVar11);
      _ccn_mux(lVar2,uVar11,uVar6,uVar6,param_5);
      iVar5 = _ccec_validate_scalar(plVar1,param_2 + lVar4 * 3 + 2);
      if (iVar5 == 0) {
        iVar13 = 10;
        do {
          iVar5 = _ccec_generate_scalar_fips_retry_ws(param_1,plVar1,param_7,uVar7);
          if ((iVar5 != 0) ||
             (iVar5 = _ccec_generate_scalar_fips_retry_ws(param_1,plVar1,param_7,uVar8), iVar5 != 0)
             ) goto LAB_0000cb24;
          iVar5 = _ccec_sign_internal_inner_ws
                            (param_1,plVar1,uVar6,param_2 + lVar4 * 3 + 2,uVar7,uVar9,uVar8,param_5,
                             param_6,param_7);
          if (iVar5 == 0) goto LAB_0000cb4a;
          if (iVar5 != -0xa5) goto LAB_0000cb24;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        _cc_try_abort("Failed to generate a valid signature");
        iVar5 = -1;
      }
    }
  }
LAB_0000cb24:
  _cc_clear(lVar2 << 3,param_5);
  _cc_clear(lVar2 << 3,param_6);
LAB_0000cb4a:
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  return iVar5;
}

