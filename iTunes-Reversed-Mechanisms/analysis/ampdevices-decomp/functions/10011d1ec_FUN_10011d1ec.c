// name: FUN_10011d1ec
// address: 10011d1ec

void FUN_10011d1ec(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,byte *param_7,byte param_8,uint param_9,char param_10,uint *param_11)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar3 = *param_11;
  bVar2 = *param_7;
  if (param_9 != 0) {
    param_8 = param_8 & 1;
    uVar4 = 0;
    do {
      fVar5 = *(float *)(param_4 + uVar4 * 4);
      fVar6 = *(float *)(param_2 + uVar4 * 4) * fVar5;
      fVar5 = fVar5 * *(float *)(param_3 + uVar4 * 4);
      uVar3 = uVar3 + 1 & 0x1ff;
      fVar7 = *(float *)(param_6 + uVar4 * 4);
      if ((fVar7 == 0.0) && (!NAN(fVar7))) {
        if (param_10 == '\0') {
          fVar1 = *(float *)(param_5 + uVar4 * 4);
          fVar7 = fVar1 * *(float *)(&DAT_100704e34 + (ulong)uVar3 * 8);
          *(float *)(param_2 + uVar4 * 4) =
               fVar6 + *(float *)(&DAT_100704e30 + (ulong)uVar3 * 8) * fVar1;
          goto LAB_10011d2c3;
        }
        goto LAB_10011d2b0;
      }
      switch(bVar2) {
      case 0:
        fVar6 = fVar6 + fVar7;
        goto LAB_10011d2b0;
      case 1:
        *(float *)(param_2 + uVar4 * 4) = fVar6;
        if (param_8 == 0) goto LAB_10011d2c3;
LAB_10011d2d4:
        fVar5 = fVar5 - fVar7;
        break;
      case 2:
        fVar6 = fVar6 - fVar7;
LAB_10011d2b0:
        *(float *)(param_2 + uVar4 * 4) = fVar6;
        break;
      case 3:
        *(float *)(param_2 + uVar4 * 4) = fVar6;
        if (param_8 == 0) goto LAB_10011d2d4;
LAB_10011d2c3:
        fVar5 = fVar5 + fVar7;
        break;
      default:
        goto switchD_10011d277_default;
      }
      *(float *)(param_3 + uVar4 * 4) = fVar5;
switchD_10011d277_default:
      param_8 = param_8 ^ 1;
      uVar4 = uVar4 + 1;
    } while (param_9 != uVar4);
  }
  *param_7 = bVar2 + 1 & 3;
  *param_11 = uVar3;
  return;
}

