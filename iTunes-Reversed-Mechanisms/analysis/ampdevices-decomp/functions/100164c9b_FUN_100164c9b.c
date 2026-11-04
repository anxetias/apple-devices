// name: FUN_100164c9b
// address: 100164c9b

undefined1 FUN_100164c9b(long param_1,long param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100672682(uVar4);
    }
  }
  else {
    *param_3 = 0;
    if (param_1 != 0) {
      if ((param_2 < 0) || (lVar3 = _CFArrayGetCount(param_1), lVar3 <= param_2)) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_100672596(uVar4);
        }
        FUN_1001782e9(0,0);
      }
      lVar3 = _CFArrayGetValueAtIndex(param_1,param_2);
      if (lVar3 != 0) {
        uVar2 = FUN_100164d80(lVar3,param_3);
        return uVar2;
      }
      return 0;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10067260c(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

