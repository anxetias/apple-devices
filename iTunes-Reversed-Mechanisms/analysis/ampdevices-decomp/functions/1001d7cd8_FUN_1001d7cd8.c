// name: FUN_1001d7cd8
// address: 1001d7cd8

undefined8 FUN_1001d7cd8(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_1 == (int *)0x0) {
LAB_1001d7d49:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b5bde(uVar3);
    }
  }
  else {
    if (*param_1 != 0x73726169) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b5af2(uVar3);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1001d7d49;
    }
    if (*(long *)(param_1 + 8) == 0) {
      lVar4 = *(long *)(param_1 + 2);
      if (lVar4 != 0) {
        uVar2 = param_1[4];
        if (uVar2 != 0) {
          lVar4 = 0x140;
          uVar5 = 0;
          do {
            if (*(long *)(*(long *)(param_1 + 2) + lVar4) != 0) {
              FUN_1001c652e();
              uVar2 = param_1[4];
            }
            uVar5 = uVar5 + 1;
            lVar4 = lVar4 + 0x148;
          } while (uVar5 < uVar2);
          lVar4 = *(long *)(param_1 + 2);
        }
        FUN_1001c64c1(lVar4);
      }
      FUN_1001c64c1(param_1);
      return 0;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b5b68(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

