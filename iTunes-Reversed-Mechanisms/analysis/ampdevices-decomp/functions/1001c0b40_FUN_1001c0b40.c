// name: FUN_1001c0b40
// address: 1001c0b40

undefined1  [16] FUN_1001c0b40(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    auVar9._0_8_ = (long)(int)param_1[1] << 4;
    auVar9._8_8_ = auVar9._0_8_;
    return auVar9;
  }
  lVar1 = *param_2;
  uVar2 = ~(lVar1 << 0x20) + lVar1;
  uVar2 = uVar2 >> 0x16 ^ uVar2;
  uVar2 = ~(uVar2 << 0xd) + uVar2;
  uVar2 = (uVar2 >> 8 ^ uVar2) * 9;
  uVar2 = uVar2 >> 0xf ^ uVar2;
  uVar2 = ~(uVar2 << 0x1b) + uVar2;
  uVar7 = (uint)(uVar2 >> 0x1f) ^ (uint)uVar2;
  uVar5 = *(uint *)((long)param_1 + 0xc) & uVar7;
  lVar3 = (long)(int)uVar5 * 0x10;
  lVar6 = *(long *)(lVar4 + lVar3);
  if (lVar6 != lVar1) {
    uVar8 = (uVar7 >> 0x17) + ~uVar7;
    uVar8 = uVar8 * 0x1000 ^ uVar8;
    uVar8 = uVar8 >> 7 ^ uVar8;
    uVar8 = uVar8 * 4 ^ uVar8;
    uVar7 = 0;
    do {
      if (lVar6 == 0) {
        lVar3 = lVar4 + (long)(int)param_1[1] * 0x10;
        lVar4 = lVar3;
        goto LAB_1001c0c46;
      }
      if (uVar7 == 0) {
        uVar7 = uVar8 >> 0x14 ^ uVar8 | 1;
      }
      uVar5 = uVar5 + uVar7 & *(uint *)((long)param_1 + 0xc);
      lVar3 = (long)(int)uVar5 * 0x10;
      lVar6 = *(long *)(lVar4 + lVar3);
    } while (lVar6 != lVar1);
  }
  lVar3 = lVar3 + lVar4;
  lVar4 = lVar4 + (long)(int)param_1[1] * 0x10;
LAB_1001c0c46:
  auVar10._8_8_ = lVar4;
  auVar10._0_8_ = lVar3;
  return auVar10;
}

