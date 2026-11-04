// name: FUN_10015f3c8
// address: 10015f3c8

int FUN_10015f3c8(uint param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 < 0xfffffffd) {
    return (param_1 + 3 >> 2) * 3;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_10066e14b(uVar2);
  }
  FUN_1001782e9(0,0);
  return -1;
}

