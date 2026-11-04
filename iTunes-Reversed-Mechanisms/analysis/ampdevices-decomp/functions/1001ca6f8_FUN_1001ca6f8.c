// name: FUN_1001ca6f8
// address: 1001ca6f8

undefined8 FUN_1001ca6f8(long param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  
  if (param_2 == (int *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006ad0ce(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_1 != 0) {
      plVar4 = *(long **)(param_1 + 0x10);
      iVar5 = 0;
      if (plVar4 != (long *)0x0) {
        iVar5 = 0;
        do {
          if (((uint *)plVar4[4])[1] == 0x61746164) {
            uVar1 = *(uint *)plVar4[4];
            iVar5 = iVar5 + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                            uVar1 << 0x18);
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      *param_2 = iVar5;
      return 0;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006ad058(uVar3);
    }
    FUN_1001782e9(0,0);
    *param_2 = 0;
  }
  return 0xffffffce;
}

