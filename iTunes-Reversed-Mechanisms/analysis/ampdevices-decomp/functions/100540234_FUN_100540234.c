// name: FUN_100540234
// address: 100540234

void FUN_100540234(long param_1)

{
  int *piVar1;
  
  if (*(long *)(param_1 + 0x518) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x518) + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1005d3cba();
    }
  }
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined1 *)(param_1 + 0x510) = 0;
  if (*(long *)(param_1 + 0x520) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x520) + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1005d3cba();
    }
  }
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined1 *)(param_1 + 0x511) = 0;
  return;
}

