// name: FUN_1001cecce
// address: 1001cecce

void FUN_1001cecce(long param_1,undefined8 param_2)

{
  FUN_1001e9f3e(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  if (*(long *)(param_1 + 0x28) == -1) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_1001e9f96(param_1 + 0x38);
  return;
}

