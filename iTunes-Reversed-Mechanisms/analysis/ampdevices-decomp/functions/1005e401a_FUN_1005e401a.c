// name: FUN_1005e401a
// address: 1005e401a

long FUN_1005e401a(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x5c) & 4) == 0) {
    FUN_100350de0(param_1);
  }
  lVar1 = *(long *)(param_1 + 200);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else if ((*(byte *)(lVar1 + 0xc5) & 0x10) != 0) {
    lVar1 = FUN_1005e3e6c();
    return lVar1;
  }
  return lVar1;
}

