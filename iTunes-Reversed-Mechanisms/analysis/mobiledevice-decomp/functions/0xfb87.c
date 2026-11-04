// rea decompile_all
// name: _ccec_affinify_jacobian_ws
// address: 0xfb87
// body: available
// range: 0xfb87-0xfc99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _ccec_affinify_jacobian_ws(long param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *param_2;
  cVar3 = _ccec_is_point_at_infinity(param_2,param_4);
  if (cVar3 == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = (**(code **)(param_1 + 0x18))(param_1,lVar1);
    uVar6 = (**(code **)(param_1 + 0x18))(param_1,lVar1);
    uVar4 = _cczp_inv_ws(param_1,param_2,uVar5,*param_2 * 0x10 + param_4);
    _cczp_sqr_ws(param_1,param_2,uVar6,uVar5);
    _cczp_mul_ws(param_1,param_2,param_3,uVar6,param_4);
    _cczp_mul_ws(param_1,param_2,uVar6,uVar6,uVar5);
    _cczp_mul_ws(param_1,param_2,param_3 + *param_2 * 8,uVar6,param_4 + *param_2 * 8);
    _cczp_from_ws(param_1,param_2,param_3,param_3);
    _cczp_from_ws(param_1,param_2,param_3 + *param_2 * 8);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
  }
  else {
    uVar4 = 0xfffffff9;
  }
  return uVar4;
}

