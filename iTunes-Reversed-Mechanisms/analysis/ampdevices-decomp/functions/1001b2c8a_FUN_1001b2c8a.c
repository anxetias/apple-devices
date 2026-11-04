// name: FUN_1001b2c8a
// address: 1001b2c8a

long FUN_1001b2c8a(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_10089fb10 != 0) {
    return DAT_10089fb10;
  }
  uVar2 = FUN_10019540c();
  DAT_10089fb10 = _CGBitmapContextCreate(&DAT_10089fb18,1,1,8,4,uVar2,0x2002);
  if (DAT_10089fb10 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a0afb(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  return DAT_10089fb10;
}

