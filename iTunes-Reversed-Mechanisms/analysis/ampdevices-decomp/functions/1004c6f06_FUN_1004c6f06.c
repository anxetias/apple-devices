// name: FUN_1004c6f06
// address: 1004c6f06

void FUN_1004c6f06(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    lVar1 = **(long **)(param_1 + 8);
    lVar2 = **(long **)(param_1 + 0x10);
    while (lVar2 != lVar1) {
      FUN_1001b7a50(lVar2 + -0x20);
      FUN_1001b7a50(lVar2 + -0x30);
      lVar2 = lVar2 + -0x30;
    }
  }
  return;
}

