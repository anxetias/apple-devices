// name: FUN_100472798
// address: 100472798

void FUN_100472798(long *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  char cVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40 = param_2;
  if (param_2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "inKey != 0";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10047294d;
  }
  plVar5 = (long *)FUN_1002790a8(param_1,&local_40);
  if (plVar5 == (long *)0x0) goto LAB_10047294d;
  lVar11 = *plVar5;
  uVar9 = plVar5[1];
  uVar1 = param_1[1];
  uVar6 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
  uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar6 >> 0x38 < 2) {
    uVar9 = uVar9 & uVar1 - 1;
  }
  else if (uVar1 <= uVar9) {
    uVar9 = uVar9 % uVar1;
  }
  plVar3 = *(long **)(*param_1 + uVar9 * 8);
  do {
    plVar8 = plVar3;
    plVar3 = (long *)*plVar8;
  } while ((long *)*plVar8 != plVar5);
  bVar2 = (byte)(uVar6 >> 0x38);
  if (plVar8 == param_1 + 2) {
LAB_1004728c7:
    if (lVar11 == 0) {
LAB_1004728f4:
      *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
      lVar11 = *plVar5;
      goto LAB_1004728ff;
    }
    uVar6 = *(ulong *)(lVar11 + 8);
    if (bVar2 < 2) {
      uVar10 = uVar1 - 1 & uVar6;
    }
    else {
      uVar10 = uVar6;
      if (uVar1 <= uVar6) {
        uVar10 = uVar6 % uVar1;
      }
    }
    if (uVar10 != uVar9) goto LAB_1004728f4;
LAB_100472908:
    if (bVar2 < 2) {
      uVar6 = uVar6 & uVar1 - 1;
    }
    else if (uVar1 <= uVar6) {
      uVar6 = uVar6 % uVar1;
    }
    if (uVar6 != uVar9) {
      *(long **)(*param_1 + uVar6 * 8) = plVar8;
      lVar11 = *plVar5;
    }
  }
  else {
    uVar6 = plVar8[1];
    if (bVar2 < 2) {
      uVar6 = uVar6 & uVar1 - 1;
    }
    else if (uVar1 <= uVar6) {
      uVar6 = uVar6 % uVar1;
    }
    if (uVar6 != uVar9) goto LAB_1004728c7;
LAB_1004728ff:
    if (lVar11 != 0) {
      uVar6 = *(ulong *)(lVar11 + 8);
      goto LAB_100472908;
    }
    lVar11 = 0;
  }
  *plVar8 = lVar11;
  *plVar5 = 0;
  param_1[3] = param_1[3] + -1;
  operator_delete(plVar5);
LAB_10047294d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

