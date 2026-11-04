// rea decompile_all
// name: _AccelerateCrypto_AES_decrypt_aesni
// address: 0x213c0
// body: available
// range: 0x213c0-0x216b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AccelerateCrypto_AES_decrypt_aesni
          (undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  int iVar1;
  undefined1 auVar2 [16];
  
  auVar2 = *param_1;
  iVar1 = *(int *)param_3[0xf];
  if (iVar1 == 0xa0) {
    if (((ulong)param_3 & 0xf) == 0) {
      auVar2 = aesdec(auVar2 ^ param_3[10],param_3[9]);
      auVar2 = aesdec(auVar2,param_3[8]);
      auVar2 = aesdec(auVar2,param_3[7]);
      auVar2 = aesdec(auVar2,param_3[6]);
      auVar2 = aesdec(auVar2,param_3[5]);
      auVar2 = aesdec(auVar2,param_3[4]);
      auVar2 = aesdec(auVar2,param_3[3]);
      auVar2 = aesdec(auVar2,param_3[2]);
      auVar2 = aesdec(auVar2,param_3[1]);
      auVar2 = aesdeclast(auVar2,*param_3);
      *param_2 = auVar2;
      return 0;
    }
    auVar2 = aesdec(auVar2 ^ param_3[10],param_3[9]);
    auVar2 = aesdec(auVar2,param_3[8]);
    auVar2 = aesdec(auVar2,param_3[7]);
    auVar2 = aesdec(auVar2,param_3[6]);
    auVar2 = aesdec(auVar2,param_3[5]);
    auVar2 = aesdec(auVar2,param_3[4]);
    auVar2 = aesdec(auVar2,param_3[3]);
    auVar2 = aesdec(auVar2,param_3[2]);
    auVar2 = aesdec(auVar2,param_3[1]);
    auVar2 = aesdeclast(auVar2,*param_3);
    *param_2 = auVar2;
    return 0;
  }
  if (iVar1 == 0xc0) {
    if (((ulong)param_3 & 0xf) == 0) {
      auVar2 = aesdec(auVar2 ^ param_3[0xc],param_3[0xb]);
      auVar2 = aesdec(auVar2,param_3[10]);
      auVar2 = aesdec(auVar2,param_3[9]);
      auVar2 = aesdec(auVar2,param_3[8]);
      auVar2 = aesdec(auVar2,param_3[7]);
      auVar2 = aesdec(auVar2,param_3[6]);
      auVar2 = aesdec(auVar2,param_3[5]);
      auVar2 = aesdec(auVar2,param_3[4]);
      auVar2 = aesdec(auVar2,param_3[3]);
      auVar2 = aesdec(auVar2,param_3[2]);
      auVar2 = aesdec(auVar2,param_3[1]);
      auVar2 = aesdeclast(auVar2,*param_3);
      *param_2 = auVar2;
      return 0;
    }
    auVar2 = aesdec(auVar2 ^ param_3[0xc],param_3[0xb]);
    auVar2 = aesdec(auVar2,param_3[10]);
    auVar2 = aesdec(auVar2,param_3[9]);
    auVar2 = aesdec(auVar2,param_3[8]);
    auVar2 = aesdec(auVar2,param_3[7]);
    auVar2 = aesdec(auVar2,param_3[6]);
    auVar2 = aesdec(auVar2,param_3[5]);
    auVar2 = aesdec(auVar2,param_3[4]);
    auVar2 = aesdec(auVar2,param_3[3]);
    auVar2 = aesdec(auVar2,param_3[2]);
    auVar2 = aesdec(auVar2,param_3[1]);
    auVar2 = aesdeclast(auVar2,*param_3);
    *param_2 = auVar2;
    return 0;
  }
  if (iVar1 != 0xe0) {
    return 0xffffffff;
  }
  if (((ulong)param_3 & 0xf) == 0) {
    auVar2 = aesdec(auVar2 ^ param_3[0xe],param_3[0xd]);
    auVar2 = aesdec(auVar2,param_3[0xc]);
    auVar2 = aesdec(auVar2,param_3[0xb]);
    auVar2 = aesdec(auVar2,param_3[10]);
    auVar2 = aesdec(auVar2,param_3[9]);
    auVar2 = aesdec(auVar2,param_3[8]);
    auVar2 = aesdec(auVar2,param_3[7]);
    auVar2 = aesdec(auVar2,param_3[6]);
    auVar2 = aesdec(auVar2,param_3[5]);
    auVar2 = aesdec(auVar2,param_3[4]);
    auVar2 = aesdec(auVar2,param_3[3]);
    auVar2 = aesdec(auVar2,param_3[2]);
    auVar2 = aesdec(auVar2,param_3[1]);
    auVar2 = aesdeclast(auVar2,*param_3);
    *param_2 = auVar2;
    return 0;
  }
  auVar2 = aesdec(auVar2 ^ param_3[0xe],param_3[0xd]);
  auVar2 = aesdec(auVar2,param_3[0xc]);
  auVar2 = aesdec(auVar2,param_3[0xb]);
  auVar2 = aesdec(auVar2,param_3[10]);
  auVar2 = aesdec(auVar2,param_3[9]);
  auVar2 = aesdec(auVar2,param_3[8]);
  auVar2 = aesdec(auVar2,param_3[7]);
  auVar2 = aesdec(auVar2,param_3[6]);
  auVar2 = aesdec(auVar2,param_3[5]);
  auVar2 = aesdec(auVar2,param_3[4]);
  auVar2 = aesdec(auVar2,param_3[3]);
  auVar2 = aesdec(auVar2,param_3[2]);
  auVar2 = aesdec(auVar2,param_3[1]);
  auVar2 = aesdeclast(auVar2,*param_3);
  *param_2 = auVar2;
  return 0;
}

