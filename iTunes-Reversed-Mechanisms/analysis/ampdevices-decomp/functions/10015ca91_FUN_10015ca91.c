// name: FUN_10015ca91
// address: 10015ca91

undefined8 FUN_10015ca91(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_10066c5b1(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

