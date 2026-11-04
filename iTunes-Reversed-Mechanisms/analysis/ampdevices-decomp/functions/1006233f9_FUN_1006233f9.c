// name: FUN_1006233f9
// address: 1006233f9

bool FUN_1006233f9(long param_1,long param_2)

{
  if (*(uint *)(param_2 + 0x44) < *(uint *)(param_1 + 0x44)) {
    return true;
  }
  if (*(uint *)(param_2 + 0x44) <= *(uint *)(param_1 + 0x44)) {
    if (*(int *)(param_1 + 0x50) != 0 && *(int *)(param_2 + 0x50) == 0) {
      return true;
    }
    if (*(int *)(param_1 + 0x50) != 0 || *(int *)(param_2 + 0x50) == 0) {
      return *(uint *)(param_1 + 0x10) < *(uint *)(param_2 + 0x10);
    }
  }
  return false;
}

