// rea decompile_all
// name: _adler32_vec
// address: 0x568f0
// body: available
// range: 0x568f0-0x568f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong _adler32_vec(ulong param_1,ulong param_2,undefined1 (*param_3) [16],long param_4)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 *puVar18;
  undefined1 (*pauVar19) [16];
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined1 in_XMM0 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 uVar32;
  undefined8 in_XMM4_Qa;
  undefined4 uVar33;
  undefined4 in_XMM4_Dc;
  undefined4 in_XMM4_Dd;
  undefined4 uVar34;
  undefined8 in_XMM5_Qa;
  undefined4 uVar35;
  undefined4 in_XMM5_Dc;
  undefined4 in_XMM5_Dd;
  undefined4 uVar36;
  undefined8 in_XMM6_Qa;
  undefined4 uVar37;
  undefined4 in_XMM6_Dc;
  undefined4 in_XMM6_Dd;
  undefined1 auVar38 [16];
  undefined4 in_XMM8_Da;
  undefined4 in_XMM8_Db;
  undefined4 in_XMM8_Dc;
  undefined4 in_XMM8_Dd;
  undefined4 in_XMM9_Da;
  undefined4 in_XMM9_Db;
  undefined4 in_XMM9_Dc;
  undefined4 in_XMM9_Dd;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  uVar37 = (int)((ulong)in_XMM6_Qa >> 0x20);
  uVar36 = (int)in_XMM6_Qa;
  uVar35 = (int)((ulong)in_XMM5_Qa >> 0x20);
  uVar34 = (int)in_XMM5_Qa;
  uVar33 = (int)((ulong)in_XMM4_Qa >> 0x20);
  uVar32 = (int)in_XMM4_Qa;
  if (0xf < param_4) {
    in_XMM0 = (undefined1  [16])0x0;
    in_XMM9_Dd = uRam00000000004a03cc;
    in_XMM9_Dc = uRam00000000004a03c8;
    in_XMM9_Db = uRam00000000004a03c4;
    in_XMM9_Da = _DAT_004a03c0;
    in_XMM8_Dd = uRam00000000004a03bc;
    in_XMM8_Dc = uRam00000000004a03b8;
    in_XMM8_Db = uRam00000000004a03b4;
    in_XMM8_Da = _sum2_coefficients;
    in_XMM6_Dd = uRam00000000004a03dc;
    in_XMM6_Dc = uRam00000000004a03d8;
    uVar37 = uRam00000000004a03d4;
    uVar36 = _DAT_004a03d0;
    in_XMM5_Dd = uRam00000000004a03fc;
    in_XMM5_Dc = uRam00000000004a03f8;
    uVar35 = uRam00000000004a03f4;
    uVar34 = _DAT_004a03f0;
    in_XMM4_Dd = uRam00000000004a03ec;
    in_XMM4_Dc = uRam00000000004a03e8;
    uVar33 = uRam00000000004a03e4;
    uVar32 = _DAT_004a03e0;
  }
  while (0x15af < param_4) {
    param_4 = param_4 + -0x15b0;
    lVar21 = 0x56;
    do {
      pauVar19 = param_3;
      lVar20 = param_1 * 0x40;
      auVar23 = psadbw(*pauVar19,in_XMM0);
      auVar41 = psadbw(pauVar19[3],in_XMM0);
      auVar30._4_4_ = in_XMM8_Db;
      auVar30._0_4_ = in_XMM8_Da;
      auVar30._8_4_ = in_XMM8_Dc;
      auVar30._12_4_ = in_XMM8_Dd;
      auVar29 = pmaddubsw(*pauVar19,auVar30);
      auVar27._4_4_ = uVar33;
      auVar27._0_4_ = uVar32;
      auVar27._8_4_ = in_XMM4_Dc;
      auVar27._12_4_ = in_XMM4_Dd;
      auVar27 = pmaddubsw(pauVar19[3],auVar27);
      auVar28._4_4_ = uVar35;
      auVar28._0_4_ = uVar34;
      auVar28._8_4_ = in_XMM5_Dc;
      auVar28._12_4_ = in_XMM5_Dd;
      auVar30 = pmaddwd(auVar29,auVar28);
      auVar29._4_4_ = uVar35;
      auVar29._0_4_ = uVar34;
      auVar29._8_4_ = in_XMM5_Dc;
      auVar29._12_4_ = in_XMM5_Dd;
      auVar27 = pmaddwd(auVar27,auVar29);
      auVar29 = psadbw(pauVar19[1],in_XMM0);
      auVar39 = psadbw(pauVar19[2],in_XMM0);
      auVar44._4_4_ = in_XMM9_Db;
      auVar44._0_4_ = in_XMM9_Da;
      auVar44._8_4_ = in_XMM9_Dc;
      auVar44._12_4_ = in_XMM9_Dd;
      auVar28 = pmaddubsw(pauVar19[1],auVar44);
      auVar42._4_4_ = uVar37;
      auVar42._0_4_ = uVar36;
      auVar42._8_4_ = in_XMM6_Dc;
      auVar42._12_4_ = in_XMM6_Dd;
      auVar42 = pmaddubsw(pauVar19[2],auVar42);
      auVar43._4_4_ = uVar35;
      auVar43._0_4_ = uVar34;
      auVar43._8_4_ = in_XMM5_Dc;
      auVar43._12_4_ = in_XMM5_Dd;
      auVar28 = pmaddwd(auVar28,auVar43);
      auVar40._4_4_ = uVar35;
      auVar40._0_4_ = uVar34;
      auVar40._8_4_ = in_XMM5_Dc;
      auVar40._12_4_ = in_XMM5_Dd;
      auVar43 = pmaddwd(auVar42,auVar40);
      auVar24._0_8_ =
           CONCAT44(auVar23._4_4_ + auVar41._4_4_ + auVar29._4_4_ + auVar39._4_4_,
                    auVar23._0_4_ + auVar41._0_4_ + auVar29._0_4_ + auVar39._0_4_);
      auVar24._8_4_ = auVar23._8_4_ + auVar41._8_4_ + auVar29._8_4_ + auVar39._8_4_;
      auVar24._12_4_ = auVar23._12_4_ + auVar41._12_4_ + auVar29._12_4_ + auVar39._12_4_;
      param_1 = param_1 + (auVar24._0_8_ + auVar24._8_8_ & 0xffffffffU);
      param_2 = param_2 + lVar20 +
                (ulong)(uint)(auVar30._0_4_ + auVar27._0_4_ + auVar28._0_4_ + auVar43._0_4_ +
                             auVar30._8_4_ + auVar27._8_4_ + auVar28._8_4_ + auVar43._8_4_) +
                (ulong)(uint)(auVar30._4_4_ + auVar27._4_4_ + auVar28._4_4_ + auVar43._4_4_ +
                             auVar30._12_4_ + auVar27._12_4_ + auVar28._12_4_ + auVar43._12_4_);
      lVar20 = lVar21 + -1;
      bVar1 = 0 < lVar21;
      lVar21 = lVar20;
      param_3 = pauVar19 + 4;
    } while (lVar20 != 0 && bVar1);
    auVar27 = pauVar19[4];
    auVar43 = psadbw(auVar27,in_XMM0);
    auVar40 = psadbw(pauVar19[5],in_XMM0);
    auVar42 = psadbw(pauVar19[6],in_XMM0);
    auVar16._4_4_ = in_XMM9_Db;
    auVar16._0_4_ = in_XMM9_Da;
    auVar16._8_4_ = in_XMM9_Dc;
    auVar16._12_4_ = in_XMM9_Dd;
    auVar27 = pmaddubsw(auVar27,auVar16);
    auVar12._4_4_ = uVar37;
    auVar12._0_4_ = uVar36;
    auVar12._8_4_ = in_XMM6_Dc;
    auVar12._12_4_ = in_XMM6_Dd;
    auVar28 = pmaddubsw(pauVar19[5],auVar12);
    auVar23._4_4_ = uVar33;
    auVar23._0_4_ = uVar32;
    auVar23._8_4_ = in_XMM4_Dc;
    auVar23._12_4_ = in_XMM4_Dd;
    auVar29 = pmaddubsw(pauVar19[6],auVar23);
    auVar39._4_4_ = uVar35;
    auVar39._0_4_ = uVar34;
    auVar39._8_4_ = in_XMM5_Dc;
    auVar39._12_4_ = in_XMM5_Dd;
    auVar27 = pmaddwd(auVar27,auVar39);
    auVar41._4_4_ = uVar35;
    auVar41._0_4_ = uVar34;
    auVar41._8_4_ = in_XMM5_Dc;
    auVar41._12_4_ = in_XMM5_Dd;
    auVar28 = pmaddwd(auVar28,auVar41);
    auVar5._4_4_ = uVar35;
    auVar5._0_4_ = uVar34;
    auVar5._8_4_ = in_XMM5_Dc;
    auVar5._12_4_ = in_XMM5_Dd;
    auVar29 = pmaddwd(auVar29,auVar5);
    auVar38._0_8_ =
         CONCAT44(auVar43._4_4_ + auVar40._4_4_ + auVar42._4_4_,
                  auVar43._0_4_ + auVar40._0_4_ + auVar42._0_4_);
    auVar38._8_4_ = auVar43._8_4_ + auVar40._8_4_ + auVar42._8_4_;
    auVar38._12_4_ = auVar43._12_4_ + auVar40._12_4_ + auVar42._12_4_;
    param_3 = pauVar19 + 7;
    uVar22 = param_1 + (auVar38._0_8_ + auVar38._8_8_ & 0xffffffffU);
    param_2 = param_2 + param_1 * 0x30 +
              (ulong)(uint)(auVar29._0_4_ + auVar27._0_4_ + auVar28._0_4_ +
                           auVar29._8_4_ + auVar27._8_4_ + auVar28._8_4_) +
              (ulong)(uint)(auVar29._4_4_ + auVar27._4_4_ + auVar28._4_4_ +
                           auVar29._12_4_ + auVar27._12_4_ + auVar28._12_4_);
    param_1 = uVar22 - (uint)((int)((uVar22 & 0xffffffff) / 0xfff1) * 0xfff1);
    param_2 = param_2 - (uint)((int)((param_2 & 0xffffffff) / 0xfff1) * 0xfff1);
  }
  while (lVar21 = param_4 + -0x40, 0x3f < param_4) {
    lVar20 = param_1 * 0x40;
    auVar27 = psadbw(*param_3,in_XMM0);
    auVar30 = psadbw(param_3[3],in_XMM0);
    auVar15._4_4_ = in_XMM8_Db;
    auVar15._0_4_ = in_XMM8_Da;
    auVar15._8_4_ = in_XMM8_Dc;
    auVar15._12_4_ = in_XMM8_Dd;
    auVar29 = pmaddubsw(*param_3,auVar15);
    auVar2._4_4_ = uVar33;
    auVar2._0_4_ = uVar32;
    auVar2._8_4_ = in_XMM4_Dc;
    auVar2._12_4_ = in_XMM4_Dd;
    auVar28 = pmaddubsw(param_3[3],auVar2);
    auVar6._4_4_ = uVar35;
    auVar6._0_4_ = uVar34;
    auVar6._8_4_ = in_XMM5_Dc;
    auVar6._12_4_ = in_XMM5_Dd;
    auVar43 = pmaddwd(auVar29,auVar6);
    auVar7._4_4_ = uVar35;
    auVar7._0_4_ = uVar34;
    auVar7._8_4_ = in_XMM5_Dc;
    auVar7._12_4_ = in_XMM5_Dd;
    auVar28 = pmaddwd(auVar28,auVar7);
    auVar40 = psadbw(param_3[1],in_XMM0);
    auVar42 = psadbw(param_3[2],in_XMM0);
    auVar17._4_4_ = in_XMM9_Db;
    auVar17._0_4_ = in_XMM9_Da;
    auVar17._8_4_ = in_XMM9_Dc;
    auVar17._12_4_ = in_XMM9_Dd;
    auVar29 = pmaddubsw(param_3[1],auVar17);
    auVar13._4_4_ = uVar37;
    auVar13._0_4_ = uVar36;
    auVar13._8_4_ = in_XMM6_Dc;
    auVar13._12_4_ = in_XMM6_Dd;
    auVar44 = pmaddubsw(param_3[2],auVar13);
    auVar8._4_4_ = uVar35;
    auVar8._0_4_ = uVar34;
    auVar8._8_4_ = in_XMM5_Dc;
    auVar8._12_4_ = in_XMM5_Dd;
    auVar29 = pmaddwd(auVar29,auVar8);
    auVar9._4_4_ = uVar35;
    auVar9._0_4_ = uVar34;
    auVar9._8_4_ = in_XMM5_Dc;
    auVar9._12_4_ = in_XMM5_Dd;
    auVar44 = pmaddwd(auVar44,auVar9);
    auVar25._0_8_ =
         CONCAT44(auVar27._4_4_ + auVar30._4_4_ + auVar40._4_4_ + auVar42._4_4_,
                  auVar27._0_4_ + auVar30._0_4_ + auVar40._0_4_ + auVar42._0_4_);
    auVar25._8_4_ = auVar27._8_4_ + auVar30._8_4_ + auVar40._8_4_ + auVar42._8_4_;
    auVar25._12_4_ = auVar27._12_4_ + auVar30._12_4_ + auVar40._12_4_ + auVar42._12_4_;
    param_3 = param_3 + 4;
    param_1 = param_1 + (auVar25._0_8_ + auVar25._8_8_ & 0xffffffffU);
    param_2 = param_2 + lVar20 +
              (ulong)(uint)(auVar43._0_4_ + auVar28._0_4_ + auVar29._0_4_ + auVar44._0_4_ +
                           auVar43._8_4_ + auVar28._8_4_ + auVar29._8_4_ + auVar44._8_4_) +
              (ulong)(uint)(auVar43._4_4_ + auVar28._4_4_ + auVar29._4_4_ + auVar44._4_4_ +
                           auVar43._12_4_ + auVar28._12_4_ + auVar29._12_4_ + auVar44._12_4_);
    param_4 = lVar21;
  }
  lVar20 = param_4 + -0x20;
  if (-0x21 < lVar21) {
    lVar20 = param_1 * 0x20;
    auVar27 = psadbw(*param_3,in_XMM0);
    auVar43 = psadbw(param_3[1],in_XMM0);
    auVar14._4_4_ = uVar37;
    auVar14._0_4_ = uVar36;
    auVar14._8_4_ = in_XMM6_Dc;
    auVar14._12_4_ = in_XMM6_Dd;
    auVar29 = pmaddubsw(*param_3,auVar14);
    auVar3._4_4_ = uVar33;
    auVar3._0_4_ = uVar32;
    auVar3._8_4_ = in_XMM4_Dc;
    auVar3._12_4_ = in_XMM4_Dd;
    auVar28 = pmaddubsw(param_3[1],auVar3);
    auVar26._0_8_ = CONCAT44(auVar27._4_4_ + auVar43._4_4_,auVar27._0_4_ + auVar43._0_4_);
    auVar26._8_4_ = auVar27._8_4_ + auVar43._8_4_;
    auVar26._12_4_ = auVar27._12_4_ + auVar43._12_4_;
    auVar31._0_2_ = auVar29._0_2_ + auVar28._0_2_;
    auVar31._2_2_ = auVar29._2_2_ + auVar28._2_2_;
    auVar31._4_2_ = auVar29._4_2_ + auVar28._4_2_;
    auVar31._6_2_ = auVar29._6_2_ + auVar28._6_2_;
    auVar31._8_2_ = auVar29._8_2_ + auVar28._8_2_;
    auVar31._10_2_ = auVar29._10_2_ + auVar28._10_2_;
    auVar31._12_2_ = auVar29._12_2_ + auVar28._12_2_;
    auVar31._14_2_ = auVar29._14_2_ + auVar28._14_2_;
    param_3 = param_3 + 2;
    auVar10._4_4_ = uVar35;
    auVar10._0_4_ = uVar34;
    auVar10._8_4_ = in_XMM5_Dc;
    auVar10._12_4_ = in_XMM5_Dd;
    auVar27 = pmaddwd(auVar31,auVar10);
    param_1 = param_1 + (auVar26._0_8_ + auVar26._8_8_ & 0xffffffffU);
    param_2 = param_2 + lVar20 + (ulong)(uint)(auVar27._0_4_ + auVar27._8_4_) +
              (ulong)(uint)(auVar27._4_4_ + auVar27._12_4_);
    lVar20 = lVar21;
  }
  lVar21 = lVar20 + 0x10;
  if (-0x11 < lVar20) {
    auVar27 = *param_3;
    param_3 = param_3 + 1;
    auVar28 = psadbw(auVar27,in_XMM0);
    auVar4._4_4_ = uVar33;
    auVar4._0_4_ = uVar32;
    auVar4._8_4_ = in_XMM4_Dc;
    auVar4._12_4_ = in_XMM4_Dd;
    auVar27 = pmaddubsw(auVar27,auVar4);
    lVar21 = param_1 * 0x10;
    auVar11._4_4_ = uVar35;
    auVar11._0_4_ = uVar34;
    auVar11._8_4_ = in_XMM5_Dc;
    auVar11._12_4_ = in_XMM5_Dd;
    auVar27 = pmaddwd(auVar27,auVar11);
    param_1 = param_1 + (auVar28._0_8_ + auVar28._8_8_ & 0xffffffffU);
    param_2 = param_2 + lVar21 + (ulong)(uint)(auVar27._0_4_ + auVar27._8_4_) +
              (ulong)(uint)(auVar27._4_4_ + auVar27._12_4_);
    lVar21 = lVar20;
  }
  lVar20 = lVar21 + 0x10;
  if (lVar21 + 0x10 != 0) {
    do {
      puVar18 = *param_3;
      param_3 = (undefined1 (*) [16])(*param_3 + 1);
      param_1 = param_1 + (byte)*puVar18;
      param_2 = param_2 + param_1;
      lVar21 = lVar20 + -1;
      bVar1 = 0 < lVar20;
      lVar20 = lVar21;
    } while (lVar21 != 0 && bVar1);
  }
  return param_1 - (uint)((int)((param_1 & 0xffffffff) / 0xfff1) * 0xfff1) |
         (param_2 - (uint)((int)((param_2 & 0xffffffff) / 0xfff1) * 0xfff1)) * 0x10000;
}

