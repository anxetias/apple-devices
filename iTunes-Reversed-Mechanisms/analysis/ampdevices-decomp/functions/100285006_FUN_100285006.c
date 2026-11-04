// name: FUN_100285006
// address: 100285006

void FUN_100285006(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    FUN_1001ab3c4(lVar1 + -0x10);
    FUN_1001ab006(lVar1 + -0x28);
    lVar1 = lVar1 + -0x28;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}

