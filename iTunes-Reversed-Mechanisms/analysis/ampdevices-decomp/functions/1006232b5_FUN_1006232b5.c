// name: FUN_1006232b5
// address: 1006232b5

bool FUN_1006232b5(long param_1,long param_2)

{
  if (*(float *)(param_2 + 0x1c) < *(float *)(param_1 + 0x1c)) {
    return true;
  }
  if (*(float *)(param_2 + 0x1c) <= *(float *)(param_1 + 0x1c)) {
    if (*(int *)(param_1 + 0x50) != 0 && *(int *)(param_2 + 0x50) == 0) {
      return true;
    }
    if (*(int *)(param_1 + 0x50) != 0 || *(int *)(param_2 + 0x50) == 0) {
      return *(uint *)(param_1 + 0x10) < *(uint *)(param_2 + 0x10);
    }
  }
  return false;
}

