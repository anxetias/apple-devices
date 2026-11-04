// name: FUN_1001b5134
// address: 1001b5134

undefined8
FUN_1001b5134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1001af9cc(param_4);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  FUN_1001b4f70(param_1,param_2,param_3,uVar1);
  (*(code *)PTR__objc_release_10082c7b0)(uVar1);
  return param_2;
}

