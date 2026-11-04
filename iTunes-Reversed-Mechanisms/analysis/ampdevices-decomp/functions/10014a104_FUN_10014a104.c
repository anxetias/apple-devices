// name: FUN_10014a104
// address: 10014a104

void FUN_10014a104(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x10;
    FUN_1001ab240(lVar1 + -8);
    FUN_1001ab006(lVar1 + -0x10);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return;
}

