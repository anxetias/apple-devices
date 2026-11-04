// name: FUN_100165a63
// address: 100165a63

undefined8 FUN_100165a63(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100673284(uVar4);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
  lVar2 = _CFBundleCopyBundleLocalizations();
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10067320e(uVar4);
    }
  }
  else {
    lVar3 = _CFBundleCopyLocalizationsForPreferences(lVar2,0);
    if (lVar3 != 0) {
      uVar4 = FUN_100164a01(lVar3,0);
      uVar4 = FUN_1001705fc(uVar4);
      goto LAB_100165b1a;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100673198(uVar4);
    }
  }
  lVar3 = 0;
  FUN_1001782e9(0,0);
  uVar4 = 0;
LAB_100165b1a:
  FUN_10017060f(lVar3);
  FUN_10017060f(lVar2);
  return uVar4;
}

