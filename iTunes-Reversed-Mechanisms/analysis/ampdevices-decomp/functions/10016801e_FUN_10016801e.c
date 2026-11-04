// name: FUN_10016801e
// address: 10016801e

undefined8 FUN_10016801e(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_100675508(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001c62d9(param_3,4);
    lVar2 = FUN_100171475(param_1,param_2);
    if (lVar2 != 0) {
      lVar3 = _CFGetTypeID(lVar2);
      lVar4 = _CFStringGetTypeID();
      if (lVar3 == lVar4) {
        uVar5 = FUN_1001680c4();
        return uVar5;
      }
      uVar5 = FUN_100164d80(lVar2,param_3);
      return uVar5;
    }
  }
  return 0;
}

