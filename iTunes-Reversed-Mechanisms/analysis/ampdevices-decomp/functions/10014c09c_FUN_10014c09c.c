// name: FUN_10014c09c
// address: 10014c09c

void FUN_10014c09c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 8);
  lVar2 = **(long **)(param_1 + 0x10);
  while (lVar2 != lVar1) {
    FUN_1001ab006(lVar2 + -8);
    FUN_1001ab006(lVar2 + -0x10);
    lVar2 = lVar2 + -0x10;
  }
  return;
}

