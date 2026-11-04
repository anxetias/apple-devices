// name: FUN_100171493
// address: 100171493

undefined8 FUN_100171493(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0 || param_1 == 0) {
    return 0;
  }
  uVar1 = _CFDictionaryGetValueIfPresent();
  return uVar1;
}

