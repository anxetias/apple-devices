// name: FUN_1001910e3
// address: 1001910e3

undefined8 FUN_1001910e3(long param_1,off_t *param_2)

{
  off_t oVar1;
  int *piVar2;
  undefined8 uVar3;
  
  oVar1 = _lseek(*(int *)(param_1 + 0x4d8),0,1);
  if (oVar1 != -1) {
    *param_2 = oVar1;
    return 0;
  }
  *param_2 = 0;
  piVar2 = ___error();
  uVar3 = FUN_1001eb020(*piVar2);
  return uVar3;
}

