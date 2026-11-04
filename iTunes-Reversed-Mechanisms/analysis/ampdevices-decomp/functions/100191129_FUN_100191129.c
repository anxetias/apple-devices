// name: FUN_100191129
// address: 100191129

undefined8 FUN_100191129(long param_1,off_t param_2)

{
  off_t oVar1;
  int *piVar2;
  undefined8 uVar3;
  
  oVar1 = _lseek(*(int *)(param_1 + 0x4d8),param_2,0);
  if (oVar1 != -1) {
    return 0;
  }
  piVar2 = ___error();
  uVar3 = FUN_1001eb020(*piVar2);
  return uVar3;
}

