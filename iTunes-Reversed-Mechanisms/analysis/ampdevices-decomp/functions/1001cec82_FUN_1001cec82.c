// name: FUN_1001cec82
// address: 1001cec82

void FUN_1001cec82(long param_1,long param_2)

{
  long lVar1;
  
  FUN_1001e9f3e(param_1 + 0x38);
  lVar1 = 0;
  if (0 < *(long *)(param_1 + 0x28)) {
    lVar1 = *(long *)(param_1 + 0x28);
  }
  *(long *)(param_1 + 0x28) = lVar1 + param_2;
  FUN_1001e9f96(param_1 + 0x38);
  return;
}

