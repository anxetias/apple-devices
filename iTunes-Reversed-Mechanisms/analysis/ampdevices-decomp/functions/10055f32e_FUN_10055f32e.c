// name: FUN_10055f32e
// address: 10055f32e

undefined4 FUN_10055f32e(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 2) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x14) < 2) {
    if ((*(byte *)(param_1 + 0xf8) & 2) == 0) {
      FUN_10055ea6a(param_1);
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      iVar1 = FUN_100474dd0(*(long *)(param_1 + 0x60),0);
      return CONCAT31((int3)(iVar1 - 0x400000U >> 8),(iVar1 - 0x400000U & 0xffbfffff) == 0);
    }
  }
  return 0;
}

