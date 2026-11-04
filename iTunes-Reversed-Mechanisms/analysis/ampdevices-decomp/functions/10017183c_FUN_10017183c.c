// name: FUN_10017183c
// address: 10017183c

undefined8 FUN_10017183c(long param_1,long param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067b328(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      uVar2 = _CFHTTPCookieStorageCopyCookiesForURL(param_1,param_2,param_3);
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067b2b2(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

