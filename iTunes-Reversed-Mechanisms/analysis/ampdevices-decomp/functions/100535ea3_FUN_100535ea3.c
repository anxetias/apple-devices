// name: FUN_100535ea3
// address: 100535ea3

undefined8 FUN_100535ea3(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((param_3 != 0) && (lVar2 = FUN_1001749dd(param_2), lVar2 != 0)) {
    uVar1 = FUN_100174856(param_2);
    lVar3 = FUN_100174a69(DAT_1008c4d90,param_2);
    if (lVar3 == 0) {
      uVar5 = 0;
    }
    else {
      if (param_3 + -1 == 0) {
        uVar5 = FUN_100174a21(DAT_1008c4d90,param_1,lVar2,uVar1);
      }
      else {
        lVar4 = FUN_100535ea3(param_1,lVar3,param_3 + -1);
        if (lVar4 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_100174a21(DAT_1008c4d90,lVar4,lVar2,uVar1);
          FUN_10017060f(lVar4);
        }
      }
      FUN_10017060f(lVar3);
    }
    FUN_10017060f(lVar2);
    return uVar5;
  }
  return 0;
}

