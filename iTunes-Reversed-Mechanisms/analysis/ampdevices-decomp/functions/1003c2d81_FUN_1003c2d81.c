// name: FUN_1003c2d81
// address: 1003c2d81

undefined8 FUN_1003c2d81(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x240))();
  if (lVar1 != 0) {
    uVar2 = FUN_100485e30(lVar1);
    return uVar2;
  }
  return 0;
}

