// name: FUN_1001620b6
// address: 1001620b6

undefined8 FUN_1001620b6(undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (param_2 != 0) {
    uVar3 = FUN_100174812(param_2);
    iVar2 = FUN_10017489a(param_2);
    iVar5 = 0;
    if (iVar2 != -1) {
      iVar5 = iVar2;
    }
    uVar4 = FUN_10017478a(param_2);
    cVar1 = FUN_100170633(uVar4,&cf_http);
    iVar2 = 1;
    if (cVar1 == '\0') {
      cVar1 = FUN_100170633(uVar4,&cf_https);
      iVar2 = 2 - (uint)(cVar1 == '\0');
    }
    FUN_10017060f(uVar4);
    uVar4 = _CFURLProtectionSpaceCreate(DAT_1008c4d90,uVar3,iVar5,iVar2,param_3,1);
    FUN_10017060f(uVar3);
    return uVar4;
  }
  return 0;
}

