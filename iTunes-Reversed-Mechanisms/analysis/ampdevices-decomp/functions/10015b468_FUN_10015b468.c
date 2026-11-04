// name: FUN_10015b468
// address: 10015b468

int FUN_10015b468(long *param_1)

{
  short sVar1;
  long lVar2;
  
  sVar1 = FUN_10015b35f();
  if ((sVar1 == 0) && (*param_1 != 0)) {
    lVar2 = FUN_1001c627e();
    *(undefined2 *)(lVar2 + 0x18) = 1;
    if (*param_1 != 0) {
      lVar2 = FUN_1001c627e();
      *(undefined2 *)(lVar2 + 8) = 0x80;
    }
  }
  return (int)sVar1;
}

