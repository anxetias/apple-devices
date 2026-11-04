// name: FUN_1001b73fc
// address: 1001b73fc

undefined8 * FUN_1001b73fc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x48);
  *param_1 = pvVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_1001b7a5c((long)pvVar1 + 0x20,*param_4);
  *(undefined8 *)((long)pvVar1 + 0x30) = 0;
  *(undefined8 *)((long)pvVar1 + 0x38) = 0;
  *(undefined8 *)((long)pvVar1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}

