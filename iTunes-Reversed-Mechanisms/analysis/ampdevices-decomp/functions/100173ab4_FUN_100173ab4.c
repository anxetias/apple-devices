// name: FUN_100173ab4
// address: 100173ab4

undefined8 FUN_100173ab4(void)

{
  char cVar1;
  undefined8 uVar2;
  int in_ECX;
  
  if (in_ECX != -1) {
    uVar2 = _CFStringCreateWithBytes();
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_10067f1d8(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0;
}

