// rea decompile_all
// name: Main_Decrypt_Loop
// address: 0x21f00
// body: available
// range: 0x21f00-0x2249e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Main_Decrypt_Loop(undefined1 (*param_1) [16],undefined1 (*param_2) [16],long param_3,
                      undefined1 (*param_4) [16],undefined1 (*param_5) [16],uint param_6)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM15 [16];
  
  do {
    lVar1 = param_3;
    auVar12 = *param_5;
    lVar4 = in_XMM15._0_8_;
    auVar3._8_8_ = in_XMM15._8_8_;
    auVar3._0_8_ = lVar4 + 1;
    auVar6._0_8_ = lVar4 + 2;
    auVar6._8_8_ = auVar3._8_8_;
    auVar2 = pshufb(in_XMM15,__Lbswap_mask);
    auVar7._0_8_ = lVar4 + 3;
    auVar7._8_8_ = auVar3._8_8_;
    auVar5 = pshufb(auVar3,__Lbswap_mask);
    auVar8._0_8_ = lVar4 + 4;
    auVar8._8_8_ = auVar3._8_8_;
    auVar6 = pshufb(auVar6,__Lbswap_mask);
    auVar9._0_8_ = lVar4 + 5;
    auVar9._8_8_ = auVar3._8_8_;
    auVar7 = pshufb(auVar7,__Lbswap_mask);
    auVar10._0_8_ = lVar4 + 6;
    auVar10._8_8_ = auVar3._8_8_;
    auVar8 = pshufb(auVar8,__Lbswap_mask);
    auVar11._0_8_ = lVar4 + 7;
    auVar11._8_8_ = auVar3._8_8_;
    auVar9 = pshufb(auVar9,__Lbswap_mask);
    in_XMM15._0_8_ = lVar4 + 8;
    in_XMM15._8_8_ = auVar3._8_8_;
    auVar10 = pshufb(auVar10,__Lbswap_mask);
    auVar11 = pshufb(auVar11,__Lbswap_mask);
    auVar3 = param_5[1];
    auVar2 = aesenc(auVar2 ^ auVar12,auVar3);
    auVar5 = aesenc(auVar5 ^ auVar12,auVar3);
    auVar6 = aesenc(auVar6 ^ auVar12,auVar3);
    auVar7 = aesenc(auVar7 ^ auVar12,auVar3);
    auVar8 = aesenc(auVar8 ^ auVar12,auVar3);
    auVar9 = aesenc(auVar9 ^ auVar12,auVar3);
    auVar10 = aesenc(auVar10 ^ auVar12,auVar3);
    auVar11 = aesenc(auVar11 ^ auVar12,auVar3);
    auVar12 = param_5[2];
    auVar3 = aesenc(auVar2,auVar12);
    auVar2 = aesenc(auVar5,auVar12);
    auVar5 = aesenc(auVar6,auVar12);
    auVar6 = aesenc(auVar7,auVar12);
    auVar7 = aesenc(auVar8,auVar12);
    auVar8 = aesenc(auVar9,auVar12);
    auVar9 = aesenc(auVar10,auVar12);
    auVar10 = aesenc(auVar11,auVar12);
    auVar12 = param_5[3];
    auVar3 = aesenc(auVar3,auVar12);
    auVar2 = aesenc(auVar2,auVar12);
    auVar5 = aesenc(auVar5,auVar12);
    auVar6 = aesenc(auVar6,auVar12);
    auVar7 = aesenc(auVar7,auVar12);
    auVar8 = aesenc(auVar8,auVar12);
    auVar9 = aesenc(auVar9,auVar12);
    auVar10 = aesenc(auVar10,auVar12);
    auVar12 = param_5[4];
    auVar3 = aesenc(auVar3,auVar12);
    auVar2 = aesenc(auVar2,auVar12);
    auVar5 = aesenc(auVar5,auVar12);
    auVar6 = aesenc(auVar6,auVar12);
    auVar7 = aesenc(auVar7,auVar12);
    auVar8 = aesenc(auVar8,auVar12);
    auVar9 = aesenc(auVar9,auVar12);
    auVar10 = aesenc(auVar10,auVar12);
    auVar12 = param_5[5];
    auVar3 = aesenc(auVar3,auVar12);
    auVar2 = aesenc(auVar2,auVar12);
    auVar5 = aesenc(auVar5,auVar12);
    auVar6 = aesenc(auVar6,auVar12);
    auVar7 = aesenc(auVar7,auVar12);
    auVar8 = aesenc(auVar8,auVar12);
    auVar9 = aesenc(auVar9,auVar12);
    auVar10 = aesenc(auVar10,auVar12);
    auVar12 = param_5[6];
    auVar3 = aesenc(auVar3,auVar12);
    auVar2 = aesenc(auVar2,auVar12);
    auVar5 = aesenc(auVar5,auVar12);
    auVar6 = aesenc(auVar6,auVar12);
    auVar7 = aesenc(auVar7,auVar12);
    auVar8 = aesenc(auVar8,auVar12);
    auVar9 = aesenc(auVar9,auVar12);
    auVar10 = aesenc(auVar10,auVar12);
    auVar12 = param_5[7];
    auVar3 = aesenc(auVar3,auVar12);
    auVar2 = aesenc(auVar2,auVar12);
    auVar5 = aesenc(auVar5,auVar12);
    auVar6 = aesenc(auVar6,auVar12);
    auVar7 = aesenc(auVar7,auVar12);
    auVar8 = aesenc(auVar8,auVar12);
    auVar9 = aesenc(auVar9,auVar12);
    auVar10 = aesenc(auVar10,auVar12);
    auVar12 = param_5[8];
    auVar3 = aesenc(auVar3,auVar12);
    auVar2 = aesenc(auVar2,auVar12);
    auVar5 = aesenc(auVar5,auVar12);
    auVar6 = aesenc(auVar6,auVar12);
    auVar7 = aesenc(auVar7,auVar12);
    auVar8 = aesenc(auVar8,auVar12);
    auVar9 = aesenc(auVar9,auVar12);
    auVar10 = aesenc(auVar10,auVar12);
    auVar12 = param_5[9];
    auVar3 = aesenc(auVar3,auVar12);
    auVar2 = aesenc(auVar2,auVar12);
    auVar5 = aesenc(auVar5,auVar12);
    auVar6 = aesenc(auVar6,auVar12);
    auVar7 = aesenc(auVar7,auVar12);
    auVar8 = aesenc(auVar8,auVar12);
    auVar9 = aesenc(auVar9,auVar12);
    auVar10 = aesenc(auVar10,auVar12);
    auVar12 = param_5[10];
    if (0xa0 < param_6) {
      auVar12 = param_5[10];
      auVar3 = aesenc(auVar3,auVar12);
      auVar2 = aesenc(auVar2,auVar12);
      auVar5 = aesenc(auVar5,auVar12);
      auVar6 = aesenc(auVar6,auVar12);
      auVar7 = aesenc(auVar7,auVar12);
      auVar8 = aesenc(auVar8,auVar12);
      auVar9 = aesenc(auVar9,auVar12);
      auVar10 = aesenc(auVar10,auVar12);
      auVar12 = param_5[0xb];
      auVar3 = aesenc(auVar3,auVar12);
      auVar2 = aesenc(auVar2,auVar12);
      auVar5 = aesenc(auVar5,auVar12);
      auVar6 = aesenc(auVar6,auVar12);
      auVar7 = aesenc(auVar7,auVar12);
      auVar8 = aesenc(auVar8,auVar12);
      auVar9 = aesenc(auVar9,auVar12);
      auVar10 = aesenc(auVar10,auVar12);
      auVar12 = param_5[0xc];
      if (0xc0 < param_6) {
        auVar12 = param_5[0xc];
        auVar3 = aesenc(auVar3,auVar12);
        auVar2 = aesenc(auVar2,auVar12);
        auVar5 = aesenc(auVar5,auVar12);
        auVar6 = aesenc(auVar6,auVar12);
        auVar7 = aesenc(auVar7,auVar12);
        auVar8 = aesenc(auVar8,auVar12);
        auVar9 = aesenc(auVar9,auVar12);
        auVar10 = aesenc(auVar10,auVar12);
        auVar12 = param_5[0xd];
        auVar3 = aesenc(auVar3,auVar12);
        auVar2 = aesenc(auVar2,auVar12);
        auVar5 = aesenc(auVar5,auVar12);
        auVar6 = aesenc(auVar6,auVar12);
        auVar7 = aesenc(auVar7,auVar12);
        auVar8 = aesenc(auVar8,auVar12);
        auVar9 = aesenc(auVar9,auVar12);
        auVar10 = aesenc(auVar10,auVar12);
        auVar12 = param_5[0xe];
      }
    }
    auVar3 = aesenclast(auVar3,*param_1 ^ auVar12);
    *param_2 = auVar3;
    auVar3 = aesenclast(auVar2,param_1[1] ^ auVar12);
    param_2[1] = auVar3;
    auVar3 = aesenclast(auVar5,param_1[2] ^ auVar12);
    param_2[2] = auVar3;
    auVar3 = aesenclast(auVar6,param_1[3] ^ auVar12);
    param_2[3] = auVar3;
    auVar3 = aesenclast(auVar7,param_1[4] ^ auVar12);
    param_2[4] = auVar3;
    auVar3 = aesenclast(auVar8,param_1[5] ^ auVar12);
    param_2[5] = auVar3;
    auVar3 = aesenclast(auVar9,param_1[6] ^ auVar12);
    param_2[6] = auVar3;
    auVar12 = aesenclast(auVar10,param_1[7] ^ auVar12);
    param_2[7] = auVar12;
    param_2 = param_2 + 8;
    param_1 = param_1 + 8;
    param_3 = lVar1 + -0x80;
  } while (0x7f < lVar1);
  if (-0x71 < lVar1 + -0x80) {
    do {
      lVar1 = lVar1 + -0x10;
      auVar12 = pshufb(in_XMM15,__Lbswap_mask);
      in_XMM15._0_8_ = in_XMM15._0_8_ + 1;
      auVar12 = aesenc(auVar12 ^ *param_5,param_5[1]);
      auVar12 = aesenc(auVar12,param_5[2]);
      auVar12 = aesenc(auVar12,param_5[3]);
      auVar12 = aesenc(auVar12,param_5[4]);
      auVar12 = aesenc(auVar12,param_5[5]);
      auVar12 = aesenc(auVar12,param_5[6]);
      auVar12 = aesenc(auVar12,param_5[7]);
      auVar12 = aesenc(auVar12,param_5[8]);
      auVar3 = aesenc(auVar12,param_5[9]);
      auVar12 = param_5[10];
      if (0xa0 < param_6) {
        auVar12 = aesenc(auVar3,auVar12);
        auVar3 = aesenc(auVar12,param_5[0xb]);
        auVar12 = param_5[0xc];
        if (0xc0 < param_6) {
          auVar12 = aesenc(auVar3,auVar12);
          auVar3 = aesenc(auVar12,param_5[0xd]);
          auVar12 = param_5[0xe];
        }
      }
      auVar12 = aesenclast(auVar3,auVar12);
      *param_2 = auVar12 ^ *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (0xf < lVar1);
  }
  auVar12 = pshufb(in_XMM15,__Lbswap_mask);
  *param_4 = auVar12;
  return;
}

