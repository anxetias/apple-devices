// name: FUN_1001c8c92
// address: 1001c8c92

undefined8 FUN_1001c8c92(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006aaf72(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

