// name: FUN_100270c0e
// address: 100270c0e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100270c0e(void)

{
  float fVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  bool bVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  uint *puVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 extraout_XMM0_Qb;
  double dVar24;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar22 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar23 [16];
  float fVar25;
  undefined1 auVar26 [16];
  double dVar28;
  undefined1 auVar27 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar36;
  undefined1 auVar37 [16];
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int iVar35;
  
  DAT_1008c5d60 = FUN_10018ea7c();
  FUN_1003bbf78();
  FUN_100493d64(DAT_1008c5d60 != '\0');
  auVar21 = _DAT_100700bd0;
  lVar7 = 0;
  fVar1 = (float)DAT_100700bd0;
  fVar25 = DAT_100700bd0._12_4_;
  do {
    auVar26 = *(undefined1 (*) [16])(&DAT_10073f7f0 + lVar7);
    auVar30._0_4_ = auVar26._0_4_ * auVar26._0_4_ + fVar1;
    auVar30._4_4_ = auVar26._4_4_ * auVar26._4_4_ + auVar21._4_4_;
    auVar30._8_4_ = auVar26._8_4_ * auVar26._8_4_ + auVar21._8_4_;
    auVar30._12_4_ = auVar26._12_4_ * auVar26._12_4_ + fVar25;
    auVar30 = sqrtps(auVar30,auVar30);
    auVar37 = divps(auVar21,auVar30);
    *(undefined1 (*) [16])((long)&DAT_1008a45c0 + lVar7) = auVar37;
    auVar26 = divps(auVar26,auVar30);
    *(undefined1 (*) [16])((long)&DAT_1008a45e0 + lVar7) = auVar26;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x20);
  puVar10 = &DAT_1008ac63c;
  DAT_1008a32b0 = &DAT_1008ac63c;
  lVar7 = 0;
  do {
    uVar16 = _powf((float)(int)lVar7);
    (&DAT_1008ac63c)[lVar7] = (uint)uVar16;
    auVar21._0_4_ = (uint)uVar16 ^ _DAT_100700430;
    auVar21._4_4_ = (uint)((ulong)uVar16 >> 0x20) ^ _UNK_100700434;
    auVar21._8_4_ = (uint)extraout_XMM0_Qb ^ _UNK_100700438;
    auVar21._12_4_ = (uint)((ulong)extraout_XMM0_Qb >> 0x20) ^ _UNK_10070043c;
    *puVar10 = auVar21._0_4_;
    lVar7 = lVar7 + 1;
    puVar10 = puVar10 + -1;
  } while (lVar7 != 0x200f);
  auVar26 = pmovsxbd(auVar21,_DAT_10070bcf8);
  lVar7 = 0;
  do {
    iStack_74 = auVar26._4_4_;
    iStack_70 = auVar26._8_4_;
    iStack_6c = auVar26._12_4_;
    dVar28 = (double)(iStack_74 + _UNK_10071c5d4) * _UNK_1007106e8;
    dVar17 = (double)(iStack_70 + _UNK_10071c5d8) * _DAT_1007106e0;
    dVar24 = (double)(iStack_6c + _UNK_10071c5dc) * _UNK_1007106e8;
    dVar18 = (double)_exp2();
    iStack_54 = (int)((ulong)dVar17 >> 0x20);
    iStack_50 = SUB84(dVar24,0);
    iStack_4c = (int)((ulong)dVar24 >> 0x20);
    auVar2._4_8_ = extraout_XMM0_Qb_00;
    auVar2._0_4_ = iStack_54;
    auVar37._0_8_ = auVar2._0_8_ << 0x20;
    auVar37._8_4_ = iStack_50;
    auVar37._12_4_ = iStack_4c;
    dVar17 = (double)_exp2(auVar37._8_8_);
    dVar24 = (double)_exp2();
    dVar28 = (double)_exp2(dVar28);
    *(ulong *)(&DAT_1008a2eb0 + lVar7) = CONCAT44((float)dVar28,(float)dVar24);
    *(ulong *)(lVar7 + 0x1008a2eb8) = CONCAT44((float)dVar17,(float)dVar18);
    auVar26._4_4_ = iStack_70 + _UNK_100707638;
    auVar26._0_4_ = iStack_74 + _UNK_100707634;
    auVar26._8_4_ = iStack_6c + _UNK_10070763c;
    auVar26._12_4_ = 0;
    auVar26 = auVar26 << 0x20;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x400);
  lVar7 = 0;
  dVar17 = DAT_10070c188;
  bVar6 = true;
  do {
    bVar9 = bVar6;
    uVar15 = 0;
    bVar6 = true;
    do {
      bVar5 = bVar6;
      auVar20._4_4_ = uVar15;
      auVar20._0_4_ = uVar15;
      auVar20._8_4_ = uVar15;
      auVar20._12_4_ = uVar15;
      auVar21 = pmulld(auVar20,_PTR___mh_execute_header_10070bce0);
      iVar12 = 0;
      do {
        iVar14 = (int)lVar7;
        lVar7 = (long)iVar14 + 4;
        iStack_54 = auVar21._4_4_;
        iStack_50 = auVar21._8_4_;
        iStack_4c = auVar21._12_4_;
        dVar24 = (double)(iVar12 + iStack_4c) * dVar17;
        dVar18 = (double)_exp2();
        iStack_64 = (int)((ulong)((double)(iVar12 + iStack_50) * dVar17) >> 0x20);
        uStack_60 = SUB84(dVar24,0);
        uStack_5c = (undefined4)((ulong)dVar24 >> 0x20);
        auVar3._4_8_ = extraout_XMM0_Qb_01;
        auVar3._0_4_ = iStack_64;
        auVar22._0_8_ = auVar3._0_8_ << 0x20;
        auVar22._8_4_ = uStack_60;
        auVar22._12_4_ = uStack_5c;
        dVar24 = (double)_exp2(auVar22._8_8_);
        dVar28 = (double)_exp2();
        dVar19 = (double)_exp2((double)(iVar12 + iStack_54) * dVar17);
        lVar11 = (long)iVar14 * 4;
        *(ulong *)(&DAT_1008a32c0 + lVar11) = CONCAT44((float)dVar19,(float)dVar28);
        *(ulong *)(lVar11 + 0x1008a32c8) = CONCAT44((float)dVar24,(float)dVar18);
        iVar12 = iVar12 + 1;
      } while (iVar12 != 0x20);
      uVar15 = 1;
      bVar6 = false;
    } while (bVar5);
    dVar17 = DAT_100700af8;
    bVar6 = false;
  } while (bVar9);
  lVar7 = 0;
  dVar17 = DAT_10070c188;
  bVar6 = true;
  do {
    bVar9 = bVar6;
    dVar18 = 0.0;
    iVar12 = 0;
    do {
      iVar14 = (int)lVar7;
      dVar24 = (double)_exp2(dVar18 * _DAT_10071c708);
      lVar7 = (long)iVar14 + 0x20;
      lVar11 = 0;
      auVar27 = _PTR___mh_execute_header_10070bce0;
      do {
        iVar35 = auVar27._8_4_;
        auVar31._4_12_ = auVar27._4_12_;
        auVar31._0_4_ = iVar35;
        auVar33._12_4_ = auVar27._12_4_;
        auVar33._0_8_ = auVar31._0_8_;
        auVar33._8_4_ = auVar33._12_4_;
        auVar32._8_8_ = auVar33._8_8_;
        auVar32._4_4_ = _UNK_1007075e8;
        auVar32._0_4_ = iVar35;
        auVar34._0_12_ = auVar32._0_12_;
        auVar34._12_4_ = _UNK_1007075ec;
        dVar28 = DAT_10070e500._8_8_;
        auVar21 = pmovzxdq(auVar27,auVar27);
        dVar29 = (SUB168(auVar34 | _DAT_10070e500,0) - (double)DAT_10070e500) * dVar17;
        dVar36 = (SUB168(auVar34 | _DAT_10070e500,8) - dVar28) * dVar17;
        dVar19 = (double)_exp2(dVar29);
        iStack_54 = (int)((ulong)dVar29 >> 0x20);
        iStack_50 = SUB84(dVar36,0);
        iStack_4c = (int)((ulong)dVar36 >> 0x20);
        auVar4._4_8_ = extraout_XMM0_Qb_02;
        auVar4._0_4_ = iStack_54;
        auVar23._0_8_ = auVar4._0_8_ << 0x20;
        auVar23._8_4_ = iStack_50;
        auVar23._12_4_ = iStack_4c;
        dVar29 = (double)_exp2(auVar23._8_8_);
        dVar36 = (double)_exp2();
        dVar28 = (double)_exp2(((double)(auVar21._8_8_ | (ulong)dVar28) - dVar28) * dVar17);
        lVar8 = lVar11 * 4 + (long)iVar14 * 4;
        *(ulong *)(&DAT_1008a3ac0 + lVar8) =
             CONCAT44((float)(dVar28 * dVar24),(float)(dVar36 * dVar24));
        *(ulong *)(lVar8 + 0x1008a3ac8) =
             CONCAT44((float)(dVar29 * dVar24),(float)(dVar19 * dVar24));
        local_68 = auVar27._0_4_;
        iStack_64 = auVar27._4_4_;
        lVar11 = lVar11 + 4;
        auVar27._0_4_ = local_68 + _DAT_100707630;
        auVar27._4_4_ = iStack_64 + _UNK_100707634;
        auVar27._8_4_ = iVar35 + _UNK_100707638;
        auVar27._12_4_ = auVar33._12_4_ + _UNK_10070763c;
      } while (lVar11 != 0x20);
      dVar18 = dVar18 + DAT_100700458;
      iVar12 = iVar12 + 1;
    } while (iVar12 != 8);
    dVar17 = DAT_100700af8;
    bVar6 = false;
  } while (bVar9);
  lVar7 = 0;
  do {
    dVar17 = (double)_tan((double)(int)lVar7 * _DAT_10071c710);
    fVar1 = DAT_100700b50;
    fVar25 = (float)dVar17 + DAT_100700b50;
    (&DAT_1008a44c0)[lVar7] = (float)dVar17 / fVar25;
    (&DAT_1008a4540)[lVar7] = fVar1 / fVar25;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 6);
  _DAT_1008a44d8 = 0x3f800000;
  _DAT_1008a4558 = 0;
  bVar6 = true;
  do {
    bVar9 = bVar6;
    uVar13 = 0;
    do {
      if (uVar13 == 0) {
        DAT_1008a42c0 = 0x3f800000;
        DAT_1008a4340 = 0x3f800000;
        DAT_1008a43c0 = 0x3f800000;
        DAT_1008a4440 = 0x3f800000;
      }
      else if ((uVar13 & 1) == 0) {
        (&DAT_1008a42c0)[uVar13] = 0x3f800000;
        uVar15 = _powf();
        (&DAT_1008a4340)[uVar13] = uVar15;
        (&DAT_1008a43c0)[uVar13] = 0x3f800000;
        uVar15 = _powf();
        (&DAT_1008a4440)[uVar13] = uVar15;
      }
      else {
        uVar15 = _powf();
        (&DAT_1008a42c0)[uVar13] = uVar15;
        (&DAT_1008a4340)[uVar13] = 0x3f800000;
        uVar15 = _powf();
        (&DAT_1008a43c0)[uVar13] = uVar15;
        (&DAT_1008a4440)[uVar13] = 0x3f800000;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x20);
    bVar6 = false;
  } while (bVar9);
  return;
}

