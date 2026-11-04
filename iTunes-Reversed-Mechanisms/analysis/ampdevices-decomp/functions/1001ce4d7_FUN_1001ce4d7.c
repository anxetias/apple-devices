// name: FUN_1001ce4d7
// address: 1001ce4d7

undefined8 FUN_1001ce4d7(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006af93a(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_10017060f(*(undefined8 *)(param_1 + 8));
    FUN_1001c62d9(param_1,0x20);
    uVar2 = 0;
  }
  return uVar2;
}

