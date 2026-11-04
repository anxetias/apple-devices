// rea decompile_all
// name: _aes_ctr_crypt
// address: 0x21eb0
// body: available
// range: 0x21eb0-0x21edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x21ed7 to 0x21f00 Main_Decrypt_Loop (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _aes_ctr_crypt(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16])

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  uVar1 = *(uint *)param_5[0xf];
  auVar4 = pshufb(*param_4,__Lbswap_mask);
  if (0x7f < param_3) {
    Main_Decrypt_Loop();
    return;
  }
  if (-0x71 < (long)(param_3 - 0x80)) {
    do {
      param_3 = param_3 - 0x10;
      auVar2 = pshufb(auVar4,__Lbswap_mask);
      auVar4._0_8_ = auVar4._0_8_ + 1;
      auVar2 = aesenc(auVar2 ^ *param_5,param_5[1]);
      auVar2 = aesenc(auVar2,param_5[2]);
      auVar2 = aesenc(auVar2,param_5[3]);
      auVar2 = aesenc(auVar2,param_5[4]);
      auVar2 = aesenc(auVar2,param_5[5]);
      auVar2 = aesenc(auVar2,param_5[6]);
      auVar2 = aesenc(auVar2,param_5[7]);
      auVar2 = aesenc(auVar2,param_5[8]);
      auVar3 = aesenc(auVar2,param_5[9]);
      auVar2 = param_5[10];
      if (0xa0 < uVar1) {
        auVar2 = aesenc(auVar3,auVar2);
        auVar3 = aesenc(auVar2,param_5[0xb]);
        auVar2 = param_5[0xc];
        if (0xc0 < uVar1) {
          auVar2 = aesenc(auVar3,auVar2);
          auVar3 = aesenc(auVar2,param_5[0xd]);
          auVar2 = param_5[0xe];
        }
      }
      auVar2 = aesenclast(auVar3,auVar2);
      *param_2 = auVar2 ^ *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (0xf < (long)param_3);
  }
  auVar4 = pshufb(auVar4,__Lbswap_mask);
  *param_4 = auVar4;
  return;
}

