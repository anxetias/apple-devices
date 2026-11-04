// name: FUN_10015dc79
// address: 10015dc79

void FUN_10015dc79(float param_1,ulong *param_2,float *param_3,uint param_4)

{
  ushort uVar1;
  float *pfVar2;
  long lVar3;
  ulong *puVar4;
  uint uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  fVar6 = (float)(~-(uint)(param_1 != DAT_100700b50) & (uint)DAT_10070c170 |
                 (uint)(param_1 * DAT_10070c170) & -(uint)(param_1 != DAT_100700b50));
  if (3 < param_4) {
    uVar5 = param_4 >> 2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = DAT_10070c150;
    pfVar2 = param_3;
    puVar4 = param_2;
    do {
      param_2 = puVar4 + 1;
      param_3 = pfVar2 + 4;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *puVar4;
      auVar8 = pshufb(auVar8,auVar7);
      auVar8 = pmovsxwd(auVar8,auVar8);
      *pfVar2 = (float)auVar8._0_4_ * fVar6;
      pfVar2[1] = (float)auVar8._4_4_ * fVar6;
      pfVar2[2] = (float)auVar8._8_4_ * fVar6;
      pfVar2[3] = (float)auVar8._12_4_ * fVar6;
      uVar5 = uVar5 - 1;
      pfVar2 = param_3;
      puVar4 = param_2;
    } while (uVar5 != 0);
  }
  if ((param_4 & 3) != 0) {
    lVar3 = 0;
    do {
      uVar1 = *(ushort *)((long)param_2 + lVar3 * 2);
      param_3[lVar3] = (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) * fVar6;
      lVar3 = lVar3 + 1;
    } while ((param_4 & 3) != (uint)lVar3);
  }
  return;
}

