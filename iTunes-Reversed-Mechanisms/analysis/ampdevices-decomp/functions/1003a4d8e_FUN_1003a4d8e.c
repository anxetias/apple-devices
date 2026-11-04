// name: FUN_1003a4d8e
// address: 1003a4d8e

void FUN_1003a4d8e(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0xd0) != param_2) {
    *(long *)(param_1 + 0xd0) = param_2;
    *(byte *)(param_1 + 0xfa) = *(byte *)(param_1 + 0xfa) & 0xfb;
    FUN_1003a2686(param_1,1);
    *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xf9) & 0xbf;
  }
  return;
}

