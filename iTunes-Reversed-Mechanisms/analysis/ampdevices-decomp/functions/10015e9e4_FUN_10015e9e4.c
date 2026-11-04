// name: FUN_10015e9e4
// address: 10015e9e4

int FUN_10015e9e4(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 8) == 0x6c70636d) {
    if (*(int *)(param_1 + 0x20) == 0x20) {
      iVar1 = 0;
      if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
        iVar1 = 4 - (uint)((*(uint *)(param_1 + 0xc) & 2) == 0);
      }
    }
    else if (*(int *)(param_1 + 0x20) == 0x10) {
      iVar1 = ((*(byte *)(param_1 + 0xc) & 2) == 0) + 1;
    }
  }
  return iVar1;
}

