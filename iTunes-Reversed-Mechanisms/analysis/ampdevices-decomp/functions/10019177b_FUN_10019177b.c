// name: FUN_10019177b
// address: 10019177b

undefined8 FUN_10019177b(long param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = _fcntl(*(int *)(param_1 + 0x4d8),0x32,(long)param_2 + 0x19);
  if (iVar1 != -1) {
    iVar1 = _fstat_INODE64(*(undefined4 *)(param_1 + 0x4d8));
    if (iVar1 == -1) {
      piVar2 = ___error();
      uVar3 = FUN_1001eb020(*piVar2);
    }
    else {
      *param_2 = 0x504f5358;
      *(undefined2 *)(param_2 + 1) = 0;
      param_2[2] = 0;
      *(undefined ***)(param_2 + 4) = &PTR_FUN_10083c2a8;
      *(undefined1 *)(param_2 + 6) = 0;
      param_2[0x107] = 0;
      uVar3 = 0;
    }
    return uVar3;
  }
  piVar2 = ___error();
  uVar3 = FUN_1001eb020(*piVar2);
  return uVar3;
}

