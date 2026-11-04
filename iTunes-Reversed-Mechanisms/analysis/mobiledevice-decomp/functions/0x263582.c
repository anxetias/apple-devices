// rea decompile_all
// name: _ccec_sign_internal_inner_ws
// address: 0x263582
// body: available
// range: 0x263582-0x263760 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_ccec_sign_internal_inner_ws
          (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
          undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = (**(code **)(param_1 + 0x18))(param_1,lVar7);
  lVar3 = (**(code **)(param_1 + 0x18))(param_1,lVar7 * 3);
  uVar4 = _ccec_mult_blinded_ws(param_1,param_2,lVar3,param_5,param_6,param_10);
  if ((int)uVar4 == 0) {
    uVar4 = _ccec_affinify_x_only_ws(param_1,param_2,lVar3,lVar3);
    if ((int)uVar4 == 0) {
      plVar8 = param_2 + lVar7 * 5 + 4;
      uVar4 = _cczp_prime(plVar8);
      uVar4 = _ccn_sub_ws(param_1,lVar7,param_8,lVar3,uVar4);
      uVar5 = _cczp_prime(plVar8);
      _ccn_cond_add(lVar7,uVar4,param_8,param_8,uVar5);
      lVar6 = _ccn_n(lVar7,param_8);
      if (lVar6 == 0) {
        uVar4 = 0xffffff5b;
      }
      else {
        lVar6 = *param_2 * 8 + lVar3;
        _cczp_mul_ws(param_1,plVar8,uVar2,param_5,param_7);
        _cczp_mul_ws(param_1,plVar8,lVar3,param_3,param_7);
        _cczp_mul_ws(param_1,plVar8,lVar6,param_4,param_7);
        _cczp_mul_ws(param_1,plVar8,param_9,lVar6,param_8);
        _cczp_add_ws(param_1,plVar8,param_9,lVar3,param_9);
        uVar4 = _cczp_inv_ws(param_1,plVar8,uVar2,uVar2);
        if ((int)uVar4 == 0) {
          _cczp_mul_ws(param_1,plVar8,param_9,uVar2,param_9);
          lVar7 = _ccn_n(lVar7,param_9);
          uVar4 = 0xffffff5b;
          if (lVar7 != 0) {
            uVar4 = 0;
          }
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return uVar4;
}

