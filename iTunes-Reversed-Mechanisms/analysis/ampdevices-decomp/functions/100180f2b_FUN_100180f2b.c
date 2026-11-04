// name: FUN_100180f2b
// address: 100180f2b

undefined8 FUN_100180f2b(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_100688900(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

