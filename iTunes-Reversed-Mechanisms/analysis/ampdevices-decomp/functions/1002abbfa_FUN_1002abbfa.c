// name: FUN_1002abbfa
// address: 1002abbfa

long FUN_1002abbfa(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = FUN_1002f9fc5(*(undefined8 *)(param_1 + 0x30));
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar2 = FUN_1002abc4e(param_1,lVar1,0);
      lVar3 = lVar3 + lVar2;
      lVar1 = FUN_1002fa118(lVar1);
    } while (lVar1 != 0);
  }
  return lVar3;
}

