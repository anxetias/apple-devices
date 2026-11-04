// name: FUN_100385df4
// address: 100385df4

void FUN_100385df4(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    lVar1 = **(long **)(param_1 + 8);
    lVar2 = **(long **)(param_1 + 0x10);
    while (lVar2 != lVar1) {
      FUN_1001ab3c4(lVar2 + -0x10);
      FUN_1001ab006(lVar2 + -0x28);
      lVar2 = lVar2 + -0x28;
    }
  }
  return;
}

