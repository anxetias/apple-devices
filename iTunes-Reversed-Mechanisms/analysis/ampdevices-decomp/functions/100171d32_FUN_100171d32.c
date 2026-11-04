// name: FUN_100171d32
// address: 100171d32

undefined8 FUN_100171d32(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar2 = _CFHTTPMessageAddAuthentication();
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_10067bbea(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0;
}

