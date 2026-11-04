// rea decompile_all
// name: _ccn_gcd_update_ws
// address: 0x1cad4
// body: available
// range: 0x1cad4-0x1cc6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ccn_gcd_update_ws(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                        ulong param_5,undefined8 param_6,ulong param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = param_2 + 1;
  lVar3 = (**(code **)(param_1 + 0x18))(param_1,lVar1);
  lVar4 = (**(code **)(param_1 + 0x18))(param_1,lVar1);
  lVar7 = -((long)param_5 >> 0x3f);
  lVar5 = -((long)param_7 >> 0x3f);
  if (param_2 != 0) {
    _ccn_set(param_2,lVar3,param_4);
  }
  _ccn_zero(1,lVar3 + param_2 * 8);
  _ccn_cond_neg(lVar1,lVar7,lVar3,lVar3);
  if (param_2 != 0) {
    _ccn_set(param_2,lVar4,param_6);
  }
  _ccn_zero(1,param_2 * 8 + lVar4);
  _ccn_cond_neg(lVar1,lVar5,lVar4);
  _ccn_mul1(lVar1,lVar3,lVar3,lVar7 - 1U & param_5 | -param_5 & (long)param_5 >> 0x3f);
  _ccn_addmul1(lVar1,lVar3,lVar4,lVar5 - 1U & param_7 | -param_7 & (long)param_7 >> 0x3f);
  uVar6 = *(ulong *)(lVar3 + param_2 * 8) >> 0x3f;
  _ccn_cond_neg(lVar1,uVar6,lVar3,lVar3);
  _ccn_shift_right(lVar1,lVar3,lVar3,0x1f);
  _ccn_set(param_2,param_3,lVar3);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return uVar6;
}

