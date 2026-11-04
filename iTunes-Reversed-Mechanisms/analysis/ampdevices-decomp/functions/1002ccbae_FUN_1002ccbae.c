// name: FUN_1002ccbae
// address: 1002ccbae

undefined1  [16] FUN_1002ccbae(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    auVar7._0_8_ = (long)(int)param_1[1] << 4;
    auVar7._8_8_ = auVar7._0_8_;
    return auVar7;
  }
  uVar1 = ~(param_2 << 0xf) + param_2;
  uVar1 = (uVar1 >> 10 ^ uVar1) * 9;
  uVar1 = uVar1 >> 6 ^ uVar1;
  uVar1 = ~(uVar1 << 0xb) + uVar1;
  uVar6 = uVar1 >> 0x10 ^ uVar1;
  uVar4 = *(uint *)((long)param_1 + 0xc) & uVar6;
  lVar2 = (long)(int)uVar4 * 0x10;
  iVar5 = *(int *)(lVar3 + lVar2);
  if (iVar5 != param_2) {
    uVar6 = (uVar1 >> 0x17) + ~uVar6;
    uVar6 = uVar6 * 0x1000 ^ uVar6;
    uVar6 = uVar6 >> 7 ^ uVar6;
    uVar6 = uVar6 * 4 ^ uVar6;
    uVar1 = 0;
    do {
      if (iVar5 == 0) {
        lVar2 = lVar3 + (long)(int)param_1[1] * 0x10;
        lVar3 = lVar2;
        goto LAB_1002ccc94;
      }
      if (uVar1 == 0) {
        uVar1 = uVar6 >> 0x14 ^ uVar6 | 1;
      }
      uVar4 = uVar4 + uVar1 & *(uint *)((long)param_1 + 0xc);
      lVar2 = (long)(int)uVar4 * 0x10;
      iVar5 = *(int *)(lVar3 + lVar2);
    } while (iVar5 != param_2);
  }
  lVar2 = lVar2 + lVar3;
  lVar3 = lVar3 + (long)(int)param_1[1] * 0x10;
LAB_1002ccc94:
  auVar8._8_8_ = lVar3;
  auVar8._0_8_ = lVar2;
  return auVar8;
}

