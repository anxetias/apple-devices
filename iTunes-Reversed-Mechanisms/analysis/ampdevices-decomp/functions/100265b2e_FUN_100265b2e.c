// name: FUN_100265b2e
// address: 100265b2e

void FUN_100265b2e(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *param_2;
  cVar2 = FUN_1001c19de();
  if (cVar2 == '\0') {
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_10017060f(*(undefined8 *)(lVar1 + 0x6d8));
      *(undefined8 *)(lVar1 + 0x6d8) = 0;
      FUN_10017060f(*(undefined8 *)(lVar1 + 0x6e0));
      *(undefined8 *)(lVar1 + 0x6e0) = 0;
      uVar3 = FUN_1001726ca(DAT_1008c4d90,*(undefined8 *)(param_1 + 0x30));
      *(undefined8 *)(lVar1 + 0x6d8) = uVar3;
      lVar4 = FUN_10059cbdf(uVar3);
      if (lVar4 != 0) {
        FUN_10017060f(*(undefined8 *)(lVar1 + 0x6d8));
        *(long *)(lVar1 + 0x6d8) = lVar4;
      }
      FUN_10017060f(*(undefined8 *)(param_1 + 0x30));
    }
    if ((code *)param_2[1] != (code *)0x0) {
      (*(code *)param_2[1])(lVar1,param_2[2],param_2[3]);
    }
    FUN_100264ec8(lVar1);
  }
  else {
    FUN_10017060f();
  }
  operator_delete(param_2);
  return;
}

