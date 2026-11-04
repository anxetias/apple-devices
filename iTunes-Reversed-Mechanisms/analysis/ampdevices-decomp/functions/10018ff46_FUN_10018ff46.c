// name: FUN_10018ff46
// address: 10018ff46

undefined8 FUN_10018ff46(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = _unlink((char *)(param_1 + 0x19));
  if (iVar1 != 0) {
    piVar2 = ___error();
    uVar3 = FUN_1001eb020(*piVar2);
    return uVar3;
  }
  return 0;
}

