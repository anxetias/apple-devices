// name: FUN_100147eb4
// address: 100147eb4

void FUN_100147eb4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    FUN_1001ab006(lVar1 + -8);
    FUN_1001ab006(lVar1 + -0x10);
    lVar1 = lVar1 + -0x10;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}

