// name: FUN_1006233a8
// address: 1006233a8

bool FUN_1006233a8(long param_1,long param_2)

{
  if (*(float *)(param_2 + 0x54) < *(float *)(param_1 + 0x54)) {
    return true;
  }
  if (*(float *)(param_2 + 0x54) <= *(float *)(param_1 + 0x54)) {
    if (*(int *)(param_1 + 0x50) != 0 && *(int *)(param_2 + 0x50) == 0) {
      return true;
    }
    if (*(int *)(param_1 + 0x50) != 0 || *(int *)(param_2 + 0x50) == 0) {
      return *(uint *)(param_1 + 0x10) < *(uint *)(param_2 + 0x10);
    }
  }
  return false;
}

