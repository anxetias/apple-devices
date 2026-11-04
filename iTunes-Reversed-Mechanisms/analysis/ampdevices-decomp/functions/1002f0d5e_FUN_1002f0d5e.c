// name: FUN_1002f0d5e
// address: 1002f0d5e

void FUN_1002f0d5e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_100853630;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 5;
    puVar1[4] = param_2;
  }
  return;
}

