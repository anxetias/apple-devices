// name: FUN_10016450a
// address: 10016450a

undefined8 FUN_10016450a(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  cfstringStruct *local_38;
  
  uVar3 = FUN_100171475(param_1,*(undefined8 *)PTR__kCFProxyTypeKey_10082d608);
  cVar1 = FUN_100170633(uVar3,*(undefined8 *)PTR__kCFProxyTypeHTTP_10082d5f8);
  iVar6 = 0x50;
  if (cVar1 == '\0') {
    cVar1 = FUN_100170633(uVar3,*(undefined8 *)PTR__kCFProxyTypeHTTPS_10082d600);
    if (cVar1 == '\0') {
      cVar1 = FUN_100170633(uVar3,*(undefined8 *)PTR__kCFProxyTypeSOCKS_10082d618);
      if (cVar1 == '\0') {
        return 0;
      }
      local_38 = &cf_socks5;
      iVar6 = 0x438;
    }
    else {
      local_38 = &cf_https;
    }
  }
  else {
    local_38 = &cf_http;
  }
  uVar3 = FUN_100166c1b(param_1,*(undefined8 *)PTR__kCFProxyHostNameKey_10082d5d8);
  iVar2 = FUN_100167d23(param_1,*(undefined8 *)PTR__kCFProxyPortNumberKey_10082d5e8);
  uVar4 = FUN_100166c1b(param_1,*(undefined8 *)PTR__kCFProxyUsernameKey_10082d620);
  uVar5 = FUN_100166c1b(param_1,*(undefined8 *)PTR__kCFProxyPasswordKey_10082d5e0);
  if (iVar2 != 0) {
    iVar6 = iVar2;
  }
  uVar3 = FUN_10016ad19(DAT_1008c4d90,local_38,uVar3,iVar6,uVar4,uVar5);
  return uVar3;
}

