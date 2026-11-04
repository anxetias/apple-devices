// name: FUN_1003bbf78
// address: 1003bbf78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003bbf78(void)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  double dVar16;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  double dVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar37;
  undefined1 auVar36 [16];
  int local_78;
  int iStack_74;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_48;
  long lStack_40;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  lVar13 = 0;
  auVar21._8_8_ = _UNK_10070e618;
  auVar21._0_8_ = _DAT_10070e610;
  auVar27 = _PTR___mh_execute_header_10070bce0;
  do {
    iVar12 = auVar27._8_4_;
    auVar32._4_12_ = auVar27._4_12_;
    auVar32._0_4_ = iVar12;
    auVar34._12_4_ = auVar27._12_4_;
    auVar34._0_8_ = auVar32._0_8_;
    auVar34._8_4_ = auVar34._12_4_;
    auVar33._8_8_ = auVar34._8_8_;
    auVar33._4_4_ = _UNK_1007075e8;
    auVar33._0_4_ = iVar12;
    auVar35._0_12_ = auVar33._0_12_;
    auVar35._12_4_ = _UNK_1007075ec;
    dVar16 = DAT_10070e500._8_8_;
    auVar26 = pmovzxdq(auVar27,auVar27);
    dVar37 = (((double)(auVar35._8_8_ | (ulong)dVar16) - dVar16) + auVar21._8_8_) * _UNK_100747928;
    dVar25 = ((SUB168(auVar26 | _DAT_10070e500,0) - (double)DAT_10070e500) + auVar21._0_8_) *
             _DAT_100747920;
    dVar29 = ((SUB168(auVar26 | _DAT_10070e500,8) - dVar16) + auVar21._8_8_) * _UNK_100747928;
    auVar21 = _DAT_10070e500;
    dVar16 = (double)_sin(dVar25);
    uStack_64 = (undefined4)((ulong)dVar25 >> 0x20);
    uStack_60 = SUB84(dVar29,0);
    uStack_5c = (undefined4)((ulong)dVar29 >> 0x20);
    auVar3._4_8_ = extraout_XMM0_Qb;
    auVar3._0_4_ = uStack_64;
    auVar26._0_8_ = auVar3._0_8_ << 0x20;
    auVar26._8_4_ = uStack_60;
    auVar26._12_4_ = uStack_5c;
    dVar25 = (double)_sin(auVar26._8_8_);
    dVar29 = (double)_sin();
    dVar37 = (double)_sin(dVar37);
    auVar26 = pmovsxbd(auVar21,_DAT_10070f298);
    auVar21._8_8_ = _UNK_10070e618;
    auVar21._0_8_ = _DAT_10070e610;
    *(ulong *)(&DAT_1008c54f0 + lVar13) = CONCAT44((float)dVar25,(float)dVar16);
    *(ulong *)(&DAT_1008c54f8 + lVar13) = CONCAT44((float)dVar37,(float)dVar29);
    iVar11 = DAT_10074793c;
    iVar6 = DAT_100747934;
    local_78 = auVar27._0_4_;
    iStack_74 = auVar27._4_4_;
    auVar27._0_4_ = local_78 + auVar26._0_4_;
    auVar27._4_4_ = iStack_74 + auVar26._4_4_;
    auVar27._8_4_ = iVar12 + auVar26._8_4_;
    auVar27._12_4_ = auVar34._12_4_ + auVar26._12_4_;
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0x90);
  auVar17 = pmovsxbq(auVar21,_DAT_1007479a8);
  uVar14 = 0;
  auVar18._4_12_ = _UNK_100700434;
  auVar18._0_4_ = _DAT_100700430;
  do {
    auVar18 = auVar17 ^ auVar18;
    bVar1 = auVar18._0_4_ < DAT_100747930;
    bVar2 = auVar18._8_4_ < DAT_100747938;
    auVar28._0_8_ = uVar14 & 0xffffffff;
    auVar28._8_4_ = (int)uVar14 + 1;
    auVar28._12_4_ = 0;
    dVar25 = ((SUB168(auVar28 | _DAT_10070e500,0) - (double)DAT_10070e500) + _DAT_10070e610) *
             _DAT_100747920;
    dVar29 = ((SUB168(auVar28 | _DAT_10070e500,8) - DAT_10070e500._8_8_) + _UNK_10070e618) *
             _UNK_100747928;
    dVar16 = (double)_sin(dVar25);
    uStack_64 = (undefined4)((ulong)dVar25 >> 0x20);
    uStack_60 = SUB84(dVar29,0);
    uStack_5c = (undefined4)((ulong)dVar29 >> 0x20);
    auVar4._4_8_ = extraout_XMM0_Qb_00;
    auVar4._0_4_ = uStack_64;
    auVar19._0_8_ = auVar4._0_8_ << 0x20;
    auVar19._8_4_ = uStack_60;
    auVar19._12_4_ = uStack_5c;
    dVar25 = (double)_sin(auVar19._8_8_);
    if (auVar18._4_4_ == iVar6 && bVar1) {
      (&DAT_1008c5580)[uVar14] = (float)dVar16;
    }
    if (auVar18._12_4_ == iVar11 && bVar2) {
      (&DAT_1008c5584)[uVar14] = (float)dVar25;
      dVar16 = dVar25;
    }
    auVar30._8_8_ = dVar25;
    auVar30._0_8_ = dVar16;
    uVar14 = uVar14 + 2;
    local_48 = auVar17._0_8_;
    lStack_40 = auVar17._8_8_;
    auVar17._0_8_ = local_48 + _DAT_10073fa90;
    auVar17._8_8_ = lStack_40 + _UNK_10073fa98;
    auVar18._4_12_ = _UNK_100700434;
    auVar18._0_4_ = _DAT_100700430;
  } while (uVar14 != 0x12);
  _memset_pattern16(&DAT_1008c55c8,&DAT_100700bd0,0x18);
  uVar14 = 0;
  do {
    auVar20._0_4_ = (int)uVar14 + _DAT_100747940;
    auVar20._4_4_ = (int)uVar14 + _UNK_100747944;
    auVar20._8_4_ = _UNK_100747948;
    auVar20._12_4_ = _UNK_10074794c;
    auVar21 = pmovzxdq(auVar20,auVar20);
    dVar16 = (double)_sin((((double)(auVar21._8_8_ | (ulong)DAT_10070e500._8_8_) -
                           DAT_10070e500._8_8_) + _UNK_10070e618 + _UNK_100747958) * _UNK_100747968)
    ;
    dVar25 = (double)_sin();
    if (uVar14 < 6) {
      (&DAT_1008c55e0)[uVar14] = (float)dVar25;
      (&DAT_1008c55e4)[uVar14] = (float)dVar16;
    }
    uVar14 = uVar14 + 2;
  } while (uVar14 != 6);
  _DAT_1008c55f8 = (undefined1  [16])0x0;
  uVar14 = 0;
  _DAT_1008c5608 = 0;
  _DAT_1008c56a0 = (undefined1  [16])0x0;
  _DAT_1008c56b0 = 0;
  do {
    auVar22._0_4_ = (int)uVar14 + _DAT_100747970;
    auVar22._4_4_ = (int)uVar14 + _UNK_100747974;
    auVar22._8_4_ = _UNK_100747978;
    auVar22._12_4_ = _UNK_10074797c;
    auVar21 = pmovzxdq(auVar22,auVar22);
    dVar16 = (double)_sin((((double)(auVar21._8_8_ | (ulong)DAT_10070e500._8_8_) -
                           DAT_10070e500._8_8_) + _UNK_10070e618 + _UNK_100747988) * _UNK_100747968)
    ;
    dVar25 = (double)_sin();
    if (uVar14 < 6) {
      (&DAT_1008c56b8)[uVar14] = (float)dVar25;
      (&DAT_1008c56bc)[uVar14] = (float)dVar16;
    }
    uVar14 = uVar14 + 2;
  } while (uVar14 != 6);
  _memset_pattern16(&DAT_1008c56d0,&DAT_100700bd0,0x18);
  uVar14 = 0;
  do {
    auVar23._0_4_ = (int)uVar14 + _DAT_100747990;
    auVar23._4_4_ = (int)uVar14 + _UNK_100747994;
    auVar23._8_4_ = _UNK_100747998;
    auVar23._12_4_ = _UNK_10074799c;
    auVar21 = pmovzxdq(auVar23,auVar23);
    dVar16 = (double)_sin((((double)(auVar21._8_8_ | (ulong)DAT_10070e500._8_8_) -
                           DAT_10070e500._8_8_) + _UNK_10070e618) * _UNK_100747928);
    dVar25 = (double)_sin();
    if (uVar14 < 0x12) {
      (&DAT_1008c56e8)[uVar14] = (float)dVar25;
      (&DAT_1008c56ec)[uVar14] = (float)dVar16;
    }
    uVar14 = uVar14 + 2;
  } while (uVar14 != 0x12);
  auVar31 = pmovsxbd(auVar30,_DAT_10070bcf8);
  lVar13 = 0;
  do {
    iVar6 = auVar31._8_4_;
    auVar36._4_4_ = _UNK_1007075e8;
    auVar36._0_4_ = iVar6;
    iVar11 = auVar31._12_4_;
    auVar36._8_4_ = iVar11;
    auVar36._12_4_ = _UNK_1007075ec;
    dVar16 = DAT_10070e500._8_8_;
    auVar21 = pmovzxdq(auVar31,auVar31);
    dVar37 = (((double)(auVar36._8_8_ | (ulong)dVar16) - dVar16) + _UNK_10070e618) * _UNK_100747968;
    dVar25 = ((SUB168(auVar21 | _DAT_10070e500,0) - (double)DAT_10070e500) + _DAT_10070e610) *
             _DAT_100747960;
    dVar29 = ((SUB168(auVar21 | _DAT_10070e500,8) - dVar16) + _UNK_10070e618) * _UNK_100747968;
    dVar16 = (double)_sin(dVar25);
    uStack_64 = (undefined4)((ulong)dVar25 >> 0x20);
    uStack_60 = SUB84(dVar29,0);
    uStack_5c = (undefined4)((ulong)dVar29 >> 0x20);
    auVar5._4_8_ = extraout_XMM0_Qb_01;
    auVar5._0_4_ = uStack_64;
    auVar24._0_8_ = auVar5._0_8_ << 0x20;
    auVar24._8_4_ = uStack_60;
    auVar24._12_4_ = uStack_5c;
    dVar25 = (double)_sin(auVar24._8_8_);
    dVar29 = (double)_sin();
    dVar37 = (double)_sin(dVar37);
    local_78 = auVar31._0_4_;
    iStack_74 = auVar31._4_4_;
    *(ulong *)(&DAT_1008c5610 + lVar13 * 4) = CONCAT44((float)dVar25,(float)dVar16);
    *(ulong *)(lVar13 * 4 + 0x1008c5618) = CONCAT44((float)dVar37,(float)dVar29);
    lVar13 = lVar13 + 4;
    auVar31._0_4_ = local_78 + _DAT_100707630;
    auVar31._4_4_ = iStack_74 + _UNK_100707634;
    auVar31._8_4_ = iVar6 + _UNK_100707638;
    auVar31._12_4_ = iVar11 + _UNK_10070763c;
  } while (lVar13 != 0xc);
  _DAT_1008c5690 = (undefined1  [16])0x0;
  _DAT_1008c5680 = (undefined1  [16])0x0;
  _DAT_1008c5670 = (undefined1  [16])0x0;
  _DAT_1008c5660 = (undefined1  [16])0x0;
  _DAT_1008c5650 = (undefined1  [16])0x0;
  _DAT_1008c5640 = (undefined1  [16])0x0;
  puVar7 = &DAT_1008c5c40;
  iVar6 = 0;
  iVar12 = 1;
  iVar11 = 2;
  dVar25 = DAT_100712028;
  dVar16 = DAT_100700b18;
  do {
    lVar13 = 0;
    iVar15 = iVar12;
    do {
      dVar29 = (double)_cos(((double)iVar15 * dVar16) / dVar25);
      dVar25 = DAT_100712028;
      dVar16 = DAT_100700b18;
      *(uint *)((long)puVar7 + lVar13) = (uint)(float)dVar29 ^ _DAT_100700430;
      lVar13 = lVar13 + 4;
      iVar15 = iVar15 + iVar11;
    } while ((int)lVar13 != 0x18);
    iVar6 = iVar6 + 1;
    iVar12 = iVar12 + 2;
    iVar11 = iVar11 + 4;
    puVar7 = (undefined4 *)((long)puVar7 + lVar13);
  } while (iVar6 != 6);
  puVar7 = &DAT_1008c5730;
  iVar6 = 0;
  iVar12 = 1;
  iVar11 = 2;
  dVar25 = DAT_1007479a0;
  do {
    lVar13 = 0;
    iVar15 = iVar12;
    do {
      dVar29 = (double)_cos(((double)iVar15 * dVar16) / dVar25);
      dVar25 = DAT_1007479a0;
      dVar16 = DAT_100700b18;
      *(uint *)((long)puVar7 + lVar13) = (uint)(float)dVar29 ^ _DAT_100700430;
      lVar13 = lVar13 + 4;
      iVar15 = iVar15 + iVar11;
    } while ((int)lVar13 != 0x48);
    iVar6 = iVar6 + 1;
    iVar12 = iVar12 + 2;
    iVar11 = iVar11 + 4;
    puVar7 = (undefined4 *)((long)puVar7 + lVar13);
  } while (iVar6 != 0x12);
  puVar7 = &DAT_1008c5730;
  lVar13 = 0;
  puVar8 = &DAT_1008be0c0;
  do {
    lVar10 = 0;
    puVar9 = puVar7;
    do {
      puVar8[lVar10] = *puVar9;
      lVar10 = lVar10 + 1;
      puVar9 = puVar9 + 0x12;
    } while (lVar10 != 0x12);
    (&DAT_1008be108)[lVar13 * 10] = 0;
    lVar13 = lVar13 + 1;
    puVar8 = puVar8 + 0x14;
    puVar7 = puVar7 + 1;
  } while (lVar13 != 0x12);
  return;
}

