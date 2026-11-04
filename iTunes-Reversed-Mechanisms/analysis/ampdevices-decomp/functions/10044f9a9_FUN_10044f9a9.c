// name: FUN_10044f9a9
// address: 10044f9a9

void FUN_10044f9a9(long param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_100242b38();
  *(undefined2 *)(param_1 + 0x1c0) = uVar1;
  if (*(char *)(param_1 + 0x1c2) != '\0') {
    FUN_1001e9809(param_1 + 0x1c4);
    return;
  }
  FUN_1001e8f15(param_1 + 0x1d8);
  return;
}

