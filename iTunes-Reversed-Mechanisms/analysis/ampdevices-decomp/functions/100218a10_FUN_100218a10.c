// name: FUN_100218a10
// address: 100218a10

void FUN_100218a10(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_10083de78;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

