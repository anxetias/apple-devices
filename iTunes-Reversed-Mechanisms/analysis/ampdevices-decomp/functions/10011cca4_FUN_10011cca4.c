// name: FUN_10011cca4
// address: 10011cca4

void FUN_10011cca4(long param_1,long param_2,long param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7,float *param_8)

{
  float fVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  if (param_4 < param_5) {
    fVar1 = *(float *)(*(long *)(param_1 + 0x38) + (ulong)(param_7 - param_6) * 4);
    do {
      if (param_6 < param_7) {
        uVar2 = (ulong)param_4;
        fVar4 = 0.0;
        fVar5 = 0.0;
        fVar6 = 0.0;
        fVar7 = 0.0;
        uVar3 = param_6;
        do {
          auVar8 = insertps(ZEXT416(*(uint *)(*(long *)(param_3 + (ulong)(uVar3 + 1) * 8) +
                                             uVar2 * 4)),
                            *(undefined4 *)(*(long *)(param_3 + (ulong)uVar3 * 8) + uVar2 * 4),0x10)
          ;
          auVar8 = insertps(auVar8,*(undefined4 *)
                                    (*(long *)(param_2 + (ulong)(uVar3 + 1) * 8) + uVar2 * 4),0x20);
          auVar8 = insertps(auVar8,*(undefined4 *)
                                    (*(long *)(param_2 + (ulong)uVar3 * 8) + uVar2 * 4),0x30);
          fVar4 = fVar4 + auVar8._0_4_ * auVar8._0_4_;
          fVar5 = fVar5 + auVar8._4_4_ * auVar8._4_4_;
          fVar6 = fVar6 + auVar8._8_4_ * auVar8._8_4_;
          fVar7 = fVar7 + auVar8._12_4_ * auVar8._12_4_;
          uVar3 = uVar3 + 2;
        } while (uVar3 < param_7);
        *param_8 = (fVar6 + fVar7 + fVar5 + fVar4) * fVar1;
        uVar2 = (ulong)(param_4 + 1);
        fVar4 = 0.0;
        fVar5 = 0.0;
        fVar6 = 0.0;
        fVar7 = 0.0;
        uVar3 = param_6;
        do {
          auVar8 = insertps(ZEXT416(*(uint *)(*(long *)(param_3 + (ulong)(uVar3 + 1) * 8) +
                                             uVar2 * 4)),
                            *(undefined4 *)(*(long *)(param_3 + (ulong)uVar3 * 8) + uVar2 * 4),0x10)
          ;
          auVar8 = insertps(auVar8,*(undefined4 *)
                                    (*(long *)(param_2 + (ulong)(uVar3 + 1) * 8) + uVar2 * 4),0x20);
          auVar8 = insertps(auVar8,*(undefined4 *)
                                    (*(long *)(param_2 + (ulong)uVar3 * 8) + uVar2 * 4),0x30);
          fVar4 = fVar4 + auVar8._0_4_ * auVar8._0_4_;
          fVar5 = fVar5 + auVar8._4_4_ * auVar8._4_4_;
          fVar6 = fVar6 + auVar8._8_4_ * auVar8._8_4_;
          fVar7 = fVar7 + auVar8._12_4_ * auVar8._12_4_;
          uVar3 = uVar3 + 2;
        } while (uVar3 < param_7);
        fVar4 = fVar6 + fVar7 + fVar5 + fVar4;
      }
      else {
        *param_8 = fVar1 * 0.0;
        fVar4 = 0.0;
      }
      param_8[1] = fVar4 * fVar1;
      param_8 = param_8 + 2;
      param_4 = param_4 + 2;
    } while (param_4 < param_5);
  }
  return;
}

