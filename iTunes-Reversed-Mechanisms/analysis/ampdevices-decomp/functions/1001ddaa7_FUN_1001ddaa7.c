// name: FUN_1001ddaa7
// address: 1001ddaa7

undefined8 FUN_1001ddaa7(long param_1,uint param_2,undefined2 *param_3,char param_4)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      FUN_1006b8e37(uVar5);
    }
  }
  else if (param_3 == (undefined2 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      FUN_1006b8dc1(uVar5);
    }
  }
  else {
    if (param_2 != 0) {
      *param_3 = 0;
      plVar1 = *(long **)(param_1 + 0x10);
      if (plVar1 == (long *)0x0) {
        return 0xffffffce;
      }
      if (param_4 == '\0') {
        if ((int)*(uint *)(param_1 + 0x2c) < 1) {
          return 0xffffffce;
        }
        piVar7 = (int *)*plVar1;
        iVar6 = 0;
        while ((cVar4 = FUN_1001dd16c(piVar7), cVar4 == '\0' ||
               (param_2 = param_2 - 1, param_2 != 0))) {
          piVar7 = piVar7 + 2;
          iVar6 = iVar6 + 1;
          if (*(int *)(param_1 + 0x2c) <= iVar6) {
            return 0xffffffce;
          }
        }
      }
      else {
        if (*(uint *)(param_1 + 0x2c) < param_2) {
          return 0xffffffce;
        }
        piVar7 = (int *)((ulong)(param_2 - 1) * 8 + *plVar1);
      }
      cVar4 = FUN_1001dd16c(piVar7);
      if (cVar4 == '\0') {
        *param_3 = 0;
      }
      else {
        uVar3 = piVar7[1] >> 1;
        if (0xfe < (uint)(piVar7[1] >> 1)) {
          uVar3 = 0xff;
        }
        iVar6 = *piVar7;
        lVar2 = **(long **)(param_1 + 0x20);
        *param_3 = (short)uVar3;
        FUN_1001c631b(iVar6 + lVar2,param_3 + 1,uVar3 * 2);
      }
      return 0;
    }
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      FUN_1006b8d4b(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

