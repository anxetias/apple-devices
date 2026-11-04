// name: FUN_100166547
// address: 100166547

undefined8
FUN_100166547(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long local_118 [4];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  ulong local_58;
  long *local_50;
  long *local_48;
  long local_38;
  
  local_118[3] = param_12;
  local_f8 = param_13;
  local_f0 = param_14;
  if (in_AL != '\0') {
    local_e8 = param_1;
    local_d8 = param_2;
    local_c8 = param_3;
    local_b8 = param_4;
    local_a8 = param_5;
    local_98 = param_6;
    local_88 = param_7;
    local_78 = param_8;
  }
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_48 = local_118;
  plVar5 = (long *)&stack0x00000008;
  local_50 = plVar5;
  local_58 = 0x3000000018;
  uVar2 = 0x18;
  uVar9 = 0xffffffffffffffff;
  lVar10 = -4;
  do {
    if (uVar2 < 0x29) {
      uVar7 = (ulong)uVar2;
      uVar2 = uVar2 + 8;
      local_58 = CONCAT44(local_58._4_4_,uVar2);
      plVar6 = (long *)((long)local_118 + uVar7);
    }
    else {
      local_50 = plVar5 + 1;
      plVar6 = plVar5;
      plVar5 = plVar5 + 1;
    }
    uVar9 = uVar9 + 1;
    lVar10 = lVar10 + 4;
  } while (*plVar6 != 0);
  if ((uVar9 & 1) != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006739d6(uVar4);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
    goto LAB_10016677f;
  }
  local_68 = param_10;
  local_60 = param_9;
  lVar3 = FUN_1001c63e1(lVar10);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100673ac2(uVar4);
    }
LAB_100166761:
    uVar4 = 0;
    FUN_1001782e9(0,0);
    lVar10 = 0;
  }
  else {
    lVar10 = FUN_1001c63e1(lVar10);
    if (lVar10 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_100673a4c(uVar4);
      }
      goto LAB_100166761;
    }
    uVar7 = uVar9 >> 1;
    local_50 = (long *)&stack0x00000008;
    local_58 = 0x3000000018;
    if (uVar9 != 0) {
      lVar8 = 0;
      do {
        uVar9 = local_58 & 0xffffffff;
        if (uVar9 < 0x29) {
          local_58 = CONCAT44(local_58._4_4_,(int)local_58 + 8);
          plVar5 = (long *)((long)local_118 + uVar9);
        }
        else {
          plVar5 = local_50;
          local_50 = local_50 + 1;
        }
        *(long *)(lVar3 + lVar8 * 8) = *plVar5;
        uVar9 = local_58 & 0xffffffff;
        if (uVar9 < 0x29) {
          local_58 = CONCAT44(local_58._4_4_,(int)local_58 + 8);
          plVar5 = (long *)((long)local_118 + uVar9);
        }
        else {
          plVar5 = local_50;
          local_50 = local_50 + 1;
        }
        *(long *)(lVar10 + lVar8 * 8) = *plVar5;
        lVar8 = lVar8 + 1;
      } while (uVar7 + (uVar7 == 0) != lVar8);
    }
    local_48 = local_118;
    uVar4 = FUN_1001713ff(local_60,lVar3,lVar10,uVar7,local_68,param_11);
  }
  FUN_1001c64c1(lVar3);
  FUN_1001c64c1(lVar10);
LAB_10016677f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

