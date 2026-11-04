// name: FUN_1001968a0
// address: 1001968a0

int FUN_1001968a0(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (-1 < param_1) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100695ac2(uVar2);
    }
    FUN_1001782e9(0,0);
    return -0x32;
  }
  return 15000 - param_1;
}

