// name: FUN_100191071
// address: 100191071

undefined8 FUN_100191071(long param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 local_a0 [96];
  undefined8 local_40;
  
  iVar1 = _fstat_INODE64(*(undefined4 *)(param_1 + 0x4d8),local_a0);
  if (iVar1 == 0) {
    *param_2 = local_40;
    uVar3 = 0;
  }
  else {
    *param_2 = 0;
    piVar2 = ___error();
    uVar3 = FUN_1001eb020(*piVar2);
  }
  return uVar3;
}

