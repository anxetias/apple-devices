// name: FUN_1001c4f51
// address: 1001c4f51

undefined8 FUN_1001c4f51(int *param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d656d62)) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006a804e(uVar5);
    }
  }
  else {
    uVar2 = param_2 - *(ulong *)(param_1 + 2);
    if (param_2 < *(ulong *)(param_1 + 2) || uVar2 == 0) {
      *(ulong *)(param_1 + 4) = param_2;
      if (param_2 == 0) {
        FUN_1001c4c8b(param_1);
        return 0;
      }
      return 0;
    }
    uVar7 = *(long *)(param_1 + 6) * 8;
    uVar6 = 0x100000;
    if (uVar7 < 0x100000) {
      uVar6 = uVar7;
    }
    uVar7 = 0x1000;
    if (*(long *)(param_1 + 6) != 0) {
      uVar7 = uVar6;
    }
    *(ulong *)(param_1 + 6) = uVar7;
    if (uVar7 < uVar2) {
      uVar7 = uVar2;
    }
    lVar3 = FUN_1001c63e1(uVar7);
    if (lVar3 != 0) {
      lVar4 = FUN_1001c4e6e(param_1,lVar3,uVar7);
      if (lVar4 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006a7f62(uVar5);
        }
        FUN_1001782e9(0,0);
        FUN_1001c64c1(lVar3);
        return 0xffffffce;
      }
      *(ulong *)(param_1 + 4) = param_2;
      return 0;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006a7fd8(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

