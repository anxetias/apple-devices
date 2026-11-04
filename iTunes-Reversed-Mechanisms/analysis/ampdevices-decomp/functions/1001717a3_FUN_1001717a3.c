// name: FUN_1001717a3
// address: 1001717a3

void FUN_1001717a3(long param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067b23c(uVar2);
    }
  }
  else if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067b1c6(uVar2);
    }
  }
  else {
    if (param_3 != 0) {
      _CFHTTPCookieStorageSetCookies();
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067b150(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

