// name: FUN_10052d2a6
// address: 10052d2a6

void FUN_10052d2a6(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x5b0) < param_2) {
    param_2 = *(long *)(param_1 + 0x5b0);
  }
  *(long *)(param_1 + 0x508) = param_2;
  return;
}

