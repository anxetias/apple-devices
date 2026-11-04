// name: FUN_10017444a
// address: 10017444a

undefined8 FUN_10017444a(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100680184(uVar2);
    }
  }
  else {
    if (param_4 != -1) {
      uVar2 = _CFURLCreateWithBytes();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068010e(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

