// rea decompile_all
// name: _ccrsa_verify_pkcs1v15_internal_ws
// address: 0x119bf
// body: available
// range: 0x119bf-0x11bf0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _ccrsa_verify_pkcs1v15_internal_ws
               (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
               ,ulong param_6,undefined8 param_7,int param_8,byte *param_9)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint local_34;
  
  param_9[0] = 0;
  param_9[1] = 0;
  param_9[2] = 0;
  param_9[3] = 0;
  param_9[4] = 0;
  param_9[5] = 0;
  param_9[6] = 0;
  param_9[7] = 0;
  param_9[8] = 0;
  param_9[9] = 0;
  param_9[10] = 0;
  param_9[0xb] = 0;
  param_9[0xc] = 0;
  param_9[0xd] = 0;
  param_9[0xe] = 0;
  param_9[0xf] = 0;
  lVar1 = *param_2;
  uVar5 = _ccn_write_uint_size_internal(lVar1,param_2 + 3);
  bVar3 = uVar5 == param_6;
  if (param_8 == 0x7dcdc05e) {
    bVar3 = param_6 <= uVar5;
  }
  local_34 = 0xffffffe9;
  if (bVar3) {
    lVar2 = param_1[2];
    uVar6 = (*(code *)param_1[3])(param_1,lVar1);
    lVar7 = (*(code *)param_1[3])(param_1,lVar1);
    _cc_clear((param_1[2] - lVar2) * 8,lVar2 * 8 + *param_1);
    lVar8 = _ccn_write_uint_size_internal(lVar1,param_2 + 3);
    iVar4 = _ccn_read_uint_internal(lVar1,uVar6,param_6,param_7);
    if (iVar4 == 0) {
      local_34 = _ccrsa_pub_crypt_ws(param_1,param_2,lVar7,uVar6);
      if (local_34 == 0) {
        _ccn_swap(lVar1,lVar7);
        iVar4 = _ccrsa_emsa_pkcs1v15_verify_canary_out
                          (lVar8,lVar7 + (lVar1 * 8 - lVar8),param_4,param_5,param_3,param_9);
        if (iVar4 == 0) {
          local_34 = (byte)(param_9[8] ^ param_9[4] ^ param_9[3] ^ param_9[0xd]) ^ 0x89 ^
                     (uint)(byte)(param_9[0xf] ^ param_9[10] ^ param_9[1] ^ param_9[0xb]) ^
                     (uint)(byte)(param_9[0xe] ^ param_9[6] ^ param_9[2] ^ param_9[9]) ^
                     (uint)(byte)(param_9[0xc] ^ *param_9 ^ param_9[7] ^ param_9[5]);
        }
        else {
          local_34 = 0xffffff6e;
        }
      }
    }
    else {
      local_34 = 0xffffffe9;
    }
    param_1[2] = lVar2;
  }
  return local_34;
}

