// name: FUN_10011ced6
// address: 10011ced6

void FUN_10011ced6(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  byte *param_6,uint param_7,char param_8,uint *param_9)

{
  float fVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar4 = *param_9;
  bVar2 = *param_6;
  if (param_7 != 0) {
    uVar5 = 0;
    do {
      uVar4 = uVar4 + 1 & 0x1ff;
      fVar1 = *(float *)(param_4 + uVar5 * 4);
      auVar6 = insertps(ZEXT416(*(uint *)(param_2 + uVar5 * 4)),*(undefined4 *)(param_3 + uVar5 * 4)
                        ,0x10);
      auVar7._0_4_ = auVar6._0_4_ * fVar1;
      auVar7._4_4_ = auVar6._4_4_ * fVar1;
      auVar7._8_4_ = auVar6._8_4_ * 0.0;
      auVar7._12_4_ = auVar6._12_4_ * 0.0;
      if (param_8 == '\0') {
        fVar1 = *(float *)(param_5 + uVar5 * 4);
        auVar7._0_4_ = auVar7._0_4_ +
                       fVar1 * (float)*(undefined8 *)(&DAT_100704e30 + (ulong)uVar4 * 8);
        auVar7._4_4_ = auVar7._4_4_ +
                       fVar1 * (float)((ulong)*(undefined8 *)(&DAT_100704e30 + (ulong)uVar4 * 8) >>
                                      0x20);
        auVar7._8_4_ = auVar7._8_4_ + 0.0;
        auVar7._12_4_ = auVar7._12_4_ + 0.0;
      }
      *(int *)(param_2 + uVar5 * 4) = auVar7._0_4_;
      uVar3 = extractps(auVar7,1);
      *(undefined8 *)(param_3 + uVar5 * 4) = uVar3;
      uVar5 = uVar5 + 1;
    } while (param_7 != uVar5);
  }
  *param_6 = bVar2 + 1 & 3;
  *param_9 = uVar4;
  return;
}

