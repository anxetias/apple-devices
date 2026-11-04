// name: FUN_1002cd07e
// address: 1002cd07e

long FUN_1002cd07e(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = 0;
LAB_1002cd0fc:
    lVar1 = (long)(int)param_1[1] * 0x10 + lVar1;
  }
  else {
    uVar3 = ~(param_2 << 0x20) + param_2;
    uVar3 = uVar3 >> 0x16 ^ uVar3;
    uVar3 = ~(uVar3 << 0xd) + uVar3;
    uVar3 = (uVar3 >> 8 ^ uVar3) * 9;
    uVar3 = uVar3 >> 0xf ^ uVar3;
    uVar3 = ~(uVar3 << 0x1b) + uVar3;
    uVar5 = (uint)(uVar3 >> 0x1f) ^ (uint)uVar3;
    uVar2 = *(uint *)((long)param_1 + 0xc) & uVar5;
    lVar7 = (long)(int)uVar2 * 0x10;
    lVar4 = *(long *)(lVar1 + lVar7);
    if (lVar4 != param_2) {
      uVar6 = (uVar5 >> 0x17) + ~uVar5;
      uVar6 = uVar6 * 0x1000 ^ uVar6;
      uVar6 = uVar6 >> 7 ^ uVar6;
      uVar6 = uVar6 * 4 ^ uVar6;
      uVar5 = 0;
      do {
        if (lVar4 == 0) goto LAB_1002cd0fc;
        if (uVar5 == 0) {
          uVar5 = uVar6 >> 0x14 ^ uVar6 | 1;
        }
        uVar2 = uVar2 + uVar5 & *(uint *)((long)param_1 + 0xc);
        lVar7 = (long)(int)uVar2 * 0x10;
        lVar4 = *(long *)(lVar1 + lVar7);
      } while (lVar4 != param_2);
    }
    lVar1 = lVar1 + lVar7;
  }
  return lVar1;
}

