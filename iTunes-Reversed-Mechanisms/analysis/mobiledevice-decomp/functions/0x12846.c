// rea decompile_all
// name: _ccec_projectify_jacobian_ws
// address: 0x12846
// body: available
// range: 0x12846-0x129c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_ccec_projectify_jacobian_ws(long param_1,long *param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (param_5 == 0) {
    _ccn_seti(*param_2,*param_2 * 0x10 + param_3,1);
    _cczp_to_ws(param_1,param_2,param_3,param_4);
    _cczp_to_ws(param_1,param_2,param_3 + *param_2 * 8,*param_2 * 8 + param_4);
    _cczp_to_ws(param_1,param_2,*param_2 * 0x10 + param_3);
    uVar2 = 0;
  }
  else {
    lVar3 = _cczp_bitlen(param_2);
    uVar2 = _ccn_random_bits(lVar3 + -1,*param_2 * 0x10 + param_3,param_5);
    _ccn_set_bit(*param_2 * 0x10 + param_3,lVar3 + -2,1);
    _cczp_sqr_ws(param_1,param_2,param_3,*param_2 * 0x10 + param_3);
    _cczp_mul_ws(param_1,param_2,param_3 + *param_2 * 8,param_3,*param_2 * 0x10 + param_3);
    _cczp_mul_ws(param_1,param_2,param_3,param_3,param_4);
    lVar3 = param_3 + *param_2 * 8;
    _cczp_mul_ws(param_1,param_2,lVar3,lVar3,*param_2 * 8 + param_4);
    _cczp_to_ws(param_1,param_2,param_3,param_3);
    _cczp_to_ws(param_1,param_2,param_3 + *param_2 * 8);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return uVar2;
}

