// name: FUN_10016939d
// address: 10016939d

void FUN_10016939d(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100676e6a(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      cVar1 = FUN_1001b8428(param_3);
      if (cVar1 == '\0') {
        uVar2 = FUN_1001b8d0c(param_3);
      }
      else {
        uVar2 = 0;
      }
      _CFHTTPMessageSetHeaderFieldValue(param_1,param_2,uVar2);
      FUN_10017060f(uVar2);
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100676df4(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

