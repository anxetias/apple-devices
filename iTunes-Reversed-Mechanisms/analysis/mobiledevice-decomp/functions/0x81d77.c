// rea decompile_all
// name: __tr_init
// address: 0x81d77
// body: available
// range: 0x81d77-0x822c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __tr_init(long param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar19;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  long lVar4;
  
  *(long *)(param_1 + 0xb48) = param_1 + 0xc4;
  *(undefined **)(param_1 + 0xb58) = &_static_l_desc;
  *(long *)(param_1 + 0xb60) = param_1 + 0x9b8;
  *(undefined **)(param_1 + 0xb70) = &_static_d_desc;
  *(long *)(param_1 + 0xb78) = param_1 + 0xaac;
  *(undefined **)(param_1 + 0xb88) = &_static_bl_desc;
  *(undefined2 *)(param_1 + 0x1720) = 0;
  *(undefined4 *)(param_1 + 0x1724) = 0;
  *(undefined4 *)(param_1 + 0x171c) = 8;
  auVar1 = _DAT_0032b310;
  lVar2 = 0x38;
  auVar24 = _DAT_0032b090;
  auVar6 = _DAT_0032b0a0;
  auVar8 = _DAT_0032b2f0;
  auVar10 = _DAT_0032b300;
  do {
    auVar13 = auVar10 ^ auVar1;
    iVar12 = auVar13._0_4_;
    iVar19 = auVar13._8_4_;
    auVar20._4_4_ = iVar12;
    auVar20._0_4_ = iVar12;
    auVar20._8_4_ = iVar19;
    auVar20._12_4_ = iVar19;
    auVar29._0_4_ = -(uint)(iVar12 < -0x7ffffee2);
    auVar29._4_4_ = -(uint)(iVar12 < -0x7ffffee2);
    auVar29._8_4_ = -(uint)(iVar19 < -0x7ffffee2);
    auVar29._12_4_ = -(uint)(iVar19 < -0x7ffffee2);
    auVar14._0_4_ = -(uint)(auVar13._4_4_ == -0x80000000);
    auVar14._4_4_ = -(uint)(auVar13._4_4_ == -0x80000000);
    auVar14._8_4_ = -(uint)(auVar13._12_4_ == -0x80000000);
    auVar14._12_4_ = -(uint)(auVar13._12_4_ == -0x80000000);
    auVar14 = auVar14 & auVar29;
    auVar13 = pshuflw(auVar20,auVar14,0xe8);
    auVar13 = packssdw(auVar13,auVar13);
    if ((auVar13._0_4_ & 1) != 0) {
      *(undefined2 *)(param_1 + -0x1c + lVar2 * 4) = 0;
    }
    auVar13 = packssdw(auVar14,auVar14);
    auVar13 = packssdw(auVar13,auVar13);
    if ((auVar13._0_4_ >> 0x10 & 1) != 0) {
      *(undefined2 *)(param_1 + -0x18 + lVar2 * 4) = 0;
    }
    auVar13 = auVar8 ^ auVar1;
    iVar12 = auVar13._0_4_;
    iVar19 = auVar13._8_4_;
    auVar21._4_4_ = iVar12;
    auVar21._0_4_ = iVar12;
    auVar21._8_4_ = iVar19;
    auVar21._12_4_ = iVar19;
    auVar30._0_4_ = -(uint)(iVar12 < -0x7ffffee2);
    auVar30._4_4_ = -(uint)(iVar12 < -0x7ffffee2);
    auVar30._8_4_ = -(uint)(iVar19 < -0x7ffffee2);
    auVar30._12_4_ = -(uint)(iVar19 < -0x7ffffee2);
    auVar15._0_4_ = -(uint)(auVar13._4_4_ == -0x80000000);
    auVar15._4_4_ = -(uint)(auVar13._4_4_ == -0x80000000);
    auVar15._8_4_ = -(uint)(auVar13._12_4_ == -0x80000000);
    auVar15._12_4_ = -(uint)(auVar13._12_4_ == -0x80000000);
    auVar15 = auVar15 & auVar30;
    auVar13 = packssdw(auVar21,auVar15);
    auVar13 = packssdw(auVar13,auVar13);
    if ((auVar13._4_2_ & 1) != 0) {
      *(undefined2 *)(param_1 + -0x14 + lVar2 * 4) = 0;
    }
    auVar13 = pshufhw(auVar15,auVar15,0x84);
    auVar13 = packssdw(auVar13,auVar13);
    if ((auVar13._6_2_ & 1) != 0) {
      *(undefined2 *)(param_1 + -0x10 + lVar2 * 4) = 0;
    }
    auVar13 = auVar6 ^ auVar1;
    iVar12 = auVar13._0_4_;
    iVar19 = auVar13._8_4_;
    auVar22._4_4_ = iVar12;
    auVar22._0_4_ = iVar12;
    auVar22._8_4_ = iVar19;
    auVar22._12_4_ = iVar19;
    auVar31._0_4_ = -(uint)(iVar12 < -0x7ffffee2);
    auVar31._4_4_ = -(uint)(iVar12 < -0x7ffffee2);
    auVar31._8_4_ = -(uint)(iVar19 < -0x7ffffee2);
    auVar31._12_4_ = -(uint)(iVar19 < -0x7ffffee2);
    auVar16._0_4_ = -(uint)(auVar13._4_4_ == -0x80000000);
    auVar16._4_4_ = -(uint)(auVar13._4_4_ == -0x80000000);
    auVar16._8_4_ = -(uint)(auVar13._12_4_ == -0x80000000);
    auVar16._12_4_ = -(uint)(auVar13._12_4_ == -0x80000000);
    auVar16 = auVar16 & auVar31;
    auVar13 = pshuflw(auVar22,auVar16,0xe8);
    auVar13 = packssdw(auVar13,auVar13);
    if ((auVar13._8_2_ & 1) != 0) {
      *(undefined2 *)(param_1 + -0xc + lVar2 * 4) = 0;
    }
    auVar13 = packssdw(auVar16,auVar16);
    auVar13 = packssdw(auVar13,auVar13);
    if ((auVar13._10_2_ & 1) != 0) {
      *(undefined2 *)(param_1 + -8 + lVar2 * 4) = 0;
    }
    auVar13 = auVar24 ^ auVar1;
    iVar12 = auVar13._0_4_;
    iVar19 = auVar13._8_4_;
    auVar23._4_4_ = iVar12;
    auVar23._0_4_ = iVar12;
    auVar23._8_4_ = iVar19;
    auVar23._12_4_ = iVar19;
    auVar32._0_4_ = -(uint)(iVar12 < -0x7ffffee2);
    auVar32._4_4_ = -(uint)(iVar12 < -0x7ffffee2);
    auVar32._8_4_ = -(uint)(iVar19 < -0x7ffffee2);
    auVar32._12_4_ = -(uint)(iVar19 < -0x7ffffee2);
    auVar17._0_4_ = -(uint)(auVar13._4_4_ == -0x80000000);
    auVar17._4_4_ = -(uint)(auVar13._4_4_ == -0x80000000);
    auVar17._8_4_ = -(uint)(auVar13._12_4_ == -0x80000000);
    auVar17._12_4_ = -(uint)(auVar13._12_4_ == -0x80000000);
    auVar17 = auVar17 & auVar32;
    auVar13 = packssdw(auVar23,auVar17);
    auVar13 = packssdw(auVar13,auVar13);
    if ((auVar13._12_2_ & 1) != 0) {
      *(undefined2 *)(param_1 + -4 + lVar2 * 4) = 0;
    }
    auVar13 = pshufhw(auVar17,auVar17,0x84);
    auVar13 = packssdw(auVar13,auVar13);
    if ((auVar13._14_2_ & 1) != 0) {
      *(undefined2 *)(param_1 + lVar2 * 4) = 0;
    }
    lVar4 = auVar10._8_8_;
    auVar10._0_8_ = auVar10._0_8_ + 8;
    auVar10._8_8_ = lVar4 + 8;
    lVar4 = auVar8._8_8_;
    auVar8._0_8_ = auVar8._0_8_ + 8;
    auVar8._8_8_ = lVar4 + 8;
    lVar4 = auVar6._8_8_;
    auVar6._0_8_ = auVar6._0_8_ + 8;
    auVar6._8_8_ = lVar4 + 8;
    lVar4 = auVar24._8_8_;
    auVar24._0_8_ = auVar24._0_8_ + 8;
    auVar24._8_8_ = lVar4 + 8;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x158);
  lVar2 = 0;
  auVar13 = _DAT_0032b090;
  auVar7 = _DAT_0032b0a0;
  auVar9 = _DAT_0032b2f0;
  auVar11 = _DAT_0032b300;
  do {
    auVar24 = auVar11 ^ auVar1;
    auVar33._0_4_ = -(uint)(auVar24._0_4_ < -0x7fffffe2);
    auVar33._4_4_ = -(uint)(auVar24._0_4_ < -0x7fffffe2);
    auVar33._8_4_ = -(uint)(auVar24._8_4_ < -0x7fffffe2);
    auVar33._12_4_ = -(uint)(auVar24._8_4_ < -0x7fffffe2);
    auVar25._0_4_ = -(uint)(auVar24._4_4_ == -0x80000000);
    auVar25._4_4_ = -(uint)(auVar24._4_4_ == -0x80000000);
    auVar25._8_4_ = -(uint)(auVar24._12_4_ == -0x80000000);
    auVar25._12_4_ = -(uint)(auVar24._12_4_ == -0x80000000);
    auVar25 = auVar25 & auVar33;
    auVar24 = pshuflw(auVar33,auVar25,0xe8);
    auVar24 = packssdw(auVar24,auVar24);
    if ((auVar24._0_4_ & 1) != 0) {
      *(undefined2 *)(param_1 + 0x9b8 + lVar2 * 4) = 0;
    }
    auVar24 = packssdw(auVar25,auVar25);
    auVar24 = packssdw(auVar24,auVar24);
    if ((auVar24._0_4_ >> 0x10 & 1) != 0) {
      *(undefined2 *)(param_1 + 0x9bc + lVar2 * 4) = 0;
    }
    auVar24 = auVar9 ^ auVar1;
    iVar12 = auVar24._0_4_;
    iVar19 = auVar24._8_4_;
    auVar34._4_4_ = iVar12;
    auVar34._0_4_ = iVar12;
    auVar34._8_4_ = iVar19;
    auVar34._12_4_ = iVar19;
    auVar36._0_4_ = -(uint)(iVar12 < -0x7fffffe2);
    auVar36._4_4_ = -(uint)(iVar12 < -0x7fffffe2);
    auVar36._8_4_ = -(uint)(iVar19 < -0x7fffffe2);
    auVar36._12_4_ = -(uint)(iVar19 < -0x7fffffe2);
    auVar26._0_4_ = -(uint)(auVar24._4_4_ == -0x80000000);
    auVar26._4_4_ = -(uint)(auVar24._4_4_ == -0x80000000);
    auVar26._8_4_ = -(uint)(auVar24._12_4_ == -0x80000000);
    auVar26._12_4_ = -(uint)(auVar24._12_4_ == -0x80000000);
    auVar26 = auVar26 & auVar36;
    auVar24 = packssdw(auVar34,auVar26);
    auVar24 = packssdw(auVar24,auVar24);
    if ((auVar24._4_2_ & 1) != 0) {
      *(undefined2 *)(param_1 + 0x9c0 + lVar2 * 4) = 0;
    }
    auVar24 = pshufhw(auVar26,auVar26,0x84);
    auVar24 = packssdw(auVar24,auVar24);
    if ((auVar24._6_2_ & 1) != 0) {
      *(undefined2 *)(param_1 + 0x9c4 + lVar2 * 4) = 0;
    }
    auVar24 = auVar7 ^ auVar1;
    iVar12 = auVar24._0_4_;
    iVar19 = auVar24._8_4_;
    auVar35._4_4_ = iVar12;
    auVar35._0_4_ = iVar12;
    auVar35._8_4_ = iVar19;
    auVar35._12_4_ = iVar19;
    auVar37._0_4_ = -(uint)(iVar12 < -0x7fffffe2);
    auVar37._4_4_ = -(uint)(iVar12 < -0x7fffffe2);
    auVar37._8_4_ = -(uint)(iVar19 < -0x7fffffe2);
    auVar37._12_4_ = -(uint)(iVar19 < -0x7fffffe2);
    auVar27._0_4_ = -(uint)(auVar24._4_4_ == -0x80000000);
    auVar27._4_4_ = -(uint)(auVar24._4_4_ == -0x80000000);
    auVar27._8_4_ = -(uint)(auVar24._12_4_ == -0x80000000);
    auVar27._12_4_ = -(uint)(auVar24._12_4_ == -0x80000000);
    auVar27 = auVar27 & auVar37;
    auVar24 = pshuflw(auVar35,auVar27,0xe8);
    auVar24 = packssdw(auVar24,auVar24);
    if ((auVar24._8_2_ & 1) != 0) {
      *(undefined2 *)(param_1 + 0x9c8 + lVar2 * 4) = 0;
    }
    auVar24 = packssdw(auVar27,auVar27);
    auVar24 = packssdw(auVar24,auVar24);
    if ((auVar24._10_2_ & 1) != 0) {
      *(undefined2 *)(param_1 + 0x9cc + lVar2 * 4) = 0;
    }
    auVar24 = auVar13 ^ auVar1;
    auVar28._4_4_ = auVar24._4_4_;
    auVar28._12_4_ = auVar24._12_4_;
    auVar38._0_4_ = -(uint)(auVar24._0_4_ < -0x7fffffe2);
    auVar38._4_4_ = -(uint)(auVar24._0_4_ < -0x7fffffe2);
    auVar38._8_4_ = -(uint)(auVar24._8_4_ < -0x7fffffe2);
    auVar38._12_4_ = -(uint)(auVar24._8_4_ < -0x7fffffe2);
    auVar28._0_4_ = auVar28._4_4_;
    auVar28._8_4_ = auVar28._12_4_;
    auVar18._0_4_ = -(uint)(auVar28._4_4_ == -0x80000000);
    auVar18._4_4_ = -(uint)(auVar28._4_4_ == -0x80000000);
    auVar18._8_4_ = -(uint)(auVar28._12_4_ == -0x80000000);
    auVar18._12_4_ = -(uint)(auVar28._12_4_ == -0x80000000);
    auVar18 = auVar18 & auVar38;
    auVar24 = packssdw(auVar28,auVar18);
    auVar24 = packssdw(auVar24,auVar24);
    if ((auVar24._12_2_ & 1) != 0) {
      *(undefined2 *)(param_1 + 0x9d0 + lVar2 * 4) = 0;
    }
    auVar24 = pshufhw(auVar18,auVar18,0x84);
    auVar24 = packssdw(auVar24,auVar24);
    if ((auVar24._14_2_ & 1) != 0) {
      *(undefined2 *)(param_1 + 0x9d4 + lVar2 * 4) = 0;
    }
    lVar2 = lVar2 + 8;
    lVar4 = auVar11._8_8_;
    auVar11._0_8_ = auVar11._0_8_ + 8;
    auVar11._8_8_ = lVar4 + 8;
    lVar4 = auVar9._8_8_;
    auVar9._0_8_ = auVar9._0_8_ + 8;
    auVar9._8_8_ = lVar4 + 8;
    lVar4 = auVar7._8_8_;
    auVar7._0_8_ = auVar7._0_8_ + 8;
    auVar7._8_8_ = lVar4 + 8;
    lVar4 = auVar13._8_8_;
    auVar13._0_8_ = auVar13._0_8_ + 8;
    auVar13._8_8_ = lVar4 + 8;
  } while (lVar2 != 0x20);
  lVar2 = 0;
  auVar3 = _DAT_0032b2f0;
  auVar5 = _DAT_0032b300;
  do {
    auVar24 = auVar5 ^ auVar1;
    if (auVar24._4_4_ == -0x80000000 && auVar24._0_4_ < -0x7fffffed) {
      *(undefined2 *)(param_1 + 0xaac + lVar2 * 4) = 0;
    }
    if (auVar24._12_4_ == -0x80000000 && auVar24._8_4_ < -0x7fffffed) {
      *(undefined2 *)(param_1 + 0xab0 + lVar2 * 4) = 0;
    }
    auVar24 = auVar3 ^ auVar1;
    if (auVar24._4_4_ == -0x80000000 && auVar24._0_4_ < -0x7fffffed) {
      *(undefined2 *)(param_1 + 0xab4 + lVar2 * 4) = 0;
    }
    if (auVar24._12_4_ == -0x80000000 && auVar24._8_4_ < -0x7fffffed) {
      *(undefined2 *)(param_1 + 0xab8 + lVar2 * 4) = 0;
    }
    lVar2 = lVar2 + 4;
    lVar4 = auVar5._8_8_;
    auVar5._0_8_ = auVar5._0_8_ + 4;
    auVar5._8_8_ = lVar4 + 4;
    lVar4 = auVar3._8_8_;
    auVar3._0_8_ = auVar3._0_8_ + 4;
    auVar3._8_8_ = lVar4 + 4;
  } while (lVar2 != 0x14);
  *(undefined2 *)(param_1 + 0x4c4) = 1;
  *(undefined4 *)(param_1 + 0x16fc) = 0;
  *(undefined1 (*) [16])(param_1 + 0x1708) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x1718) = 0;
  return;
}

