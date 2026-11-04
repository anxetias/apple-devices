// name: FUN_10052a0d8
// address: 10052a0d8

uint FUN_10052a0d8(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = 0;
  uVar4 = 0;
  if ((((param_1 != (int *)0x0) && (uVar4 = uVar2, *param_1 == 0x4f4c5354)) && (param_1[1] != 0)) &&
     (iVar5 = (int)((ulong)(*(long *)(param_1 + 4) - *(long *)(param_1 + 2)) >> 3) * -0x49249249,
     iVar5 != 0)) {
    iVar6 = 0;
    uVar4 = 0;
    do {
      lVar3 = FUN_1005968ea(param_1,iVar6,0);
      if (lVar3 != 0) {
        uVar1 = FUN_100474dd0(lVar3,0);
        uVar2 = FUN_10052a034(uVar1);
        uVar2 = uVar2 | uVar4;
        uVar4 = uVar2 & 0xffffff0f | 0x10;
        if ((uVar2 & 0xf0 & (uVar2 & 0xf0) - 1) == 0) {
          uVar4 = uVar2;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar5 != iVar6);
  }
  return uVar4;
}

