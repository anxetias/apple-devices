// name: FUN_1002859d0
// address: 1002859d0

long FUN_1002859d0(long param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  param_1 = param_1 + 8;
  lVar4 = param_1;
  if (lVar3 != 0) {
    do {
      bVar1 = FUN_1001ab0ae(lVar3 + 0x20,param_2);
      if (-1 < (char)bVar1) {
        lVar4 = lVar3;
      }
      lVar3 = *(long *)(lVar3 + (ulong)(bVar1 >> 4 & 8));
    } while (lVar3 != 0);
    if ((lVar4 != param_1) && (cVar2 = FUN_1001ab0ae(param_2,lVar4 + 0x20), -1 < cVar2)) {
      return lVar4;
    }
  }
  return param_1;
}

