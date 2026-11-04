// name: FUN_1001921f3
// address: 1001921f3

undefined8 FUN_1001921f3(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = _stat_INODE64();
  if ((iVar1 == 0) && (iVar1 = _chflags(param_1,~param_3 & param_2), iVar1 == 0)) {
    return 0;
  }
  piVar2 = ___error();
  uVar3 = FUN_1001eb020(*piVar2);
  return uVar3;
}

