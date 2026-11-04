// name: FUN_1001deabe
// address: 1001deabe

long FUN_1001deabe(long *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = *param_2;
  uVar3 = ~(iVar1 << 0xf) + iVar1;
  uVar3 = (uVar3 >> 10 ^ uVar3) * 9;
  uVar3 = uVar3 >> 6 ^ uVar3;
  uVar3 = ~(uVar3 << 0xb) + uVar3;
  uVar6 = uVar3 >> 0x10 ^ uVar3;
  uVar4 = uVar6 & *(uint *)((long)param_1 + 0xc);
  lVar7 = (long)(int)uVar4;
  iVar5 = *(int *)(lVar2 + lVar7 * 8);
  if (iVar5 != iVar1) {
    uVar6 = (uVar3 >> 0x17) + ~uVar6;
    uVar6 = uVar6 * 0x1000 ^ uVar6;
    uVar6 = uVar6 >> 7 ^ uVar6;
    uVar6 = uVar6 * 4 ^ uVar6;
    uVar3 = 0;
    do {
      if (iVar5 == 0) {
        return 0;
      }
      if (uVar3 == 0) {
        uVar3 = uVar6 >> 0x14 ^ uVar6 | 1;
      }
      uVar4 = uVar4 + uVar3 & *(uint *)((long)param_1 + 0xc);
      lVar7 = (long)(int)uVar4;
      iVar5 = *(int *)(lVar2 + lVar7 * 8);
    } while (iVar5 != iVar1);
  }
  return lVar2 + lVar7 * 8;
}

