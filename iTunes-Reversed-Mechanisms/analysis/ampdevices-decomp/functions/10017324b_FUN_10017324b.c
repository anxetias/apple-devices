// name: FUN_10017324b
// address: 10017324b

undefined8 FUN_10017324b(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067e4f0(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      uVar2 = _CFReadStreamSetProperty();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067e47a(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

