// name: FUN_100170b05
// address: 100170b05

void FUN_100170b05(long param_1,long param_2,long param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100679fcc(uVar3);
    }
  }
  else if (param_3 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100679f56(uVar3);
    }
  }
  else if (param_2 < 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100679e6a(uVar3);
    }
  }
  else {
    lVar1 = _CFArrayGetCount();
    if (param_2 <= lVar1) {
      _CFArraySetValueAtIndex(param_1,param_2,param_3);
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100679ee0(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

