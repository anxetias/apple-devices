// name: FUN_100284e68
// address: 100284e68

void FUN_100284e68(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 8);
  lVar2 = **(long **)(param_1 + 0x10);
  while (lVar2 != lVar1) {
    FUN_100205d70(lVar2 + -0x18);
    FUN_1001ab006(lVar2 + -0x30);
    lVar2 = lVar2 + -0x30;
  }
  return;
}

