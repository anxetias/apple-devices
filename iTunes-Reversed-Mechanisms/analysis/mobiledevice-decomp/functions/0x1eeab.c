// rea decompile_all
// name: _ccrsa_pub_crypt_ws
// address: 0x1eeab
// body: available
// range: 0x1eeab-0x1ef93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _ccrsa_pub_crypt_ws(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = *param_2;
  uVar5 = _ccn_bitlen_internal(lVar2,param_2 + lVar2 * 2 + 4);
  if ((lVar2 != 0) && (1 < uVar5)) {
    puVar1 = (ulong *)(param_2 + 3);
    uVar5 = _ccn_n(lVar2,puVar1);
    if ((1 < uVar5) || (1 < *puVar1)) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = (**(code **)(param_1 + 0x18))(param_1,lVar2);
      uVar7 = (**(code **)(param_1 + 0x18))(param_1,lVar2);
      _cczp_to_ws(param_1,param_2,uVar6,param_4);
      uVar4 = _cczp_power_fast_ws(param_1,param_2,uVar7,uVar6,puVar1 + *param_2 * 2 + 1);
      _cczp_from_ws(param_1,param_2,param_3,uVar7);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      return uVar4;
    }
  }
  return 0xffffffe4;
}

