// name: FUN_10015b35f
// address: 10015b35f

int FUN_10015b35f(long *param_1)

{
  short sVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    sVar1 = -0x32;
  }
  else {
    lVar2 = FUN_1001c5c8c(0x20);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      sVar1 = -0x6c;
    }
    else {
      lVar2 = FUN_1001c627e(lVar2);
      *(undefined4 *)(lVar2 + 0xc) = 0x14000000;
      lVar2 = FUN_1001c627e(*param_1);
      *(undefined4 *)(lVar2 + 0x10) = 0x6e616573;
      lVar2 = FUN_1001c627e(*param_1);
      *(undefined4 *)(lVar2 + 0x14) = 0x1000000;
      sVar1 = 0;
    }
  }
  return (int)sVar1;
}

