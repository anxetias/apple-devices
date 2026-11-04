// name: FUN_1004fdc30
// address: 1004fdc30

int FUN_1004fdc30(void)

{
  char cVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_100315ede();
  if (lVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      cVar1 = FUN_1002bded4(lVar2);
      iVar3 = (iVar3 + 1) - (uint)(cVar1 == '\0');
      lVar2 = FUN_100316031(lVar2);
    } while (lVar2 != 0);
  }
  return iVar3;
}

