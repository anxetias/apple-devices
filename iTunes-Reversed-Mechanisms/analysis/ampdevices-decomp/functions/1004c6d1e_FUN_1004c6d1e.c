// name: FUN_1004c6d1e
// address: 1004c6d1e

long FUN_1004c6d1e(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined1 local_70;
  long *local_68;
  void *local_60;
  void *local_58;
  void *local_50;
  void *local_48;
  long *local_40;
  long local_38;
  
  lVar7 = param_1[1] - *param_1 >> 4;
  uVar5 = lVar7 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar5) {
    FUN_1004c6ef6();
LAB_1004c6ecf:
                    /* WARNING: Subroutine does not return */
    FUN_1001082d0();
  }
  plVar1 = param_1 + 2;
  lVar4 = *plVar1 - *param_1 >> 4;
  uVar2 = lVar4 * 0x5555555555555556;
  if (uVar5 < uVar2) {
    uVar5 = uVar2;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar5 = 0x555555555555555;
  }
  local_40 = plVar1;
  if (uVar5 == 0) {
    local_60 = (void *)0x0;
  }
  else {
    if (0x555555555555555 < uVar5) goto LAB_1004c6ecf;
    local_60 = operator_new(uVar5 * 0x30);
  }
  local_58 = (void *)(lVar7 * 0x10 + (long)local_60);
  local_48 = (void *)(uVar5 * 0x30 + (long)local_60);
  local_68 = plVar1;
  local_50 = local_58;
  FUN_1004c5b62(local_58,param_2);
  local_50 = (void *)((long)local_50 + 0x30);
  lVar7 = *param_1;
  lVar4 = param_1[1];
  lVar6 = (lVar7 - lVar4) + (long)local_58;
  local_78 = &local_38;
  local_80 = &local_90;
  local_88 = local_68;
  local_70 = 0;
  local_38 = lVar6;
  lVar8 = lVar7;
  local_90 = lVar6;
  if (lVar7 == lVar4) {
    local_70 = 1;
  }
  else {
    do {
      FUN_1004c5b62(local_38,lVar8);
      lVar8 = lVar8 + 0x30;
      local_38 = local_38 + 0x30;
    } while (lVar8 != lVar4);
    local_70 = 1;
    do {
      FUN_1001b7a50(lVar7 + 0x10);
      FUN_1001b7a50(lVar7);
      lVar7 = lVar7 + 0x30;
    } while (lVar7 != lVar4);
  }
  pvVar3 = local_50;
  FUN_1004c6f06(&local_88);
  local_60 = (void *)*param_1;
  *param_1 = lVar6;
  param_1[1] = (long)pvVar3;
  lVar7 = param_1[2];
  param_1[2] = (long)local_48;
  local_58 = local_60;
  local_50 = local_60;
  local_48 = (void *)lVar7;
  FUN_1004c6f48();
  return (long)pvVar3;
}

