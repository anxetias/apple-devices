// name: FUN_10014c100
// address: 10014c100

void FUN_10014c100(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x10;
    FUN_1001ab006(lVar1 + -8);
    FUN_1001ab006(lVar1 + -0x10);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return;
}

