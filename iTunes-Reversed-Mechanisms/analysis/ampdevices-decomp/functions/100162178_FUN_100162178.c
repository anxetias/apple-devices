// name: FUN_100162178
// address: 100162178

undefined8 FUN_100162178(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar3 = FUN_100174812(param_2);
  if (lVar3 == 0) {
    uVar4 = 0;
    goto LAB_100162258;
  }
  uVar4 = FUN_10017478a(param_2);
  cVar1 = FUN_100170633(uVar4,&cf_http);
  uVar6 = 5;
  if (cVar1 == '\0') {
    cVar1 = FUN_100170633(uVar4,&cf_https);
    uVar6 = 6;
    if (cVar1 == '\0') {
      cVar1 = FUN_100170633(uVar4,&cf_socks4);
      if (cVar1 == '\0') {
        cVar1 = FUN_100170633(uVar4,&cf_socks5);
        uVar6 = 5;
        if (cVar1 == '\0') goto LAB_100162212;
      }
      uVar6 = 8;
    }
  }
LAB_100162212:
  FUN_10017060f(uVar4);
  iVar2 = FUN_10017489a(param_2);
  iVar5 = 0x50;
  if (iVar2 != -1) {
    iVar5 = iVar2;
  }
  uVar4 = _CFURLProtectionSpaceCreate(DAT_1008c4d90,lVar3,iVar5,uVar6,0,1);
LAB_100162258:
  FUN_10017060f(lVar3);
  return uVar4;
}

