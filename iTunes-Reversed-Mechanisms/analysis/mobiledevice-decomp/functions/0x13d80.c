// rea decompile_all
// name: _cczp_inv_update_redc_ws
// address: 0x13d80
// body: available
// range: 0x13d80-0x13f24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _cczp_inv_update_redc_ws
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
               undefined8 param_6,ulong param_7)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = _ccctr_context_size(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  piVar3 = (int *)(**(code **)(param_1 + 0x18))(param_1);
  uVar4 = (**(code **)(param_1 + 0x18))(param_1,lVar2);
  lVar6 = -((long)param_5 >> 0x3f);
  lVar7 = -((long)param_7 >> 0x3f);
  _cczp_cond_negate(param_2,lVar6,piVar3,param_4);
  _cczp_cond_negate(param_2,lVar7,uVar4,param_6);
  uVar5 = _ccn_mul1(lVar2,piVar3,piVar3,lVar6 - 1U & param_5 | -param_5 & (long)param_5 >> 0x3f);
  *(undefined8 *)(piVar3 + lVar2 * 2) = uVar5;
  lVar6 = _ccn_addmul1(lVar2,piVar3,uVar4,lVar7 - 1U & param_7 | -param_7 & (long)param_7 >> 0x3f);
  *(long *)(piVar3 + lVar2 * 2) = *(long *)(piVar3 + lVar2 * 2) + lVar6;
  uVar4 = _cczp_prime(param_2);
  lVar6 = _ccn_addmul1(lVar2,piVar3,uVar4,(int)param_2[*param_2 + 3] * *piVar3 & 0x7fffffff);
  *(long *)(piVar3 + lVar2 * 2) = *(long *)(piVar3 + lVar2 * 2) + lVar6;
  _ccn_shift_right(lVar2 + 1,piVar3,piVar3,0x1f);
  _ccn_set(lVar2,param_3,piVar3);
  uVar4 = _cczp_prime(param_2);
  uVar4 = _ccn_subn(lVar2 + 1,piVar3,piVar3,lVar2,uVar4);
  _ccn_mux(lVar2,uVar4,param_3,param_3,piVar3);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}

