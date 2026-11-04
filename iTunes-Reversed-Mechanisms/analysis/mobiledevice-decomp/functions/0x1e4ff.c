// rea decompile_all
// name: _ccrsa_crt_exp_mod_pq_star_ws
// address: 0x1e4ff
// body: available
// range: 0x1e4ff-0x1e6a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccrsa_crt_exp_mod_pq_star_ws
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 *param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = _ccctr_context_size(param_4);
  lVar3 = _ccctr_context_size(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar4 = (**(code **)(param_1 + 0x18))(param_1,lVar2 * 2);
  lVar2 = (**(code **)(param_1 + 0x18))(param_1,lVar2);
  lVar5 = _ccctr_context_size(param_2);
  uVar6 = _cczp_prime(param_3);
  if (lVar3 != 0) {
    _ccn_set(lVar3,lVar4,uVar6);
  }
  _ccn_zero((lVar5 - lVar3) + 1,lVar3 * 8 + lVar4);
  _ccn_set_bit(lVar4,0,0);
  _ccn_set(lVar3,lVar2,param_6);
  uVar6 = _ccn_addmul1(lVar3,lVar2,lVar4,*param_8);
  *(undefined8 *)(lVar2 + lVar3 * 8) = uVar6;
  uVar6 = _cczp_prime(param_3);
  uVar6 = _ccn_mul1(lVar3,lVar4,uVar6,param_8[2]);
  *(undefined8 *)(lVar4 + lVar3 * 8) = uVar6;
  lVar3 = _ccctr_context_size(param_2);
  uVar6 = _ccctr_context_size(param_2);
  _ccn_addn(lVar3 + 1,lVar4,lVar4,uVar6,param_5);
  lVar3 = _ccctr_context_size(param_2);
  _cczp_modn_ws(param_1,param_4,lVar4,lVar3 + 1,lVar4);
  _cczp_to_ws(param_1,param_4,lVar4,lVar4);
  lVar3 = _cczp_bitlen(param_3);
  _cczp_power_ws(param_1,param_4,param_7,lVar4,lVar3 + 0x20,lVar2);
  _cczp_from_ws(param_1,param_4,param_7,param_7);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}

