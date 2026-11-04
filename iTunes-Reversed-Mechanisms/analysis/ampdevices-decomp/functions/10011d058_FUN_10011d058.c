// name: FUN_10011d058
// address: 10011d058

void FUN_10011d058(float param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,byte *param_10,byte param_11,
                  uint param_12,char param_13,uint *param_14)

{
  float fVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar4 = *param_14;
  bVar2 = *param_10;
  if (param_12 != 0) {
    fVar5 = DAT_100700b50 - param_1;
    param_11 = param_11 & 1;
    uVar3 = 0;
    do {
      if (param_1 <= 0.0) {
        fVar6 = *(float *)(param_7 + uVar3 * 4);
        fVar8 = *(float *)(param_8 + uVar3 * 4);
      }
      else {
        fVar6 = *(float *)(param_5 + uVar3 * 4) * param_1 + *(float *)(param_7 + uVar3 * 4) * fVar5;
        fVar8 = *(float *)(param_6 + uVar3 * 4) * param_1 + *(float *)(param_8 + uVar3 * 4) * fVar5;
      }
      fVar7 = *(float *)(param_3 + uVar3 * 4) * fVar6;
      fVar6 = fVar6 * *(float *)(param_4 + uVar3 * 4);
      uVar4 = uVar4 + 1 & 0x1ff;
      fVar1 = *(float *)(param_9 + uVar3 * 4);
      if ((fVar1 == 0.0) && (!NAN(fVar1))) {
        if (param_13 != '\0') goto LAB_10011d182;
        fVar1 = *(float *)(&DAT_100704e34 + (ulong)uVar4 * 8);
        *(float *)(param_3 + uVar3 * 4) =
             fVar7 + *(float *)(&DAT_100704e30 + (ulong)uVar4 * 8) * fVar8;
        fVar6 = fVar6 + fVar8 * fVar1;
        goto LAB_10011d1a7;
      }
      switch(bVar2) {
      case 0:
        fVar7 = fVar7 + fVar1;
        break;
      case 1:
        *(float *)(param_3 + uVar3 * 4) = fVar7;
        if (param_11 == 0) {
LAB_10011d193:
          fVar6 = fVar6 + fVar1;
          goto LAB_10011d1a7;
        }
        goto LAB_10011d1a3;
      case 2:
        fVar7 = fVar7 - fVar1;
        break;
      case 3:
        *(float *)(param_3 + uVar3 * 4) = fVar7;
        if (param_11 != 0) goto LAB_10011d193;
LAB_10011d1a3:
        fVar6 = fVar6 - fVar1;
        goto LAB_10011d1a7;
      default:
        goto switchD_10011d129_default;
      }
LAB_10011d182:
      *(float *)(param_3 + uVar3 * 4) = fVar7;
LAB_10011d1a7:
      *(float *)(param_4 + uVar3 * 4) = fVar6;
switchD_10011d129_default:
      param_11 = param_11 ^ 1;
      uVar3 = uVar3 + 1;
    } while (param_12 != uVar3);
  }
  *param_10 = bVar2 + 1 & 3;
  *param_14 = uVar4;
  return;
}

