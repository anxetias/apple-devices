// name: FUN_1002bba5e
// address: 1002bba5e

void FUN_1002bba5e(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    lVar1 = **(long **)(param_1 + 8);
    for (lVar2 = **(long **)(param_1 + 0x10); lVar2 != lVar1; lVar2 = lVar2 + -0x48) {
      FUN_1001b7a50(lVar2 + -0x28);
      FUN_1001b7a50(lVar2 + -0x38);
    }
  }
  return;
}

