// name: FUN_10052a034
// address: 10052a034

int FUN_10052a034(uint param_1)

{
  int iVar1;
  
  iVar1 = 8;
  if ((param_1 & 4) == 0) {
    iVar1 = 0x800;
    if (((((((~param_1 & 0x8002) != 0) && (iVar1 = 0x400, (~param_1 & 0x8040) != 0)) &&
          (iVar1 = 4, (param_1 & 8) == 0)) &&
         ((iVar1 = 0x800000, (param_1 >> 0x16 & 1) == 0 && (iVar1 = 0x20, (param_1 & 0x20) == 0))))
        && ((iVar1 = 0x40, (param_1 & 0x40) == 0 &&
            ((iVar1 = 0x80, (param_1 & 2) == 0 && (iVar1 = 0x10, (param_1 & 0xc00) == 0)))))) &&
       ((iVar1 = 1, (param_1 & 0x800090) == 0 &&
        ((iVar1 = 0x400000, (param_1 >> 0x10 & 1) == 0 &&
         (iVar1 = 0x80000, (param_1 >> 0x14 & 1) == 0)))))) {
      iVar1 = (param_1 & 1) + 1;
    }
  }
  return iVar1;
}

