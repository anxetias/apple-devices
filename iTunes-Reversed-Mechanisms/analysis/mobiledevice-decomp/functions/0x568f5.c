// rea decompile_all
// name: FUN_000568f5
// address: 0x568f5
// body: available
// range: 0x568f5-0x56a7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_000568f5(ulong param_1,ulong param_2,undefined1 (*param_3) [16],long param_4)

{
  bool bVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [12];
  unkbyte10 Var6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [12];
  unkbyte10 Var9;
  undefined1 auVar10 [14];
  undefined1 auVar11 [12];
  undefined1 auVar12 [14];
  undefined1 auVar13 [12];
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 in_XMM0 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar34 [16];
  undefined1 auVar41 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar57 [16];
  undefined4 uVar58;
  short sVar59;
  undefined8 in_XMM4_Qa;
  undefined4 uVar60;
  short sVar61;
  undefined4 in_XMM4_Dc;
  short sVar62;
  undefined4 in_XMM4_Dd;
  short sVar63;
  undefined4 uVar64;
  undefined8 in_XMM5_Qa;
  undefined4 uVar65;
  undefined4 in_XMM5_Dc;
  undefined4 in_XMM5_Dd;
  undefined4 uVar66;
  short sVar67;
  undefined8 in_XMM6_Qa;
  undefined4 uVar68;
  short sVar69;
  undefined4 in_XMM6_Dc;
  short sVar70;
  undefined4 in_XMM6_Dd;
  short sVar71;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar51 [16];
  undefined1 auVar43 [16];
  undefined1 auVar52 [16];
  undefined1 auVar44 [16];
  undefined1 auVar53 [16];
  undefined1 auVar45 [16];
  undefined1 auVar54 [16];
  undefined1 auVar46 [16];
  undefined1 auVar55 [16];
  undefined1 auVar47 [16];
  undefined1 auVar56 [16];
  
  uVar58 = (int)in_XMM4_Qa;
  uVar60 = (int)((ulong)in_XMM4_Qa >> 0x20);
  uVar64 = (int)in_XMM5_Qa;
  uVar65 = (int)((ulong)in_XMM5_Qa >> 0x20);
  uVar66 = (int)in_XMM6_Qa;
  uVar68 = (int)((ulong)in_XMM6_Qa >> 0x20);
  if (0xf < param_4) {
    in_XMM0 = (undefined1  [16])0x0;
    uVar58 = _DAT_004a0390;
    uVar60 = uRam00000000004a0394;
    in_XMM4_Dc = uRam00000000004a0398;
    in_XMM4_Dd = uRam00000000004a039c;
    uVar64 = _DAT_004a03a0;
    uVar65 = uRam00000000004a03a4;
    in_XMM5_Dc = uRam00000000004a03a8;
    in_XMM5_Dd = uRam00000000004a03ac;
    uVar66 = _sum2_coefficients_nossse3;
    uVar68 = uRam00000000004a0384;
    in_XMM6_Dc = uRam00000000004a0388;
    in_XMM6_Dd = uRam00000000004a038c;
  }
  uVar19 = in_XMM0[0];
  uVar20 = in_XMM0[1];
  uVar21 = in_XMM0[2];
  uVar22 = in_XMM0[3];
  uVar23 = in_XMM0[4];
  uVar24 = in_XMM0[5];
  uVar25 = in_XMM0[6];
  uVar26 = in_XMM0[7];
  sVar67 = (short)((uint)uVar66 >> 0x10);
  sVar69 = (short)((uint)uVar68 >> 0x10);
  sVar70 = (short)((uint)in_XMM6_Dc >> 0x10);
  sVar71 = (short)((uint)in_XMM6_Dd >> 0x10);
  sVar59 = (short)((uint)uVar58 >> 0x10);
  sVar61 = (short)((uint)uVar60 >> 0x10);
  sVar62 = (short)((uint)in_XMM4_Dc >> 0x10);
  sVar63 = (short)((uint)in_XMM4_Dd >> 0x10);
  while (0x15af < param_4) {
    param_4 = param_4 + -0x15b0;
    iVar15 = 0x15b;
    do {
      auVar49 = *param_3;
      auVar47._0_14_ = auVar49._0_14_;
      auVar47[0xe] = auVar49[7];
      auVar47[0xf] = uVar26;
      auVar46._14_2_ = auVar47._14_2_;
      auVar46._0_13_ = auVar49._0_13_;
      auVar46[0xd] = uVar25;
      auVar45._13_3_ = auVar46._13_3_;
      auVar45[0xc] = auVar49[6];
      auVar45._0_12_ = auVar49._0_12_;
      auVar44._12_4_ = auVar45._12_4_;
      auVar44._0_11_ = auVar49._0_11_;
      auVar44[0xb] = uVar24;
      auVar43._11_5_ = auVar44._11_5_;
      auVar43._0_10_ = auVar49._0_10_;
      auVar43[10] = auVar49[5];
      auVar42._10_6_ = auVar43._10_6_;
      auVar42._0_9_ = auVar49._0_9_;
      auVar42[9] = uVar23;
      auVar41._9_7_ = auVar42._9_7_;
      auVar41._0_8_ = auVar49._0_8_;
      auVar41[8] = auVar49[4];
      Var6 = CONCAT91(CONCAT81(auVar41._8_8_,uVar22),auVar49[3]);
      auVar5._2_10_ = Var6;
      auVar5[1] = uVar21;
      auVar5[0] = auVar49[2];
      auVar4._2_12_ = auVar5;
      auVar4[1] = uVar20;
      auVar4[0] = auVar49[1];
      uVar3 = auVar49._8_8_;
      auVar33._8_6_ = 0;
      auVar33._0_8_ = uVar3;
      auVar33[0xe] = auVar49[0xf];
      auVar33[0xf] = uVar26;
      auVar32._14_2_ = auVar33._14_2_;
      auVar32._8_5_ = 0;
      auVar32._0_8_ = uVar3;
      auVar32[0xd] = uVar25;
      auVar31._13_3_ = auVar32._13_3_;
      auVar31._8_4_ = 0;
      auVar31._0_8_ = uVar3;
      auVar31[0xc] = auVar49[0xe];
      auVar30._12_4_ = auVar31._12_4_;
      auVar30._8_3_ = 0;
      auVar30._0_8_ = uVar3;
      auVar30[0xb] = uVar24;
      auVar29._11_5_ = auVar30._11_5_;
      auVar29._8_2_ = 0;
      auVar29._0_8_ = uVar3;
      auVar29[10] = auVar49[0xd];
      auVar27._10_6_ = auVar29._10_6_;
      auVar27[8] = 0;
      auVar27._0_8_ = uVar3;
      auVar27[9] = uVar23;
      auVar28._9_7_ = auVar27._9_7_;
      auVar28[8] = auVar49[0xc];
      auVar28._0_8_ = uVar3;
      Var9 = CONCAT91(CONCAT81(auVar28._8_8_,uVar22),auVar49[0xb]);
      auVar8._2_10_ = Var9;
      auVar8[1] = uVar21;
      auVar8[0] = auVar49[10];
      auVar7._2_12_ = auVar8;
      auVar7[1] = uVar20;
      auVar7[0] = auVar49[9];
      param_3 = param_3 + 1;
      auVar27 = psadbw(auVar49,in_XMM0);
      auVar48._0_2_ =
           CONCAT11(uVar19,auVar49[0]) * (short)uVar66 + CONCAT11(uVar19,auVar49[8]) * (short)uVar58
      ;
      auVar48._2_2_ = auVar4._0_2_ * sVar67 + auVar7._0_2_ * sVar59;
      auVar48._4_2_ = auVar5._0_2_ * (short)uVar68 + auVar8._0_2_ * (short)uVar60;
      auVar48._6_2_ = (short)Var6 * sVar69 + (short)Var9 * sVar61;
      auVar48._8_2_ = auVar41._8_2_ * (short)in_XMM6_Dc + auVar28._8_2_ * (short)in_XMM4_Dc;
      auVar48._10_2_ = auVar43._10_2_ * sVar70 + auVar29._10_2_ * sVar62;
      auVar48._12_2_ = auVar45._12_2_ * (short)in_XMM6_Dd + auVar31._12_2_ * (short)in_XMM4_Dd;
      auVar48._14_2_ = auVar46._14_2_ * sVar71 + auVar32._14_2_ * sVar63;
      lVar17 = param_1 * 0x10;
      auVar49._4_4_ = uVar65;
      auVar49._0_4_ = uVar64;
      auVar49._8_4_ = in_XMM5_Dc;
      auVar49._12_4_ = in_XMM5_Dd;
      auVar49 = pmaddwd(auVar48,auVar49);
      param_1 = param_1 + (auVar27._0_8_ + auVar27._8_8_ & 0xffffffffU);
      param_2 = param_2 + lVar17 + (ulong)(uint)(auVar49._0_4_ + auVar49._8_4_) +
                (ulong)(uint)(auVar49._4_4_ + auVar49._12_4_);
      iVar16 = iVar15 + -1;
      bVar1 = 0 < iVar15;
      iVar15 = iVar16;
    } while (iVar16 != 0 && bVar1);
    param_1 = param_1 - (uint)((int)((param_1 & 0xffffffff) / 0xfff1) * 0xfff1);
    param_2 = param_2 - (uint)((int)((param_2 & 0xffffffff) / 0xfff1) * 0xfff1);
  }
  lVar17 = param_4 + -0x10;
  if (0xf < param_4) {
    auVar49 = *param_3;
    auVar56._0_14_ = auVar49._0_14_;
    auVar56[0xe] = auVar49[7];
    auVar56[0xf] = uVar26;
    auVar55._14_2_ = auVar56._14_2_;
    auVar55._0_13_ = auVar49._0_13_;
    auVar55[0xd] = uVar25;
    auVar54._13_3_ = auVar55._13_3_;
    auVar54[0xc] = auVar49[6];
    auVar54._0_12_ = auVar49._0_12_;
    auVar53._12_4_ = auVar54._12_4_;
    auVar53._0_11_ = auVar49._0_11_;
    auVar53[0xb] = uVar24;
    auVar52._11_5_ = auVar53._11_5_;
    auVar52._0_10_ = auVar49._0_10_;
    auVar52[10] = auVar49[5];
    auVar51._10_6_ = auVar52._10_6_;
    auVar51._0_9_ = auVar49._0_9_;
    auVar51[9] = uVar23;
    auVar50._9_7_ = auVar51._9_7_;
    auVar50._0_8_ = auVar49._0_8_;
    auVar50[8] = auVar49[4];
    Var6 = CONCAT91(CONCAT81(auVar50._8_8_,uVar22),auVar49[3]);
    auVar11._2_10_ = Var6;
    auVar11[1] = uVar21;
    auVar11[0] = auVar49[2];
    auVar10._2_12_ = auVar11;
    auVar10[1] = uVar20;
    auVar10[0] = auVar49[1];
    uVar3 = auVar49._8_8_;
    auVar40._8_6_ = 0;
    auVar40._0_8_ = uVar3;
    auVar40[0xe] = auVar49[0xf];
    auVar40[0xf] = uVar26;
    auVar39._14_2_ = auVar40._14_2_;
    auVar39._8_5_ = 0;
    auVar39._0_8_ = uVar3;
    auVar39[0xd] = uVar25;
    auVar38._13_3_ = auVar39._13_3_;
    auVar38._8_4_ = 0;
    auVar38._0_8_ = uVar3;
    auVar38[0xc] = auVar49[0xe];
    auVar37._12_4_ = auVar38._12_4_;
    auVar37._8_3_ = 0;
    auVar37._0_8_ = uVar3;
    auVar37[0xb] = uVar24;
    auVar36._11_5_ = auVar37._11_5_;
    auVar36._8_2_ = 0;
    auVar36._0_8_ = uVar3;
    auVar36[10] = auVar49[0xd];
    auVar35._10_6_ = auVar36._10_6_;
    auVar35[8] = 0;
    auVar35._0_8_ = uVar3;
    auVar35[9] = uVar23;
    auVar34._9_7_ = auVar35._9_7_;
    auVar34[8] = auVar49[0xc];
    auVar34._0_8_ = uVar3;
    Var9 = CONCAT91(CONCAT81(auVar34._8_8_,uVar22),auVar49[0xb]);
    auVar13._2_10_ = Var9;
    auVar13[1] = uVar21;
    auVar13[0] = auVar49[10];
    auVar12._2_12_ = auVar13;
    auVar12[1] = uVar20;
    auVar12[0] = auVar49[9];
    param_3 = param_3 + 1;
    auVar27 = psadbw(auVar49,in_XMM0);
    auVar57._0_2_ =
         CONCAT11(uVar19,auVar49[0]) * (short)uVar66 + CONCAT11(uVar19,auVar49[8]) * (short)uVar58;
    auVar57._2_2_ = auVar10._0_2_ * sVar67 + auVar12._0_2_ * sVar59;
    auVar57._4_2_ = auVar11._0_2_ * (short)uVar68 + auVar13._0_2_ * (short)uVar60;
    auVar57._6_2_ = (short)Var6 * sVar69 + (short)Var9 * sVar61;
    auVar57._8_2_ = auVar50._8_2_ * (short)in_XMM6_Dc + auVar34._8_2_ * (short)in_XMM4_Dc;
    auVar57._10_2_ = auVar52._10_2_ * sVar70 + auVar36._10_2_ * sVar62;
    auVar57._12_2_ = auVar54._12_2_ * (short)in_XMM6_Dd + auVar38._12_2_ * (short)in_XMM4_Dd;
    auVar57._14_2_ = auVar55._14_2_ * sVar71 + auVar39._14_2_ * sVar63;
    lVar17 = param_1 * 0x10;
    auVar2._4_4_ = uVar65;
    auVar2._0_4_ = uVar64;
    auVar2._8_4_ = in_XMM5_Dc;
    auVar2._12_4_ = in_XMM5_Dd;
    auVar49 = pmaddwd(auVar57,auVar2);
    param_1 = param_1 + (auVar27._0_8_ + auVar27._8_8_ & 0xffffffffU);
    param_2 = param_2 + lVar17 + (ulong)(uint)(auVar49._0_4_ + auVar49._8_4_) +
              (ulong)(uint)(auVar49._4_4_ + auVar49._12_4_);
    lVar17 = param_4 + -0x20;
  }
  lVar18 = lVar17 + 0x10;
  if (lVar17 + 0x10 != 0) {
    do {
      puVar14 = *param_3;
      param_3 = (undefined1 (*) [16])(*param_3 + 1);
      param_1 = param_1 + (byte)*puVar14;
      param_2 = param_2 + param_1;
      lVar17 = lVar18 + -1;
      bVar1 = 0 < lVar18;
      lVar18 = lVar17;
    } while (lVar17 != 0 && bVar1);
  }
  return param_1 - (uint)((int)((param_1 & 0xffffffff) / 0xfff1) * 0xfff1) |
         (param_2 - (uint)((int)((param_2 & 0xffffffff) / 0xfff1) * 0xfff1)) * 0x10000;
}

