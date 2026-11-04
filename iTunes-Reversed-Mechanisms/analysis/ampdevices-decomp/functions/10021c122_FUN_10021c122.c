// name: FUN_10021c122
// address: 10021c122

void FUN_10021c122(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    _AudioComponentInstanceDispose();
  }
  if (*(void **)(param_1 + 0x3f0) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x3f0));
  }
  if (*(void **)(param_1 + 0x400) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x400));
  }
  FUN_100205d70(param_1 + 0x448);
  return;
}

