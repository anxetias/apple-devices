// name: FUN_1001773b9
// address: 1001773b9

long FUN_1001773b9(long param_1,int param_2,byte param_3,uint *param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  
  param_2 = param_2 + (uint)(param_2 == 0);
  iVar4 = param_2 + 0x96;
  if ((param_3 & 1) == 0) {
    iVar4 = param_2;
  }
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      if (iVar4 < *(int *)(param_1 + 0xc + uVar3 * 8)) {
        if ((int)uVar3 != 0) goto LAB_1001773f1;
        goto LAB_10017740f;
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != (uint)uVar3);
    uVar3 = (ulong)uVar2;
  }
LAB_1001773f1:
  uVar2 = (int)uVar3 - 1;
  param_1 = param_1 + (ulong)uVar2 * 8;
  lVar1 = param_1 + 8;
  if (((param_3 & 2) == 0) || (iVar4 == *(int *)(param_1 + 0xc))) {
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar2;
    }
  }
  else {
LAB_10017740f:
    lVar1 = 0;
  }
  return lVar1;
}

