// name: FUN_1001916f7
// address: 1001916f7

undefined8 FUN_1001916f7(void)

{
  char cVar1;
  undefined8 uVar2;
  long in_R8;
  
  if (in_R8 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006942c4(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    uVar2 = FUN_10019184c();
  }
  return uVar2;
}

