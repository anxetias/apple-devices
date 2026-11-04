// name: FUN_1001f7b0a
// address: 1001f7b0a

undefined8 FUN_1001f7b0a(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1001f77de();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c93df(uVar2);
    }
  }
  else {
    if (*(long *)(param_1 + 0x430) != 0) {
      uVar2 = FUN_1001705fc(param_2);
      FUN_10017060f(*(undefined8 *)(param_1 + 0x438));
      *(undefined8 *)(param_1 + 0x438) = uVar2;
      return 0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c9369(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

