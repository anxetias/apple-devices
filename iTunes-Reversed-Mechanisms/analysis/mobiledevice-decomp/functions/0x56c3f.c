// rea decompile_all
// name: FUN_00056c3f
// address: 0x56c3f
// body: available
// range: 0x56c3f-0x56cef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_00056c3f(ulong param_1,ulong param_2,undefined8 param_3,undefined1 (*param_4) [16])

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  long lVar5;
  long unaff_RBX;
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM4 [16];
  undefined1 in_XMM5 [16];
  undefined1 in_XMM6 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM8 [16];
  undefined1 in_XMM9 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  do {
    lVar5 = unaff_RBX;
    pauVar3 = param_4;
    lVar4 = param_1 * 0x40;
    auVar6 = psadbw(*pauVar3,in_XMM0);
    auVar13 = psadbw(pauVar3[3],in_XMM0);
    auVar9 = pmaddubsw(*pauVar3,in_XMM8);
    auVar7 = pmaddubsw(pauVar3[3],in_XMM4);
    auVar10 = pmaddwd(auVar9,in_XMM5);
    auVar9 = pmaddwd(auVar7,in_XMM5);
    auVar11 = psadbw(pauVar3[1],in_XMM0);
    auVar12 = psadbw(pauVar3[2],in_XMM0);
    auVar7 = pmaddubsw(pauVar3[1],in_XMM9);
    auVar14 = pmaddubsw(pauVar3[2],in_XMM6);
    auVar8 = pmaddwd(auVar7,in_XMM5);
    auVar14 = pmaddwd(auVar14,in_XMM5);
    auVar7._0_8_ = CONCAT44(auVar6._4_4_ + auVar13._4_4_ + auVar11._4_4_ + auVar12._4_4_,
                            auVar6._0_4_ + auVar13._0_4_ + auVar11._0_4_ + auVar12._0_4_);
    auVar7._8_4_ = auVar6._8_4_ + auVar13._8_4_ + auVar11._8_4_ + auVar12._8_4_;
    auVar7._12_4_ = auVar6._12_4_ + auVar13._12_4_ + auVar11._12_4_ + auVar12._12_4_;
    param_4 = pauVar3 + 4;
    param_1 = param_1 + (auVar7._0_8_ + auVar7._8_8_ & 0xffffffffU);
    param_2 = param_2 + lVar4 +
              (ulong)(uint)(auVar10._0_4_ + auVar9._0_4_ + auVar8._0_4_ + auVar14._0_4_ +
                           auVar10._8_4_ + auVar9._8_4_ + auVar8._8_4_ + auVar14._8_4_) +
              (ulong)(uint)(auVar10._4_4_ + auVar9._4_4_ + auVar8._4_4_ + auVar14._4_4_ +
                           auVar10._12_4_ + auVar9._12_4_ + auVar8._12_4_ + auVar14._12_4_);
    unaff_RBX = lVar5 + -0x40;
  } while (0x3f < lVar5);
  lVar4 = lVar5 + -0x20;
  if (-0x21 < lVar5 + -0x40) {
    lVar4 = param_1 * 0x20;
    auVar6 = psadbw(*param_4,in_XMM0);
    auVar10 = psadbw(pauVar3[5],in_XMM0);
    auVar8 = pmaddubsw(*param_4,in_XMM6);
    auVar7 = pmaddubsw(pauVar3[5],in_XMM4);
    auVar9._0_8_ = CONCAT44(auVar6._4_4_ + auVar10._4_4_,auVar6._0_4_ + auVar10._0_4_);
    auVar9._8_4_ = auVar6._8_4_ + auVar10._8_4_;
    auVar9._12_4_ = auVar6._12_4_ + auVar10._12_4_;
    auVar6._0_2_ = auVar8._0_2_ + auVar7._0_2_;
    auVar6._2_2_ = auVar8._2_2_ + auVar7._2_2_;
    auVar6._4_2_ = auVar8._4_2_ + auVar7._4_2_;
    auVar6._6_2_ = auVar8._6_2_ + auVar7._6_2_;
    auVar6._8_2_ = auVar8._8_2_ + auVar7._8_2_;
    auVar6._10_2_ = auVar8._10_2_ + auVar7._10_2_;
    auVar6._12_2_ = auVar8._12_2_ + auVar7._12_2_;
    auVar6._14_2_ = auVar8._14_2_ + auVar7._14_2_;
    param_4 = pauVar3 + 6;
    auVar6 = pmaddwd(auVar6,in_XMM5);
    param_1 = param_1 + (auVar9._0_8_ + auVar9._8_8_ & 0xffffffffU);
    param_2 = param_2 + lVar4 + (ulong)(uint)(auVar6._0_4_ + auVar6._8_4_) +
              (ulong)(uint)(auVar6._4_4_ + auVar6._12_4_);
    lVar4 = lVar5 + -0x40;
  }
  lVar5 = lVar4 + 0x10;
  if (-0x11 < lVar4) {
    auVar6 = *param_4;
    param_4 = param_4 + 1;
    auVar7 = psadbw(auVar6,in_XMM0);
    auVar6 = pmaddubsw(auVar6,in_XMM4);
    lVar5 = param_1 * 0x10;
    auVar6 = pmaddwd(auVar6,in_XMM5);
    param_1 = param_1 + (auVar7._0_8_ + auVar7._8_8_ & 0xffffffffU);
    param_2 = param_2 + lVar5 + (ulong)(uint)(auVar6._0_4_ + auVar6._8_4_) +
              (ulong)(uint)(auVar6._4_4_ + auVar6._12_4_);
    lVar5 = lVar4;
  }
  lVar4 = lVar5 + 0x10;
  if (lVar5 + 0x10 != 0) {
    do {
      puVar2 = *param_4;
      param_4 = (undefined1 (*) [16])(*param_4 + 1);
      param_1 = param_1 + (byte)*puVar2;
      param_2 = param_2 + param_1;
      lVar5 = lVar4 + -1;
      bVar1 = 0 < lVar4;
      lVar4 = lVar5;
    } while (lVar5 != 0 && bVar1);
  }
  return param_1 - (uint)((int)((param_1 & 0xffffffff) / 0xfff1) * 0xfff1) |
         (param_2 - (uint)((int)((param_2 & 0xffffffff) / 0xfff1) * 0xfff1)) * 0x10000;
}

