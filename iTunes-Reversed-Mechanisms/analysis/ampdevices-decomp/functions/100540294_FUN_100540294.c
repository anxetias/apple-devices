// name: FUN_100540294
// address: 100540294

void FUN_100540294(long param_1,undefined8 param_2)

{
  int *piVar1;
  
  if (*(long *)(param_1 + 0x520) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x520) + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1005d3cba();
    }
  }
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined1 *)(param_1 + 0x511) = 0;
  *(undefined1 *)(param_1 + 0xfbc) = 1;
  *(undefined8 *)(param_1 + 0xfc0) = param_2;
  return;
}

