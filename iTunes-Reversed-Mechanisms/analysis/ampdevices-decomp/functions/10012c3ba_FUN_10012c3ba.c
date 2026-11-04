// name: FUN_10012c3ba
// address: 10012c3ba

void FUN_10012c3ba(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = (*param_1 - param_1[1]) + param_2[1];
  FUN_10012c441(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}

