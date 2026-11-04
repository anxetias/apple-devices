// name: FUN_1005d3341
// address: 1005d3341

void FUN_1005d3341(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x48) == 9000) && (*(long *)(param_1 + 0x98) != 0)) {
    lVar1 = FUN_1001b3432();
    *(long *)(param_1 + 0x90) = lVar1;
    if (lVar1 != 0) {
      *(undefined4 *)(param_1 + 0x48) = 0xe;
    }
  }
  return;
}

