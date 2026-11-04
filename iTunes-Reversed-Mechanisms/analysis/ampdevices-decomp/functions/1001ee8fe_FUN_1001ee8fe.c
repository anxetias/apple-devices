// name: FUN_1001ee8fe
// address: 1001ee8fe

void FUN_1001ee8fe(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_1008a2b48 != 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c5766(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  return;
}

