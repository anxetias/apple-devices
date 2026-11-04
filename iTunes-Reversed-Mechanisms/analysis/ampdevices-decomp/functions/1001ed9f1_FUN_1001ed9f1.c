// name: FUN_1001ed9f1
// address: 1001ed9f1

int FUN_1001ed9f1(undefined1 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_1008c5410 == '\0') {
    DAT_1008c5418 = _pthread_self();
    iVar2 = FUN_1001b1d36(param_1);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        DAT_1008c5410 = '\x01';
        iVar2 = 0;
        FUN_1001c0fbe(FUN_1001ed9d6,0,0,0,0);
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006c50e9(iVar2,uVar3);
        }
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c5073(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  return iVar2;
}

