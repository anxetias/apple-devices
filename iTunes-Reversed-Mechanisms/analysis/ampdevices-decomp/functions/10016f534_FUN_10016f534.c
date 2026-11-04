// name: FUN_10016f534
// address: 10016f534

void FUN_10016f534(undefined8 *param_1,size_t param_2,byte *param_3)

{
  void *pvVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10016f5a0();
    pvVar1 = (void *)param_1[1];
    _memset(pvVar1,(uint)*param_3,param_2);
    param_1[1] = (long)pvVar1 + param_2;
  }
  return;
}

