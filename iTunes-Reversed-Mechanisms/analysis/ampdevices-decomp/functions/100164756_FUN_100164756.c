// name: FUN_100164756
// address: 100164756

undefined8 FUN_100164756(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100671e3c(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      uVar2 = _CFArrayGetCount();
      uVar2 = _CFArrayContainsValue(param_1,0,uVar2,param_2);
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100671dc6(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

