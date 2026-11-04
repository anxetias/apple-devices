// name: FUN_10014ecb5
// address: 10014ecb5

long * FUN_10014ecb5(long *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x38);
  FUN_10014ed0c(pvVar1,param_3);
  *param_1 = (long)pvVar1 + 0x18;
  param_1[1] = (long)pvVar1;
  return param_1;
}

