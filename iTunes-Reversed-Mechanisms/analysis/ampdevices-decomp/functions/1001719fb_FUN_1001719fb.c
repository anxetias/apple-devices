// name: FUN_1001719fb
// address: 1001719fb

void FUN_1001719fb(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067b662(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      _CFHTTPMessageSetBody();
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067b5ec(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

