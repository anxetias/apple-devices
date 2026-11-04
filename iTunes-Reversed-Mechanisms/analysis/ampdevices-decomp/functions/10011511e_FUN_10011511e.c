// name: FUN_10011511e
// address: 10011511e

void FUN_10011511e(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (**(long **)(param_1 + 0xc260 + lVar1 * 8) != 0) {
      FUN_100115184();
      **(undefined8 **)(param_1 + 0xc260 + lVar1 * 8) = 0;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0xc);
  return;
}

