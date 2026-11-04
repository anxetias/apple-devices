// name: FUN_1003a4670
// address: 1003a4670

undefined8 FUN_1003a4670(undefined4 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1[5] != 0) {
    lVar1 = FUN_100314a6c(*param_1);
    if (lVar1 != 0) {
      uVar2 = FUN_1003a31e6(lVar1,param_1[5]);
      return uVar2;
    }
  }
  return 0;
}

