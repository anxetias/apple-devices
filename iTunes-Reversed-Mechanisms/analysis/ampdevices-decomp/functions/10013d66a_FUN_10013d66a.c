// name: FUN_10013d66a
// address: 10013d66a

void FUN_10013d66a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_10083a4f0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  FUN_10028535e(param_1,param_2,param_2);
  return;
}

