// name: FUN_1002e7822
// address: 1002e7822

void FUN_1002e7822(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x38) {
    FUN_1001ab006(lVar1 + -0x10);
    FUN_1001ab006(lVar1 + -0x18);
    FUN_1001ab006(lVar1 + -0x20);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}

