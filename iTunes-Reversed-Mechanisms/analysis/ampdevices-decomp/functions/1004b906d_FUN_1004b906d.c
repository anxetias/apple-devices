// name: FUN_1004b906d
// address: 1004b906d

void FUN_1004b906d(long param_1)

{
  if ((*(int *)(param_1 + 0x170) == 0) && (*(long *)(param_1 + 0x12f8) != 0)) {
    if (*(long *)(param_1 + 0x1b60) == -1) {
      if (0 < *(long *)(param_1 + 0x1b78)) goto LAB_1004b90a9;
    }
    else if (*(long *)(param_1 + 0x1b60) <= *(long *)(param_1 + 0x1b78)) {
LAB_1004b90a9:
      FUN_100199321(*(undefined8 *)(param_1 + 0x1350),param_1 + 0x12f8);
      return;
    }
  }
  return;
}

