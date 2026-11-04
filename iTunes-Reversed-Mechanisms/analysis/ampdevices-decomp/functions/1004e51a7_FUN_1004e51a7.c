// name: FUN_1004e51a7
// address: 1004e51a7

void FUN_1004e51a7(long param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_1004e48c6();
  if (param_2 != (ulong *)0x0) {
    uVar1 = *(ulong *)(param_1 + 0x153a8);
    *param_2 = uVar1;
    if ((*(char *)(param_1 + 0x3a2) != '\0') && (*(char *)(param_1 + 0x16845) != '\0')) {
      uVar1 = uVar1 + *(long *)(param_1 + 0x168e0);
      *param_2 = uVar1;
    }
    uVar2 = 0;
    if (*(ulong *)(param_1 + 0x153b0) <= uVar1) {
      uVar2 = uVar1 - *(ulong *)(param_1 + 0x153b0);
    }
    *param_2 = uVar2;
  }
  if (param_3 != (long *)0x0) {
    lVar3 = 0;
    if (*(ulong *)(param_1 + 0x153b0) <= *(ulong *)(param_1 + 0x153a8)) {
      lVar3 = *(ulong *)(param_1 + 0x153a8) - *(ulong *)(param_1 + 0x153b0);
    }
    *param_3 = lVar3;
  }
  return;
}

