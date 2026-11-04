// name: FUN_10057a2b6
// address: 10057a2b6

void FUN_10057a2b6(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_10086a820;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
  return;
}

