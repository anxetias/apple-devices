// name: FUN_10018e72c
// address: 10018e72c

undefined4 FUN_10018e72c(long param_1,undefined2 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10069311a(uVar4);
    }
  }
  else {
    if (param_2 != (undefined2 *)0x0) {
      *param_2 = 0;
      lVar3 = FUN_10016ff43(0,param_1);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_10069302e(uVar4);
        }
        cVar1 = FUN_1001782e9(0,0);
        if (cVar1 == '\0') {
          return 0xffffff94;
        }
      }
      uVar2 = 0;
      cVar1 = _CFURLCopyResourcePropertyForKey
                        (lVar3,*(undefined8 *)PTR__kCFURLLocalizedNameKey_10082e150);
      if (cVar1 == '\0') {
        uVar2 = FUN_10016925a(0);
      }
      else {
        FUN_1001e115f(0,param_2);
        FUN_10017060f(0);
      }
      FUN_10017060f(0);
      FUN_10017060f(lVar3);
      return uVar2;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006930a4(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

