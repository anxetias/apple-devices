// rea decompile_all
// name: _vng_aes_decrypt_opt_cbc
// address: 0x1ebf0
// body: available
// range: 0x1ebf0-0x1ec4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_vng_aes_decrypt_opt_cbc(uint *param_1,uint *param_2,int param_3,uint *param_4,undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = uVar3;
  uVar8 = uVar4;
  uVar9 = uVar5;
  uVar10 = uVar6;
  if (0 < param_3) {
    do {
      uVar3 = *param_1;
      uVar4 = param_1[1];
      uVar5 = param_1[2];
      uVar6 = param_1[3];
      _AccelerateCrypto_AES_decrypt_xmm_no_save(param_1,param_4,param_5);
      *param_4 = *param_4 ^ uVar7;
      param_4[1] = param_4[1] ^ uVar8;
      param_4[2] = param_4[2] ^ uVar9;
      param_4[3] = param_4[3] ^ uVar10;
      param_1 = param_1 + 4;
      param_4 = param_4 + 4;
      iVar2 = param_3 + -1;
      bVar1 = 0 < param_3;
      uVar7 = uVar3;
      uVar8 = uVar4;
      uVar9 = uVar5;
      uVar10 = uVar6;
      param_3 = iVar2;
    } while (iVar2 != 0 && bVar1);
  }
  *param_2 = uVar3;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  return 0;
}

