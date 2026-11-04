// name: FUN_10015ddd3
// address: 10015ddd3

void FUN_10015ddd3(float param_1,ushort *param_2,long param_3,long param_4,ulong param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if ((((uint)param_4 | (uint)param_3 | (uint)param_2) & 0xf) != 0) {
    fVar6 = (float)(~-(uint)(param_1 != DAT_100700b50) & (uint)DAT_10070c170 |
                   (uint)(param_1 * DAT_10070c170) & -(uint)(param_1 != DAT_100700b50));
    if (3 < (uint)param_5) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        uVar1 = param_2[1];
        uVar2 = param_2[2];
        uVar3 = param_2[3];
        fVar7 = (float)(int)(short)(*param_2 << 8 | *param_2 >> 8) * fVar6;
        *(float *)(param_3 + lVar5 * 8) = fVar7;
        *(float *)(param_4 + lVar5 * 8) = fVar7;
        fVar7 = (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) * fVar6;
        *(float *)(param_3 + 4 + lVar5 * 8) = fVar7;
        *(float *)(param_4 + 4 + lVar5 * 8) = fVar7;
        fVar7 = (float)(int)(short)(uVar2 << 8 | uVar2 >> 8) * fVar6;
        *(float *)(param_3 + 8 + lVar5 * 8) = fVar7;
        *(float *)(param_4 + 8 + lVar5 * 8) = fVar7;
        fVar7 = (float)(int)(short)(uVar3 << 8 | uVar3 >> 8) * fVar6;
        *(float *)(param_3 + 0xc + lVar5 * 8) = fVar7;
        *(float *)(param_4 + 0xc + lVar5 * 8) = fVar7;
        param_2 = param_2 + 4;
        lVar5 = lVar5 + 2;
        lVar4 = lVar4 + -0x10;
      } while (((uint)(param_5 >> 1) & 0x7ffffffe) != (uint)lVar5);
      param_3 = param_3 - lVar4;
      param_4 = param_4 - lVar4;
    }
    if ((param_5 & 3) != 0) {
      lVar4 = 0;
      do {
        fVar7 = (float)(int)(short)(param_2[lVar4] << 8 | param_2[lVar4] >> 8) * fVar6;
        *(float *)(param_3 + lVar4 * 4) = fVar7;
        *(float *)(param_4 + lVar4 * 4) = fVar7;
        lVar4 = lVar4 + 1;
      } while (((uint)param_5 & 3) != (uint)lVar4);
    }
    return;
  }
  FUN_10015dab5();
  return;
}

