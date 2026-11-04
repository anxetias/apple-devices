// name: FUN_10035c386
// address: 10035c386

undefined8 FUN_10035c386(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1c) < param_2) {
    *(int *)(param_1 + 0x1c) = param_2;
  }
  return 0;
}

