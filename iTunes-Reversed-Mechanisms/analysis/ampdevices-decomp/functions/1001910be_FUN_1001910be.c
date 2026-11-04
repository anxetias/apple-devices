// name: FUN_1001910be
// address: 1001910be

undefined8 FUN_1001910be(long param_1,off_t param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = _ftruncate(*(int *)(param_1 + 0x4d8),param_2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = ___error();
  uVar3 = FUN_1001eb020(*piVar2);
  return uVar3;
}

