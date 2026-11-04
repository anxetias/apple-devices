// name: FUN_1005d54d0
// address: 1005d54d0

void FUN_1005d54d0(undefined8 *param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_100243534(*param_1);
  *(undefined2 *)(param_1 + 1) = uVar1;
  if (*(char *)((long)param_1 + 10) != '\0') {
    FUN_1001e9809((long)param_1 + 0xc);
    return;
  }
  FUN_1001e8f15(param_1 + 4);
  return;
}

