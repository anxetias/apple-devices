// name: FUN_1003b81d4
// address: 1003b81d4

void FUN_1003b81d4(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_1008c75a0;
  while (lVar2 = lVar1, lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 8);
    if ((*(byte *)(lVar2 + 0x17c) & 1) != 0) {
      FUN_1003b7eba(lVar2,0x6e756c6c,0);
    }
  }
  return;
}

