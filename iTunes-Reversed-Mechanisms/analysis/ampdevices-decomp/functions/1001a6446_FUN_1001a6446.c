// name: FUN_1001a6446
// address: 1001a6446

bool FUN_1001a6446(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  lVar2 = _SCDynamicStoreCopyProxies(0);
  if (lVar2 != 0) {
    cVar1 = FUN_100167dd2(lVar2,*(undefined8 *)PTR__kSCPropNetProxiesHTTPEnable_10082c368,0);
    if (((cVar1 == '\0') ||
        (lVar3 = FUN_100171475(lVar2,*(undefined8 *)PTR__kSCPropNetProxiesHTTPProxy_10082c378),
        lVar3 == 0)) ||
       (lVar3 = FUN_100171475(lVar2,*(undefined8 *)PTR__kSCPropNetProxiesHTTPPort_10082c370),
       lVar3 == 0)) {
      cVar1 = FUN_100167dd2(lVar2,&cf_ProxyAutoConfigEnable,0);
      if (cVar1 == '\0') {
        bVar4 = true;
      }
      else {
        lVar3 = FUN_100171475(lVar2,&cf_ProxyAutoConfigURLString);
        bVar4 = lVar3 == 0;
      }
    }
    else {
      bVar4 = false;
    }
    FUN_10017060f(lVar2);
    return bVar4;
  }
  return true;
}

