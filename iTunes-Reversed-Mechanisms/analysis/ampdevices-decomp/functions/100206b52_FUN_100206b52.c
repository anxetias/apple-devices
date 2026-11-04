// name: FUN_100206b52
// address: 100206b52

undefined8 FUN_100206b52(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1c) < param_2) {
    *(int *)(param_1 + 0x1c) = param_2;
  }
  return 0;
}

