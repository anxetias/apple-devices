// name: FUN_10035ad73
// address: 10035ad73

bool FUN_10035ad73(long param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_1001e3580(param_1 + 8,"http://",0);
  bVar2 = true;
  if (cVar1 == '\0') {
    cVar1 = FUN_1001e3580(param_1 + 8,"https://",0);
    bVar2 = cVar1 != '\0';
  }
  return bVar2;
}

