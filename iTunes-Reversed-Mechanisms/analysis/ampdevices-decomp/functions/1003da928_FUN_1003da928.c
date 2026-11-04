// name: FUN_1003da928
// address: 1003da928

void FUN_1003da928(long param_1)

{
  int *piVar1;
  
  if (*(long *)(param_1 + 0x4f0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x4f0) + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1005d3cba();
    }
  }
  if (*(long *)(param_1 + 0x508) != 0) {
    _AudioConverterDispose();
  }
  if (*(long *)(param_1 + 0x4e0) != 0) {
    FUN_1001c64c1();
  }
  FUN_100295c56(param_1 + 0x568);
  if (*(long *)(param_1 + 0x580) != 0) {
    FUN_1001c64c1();
  }
  FUN_10021e316(param_1 + 0x568);
  return;
}

