// name: FUN_1001194e4
// address: 1001194e4

void FUN_1001194e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  FUN_100105fc6(param_1 + 1);
  *param_1 = &PTR_FUN_100835d18;
  *(undefined2 *)(param_1 + 8) = 0x210;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  pvVar1 = operator_new(0x30);
  param_1[9] = pvVar1;
  pvVar1 = operator_new(0x30);
  param_1[10] = pvVar1;
  param_1[7] = param_3;
  return;
}

