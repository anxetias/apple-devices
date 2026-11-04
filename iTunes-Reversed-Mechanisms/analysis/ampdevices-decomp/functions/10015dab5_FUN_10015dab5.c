// name: FUN_10015dab5
// address: 10015dab5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10015dab5(float param_1,long param_2,long param_3,long param_4,uint param_5)

{
  float *pfVar1;
  ushort uVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  
  auVar5 = _DAT_10070c140;
  if (0x10 < param_5) {
    fVar9 = DAT_10070c170 * param_1;
    uVar6 = param_5 >> 3;
    lVar8 = 0;
    lVar7 = 0;
    do {
      lVar7 = lVar7 + -0x20;
      auVar12 = pshufb(*(undefined1 (*) [16])(param_2 + lVar8),auVar5);
      fVar10 = (float)(int)auVar12._0_2_ * fVar9;
      fVar11 = (float)(int)auVar12._2_2_ * fVar9;
      uVar16 = SUB42(fVar11,0);
      uVar17 = (undefined2)((uint)fVar11 >> 0x10);
      fVar11 = (float)(int)auVar12._4_2_ * fVar9;
      uVar18 = SUB42(fVar11,0);
      uVar19 = (undefined2)((uint)fVar11 >> 0x10);
      fVar11 = (float)(int)auVar12._6_2_ * fVar9;
      uVar20 = SUB42(fVar11,0);
      uVar21 = (undefined2)((uint)fVar11 >> 0x10);
      fVar11 = (float)(int)auVar12._8_2_ * fVar9;
      fVar13 = (float)(int)auVar12._10_2_ * fVar9;
      fVar14 = (float)(int)auVar12._12_2_ * fVar9;
      fVar15 = (float)(int)auVar12._14_2_ * fVar9;
      auVar12._4_2_ = uVar16;
      auVar12._0_4_ = fVar10;
      auVar12._6_2_ = uVar17;
      auVar12._8_2_ = uVar18;
      auVar12._10_2_ = uVar19;
      auVar12._12_2_ = uVar20;
      auVar12._14_2_ = uVar21;
      *(undefined1 (*) [16])(param_3 + lVar8 * 2) = auVar12;
      auVar4._4_2_ = uVar16;
      auVar4._0_4_ = fVar10;
      auVar4._6_2_ = uVar17;
      auVar4._8_2_ = uVar18;
      auVar4._10_2_ = uVar19;
      auVar4._12_2_ = uVar20;
      auVar4._14_2_ = uVar21;
      *(undefined1 (*) [16])(param_4 + lVar8 * 2) = auVar4;
      pfVar1 = (float *)(param_3 + 0x10 + lVar8 * 2);
      *pfVar1 = fVar11;
      pfVar1[1] = fVar13;
      pfVar1[2] = fVar14;
      pfVar1[3] = fVar15;
      pfVar1 = (float *)(param_4 + 0x10 + lVar8 * 2);
      *pfVar1 = fVar11;
      pfVar1[1] = fVar13;
      pfVar1[2] = fVar14;
      pfVar1[3] = fVar15;
      lVar8 = lVar8 + 0x10;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    param_3 = param_3 - lVar7;
    param_4 = param_4 - lVar7;
    param_2 = param_2 + (ulong)(param_5 & 0xfffffff8) * 2;
    param_5 = param_5 & 7;
  }
  if (param_5 != 0) {
    fVar9 = param_1 * DAT_10070c170;
    bVar3 = param_1 != DAT_100700b50;
    uVar6 = ~-(uint)bVar3 & (uint)DAT_10070c170;
    lVar7 = 0;
    do {
      uVar2 = *(ushort *)(param_2 + lVar7 * 2);
      fVar10 = (float)(int)(short)(uVar2 << 8 | uVar2 >> 8) *
               (float)(uVar6 | (uint)fVar9 & -(uint)bVar3);
      *(float *)(param_3 + lVar7 * 4) = fVar10;
      *(float *)(param_4 + lVar7 * 4) = fVar10;
      lVar7 = lVar7 + 1;
    } while (param_5 != (uint)lVar7);
  }
  return;
}

