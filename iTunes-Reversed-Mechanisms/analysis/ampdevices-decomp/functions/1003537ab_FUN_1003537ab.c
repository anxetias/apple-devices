// name: FUN_1003537ab
// address: 1003537ab

ulong FUN_1003537ab(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  byte bVar3;
  
  bVar3 = 0;
  uVar2 = FUN_1004744bf(param_2,0);
  if ((uVar2 & 0x1c65000) == 0) {
    cVar1 = FUN_100353805(param_1,param_2);
    bVar3 = 1;
    if (cVar1 == '\0') {
      uVar2 = FUN_100353841(param_1,param_2);
      return uVar2;
    }
  }
  return (ulong)bVar3;
}

