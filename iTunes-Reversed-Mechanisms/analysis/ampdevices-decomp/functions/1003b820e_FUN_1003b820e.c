// name: FUN_1003b820e
// address: 1003b820e

void FUN_1003b820e(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_1008c75a8;
  while (lVar2 = lVar1, lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 8);
    if ((*(byte *)(lVar2 + 0x78) & 1) != 0) {
      FUN_1003b8036(lVar2,0x6e756c6c,0);
    }
  }
  return;
}

