// name: FUN_10015dba4
// address: 10015dba4

void FUN_10015dba4(float param_1,long param_2,long param_3,long param_4,uint param_5)

{
  short *psVar1;
  float *pfVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  
  if (0x10 < param_5) {
    fVar14 = DAT_10070c170 * param_1;
    uVar11 = param_5 >> 3;
    lVar13 = 0;
    lVar12 = 0;
    do {
      lVar12 = lVar12 + -0x20;
      psVar1 = (short *)(param_2 + lVar13);
      sVar6 = *psVar1;
      sVar7 = psVar1[4];
      sVar8 = psVar1[5];
      sVar9 = psVar1[6];
      sVar10 = psVar1[7];
      uVar16 = SUB42((float)(int)psVar1[1] * fVar14,0);
      uVar17 = (undefined2)((uint)((float)(int)psVar1[1] * fVar14) >> 0x10);
      uVar18 = SUB42((float)(int)psVar1[2] * fVar14,0);
      uVar19 = (undefined2)((uint)((float)(int)psVar1[2] * fVar14) >> 0x10);
      uVar20 = SUB42((float)(int)psVar1[3] * fVar14,0);
      uVar21 = (undefined2)((uint)((float)(int)psVar1[3] * fVar14) >> 0x10);
      auVar4._4_2_ = uVar16;
      auVar4._0_4_ = (float)(int)sVar6 * fVar14;
      auVar4._6_2_ = uVar17;
      auVar4._8_2_ = uVar18;
      auVar4._10_2_ = uVar19;
      auVar4._12_2_ = uVar20;
      auVar4._14_2_ = uVar21;
      *(undefined1 (*) [16])(param_3 + lVar13 * 2) = auVar4;
      auVar5._4_2_ = uVar16;
      auVar5._0_4_ = (float)(int)sVar6 * fVar14;
      auVar5._6_2_ = uVar17;
      auVar5._8_2_ = uVar18;
      auVar5._10_2_ = uVar19;
      auVar5._12_2_ = uVar20;
      auVar5._14_2_ = uVar21;
      *(undefined1 (*) [16])(param_4 + lVar13 * 2) = auVar5;
      pfVar2 = (float *)(param_3 + 0x10 + lVar13 * 2);
      *pfVar2 = (float)(int)sVar7 * fVar14;
      pfVar2[1] = (float)(int)sVar8 * fVar14;
      pfVar2[2] = (float)(int)sVar9 * fVar14;
      pfVar2[3] = (float)(int)sVar10 * fVar14;
      pfVar2 = (float *)(param_4 + 0x10 + lVar13 * 2);
      *pfVar2 = (float)(int)sVar7 * fVar14;
      pfVar2[1] = (float)(int)sVar8 * fVar14;
      pfVar2[2] = (float)(int)sVar9 * fVar14;
      pfVar2[3] = (float)(int)sVar10 * fVar14;
      lVar13 = lVar13 + 0x10;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    param_3 = param_3 - lVar12;
    param_4 = param_4 - lVar12;
    param_2 = param_2 + (ulong)(param_5 & 0xfffffff8) * 2;
    param_5 = param_5 & 7;
  }
  if (param_5 != 0) {
    fVar14 = param_1 * DAT_10070c170;
    bVar3 = param_1 != DAT_100700b50;
    uVar11 = ~-(uint)bVar3 & (uint)DAT_10070c170;
    lVar12 = 0;
    do {
      fVar15 = (float)(int)*(short *)(param_2 + lVar12 * 2) *
               (float)(uVar11 | (uint)fVar14 & -(uint)bVar3);
      *(float *)(param_3 + lVar12 * 4) = fVar15;
      *(float *)(param_4 + lVar12 * 4) = fVar15;
      lVar12 = lVar12 + 1;
    } while (param_5 != (uint)lVar12);
  }
  return;
}

