// name: FUN_1003bb18c
// address: 1003bb18c

undefined8 FUN_1003bb18c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 local_48 [16];
  long local_38;
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  while (lVar4 != lVar2) {
    lVar4 = lVar4 + -0x10;
    FUN_1001b7a50(lVar4);
  }
  param_1[1] = lVar2;
  lVar2 = FUN_100166844(param_2,param_3);
  if ((lVar2 != 0) && (local_38 = FUN_10017076e(lVar2), 0 < local_38)) {
    lVar4 = 0;
    do {
      uVar3 = FUN_100164a01(lVar2,lVar4);
      FUN_1001b7eb0(local_48,uVar3);
      uVar1 = param_1[1];
      if (uVar1 < (ulong)param_1[2]) {
        FUN_1001b7a88(uVar1,local_48);
        lVar5 = uVar1 + 0x10;
        param_1[1] = lVar5;
      }
      else {
        lVar5 = FUN_1001de980(param_1,local_48);
      }
      param_1[1] = lVar5;
      FUN_1001b7a50(local_48);
      lVar4 = lVar4 + 1;
    } while (local_38 != lVar4);
    return 1;
  }
  return 0;
}

