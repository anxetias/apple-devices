// name: FUN_10049c5a2
// address: 10049c5a2

undefined1  [16] FUN_10049c5a2(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    auVar8._0_8_ = (long)(int)param_1[1] << 4;
    auVar8._8_8_ = auVar8._0_8_;
    return auVar8;
  }
  uVar1 = ~(param_2 << 0x20) + param_2;
  uVar1 = uVar1 >> 0x16 ^ uVar1;
  uVar1 = ~(uVar1 << 0xd) + uVar1;
  uVar1 = (uVar1 >> 8 ^ uVar1) * 9;
  uVar1 = uVar1 >> 0xf ^ uVar1;
  uVar1 = ~(uVar1 << 0x1b) + uVar1;
  uVar6 = (uint)(uVar1 >> 0x1f) ^ (uint)uVar1;
  uVar4 = *(uint *)((long)param_1 + 0xc) & uVar6;
  lVar2 = (long)(int)uVar4 * 0x10;
  lVar5 = *(long *)(lVar3 + lVar2);
  if (lVar5 != param_2) {
    uVar7 = (uVar6 >> 0x17) + ~uVar6;
    uVar7 = uVar7 * 0x1000 ^ uVar7;
    uVar7 = uVar7 >> 7 ^ uVar7;
    uVar7 = uVar7 * 4 ^ uVar7;
    uVar6 = 0;
    do {
      if (lVar5 == 0) {
        lVar2 = lVar3 + (long)(int)param_1[1] * 0x10;
        lVar3 = lVar2;
        goto LAB_10049c6a5;
      }
      if (uVar6 == 0) {
        uVar6 = uVar7 >> 0x14 ^ uVar7 | 1;
      }
      uVar4 = uVar4 + uVar6 & *(uint *)((long)param_1 + 0xc);
      lVar2 = (long)(int)uVar4 * 0x10;
      lVar5 = *(long *)(lVar3 + lVar2);
    } while (lVar5 != param_2);
  }
  lVar2 = lVar2 + lVar3;
  lVar3 = lVar3 + (long)(int)param_1[1] * 0x10;
LAB_10049c6a5:
  auVar9._8_8_ = lVar3;
  auVar9._0_8_ = lVar2;
  return auVar9;
}

