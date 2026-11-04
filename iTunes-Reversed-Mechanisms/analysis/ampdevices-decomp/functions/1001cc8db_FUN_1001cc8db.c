// name: FUN_1001cc8db
// address: 1001cc8db

undefined8 FUN_1001cc8db(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_1008c5390 != 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006aef27(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  if (DAT_1008c5394 != 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006aef9d(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1001cd0ed();
  cVar1 = FUN_1001c662e(&DAT_1008c53d0);
  if (cVar1 != '\0') {
    FUN_1001c672e(&DAT_1008c53d0);
  }
  FUN_1001b811c(&DAT_1008c53f8);
  uVar2 = 0xffffffe8;
  if (DAT_1008c5394 == 0 && DAT_1008c5390 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}

