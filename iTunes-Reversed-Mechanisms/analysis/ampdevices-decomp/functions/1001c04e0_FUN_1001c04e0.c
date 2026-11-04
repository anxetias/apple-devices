// name: FUN_1001c04e0
// address: 1001c04e0

long FUN_1001c04e0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = *param_2;
  uVar4 = ~(lVar2 << 0x20) + lVar2;
  uVar4 = uVar4 >> 0x16 ^ uVar4;
  uVar4 = ~(uVar4 << 0xd) + uVar4;
  uVar4 = (uVar4 >> 8 ^ uVar4) * 9;
  uVar4 = uVar4 >> 0xf ^ uVar4;
  uVar4 = ~(uVar4 << 0x1b) + uVar4;
  uVar6 = (uint)(uVar4 >> 0x1f) ^ (uint)uVar4;
  uVar3 = *(uint *)((long)param_1 + 0xc) & uVar6;
  lVar8 = (long)(int)uVar3 * 0x10;
  lVar5 = *(long *)(lVar1 + lVar8);
  if (lVar5 != lVar2) {
    uVar7 = (uVar6 >> 0x17) + ~uVar6;
    uVar7 = uVar7 * 0x1000 ^ uVar7;
    uVar7 = uVar7 >> 7 ^ uVar7;
    uVar7 = uVar7 * 4 ^ uVar7;
    uVar6 = 0;
    do {
      if (lVar5 == 0) {
        return 0;
      }
      if (uVar6 == 0) {
        uVar6 = uVar7 >> 0x14 ^ uVar7 | 1;
      }
      uVar3 = uVar3 + uVar6 & *(uint *)((long)param_1 + 0xc);
      lVar8 = (long)(int)uVar3 * 0x10;
      lVar5 = *(long *)(lVar1 + lVar8);
    } while (lVar5 != lVar2);
  }
  return lVar1 + lVar8;
}

