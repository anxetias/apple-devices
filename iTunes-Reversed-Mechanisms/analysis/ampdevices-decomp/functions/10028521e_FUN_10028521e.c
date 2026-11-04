// name: FUN_10028521e
// address: 10028521e

void FUN_10028521e(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    FUN_100205d70(lVar1 + -0x18);
    FUN_1001ab006(lVar1 + -0x30);
    lVar1 = lVar1 + -0x30;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}

