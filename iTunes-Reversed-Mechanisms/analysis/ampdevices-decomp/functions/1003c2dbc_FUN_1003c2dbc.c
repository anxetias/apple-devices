// name: FUN_1003c2dbc
// address: 1003c2dbc

long FUN_1003c2dbc(long param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = FUN_1001ee041();
  if (cVar1 == '\0') {
    lVar2 = FUN_100240b0f(param_1 + 0x488,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20);
    if (lVar2 != 0) {
      if (*(int *)(param_1 + 0x48c) != 0) {
        return lVar2;
      }
      FUN_10031bd9c(lVar2,param_1 + 0x488);
      return lVar2;
    }
  }
  return 0;
}

