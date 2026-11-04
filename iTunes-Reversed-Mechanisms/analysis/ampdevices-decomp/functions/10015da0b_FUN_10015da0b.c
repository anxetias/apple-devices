// name: FUN_10015da0b
// address: 10015da0b

void FUN_10015da0b(float param_1,short *param_2,undefined1 (*param_3) [16],uint param_4)

{
  bool bVar1;
  undefined1 auVar2 [16];
  short sVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  long lVar12;
  short *psVar13;
  uint uVar14;
  float fVar15;
  
  psVar13 = param_2;
  uVar11 = param_4;
  if (0x10 < param_4) {
    fVar15 = DAT_10070c170 * param_1;
    uVar11 = param_4 & 7;
    psVar13 = param_2 + (param_4 & 0xfffffff8);
    param_4 = param_4 >> 3;
    do {
      sVar3 = *param_2;
      psVar4 = param_2 + 1;
      psVar5 = param_2 + 2;
      psVar6 = param_2 + 3;
      sVar7 = param_2[4];
      sVar8 = param_2[5];
      sVar9 = param_2[6];
      sVar10 = param_2[7];
      param_2 = param_2 + 8;
      auVar2._4_2_ = SUB42((float)(int)*psVar4 * fVar15,0);
      auVar2._0_4_ = (float)(int)sVar3 * fVar15;
      auVar2._6_2_ = (short)((uint)((float)(int)*psVar4 * fVar15) >> 0x10);
      auVar2._8_2_ = SUB42((float)(int)*psVar5 * fVar15,0);
      auVar2._10_2_ = (short)((uint)((float)(int)*psVar5 * fVar15) >> 0x10);
      auVar2._12_2_ = SUB42((float)(int)*psVar6 * fVar15,0);
      auVar2._14_2_ = (short)((uint)((float)(int)*psVar6 * fVar15) >> 0x10);
      *param_3 = auVar2;
      *(float *)param_3[1] = (float)(int)sVar7 * fVar15;
      *(float *)(param_3[1] + 4) = (float)(int)sVar8 * fVar15;
      *(float *)(param_3[1] + 8) = (float)(int)sVar9 * fVar15;
      *(float *)(param_3[1] + 0xc) = (float)(int)sVar10 * fVar15;
      param_3 = param_3 + 2;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  if (uVar11 != 0) {
    fVar15 = param_1 * DAT_10070c170;
    bVar1 = param_1 != DAT_100700b50;
    uVar14 = ~-(uint)bVar1 & (uint)DAT_10070c170;
    lVar12 = 0;
    do {
      *(float *)(*param_3 + lVar12 * 4) =
           (float)(int)psVar13[lVar12] * (float)(uVar14 | (uint)fVar15 & -(uint)bVar1);
      lVar12 = lVar12 + 1;
    } while (uVar11 != (uint)lVar12);
  }
  return;
}

