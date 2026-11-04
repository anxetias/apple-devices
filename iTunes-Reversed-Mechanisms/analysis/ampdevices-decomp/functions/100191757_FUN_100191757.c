// name: FUN_100191757
// address: 100191757

undefined8 FUN_100191757(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = _fsync(*(int *)(param_1 + 0x4d8));
  if (iVar1 != 0) {
    piVar2 = ___error();
    uVar3 = FUN_1001eb020(*piVar2);
    return uVar3;
  }
  return 0;
}

