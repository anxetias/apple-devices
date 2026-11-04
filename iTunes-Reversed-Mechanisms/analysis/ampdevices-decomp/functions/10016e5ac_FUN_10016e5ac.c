// name: FUN_10016e5ac
// address: 10016e5ac

void FUN_10016e5ac(ulong *param_1,long *param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = *param_1;
  uVar6 = uVar2 * 2 + 1;
  iVar1 = (int)param_1[1];
  iVar4 = iVar1 + -1;
  if ((uVar2 >> 0x34 & 1) == 0) {
    lVar5 = 0x3f;
    if ((uVar6 & 0x1fffffffffffff) != 0) {
      for (; (uVar6 & 0x1fffffffffffff) >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar6 = uVar6 << (~(byte)lVar5 + 0x36 & 0x3f);
    iVar4 = (iVar1 - ((uint)lVar5 ^ 0x3f)) + 9;
  }
  iVar4 = iVar4 + -10;
  iVar3 = iVar1 + -1;
  if (uVar2 == 0x10000000000000) {
    iVar3 = iVar1 + -2;
  }
  lVar5 = 0x3fffffffffffff;
  if (uVar2 != 0x10000000000000) {
    lVar5 = uVar2 * 2 + -1;
  }
  *param_3 = uVar6 << 10;
  *(int *)(param_3 + 1) = iVar4;
  *param_2 = lVar5 << ((char)iVar3 - (char)iVar4 & 0x3fU);
  *(int *)(param_2 + 1) = iVar4;
  return;
}

