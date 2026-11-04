// rea decompile_all
// name: _ccrsa_sign_pkcs1v15_blinded_ws
// address: 0x1ef94
// body: available
// range: 0x1ef94-0x1f071 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_ccrsa_sign_pkcs1v15_blinded_ws
          (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6,ulong *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_3;
  uVar3 = _ccn_write_uint_size_internal(uVar1,param_3 + 3);
  uVar4 = 0xffffffe9;
  if (uVar3 <= *param_7) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = (**(code **)(param_1 + 0x18))(param_1,uVar1);
    *param_7 = uVar3;
    uVar4 = _ccrsa_emsa_pkcs1v15_encode_internal(uVar3,param_8,param_5,param_6,param_4);
    if ((int)uVar4 == 0) {
      _ccn_read_uint_internal(uVar1,uVar5,uVar3,param_8);
      uVar4 = _ccrsa_priv_crypt_blinded_ws(param_1,param_2,param_3,uVar5,uVar5);
      if ((int)uVar4 == 0) {
        _ccn_write_uint_padded_ct_internal(uVar1,uVar5,uVar3,param_8);
        uVar4 = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x10) = uVar2;
  }
  return uVar4;
}

