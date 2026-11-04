// name: FUN_10031e4ab
// address: 10031e4ab

undefined1
FUN_10031e4ab(ulong param_1,ulong param_2,char param_3,char param_4,uint *param_5,
             undefined1 *param_6)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  if (param_1 < 2) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "userID != kUnknownDRMUserID && userID != kNoSpecificDRMUserID";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 1;
    goto LAB_10031e630;
  }
  if (param_5 == (uint *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "userIDList != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar6 = 0;
    FUN_1001782e9(0,0);
    goto LAB_10031e630;
  }
  uVar1 = *param_5;
  uVar4 = (ulong)uVar1;
  if (uVar4 == 0) {
    if (param_3 != '\0') {
      if (param_2 == 0) {
        param_2 = param_1;
      }
LAB_10031e59c:
      uVar2 = param_5[1];
      if (4 < (ulong)uVar2) goto LAB_10031e62e;
      *(ulong *)(param_5 + (ulong)uVar2 * 2 + 0xca) = param_2;
      param_5[1] = uVar2 + 1;
    }
  }
  else {
    lVar7 = 0;
    do {
      if (*(ulong *)((long)param_5 + lVar7 + 8) == param_1) {
        if (param_4 != '\0') {
          *(undefined1 *)((long)param_5 + lVar7 + 0x10) = 1;
        }
        uVar6 = 1;
        if (param_3 == '\0') goto LAB_10031e630;
        if (param_2 != 0) {
          param_1 = param_2;
        }
        uVar8 = 0;
        goto LAB_10031e602;
      }
      lVar7 = lVar7 + 0x10;
    } while (uVar4 << 4 != lVar7);
    if (0x31 < uVar1) {
LAB_10031e62e:
      uVar6 = 0;
      goto LAB_10031e630;
    }
    if (param_3 != '\0') {
      if (param_2 == 0) {
        param_2 = param_1;
      }
      uVar8 = 0;
      do {
        if (*(ulong *)(param_5 + uVar8 * 2 + 0xca) == param_2) goto LAB_10031e5ba;
        uVar8 = uVar8 + 1;
      } while (uVar4 != uVar8);
      goto LAB_10031e59c;
    }
  }
LAB_10031e5ba:
  *(ulong *)(param_5 + uVar4 * 4 + 2) = param_1;
  *(char *)(param_5 + uVar4 * 4 + 4) = param_4;
  *param_5 = uVar1 + 1;
  uVar6 = 1;
  if (param_3 != '\0' && param_6 != (undefined1 *)0x0) {
    *param_6 = 1;
  }
LAB_10031e630:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
  while (uVar8 = uVar8 + 1, uVar4 != uVar8) {
LAB_10031e602:
    if (*(ulong *)(param_5 + uVar8 * 2 + 0xca) == param_1) goto LAB_10031e630;
  }
  uVar1 = param_5[1];
  if ((ulong)uVar1 < 5) {
    *(ulong *)(param_5 + (ulong)uVar1 * 2 + 0xca) = param_1;
    param_5[1] = uVar1 + 1;
  }
  goto LAB_10031e630;
}

