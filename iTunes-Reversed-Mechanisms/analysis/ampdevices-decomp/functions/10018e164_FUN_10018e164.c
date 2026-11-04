// name: FUN_10018e164
// address: 10018e164

undefined8 FUN_10018e164(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_10017cbd0();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100692b3a(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    uVar4 = 0;
    if (*param_1 != 0x41464350) {
      uVar4 = 0;
      iVar2 = _open((char *)((long)param_1 + 0x19),0,0);
      if (iVar2 < 0) {
        piVar3 = ___error();
        uVar4 = FUN_1001eb020(*piVar3);
        return uVar4;
      }
      _fcntl(iVar2,0x33,0);
      _close(iVar2);
    }
  }
  return uVar4;
}

