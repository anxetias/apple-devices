// name: FUN_1001c5c8c
// address: 1001c5c8c

long * FUN_1001c5c8c(long param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)FUN_1001c63e1(0x28);
  if (plVar2 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a8d7a(uVar4);
    }
    plVar2 = (long *)0x0;
    FUN_1001782e9(0,0);
  }
  else {
    if (param_1 == 0) {
      *plVar2 = 0;
    }
    else {
      lVar3 = FUN_1001c6429(param_1);
      *plVar2 = lVar3;
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006a8d04(uVar4);
        }
        FUN_1001782e9(0,0);
        FUN_1001c64c1(plVar2);
        return (long *)0x0;
      }
    }
    *(undefined4 *)(plVar2 + 1) = 0x4d656d48;
    plVar2[2] = param_1;
    plVar2[3] = param_1;
    plVar2[4] = 0;
  }
  return plVar2;
}

