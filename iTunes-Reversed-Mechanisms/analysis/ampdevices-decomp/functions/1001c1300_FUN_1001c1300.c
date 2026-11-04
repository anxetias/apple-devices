// name: FUN_1001c1300
// address: 1001c1300

void FUN_1001c1300(int param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (99 < param_1 - 1U) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_1006a5129(uVar6);
    }
    FUN_1001782e9(0,0);
    return;
  }
  iVar3 = FUN_1001e9de0(&DAT_1008a2120);
  if (iVar3 == -0x80) {
    return;
  }
  if (iVar3 != 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 == '\0') {
      return;
    }
    FUN_1006a519f(iVar3,uVar6);
    return;
  }
  uVar4 = (ulong)(param_1 - 1U);
  (&DAT_10089fb90)[uVar4 * 0xc] = 0;
  plVar1 = (long *)(&DAT_10089fbc0)[uVar4 * 0xc];
  (&DAT_10089fbc0)[uVar4 * 0xc] = 0;
  if (plVar1 == (long *)(uVar4 * 0x60 + 0x10089fba0)) {
    lVar5 = 0x20;
  }
  else {
    lVar5 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_1001c13af;
  }
  (**(code **)(*plVar1 + lVar5))();
LAB_1001c13af:
  FUN_1001e9eb9(&DAT_1008a2120);
  return;
}

