// name: FUN_1001ea585
// address: 1001ea585

void FUN_1001ea585(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_1008a2a60 < 1) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c2cfb(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  else {
    LOCK();
    DAT_1008a2a60 = DAT_1008a2a60 + -1;
    UNLOCK();
    if (DAT_1008a2a60 == 0) {
      FUN_1001e9d75(&DAT_1008a2a68);
      return;
    }
  }
  return;
}

