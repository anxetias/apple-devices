// name: FUN_10013e9c2
// address: 10013e9c2

void FUN_10013e9c2(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = (*param_1 - param_1[1]) + param_2[1];
  FUN_10013ea38(param_1 + 2,*param_1,param_1[1],lVar1);
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

