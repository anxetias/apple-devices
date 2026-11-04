// name: FUN_10015df18
// address: 10015df18

void FUN_10015df18(float param_1,short *param_2,long param_3,long param_4,ulong param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  
  if ((((uint)param_4 | (uint)param_3 | (uint)param_2) & 0xf) != 0) {
    fVar7 = (float)(~-(uint)(param_1 != DAT_100700b50) & (uint)DAT_10070c170 |
                   (uint)(param_1 * DAT_10070c170) & -(uint)(param_1 != DAT_100700b50));
    if (3 < (uint)param_5) {
      lVar6 = 0;
      lVar5 = 0;
      do {
        sVar1 = *param_2;
        sVar2 = param_2[1];
        sVar3 = param_2[2];
        sVar4 = param_2[3];
        *(float *)(param_3 + lVar6 * 8) = (float)(int)sVar1 * fVar7;
        *(float *)(param_4 + lVar6 * 8) = (float)(int)sVar1 * fVar7;
        *(float *)(param_3 + 4 + lVar6 * 8) = (float)(int)sVar2 * fVar7;
        *(float *)(param_4 + 4 + lVar6 * 8) = (float)(int)sVar2 * fVar7;
        *(float *)(param_3 + 8 + lVar6 * 8) = (float)(int)sVar3 * fVar7;
        *(float *)(param_4 + 8 + lVar6 * 8) = (float)(int)sVar3 * fVar7;
        *(float *)(param_3 + 0xc + lVar6 * 8) = (float)(int)sVar4 * fVar7;
        *(float *)(param_4 + 0xc + lVar6 * 8) = (float)(int)sVar4 * fVar7;
        param_2 = param_2 + 4;
        lVar5 = lVar5 + -0x10;
        lVar6 = lVar6 + 2;
      } while (((uint)(param_5 >> 1) & 0x7ffffffe) != (uint)lVar6);
      param_3 = param_3 - lVar5;
      param_4 = param_4 - lVar5;
    }
    if ((param_5 & 3) != 0) {
      lVar5 = 0;
      do {
        sVar1 = param_2[lVar5];
        *(float *)(param_3 + lVar5 * 4) = (float)(int)sVar1 * fVar7;
        *(float *)(param_4 + lVar5 * 4) = (float)(int)sVar1 * fVar7;
        lVar5 = lVar5 + 1;
      } while (((uint)param_5 & 3) != (uint)lVar5);
    }
    return;
  }
  FUN_10015dba4();
  return;
}

