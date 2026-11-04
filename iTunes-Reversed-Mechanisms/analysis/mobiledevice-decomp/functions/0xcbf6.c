// rea decompile_all
// name: _cczp_inv_field_ws
// address: 0xcbf6
// body: available
// range: 0xcbf6-0xcc80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _cczp_inv_field_ws(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar2 = _ccctr_context_size(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = (**(code **)(param_1 + 0x18))(param_1,uVar2);
  uVar4 = _cczp_prime(param_2);
  lVar5 = _ccn_sub1(uVar2,uVar3,uVar4,2);
  uVar2 = 0xffffffff;
  if (lVar5 == 0) {
    uVar2 = _cczp_power_fast_ws(param_1,param_2,param_3,param_4,uVar3);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return uVar2;
}

