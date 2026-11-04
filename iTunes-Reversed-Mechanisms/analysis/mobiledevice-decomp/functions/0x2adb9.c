// rea decompile_all
// name: _cczp_modn_ws
// address: 0x2adb9
// body: available
// range: 0x2adb9-0x2af54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _cczp_modn_ws(long param_1,long *param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = _ccctr_context_size(param_2);
  uVar3 = (param_4 - 1U) / uVar2;
  lVar7 = uVar3 + (uVar3 == 0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar4 = (**(code **)(param_1 + 0x18))(param_1,uVar2 * 2,(param_4 - 1U) % uVar2);
  _ccn_set(uVar2,lVar4,param_5);
  if (lVar7 != 1) {
    lVar6 = param_5 + uVar2 * 8;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      _ccn_set(uVar2,uVar2 * 8 + lVar4,lVar6);
      _cczp_mm_redc_ws(param_1,param_2,lVar4,lVar4);
      lVar6 = lVar6 + uVar2 * 8;
    } while (uVar5 < lVar7 - 1U);
  }
  lVar6 = uVar2 * 8 + lVar4;
  param_4 = param_4 - lVar7 * uVar2;
  if (param_4 != 0) {
    _ccn_set(param_4,lVar6,param_5 + lVar7 * uVar2 * 8);
  }
  _ccn_zero(uVar2 - param_4,lVar6 + param_4 * 8);
  _cczp_mm_redc_ws(param_1,param_2,param_3,lVar4);
  uVar5 = 0;
  do {
    _ccn_mul_ws(param_1,uVar2,lVar4,param_3,param_2 + *param_2 + 4);
    _cczp_mm_redc_ws(param_1,param_2,param_3,lVar4);
    uVar5 = uVar5 + 1;
  } while (uVar5 < uVar3);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}

