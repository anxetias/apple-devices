// name: FUN_100457c3c
// address: 100457c3c

void FUN_100457c3c(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_1001e9de0(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x30;
    FUN_100458044(lVar2);
  }
  *(long *)(param_1 + 0x10) = lVar1;
  FUN_1001e9eb9(param_1 + 0x20);
  return;
}

