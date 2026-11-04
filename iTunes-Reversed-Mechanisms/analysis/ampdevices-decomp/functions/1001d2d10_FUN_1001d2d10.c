// name: FUN_1001d2d10
// address: 1001d2d10

int FUN_1001d2d10(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((1 < param_1 - 100) && (param_1 != 0)) {
    if (param_1 == 4) {
      iVar1 = -0x80;
    }
    else {
      iVar1 = (param_1 & 0xff) + 13000;
    }
  }
  return iVar1;
}

