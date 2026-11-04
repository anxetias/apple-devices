// name: FUN_10015d94d
// address: 10015d94d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10015d94d(float param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],uint param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  auVar6 = _DAT_10070c140;
  pauVar9 = param_2;
  uVar7 = param_4;
  if (0x10 < param_4) {
    fVar11 = DAT_10070c170 * param_1;
    uVar7 = param_4 & 7;
    pauVar9 = (undefined1 (*) [16])(*param_2 + (ulong)(param_4 & 0xfffffff8) * 2);
    param_4 = param_4 >> 3;
    do {
      auVar1 = *param_2;
      param_2 = param_2 + 1;
      auVar12 = pshufb(auVar1,auVar6);
      fVar3 = (float)(int)auVar12._2_2_ * fVar11;
      fVar4 = (float)(int)auVar12._4_2_ * fVar11;
      fVar5 = (float)(int)auVar12._6_2_ * fVar11;
      auVar1._4_2_ = SUB42(fVar3,0);
      auVar1._0_4_ = (float)(int)auVar12._0_2_ * fVar11;
      auVar1._6_2_ = (short)((uint)fVar3 >> 0x10);
      auVar1._8_2_ = SUB42(fVar4,0);
      auVar1._10_2_ = (short)((uint)fVar4 >> 0x10);
      auVar1._12_2_ = SUB42(fVar5,0);
      auVar1._14_2_ = (short)((uint)fVar5 >> 0x10);
      *param_3 = auVar1;
      *(float *)param_3[1] = (float)(int)auVar12._8_2_ * fVar11;
      *(float *)(param_3[1] + 4) = (float)(int)auVar12._10_2_ * fVar11;
      *(float *)(param_3[1] + 8) = (float)(int)auVar12._12_2_ * fVar11;
      *(float *)(param_3[1] + 0xc) = (float)(int)auVar12._14_2_ * fVar11;
      param_3 = param_3 + 2;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  if (uVar7 != 0) {
    fVar11 = param_1 * DAT_10070c170;
    bVar2 = param_1 != DAT_100700b50;
    uVar10 = ~-(uint)bVar2 & (uint)DAT_10070c170;
    lVar8 = 0;
    do {
      *(float *)(*param_3 + lVar8 * 4) =
           (float)(int)(short)(*(ushort *)(*pauVar9 + lVar8 * 2) << 8 |
                              *(ushort *)(*pauVar9 + lVar8 * 2) >> 8) *
           (float)(uVar10 | (uint)fVar11 & -(uint)bVar2);
      lVar8 = lVar8 + 1;
    } while (uVar7 != (uint)lVar8);
  }
  return;
}

