// rea decompile_all
// name: _ccec_sign_ws
// address: 0x12a7f
// body: available
// range: 0x12a7f-0x12ba1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_ccec_sign_ws(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,ulong *param_5,
             long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  uVar4 = *(undefined8 *)*param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = (**(code **)(param_1 + 0x18))(param_1,uVar4);
  uVar4 = (**(code **)(param_1 + 0x18))(param_1,uVar4);
  uVar5 = _ccec_sign_internal_ws(param_1,param_2,param_3,param_4,uVar3,uVar4,param_7);
  if ((int)uVar5 == 0) {
    param_2 = (undefined8 *)*param_2;
    uVar5 = *param_2;
    lVar6 = _ccder_sizeof_integer(uVar5,uVar3);
    lVar7 = _ccder_sizeof_integer(uVar5,uVar4);
    uVar8 = _ccder_sizeof(0x2000000000000010,lVar6 + lVar7);
    uVar5 = 0xffffff5d;
    uVar2 = *param_5;
    *param_5 = uVar8;
    if (uVar8 <= uVar2) {
      uVar5 = *param_2;
      uVar4 = _ccder_encode_integer(uVar5,uVar4,param_6,uVar8 + param_6);
      uVar4 = _ccder_encode_integer(uVar5,uVar3,param_6,uVar4);
      _ccder_encode_constructed_tl(0x2000000000000010,uVar8 + param_6,param_6,uVar4);
      uVar5 = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return uVar5;
}

