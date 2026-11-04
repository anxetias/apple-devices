// name: FUN_10011cf6e
// address: 10011cf6e

void FUN_10011cf6e(float param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,byte *param_9,uint param_10,uint *param_11)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar4 = *param_11;
  uVar5 = (ulong)uVar4;
  bVar3 = *param_9;
  if (param_10 != 0) {
    fVar7 = DAT_100700b50 - param_1;
    uVar6 = 0;
    do {
      if (param_1 <= 0.0) {
        fVar8 = *(float *)(param_7 + uVar6 * 4);
        fVar9 = *(float *)(param_8 + uVar6 * 4);
      }
      else {
        fVar8 = *(float *)(param_5 + uVar6 * 4) * param_1 + *(float *)(param_7 + uVar6 * 4) * fVar7;
        fVar9 = *(float *)(param_6 + uVar6 * 4) * param_1 + *(float *)(param_8 + uVar6 * 4) * fVar7;
      }
      fVar1 = *(float *)(param_4 + uVar6 * 4);
      uVar4 = (int)uVar5 + 1U & 0x1ff;
      uVar5 = (ulong)uVar4;
      fVar2 = *(float *)(&DAT_100704e34 + uVar5 * 8);
      *(float *)(param_3 + uVar6 * 4) =
           *(float *)(&DAT_100704e30 + uVar5 * 8) * fVar9 + *(float *)(param_3 + uVar6 * 4) * fVar8;
      *(float *)(param_4 + uVar6 * 4) = fVar9 * fVar2 + fVar8 * fVar1;
      uVar6 = uVar6 + 1;
    } while (param_10 != uVar6);
  }
  *param_9 = bVar3 + 1 & 3;
  *param_11 = uVar4;
  return;
}

