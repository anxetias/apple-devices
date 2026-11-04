// name: FUN_10033d5bc
// address: 10033d5bc

void FUN_10033d5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_1001705e9(param_2);
  lVar2 = _CFDictionaryGetTypeID();
  if (lVar1 == lVar2) {
    lVar1 = FUN_100166b7f(param_3,param_1);
    if (lVar1 != 0) {
      FUN_1001714c2(param_2,FUN_10033d5bc,lVar1);
      return;
    }
  }
  FUN_1001714de(param_3,param_1,param_2);
  return;
}

