// name: FUN_1001ef57c
// address: 1001ef57c

void FUN_1001ef57c(undefined8 param_1,long param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = _objc_autoreleasePoolPush();
  if (*(long **)(param_2 + 0x20) == (long *)0x0) {
    if (param_3 != (code *)0x0) {
      (*param_3)(param_1,param_4);
    }
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x20) + 0x30))();
  }
  _objc_autoreleasePoolPop(uVar1);
  return;
}

