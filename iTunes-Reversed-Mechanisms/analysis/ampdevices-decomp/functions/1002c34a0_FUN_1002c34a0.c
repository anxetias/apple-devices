// name: FUN_1002c34a0
// address: 1002c34a0

undefined8 * FUN_1002c34a0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x30);
  *param_1 = pvVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_1001b7a88((long)pvVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}

