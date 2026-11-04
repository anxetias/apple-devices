// name: FUN_1003b819c
// address: 1003b819c

void FUN_1003b819c(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_1008c7598;
  while (lVar2 = lVar1, lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 8);
    if (*(int *)(lVar2 + 0x70) != 0) {
      FUN_1003b7d55(lVar2,0x69646c65,0);
    }
  }
  return;
}

