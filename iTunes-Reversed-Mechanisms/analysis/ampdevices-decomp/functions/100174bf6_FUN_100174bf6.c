// name: FUN_100174bf6
// address: 100174bf6

undefined8 FUN_100174bf6(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  FUN_1001c62d9(local_20,0x10);
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100680df6(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_20[0] = _CFUUIDGetUUIDBytes(param_1);
  }
  return local_20[0];
}

