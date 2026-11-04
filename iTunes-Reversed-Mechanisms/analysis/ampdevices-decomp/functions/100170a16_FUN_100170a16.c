// name: FUN_100170a16
// address: 100170a16

void FUN_100170a16(long param_1,long param_2,long param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100679df4(uVar3);
    }
  }
  else if (param_3 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100679d7e(uVar3);
    }
  }
  else {
    if (-1 < param_2) {
      lVar1 = _CFArrayGetCount();
      if (lVar1 < param_2) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          FUN_100679d08(uVar3);
        }
        FUN_1001782e9(0,0);
      }
      _CFArrayInsertValueAtIndex(param_1,param_2,param_3);
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100679c92(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

