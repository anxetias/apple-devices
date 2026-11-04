// name: FUN_1005e6d80
// address: 1005e6d80

void FUN_1005e6d80(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_10086faf8;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

