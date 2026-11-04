// name: FUN_1001d3f9e
// address: 1001d3f9e

undefined8 FUN_1001d3f9e(void)

{
  char cVar1;
  undefined8 uVar2;
  long in_R9;
  
  if (in_R9 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b3601(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    uVar2 = FUN_1001d368c();
  }
  return uVar2;
}

