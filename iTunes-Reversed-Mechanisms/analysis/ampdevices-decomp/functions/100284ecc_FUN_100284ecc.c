// name: FUN_100284ecc
// address: 100284ecc

void FUN_100284ecc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x30;
    FUN_100205d70(lVar1 + -0x18);
    FUN_1001ab006(lVar1 + -0x30);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return;
}

