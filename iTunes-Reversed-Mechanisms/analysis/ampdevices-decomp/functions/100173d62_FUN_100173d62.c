// name: FUN_100173d62
// address: 100173d62

undefined8 FUN_100173d62(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067f5fe(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      uVar2 = _CFStringFind();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067f588(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  FUN_1001c62d9(local_20,0x10);
  return local_20[0];
}

