// rea decompile_all
// name: _vng_aes_encrypt_opt_cbc
// address: 0x1eb80
// body: available
// range: 0x1eb80-0x1ebef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_vng_aes_encrypt_opt_cbc
          (ulong *param_1,ulong *param_2,int param_3,ulong *param_4,undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  if (0 < param_3) {
    do {
      uVar2 = param_1[1];
      *param_2 = uVar4 ^ *param_1;
      param_2[1] = uVar5 ^ uVar2;
      _AccelerateCrypto_AES_encrypt_xmm_no_save(param_2,param_2,param_5);
      uVar4 = *param_2;
      uVar5 = param_2[1];
      *param_4 = uVar4;
      param_4[1] = uVar5;
      param_1 = param_1 + 2;
      param_4 = param_4 + 2;
      iVar3 = param_3 + -1;
      bVar1 = 0 < param_3;
      param_3 = iVar3;
    } while (iVar3 != 0 && bVar1);
  }
  *param_2 = uVar4;
  param_2[1] = uVar5;
  return 0;
}

