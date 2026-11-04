// name: FUN_1003c2d6c
// address: 1003c2d6c

undefined8 FUN_1003c2d6c(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((int)param_1[0x93] != 0) {
    uVar1 = FUN_100490af0(param_1 + 0x91);
    return uVar1;
  }
  lVar2 = (**(code **)(*param_1 + 0x240))();
  if (lVar2 != 0) {
    uVar1 = FUN_100485e30(lVar2);
    return uVar1;
  }
  return 0;
}

