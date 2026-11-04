// name: FUN_1005f2a2c
// address: 1005f2a2c

undefined8 * FUN_1005f2a2c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  *puVar1 = &PTR_FUN_10086fbf8;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  FUN_1005f2b36(puVar1 + 2,param_1 + 0x10);
  return puVar1;
}

