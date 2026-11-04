// name: FUN_10058f44c
// address: 10058f44c

int FUN_10058f44c(void)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_1004968c5();
  iVar2 = 0;
  for (; lVar1 != 0; lVar1 = FUN_100496985(lVar1)) {
    iVar2 = iVar2 + *(int *)(lVar1 + 0x40);
  }
  return iVar2;
}

