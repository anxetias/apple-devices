// name: FUN_100474394
// address: 100474394

bool FUN_100474394(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int local_1c;
  
  iVar2 = FUN_100474227();
  if (iVar2 - 3U < 2) {
    local_1c = 0;
    iVar2 = FUN_100474029(param_1,0,0,&local_1c);
    bVar1 = iVar2 == local_1c && local_1c != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

