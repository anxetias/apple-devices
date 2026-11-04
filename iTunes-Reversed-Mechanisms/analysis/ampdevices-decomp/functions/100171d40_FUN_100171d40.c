// name: FUN_100171d40
// address: 100171d40

undefined8 FUN_100171d40(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_10067bbea(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0;
}

