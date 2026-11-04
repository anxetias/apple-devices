// name: FUN_1001709a5
// address: 1001709a5

void FUN_1001709a5(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100679c1c(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      _CFArrayAppendValue();
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100679ba6(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

