// name: FUN_1001c34e1
// address: 1001c34e1

void FUN_1001c34e1(undefined8 param_1,undefined2 *param_2,long param_3)

{
  long lVar1;
  
  lVar1 = FUN_1001c3393();
  if (lVar1 != 0) {
    FUN_1001e115f(lVar1,param_2);
    return;
  }
  if (param_3 != 0) {
    FUN_1001e1c39(param_3,param_2);
    return;
  }
  *param_2 = 0;
  return;
}

