// name: FUN_1004fc562
// address: 1004fc562

int FUN_1004fc562(void)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_100315ede();
  iVar2 = 0;
  for (; lVar1 != 0; lVar1 = FUN_100316031(lVar1)) {
    iVar2 = iVar2 + (uint)(*(short *)(lVar1 + 0x10) == 0x1e);
  }
  return iVar2;
}

