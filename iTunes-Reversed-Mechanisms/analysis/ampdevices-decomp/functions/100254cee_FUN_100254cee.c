// name: FUN_100254cee
// address: 100254cee

void FUN_100254cee(long param_1,long param_2,char param_3)

{
  if (((*(int *)(param_2 + 0x20) == 0) && (*(int *)(param_2 + 0x24) == 0)) &&
     (*(char *)(param_2 + 0x28) == '\0')) {
    return;
  }
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 3;
    if (param_3 != '\0') {
LAB_100254d1d:
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 8;
      return;
    }
  }
  else {
    if (param_3 != '\0') goto LAB_100254d1d;
    if (*(int *)(param_1 + 8) == 2) {
      *(undefined4 *)(param_1 + 8) = 3;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

