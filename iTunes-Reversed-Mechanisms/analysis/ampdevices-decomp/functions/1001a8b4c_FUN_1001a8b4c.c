// name: FUN_1001a8b4c
// address: 1001a8b4c

void FUN_1001a8b4c(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10016f5a0();
    lVar1 = param_1[1];
    ___bzero(lVar1,param_2);
    param_1[1] = lVar1 + param_2;
  }
  return;
}

