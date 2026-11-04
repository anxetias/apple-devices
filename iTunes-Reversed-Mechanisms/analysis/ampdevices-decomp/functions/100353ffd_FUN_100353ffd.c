// name: FUN_100353ffd
// address: 100353ffd

bool FUN_100353ffd(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0x354) == '\0') {
    bVar3 = false;
  }
  else {
    cVar1 = FUN_100353805();
    if (cVar1 == '\0') {
      uVar2 = FUN_1004744bf(param_2,0);
      bVar3 = (uVar2 & 0xc62) == 0;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}

