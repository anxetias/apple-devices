// name: FUN_10011cdce
// address: 10011cdce

void FUN_10011cdce(long param_1,long param_2,long param_3,uint param_4,long param_5,uint param_6,
                  uint param_7,float *param_8)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_4 != 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    fVar1 = *(float *)(lVar4 + (ulong)(param_7 - param_6) * 4);
    uVar6 = 0;
    do {
      bVar2 = *(byte *)(param_5 + uVar6);
      bVar3 = *(byte *)(param_5 + 1 + uVar6);
      fVar9 = 0.0;
      if (param_6 < param_7) {
        fVar9 = 0.0;
        fVar10 = 0.0;
        uVar7 = param_6;
        do {
          uVar5 = (ulong)uVar7;
          if (bVar2 < bVar3) {
            uVar8 = (ulong)bVar2;
            do {
              auVar11 = insertps(ZEXT416(*(uint *)(*(long *)(param_2 + 8 + uVar5 * 8) + uVar8 * 4)),
                                 *(undefined4 *)(*(long *)(param_3 + 8 + uVar5 * 8) + uVar8 * 4),
                                 0x10);
              auVar12 = insertps(ZEXT416(*(uint *)(*(long *)(param_2 + uVar5 * 8) + uVar8 * 4)),
                                 *(undefined4 *)(*(long *)(param_3 + uVar5 * 8) + uVar8 * 4),0x10);
              fVar9 = fVar9 + auVar12._0_4_ * auVar12._0_4_ + auVar11._0_4_ * auVar11._0_4_;
              fVar10 = fVar10 + auVar12._4_4_ * auVar12._4_4_ + auVar11._4_4_ * auVar11._4_4_;
              uVar8 = uVar8 + 1;
            } while (bVar3 != uVar8);
          }
          uVar7 = uVar7 + 2;
        } while (uVar7 < param_7);
        fVar9 = fVar9 + fVar10;
      }
      if (bVar2 < bVar3) {
        uVar5 = (ulong)((uint)bVar3 - (uint)bVar2);
        fVar10 = *(float *)(lVar4 + uVar5 * 4);
        do {
          *param_8 = fVar9 * fVar10 * fVar1;
          param_8 = param_8 + 1;
          uVar7 = (int)uVar5 - 1;
          uVar5 = (ulong)uVar7;
        } while (uVar7 != 0);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != (param_4 & 0xff));
  }
  return;
}

