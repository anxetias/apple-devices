// name: FUN_1001a901e
// address: 1001a901e

undefined8 FUN_1001a901e(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*param_2 == 0) {
    FUN_1001aa318(param_1);
  }
  else {
    uVar1 = _CFDictionaryGetValue(*param_2,*param_3);
    FUN_1001a8bb0(param_1,uVar1);
  }
  return param_1;
}

