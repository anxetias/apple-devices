// rea decompile_all
// name: _cczp_sqrt_tonelli_shanks_precomp_ws
// address: 0x16a23
// body: available
// range: 0x16a23-0x16cd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_cczp_sqrt_tonelli_shanks_precomp_ws
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
          undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar4 = _ccctr_context_size(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = (**(code **)(param_1 + 0x18))(param_1,uVar4);
  uVar6 = (**(code **)(param_1 + 0x18))(param_1,uVar4);
  uVar7 = (**(code **)(param_1 + 0x18))(param_1,uVar4);
  uVar8 = (**(code **)(param_1 + 0x18))(param_1,uVar4);
  uVar9 = _cczp_power_fast_ws(param_1,param_2,param_3,param_4,param_6);
  if ((int)uVar9 == 0) {
    _ccn_seti(uVar4,uVar8,1);
    _cczp_to_ws(param_1,param_2,uVar8);
    _ccn_set(uVar4,uVar7,param_7);
    _cczp_sqr_ws(param_1,param_2,uVar5,param_3);
    _cczp_mul_ws(param_1,param_2,uVar5,uVar5,param_4);
    _cczp_mul_ws(param_1,param_2,param_3,param_3,param_4);
    while (1 < param_5) {
      _ccn_set(uVar4,uVar6,uVar5);
      param_5 = param_5 - 1;
      if (param_5 < 2) {
        uVar2 = _ccn_cmp_internal(uVar4,uVar6,uVar8);
        _cczp_mul_ws(param_1,param_2,uVar6,param_3,uVar7);
        _ccn_mux(uVar4,uVar2 & 1,param_3,uVar6,param_3);
        _cczp_sqr_ws(param_1,param_2,uVar7,uVar7);
        _cczp_mul_ws(param_1,param_2,uVar6,uVar5,uVar7);
        _ccn_mux(uVar4,uVar2 & 1,uVar5,uVar6,uVar5);
        break;
      }
      uVar10 = 1;
      do {
        _cczp_sqr_ws(param_1,param_2,uVar6,uVar6);
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_5);
      uVar2 = _ccn_cmp_internal(uVar4,uVar6,uVar8);
      _cczp_mul_ws(param_1,param_2,uVar6,param_3,uVar7);
      _ccn_mux(uVar4,uVar2 & 1,param_3,uVar6,param_3);
      _cczp_sqr_ws(param_1,param_2,uVar7);
      _cczp_mul_ws(param_1,param_2,uVar6,uVar5,uVar7);
      _ccn_mux(uVar4,uVar2 & 1,uVar5,uVar6,uVar5);
    }
    _cczp_sqr_ws(param_1,param_2,uVar6,param_3);
    iVar3 = _ccn_cmp_internal(uVar4,uVar6,param_4);
    uVar9 = 0xfffffff9;
    if (iVar3 == 0) {
      uVar9 = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return uVar9;
}

