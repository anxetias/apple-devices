// name: FUN_100444d96
// address: 100444d96

void FUN_100444d96(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x4c8) == param_2) {
    return;
  }
  if (*(long *)(param_1 + 0x4d0) != 0) {
    _AVCFPlayerRemoveObserver(*(undefined8 *)(param_1 + 0x4b0));
    _CFRelease(*(undefined8 *)(param_1 + 0x4d0));
    *(undefined8 *)(param_1 + 0x4d0) = 0;
  }
  *(long *)(param_1 + 0x4c8) = param_2;
  FUN_10043fbde(param_1);
  return;
}

