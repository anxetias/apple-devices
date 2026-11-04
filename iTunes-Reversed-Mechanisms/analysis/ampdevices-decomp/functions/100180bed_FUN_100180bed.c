// name: FUN_100180bed
// address: 100180bed

undefined8 FUN_100180bed(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_10068856e(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

