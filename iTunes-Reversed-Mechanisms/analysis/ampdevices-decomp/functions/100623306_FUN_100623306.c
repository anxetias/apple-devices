// name: FUN_100623306
// address: 100623306

bool FUN_100623306(long param_1,long param_2)

{
  if (*(float *)(param_2 + 0x2c) < *(float *)(param_1 + 0x2c)) {
    return true;
  }
  if (*(float *)(param_2 + 0x2c) <= *(float *)(param_1 + 0x2c)) {
    if (*(int *)(param_1 + 0x50) != 0 && *(int *)(param_2 + 0x50) == 0) {
      return true;
    }
    if (*(int *)(param_1 + 0x50) != 0 || *(int *)(param_2 + 0x50) == 0) {
      return *(uint *)(param_1 + 0x10) < *(uint *)(param_2 + 0x10);
    }
  }
  return false;
}

