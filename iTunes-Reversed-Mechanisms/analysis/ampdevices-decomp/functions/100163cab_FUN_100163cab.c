// name: FUN_100163cab
// address: 100163cab

undefined8 FUN_100163cab(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_10017478a(param_2);
  lVar3 = FUN_100174812(param_2);
  uVar5 = 0;
  if (lVar3 != 0 && lVar2 != 0) {
    lVar4 = FUN_1001737db(param_1,0);
    if (lVar4 != 0) {
      FUN_10017415e(lVar4,lVar2);
      FUN_10017415e(lVar4,&cf____);
      FUN_10017415e(lVar4,lVar3);
      iVar1 = FUN_10017489a(param_2);
      if (iVar1 != -1) {
        FUN_100174282(lVar4,0,&cf___d,iVar1);
      }
      uVar5 = FUN_1001744bd(param_1,lVar4,0);
      FUN_10017060f(lVar4);
    }
  }
  FUN_10017060f(lVar2);
  FUN_10017060f(lVar3);
  return uVar5;
}

