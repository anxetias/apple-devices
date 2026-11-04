// name: FUN_100357eac
// address: 100357eac

undefined8 FUN_100357eac(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  if ((*(long *)(param_1 + 0x10) != lVar1) && (*(int *)(lVar1 + 0xc) != 0)) {
    uVar3 = FUN_1003574ab(lVar1);
    iVar2 = FUN_1005d1c9c(uVar3);
    if (iVar2 == *(int *)(param_1 + 0x18)) {
      **(long **)(param_1 + 8) = lVar1;
    }
  }
  uVar3 = 0x2349;
  if (**(long **)(param_1 + 8) == 0) {
    uVar3 = 0;
  }
  return uVar3;
}

