// rea decompile_all
// name: _cczp_sqrt_default_ws
// address: 0x16cd5
// body: available
// range: 0x16cd5-0x16ea8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_cczp_sqrt_default_ws(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar4 = (uint *)_cczp_prime(param_2);
  uVar1 = *puVar4;
  uVar5 = _ccctr_context_size(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  pbVar6 = (byte *)(**(code **)(param_1 + 0x18))(param_1,uVar5);
  uVar7 = _cczp_prime(param_2);
  if ((~uVar1 & 3) == 0) {
    _ccn_add1_ws(param_1,uVar5,pbVar6,uVar7,1);
    _ccn_shift_right(uVar5,pbVar6,pbVar6,2);
    uVar8 = _cczp_power_fast_ws(param_1,param_2,param_3,param_4,pbVar6);
    if ((int)uVar8 == 0) {
      _cczp_sqr_ws(param_1,param_2,pbVar6,param_3);
      iVar3 = _ccn_cmp_internal(uVar5,pbVar6,param_4);
      uVar8 = 0xfffffff9;
      if (iVar3 == 0) {
        uVar8 = 0;
      }
    }
  }
  else {
    _ccn_set(uVar5,pbVar6,uVar7);
    *pbVar6 = *pbVar6 & 0xfe;
    uVar7 = _ccn_trailing_zeros(uVar5,pbVar6);
    _ccn_shift_right_multi(uVar5,pbVar6,pbVar6,uVar7);
    uVar9 = (**(code **)(param_1 + 0x18))(param_1,uVar5);
    _ccn_sub1(uVar5,uVar9,pbVar6,1);
    _ccn_shift_right(uVar5,uVar9,uVar9,1);
    uVar10 = (**(code **)(param_1 + 0x18))(param_1,uVar5);
    _ccn_seti(uVar5,uVar10,1);
    while (iVar3 = _cczp_is_quadratic_residue_ws(param_1,param_2,uVar10), iVar3 == 0) {
      _ccn_add1_ws(param_1,uVar5,uVar10,uVar10,1);
    }
    uVar8 = _cczp_power_fast_ws(param_1,param_2,uVar10,uVar10,pbVar6);
    if ((int)uVar8 == 0) {
      uVar8 = _cczp_sqrt_tonelli_shanks_precomp_ws
                        (param_1,param_2,param_3,param_4,uVar7,uVar9,uVar10);
    }
  }
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return uVar8;
}

