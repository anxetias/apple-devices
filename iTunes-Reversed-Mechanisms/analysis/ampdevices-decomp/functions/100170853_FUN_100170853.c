// name: FUN_100170853
// address: 100170853

undefined8 FUN_100170853(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100679a44(uVar3);
    }
  }
  else if (param_2 < 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100679958(uVar3);
    }
  }
  else {
    lVar2 = _CFArrayGetCount();
    if (param_2 < lVar2) {
      uVar3 = _CFArrayGetValueAtIndex(param_1,param_2);
      return uVar3;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006799ce(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

