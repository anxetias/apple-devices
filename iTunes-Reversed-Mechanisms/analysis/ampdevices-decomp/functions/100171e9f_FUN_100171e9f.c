// name: FUN_100171e9f
// address: 100171e9f

undefined8 FUN_100171e9f(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067beae(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      uVar2 = _CFLocaleGetValue();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067be38(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

