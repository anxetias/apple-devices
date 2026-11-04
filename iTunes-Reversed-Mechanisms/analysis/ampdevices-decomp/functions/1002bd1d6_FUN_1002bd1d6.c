// name: FUN_1002bd1d6
// address: 1002bd1d6

bool FUN_1002bd1d6(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = false;
  uVar2 = FUN_1004744bf(param_1,0);
  if ((uVar2 & 0x418000) == 0x400000) {
    cVar1 = FUN_1002bd09d(param_1);
    bVar3 = cVar1 == '\0';
  }
  return bVar3;
}

