// name: FUN_1002bd28d
// address: 1002bd28d

bool FUN_1002bd28d(undefined8 param_1)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  
  bVar3 = false;
  sVar2 = FUN_1004744bf(param_1,0);
  if (sVar2 < 0) {
    cVar1 = FUN_10044b261(param_1);
    bVar3 = cVar1 == '\0';
  }
  return bVar3;
}

