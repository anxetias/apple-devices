// name: FUN_1002ac9e0
// address: 1002ac9e0

undefined1 FUN_1002ac9e0(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  if (((lVar1 == 0) || (*(long *)(lVar1 + 0x10) == 0)) ||
     (*(long *)(*(long *)(param_1 + 0x10) + 0x38) == 0)) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x68) == 0) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x3c) != 0x53485244) && (*(int *)(param_1 + 0x3c) != 0x46494c45)) {
      return 0;
    }
LAB_1002aca4f:
    iVar3 = FUN_1004744bf(lVar1,0);
    if ((iVar3 - 2U < 0x3f) && ((0x4000000040000001U >> ((ulong)(iVar3 - 2U) & 0x3f) & 1) != 0)) {
      return 1;
    }
    if (iVar3 == 0x8002) {
      return 1;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x3c);
    if (iVar3 != 0x44574e4c) {
      if (iVar3 == 0x53485244) goto LAB_1002aca4f;
      if (iVar3 != 0x46494c45) {
        return 0;
      }
    }
    cVar2 = FUN_10047eee6();
    if ((byte)(cVar2 - 6U) < 10) {
      return (&DAT_1007403ce)[(byte)(cVar2 - 6U)];
    }
  }
  return 0;
}

