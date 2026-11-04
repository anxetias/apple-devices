// name: FUN_100171ce8
// address: 100171ce8

undefined8 FUN_100171ce8(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067bb74(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0x194;
  }
  else {
    uVar2 = _CFHTTPMessageGetResponseStatusCode();
  }
  return uVar2;
}

