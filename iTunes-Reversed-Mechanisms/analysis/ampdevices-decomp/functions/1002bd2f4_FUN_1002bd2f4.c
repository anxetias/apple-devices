// name: FUN_1002bd2f4
// address: 1002bd2f4

bool FUN_1002bd2f4(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = false;
  uVar2 = FUN_1004744bf(param_1,0);
  if ((~uVar2 & 0x8040) == 0) {
    cVar1 = FUN_10044b261(param_1);
    bVar3 = cVar1 == '\0';
  }
  return bVar3;
}

