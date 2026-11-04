// rea decompile_all
// name: FUN_00056abd
// address: 0x56abd
// body: available
// range: 0x56abd-0x56aca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_00056abd(ulong param_1,ulong param_2,undefined8 param_3,undefined1 (*param_4) [16])

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_RBX;
  ulong uVar7;
  undefined1 in_XMM0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM4 [16];
  undefined1 in_XMM5 [16];
  undefined1 in_XMM6 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM8 [16];
  undefined1 in_XMM9 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  do {
    lVar6 = unaff_RBX;
    unaff_RBX = lVar6 + -0x15b0;
    lVar5 = 0x56;
    do {
      pauVar3 = param_4;
      lVar4 = param_1 * 0x40;
      auVar8 = psadbw(*pauVar3,in_XMM0);
      auVar15 = psadbw(pauVar3[3],in_XMM0);
      auVar11 = pmaddubsw(*pauVar3,in_XMM8);
      auVar9 = pmaddubsw(pauVar3[3],in_XMM4);
      auVar12 = pmaddwd(auVar11,in_XMM5);
      auVar11 = pmaddwd(auVar9,in_XMM5);
      auVar13 = psadbw(pauVar3[1],in_XMM0);
      auVar14 = psadbw(pauVar3[2],in_XMM0);
      auVar9 = pmaddubsw(pauVar3[1],in_XMM9);
      auVar16 = pmaddubsw(pauVar3[2],in_XMM6);
      auVar10 = pmaddwd(auVar9,in_XMM5);
      auVar16 = pmaddwd(auVar16,in_XMM5);
      auVar9._0_8_ = CONCAT44(auVar8._4_4_ + auVar15._4_4_ + auVar13._4_4_ + auVar14._4_4_,
                              auVar8._0_4_ + auVar15._0_4_ + auVar13._0_4_ + auVar14._0_4_);
      auVar9._8_4_ = auVar8._8_4_ + auVar15._8_4_ + auVar13._8_4_ + auVar14._8_4_;
      auVar9._12_4_ = auVar8._12_4_ + auVar15._12_4_ + auVar13._12_4_ + auVar14._12_4_;
      param_1 = param_1 + (auVar9._0_8_ + auVar9._8_8_ & 0xffffffffU);
      param_2 = param_2 + lVar4 +
                (ulong)(uint)(auVar12._0_4_ + auVar11._0_4_ + auVar10._0_4_ + auVar16._0_4_ +
                             auVar12._8_4_ + auVar11._8_4_ + auVar10._8_4_ + auVar16._8_4_) +
                (ulong)(uint)(auVar12._4_4_ + auVar11._4_4_ + auVar10._4_4_ + auVar16._4_4_ +
                             auVar12._12_4_ + auVar11._12_4_ + auVar10._12_4_ + auVar16._12_4_);
      lVar4 = lVar5 + -1;
      bVar1 = 0 < lVar5;
      lVar5 = lVar4;
      param_4 = pauVar3 + 4;
    } while (lVar4 != 0 && bVar1);
    auVar8 = pauVar3[4];
    auVar10 = psadbw(auVar8,in_XMM0);
    auVar13 = psadbw(pauVar3[5],in_XMM0);
    auVar14 = psadbw(pauVar3[6],in_XMM0);
    auVar8 = pmaddubsw(auVar8,in_XMM9);
    auVar9 = pmaddubsw(pauVar3[5],in_XMM6);
    auVar11 = pmaddubsw(pauVar3[6],in_XMM4);
    auVar8 = pmaddwd(auVar8,in_XMM5);
    auVar9 = pmaddwd(auVar9,in_XMM5);
    auVar11 = pmaddwd(auVar11,in_XMM5);
    auVar12._0_8_ =
         CONCAT44(auVar10._4_4_ + auVar13._4_4_ + auVar14._4_4_,
                  auVar10._0_4_ + auVar13._0_4_ + auVar14._0_4_);
    auVar12._8_4_ = auVar10._8_4_ + auVar13._8_4_ + auVar14._8_4_;
    auVar12._12_4_ = auVar10._12_4_ + auVar13._12_4_ + auVar14._12_4_;
    param_4 = pauVar3 + 7;
    uVar7 = param_1 + (auVar12._0_8_ + auVar12._8_8_ & 0xffffffffU);
    param_2 = param_2 + param_1 * 0x30 +
              (ulong)(uint)(auVar11._0_4_ + auVar8._0_4_ + auVar9._0_4_ +
                           auVar11._8_4_ + auVar8._8_4_ + auVar9._8_4_) +
              (ulong)(uint)(auVar11._4_4_ + auVar8._4_4_ + auVar9._4_4_ +
                           auVar11._12_4_ + auVar8._12_4_ + auVar9._12_4_);
    param_1 = uVar7 - (uint)((int)((uVar7 & 0xffffffff) / 0xfff1) * 0xfff1);
    param_2 = param_2 - (uint)((int)((param_2 & 0xffffffff) / 0xfff1) * 0xfff1);
  } while (0x15af < unaff_RBX);
  lVar5 = lVar6 + -0x15f0;
  while (lVar6 = lVar5, 0x3f < unaff_RBX) {
    lVar5 = param_1 * 0x40;
    auVar8 = psadbw(*param_4,in_XMM0);
    auVar15 = psadbw(param_4[3],in_XMM0);
    auVar11 = pmaddubsw(*param_4,in_XMM8);
    auVar9 = pmaddubsw(param_4[3],in_XMM4);
    auVar12 = pmaddwd(auVar11,in_XMM5);
    auVar9 = pmaddwd(auVar9,in_XMM5);
    auVar13 = psadbw(param_4[1],in_XMM0);
    auVar14 = psadbw(param_4[2],in_XMM0);
    auVar11 = pmaddubsw(param_4[1],in_XMM9);
    auVar16 = pmaddubsw(param_4[2],in_XMM6);
    auVar10 = pmaddwd(auVar11,in_XMM5);
    auVar16 = pmaddwd(auVar16,in_XMM5);
    auVar11._0_8_ =
         CONCAT44(auVar8._4_4_ + auVar15._4_4_ + auVar13._4_4_ + auVar14._4_4_,
                  auVar8._0_4_ + auVar15._0_4_ + auVar13._0_4_ + auVar14._0_4_);
    auVar11._8_4_ = auVar8._8_4_ + auVar15._8_4_ + auVar13._8_4_ + auVar14._8_4_;
    auVar11._12_4_ = auVar8._12_4_ + auVar15._12_4_ + auVar13._12_4_ + auVar14._12_4_;
    param_4 = param_4 + 4;
    param_1 = param_1 + (auVar11._0_8_ + auVar11._8_8_ & 0xffffffffU);
    param_2 = param_2 + lVar5 +
              (ulong)(uint)(auVar12._0_4_ + auVar9._0_4_ + auVar10._0_4_ + auVar16._0_4_ +
                           auVar12._8_4_ + auVar9._8_4_ + auVar10._8_4_ + auVar16._8_4_) +
              (ulong)(uint)(auVar12._4_4_ + auVar9._4_4_ + auVar10._4_4_ + auVar16._4_4_ +
                           auVar12._12_4_ + auVar9._12_4_ + auVar10._12_4_ + auVar16._12_4_);
    lVar5 = lVar6 + -0x40;
    unaff_RBX = lVar6;
  }
  lVar5 = lVar6 + 0x20;
  if (-0x21 < lVar6) {
    lVar5 = param_1 * 0x20;
    auVar8 = psadbw(*param_4,in_XMM0);
    auVar12 = psadbw(param_4[1],in_XMM0);
    auVar11 = pmaddubsw(*param_4,in_XMM6);
    auVar9 = pmaddubsw(param_4[1],in_XMM4);
    auVar10._0_8_ = CONCAT44(auVar8._4_4_ + auVar12._4_4_,auVar8._0_4_ + auVar12._0_4_);
    auVar10._8_4_ = auVar8._8_4_ + auVar12._8_4_;
    auVar10._12_4_ = auVar8._12_4_ + auVar12._12_4_;
    auVar8._0_2_ = auVar11._0_2_ + auVar9._0_2_;
    auVar8._2_2_ = auVar11._2_2_ + auVar9._2_2_;
    auVar8._4_2_ = auVar11._4_2_ + auVar9._4_2_;
    auVar8._6_2_ = auVar11._6_2_ + auVar9._6_2_;
    auVar8._8_2_ = auVar11._8_2_ + auVar9._8_2_;
    auVar8._10_2_ = auVar11._10_2_ + auVar9._10_2_;
    auVar8._12_2_ = auVar11._12_2_ + auVar9._12_2_;
    auVar8._14_2_ = auVar11._14_2_ + auVar9._14_2_;
    param_4 = param_4 + 2;
    auVar8 = pmaddwd(auVar8,in_XMM5);
    param_1 = param_1 + (auVar10._0_8_ + auVar10._8_8_ & 0xffffffffU);
    param_2 = param_2 + lVar5 + (ulong)(uint)(auVar8._0_4_ + auVar8._8_4_) +
              (ulong)(uint)(auVar8._4_4_ + auVar8._12_4_);
    lVar5 = lVar6;
  }
  lVar6 = lVar5 + 0x10;
  if (-0x11 < lVar5) {
    auVar8 = *param_4;
    param_4 = param_4 + 1;
    auVar9 = psadbw(auVar8,in_XMM0);
    auVar8 = pmaddubsw(auVar8,in_XMM4);
    lVar6 = param_1 * 0x10;
    auVar8 = pmaddwd(auVar8,in_XMM5);
    param_1 = param_1 + (auVar9._0_8_ + auVar9._8_8_ & 0xffffffffU);
    param_2 = param_2 + lVar6 + (ulong)(uint)(auVar8._0_4_ + auVar8._8_4_) +
              (ulong)(uint)(auVar8._4_4_ + auVar8._12_4_);
    lVar6 = lVar5;
  }
  lVar5 = lVar6 + 0x10;
  if (lVar6 + 0x10 != 0) {
    do {
      puVar2 = *param_4;
      param_4 = (undefined1 (*) [16])(*param_4 + 1);
      param_1 = param_1 + (byte)*puVar2;
      param_2 = param_2 + param_1;
      lVar6 = lVar5 + -1;
      bVar1 = 0 < lVar5;
      lVar5 = lVar6;
    } while (lVar6 != 0 && bVar1);
  }
  return param_1 - (uint)((int)((param_1 & 0xffffffff) / 0xfff1) * 0xfff1) |
         (param_2 - (uint)((int)((param_2 & 0xffffffff) / 0xfff1) * 0xfff1)) * 0x10000;
}

