// name: FUN_1002b8fbc
// address: 1002b8fbc

int FUN_1002b8fbc(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_100279568();
  iVar1 = 3;
  if (*(ushort *)(lVar2 + 0x128a) < 4) {
    iVar1 = *(ushort *)(lVar2 + 0x128a) + 2;
  }
  return iVar1;
}

