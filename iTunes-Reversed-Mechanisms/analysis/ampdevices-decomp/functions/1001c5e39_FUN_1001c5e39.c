// name: FUN_1001c5e39
// address: 1001c5e39

undefined8 FUN_1001c5e39(long *param_1,ulong param_2)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  cVar2 = FUN_1001c5dea();
  if (cVar2 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    uVar6 = 0xffffffce;
    if (cVar2 != '\0') {
      FUN_1006a8f52(uVar5);
    }
  }
  else {
    uVar4 = param_1[3];
    uVar1 = param_1[4];
    uVar8 = param_2;
    if (uVar1 != 0) {
      if (uVar4 < param_2) {
        uVar7 = param_2 - uVar4;
        if (param_2 - uVar4 <= uVar4) {
          uVar7 = uVar4;
        }
        if (uVar1 <= uVar7) {
          uVar7 = uVar1;
        }
        uVar8 = uVar7 + uVar4;
        if (uVar7 + uVar4 <= param_2) {
          uVar8 = param_2;
        }
      }
      else {
        uVar8 = uVar4;
        if (uVar1 < uVar4 - param_2) {
          uVar8 = param_2;
        }
      }
    }
    if (uVar4 != uVar8) {
      if (uVar8 == 0) {
        if (*param_1 != 0) {
          FUN_1001c64c1();
        }
        lVar3 = 0;
        uVar4 = 0;
      }
      else {
        lVar3 = FUN_1001c6479(*param_1,uVar8);
        uVar4 = uVar8;
        if ((lVar3 == 0) && (lVar3 = FUN_1001c6479(*param_1,param_2), uVar4 = param_2, lVar3 == 0))
        {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          uVar6 = 0xffffff94;
          if (cVar2 != '\0') {
            FUN_1006a8fc8(uVar5);
          }
          goto LAB_1001c5f31;
        }
      }
      *param_1 = lVar3;
      param_1[3] = uVar4;
    }
    param_1[2] = param_2;
    if (param_2 <= uVar4) {
      return 0;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    uVar6 = 0;
    if (cVar2 != '\0') {
      FUN_1006a903e(uVar5);
    }
  }
LAB_1001c5f31:
  FUN_1001782e9(0,0);
  return uVar6;
}

