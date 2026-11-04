// name: FUN_1004bef97
// address: 1004bef97

void FUN_1004bef97(long param_1)

{
  double dVar1;
  
  if (*(char *)(param_1 + 0x120) == '\0') {
    dVar1 = (double)FUN_1001ebd46();
    if (*(double *)(param_1 + 0x118) + *(double *)(param_1 + 0xe8) <= dVar1) {
      FUN_1004b4b7b(param_1);
      return;
    }
  }
  return;
}

