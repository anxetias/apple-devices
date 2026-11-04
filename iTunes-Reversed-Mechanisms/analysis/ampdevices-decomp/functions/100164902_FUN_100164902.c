// name: FUN_100164902
// address: 100164902

void FUN_100164902(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100672100(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      uVar2 = _CFArrayGetCount();
      _CFArraySortValues(param_1,0,uVar2,param_2,param_3);
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067208a(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

