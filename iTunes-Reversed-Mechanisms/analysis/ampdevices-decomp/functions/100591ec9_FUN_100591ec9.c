// name: FUN_100591ec9
// address: 100591ec9

void FUN_100591ec9(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = FUN_100496019();
  while (lVar1 = lVar3, lVar1 != 0) {
    lVar3 = FUN_1004960d0(lVar1);
    lVar4 = FUN_1004968c5(lVar1);
    while (lVar2 = lVar4, lVar2 != 0) {
      lVar4 = FUN_100496985(lVar2);
      if (*(char *)(lVar2 + 0x51) != '\0') {
        FUN_100497f5f(lVar2);
      }
    }
    if ((*(char *)(lVar1 + 0x83) != '\0') && (lVar4 = FUN_1004968c5(lVar1), lVar4 == 0)) {
      FUN_100496ab1(lVar1);
    }
  }
  FUN_100593631(param_1,0);
  return;
}

