// name: FUN_10041708e
// address: 10041708e

void FUN_10041708e(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  uint uVar4;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = 0x10d60000;
  uVar3 = 0x10d60000;
  if (param_1 < 0x69506f64) {
    if (param_1 != 0x69506164) {
      if (param_1 != 0x6950686e) goto switchD_10041710b_caseD_0;
      uVar4 = 0x10e10000;
      uVar3 = 0x10e10000;
      if ((param_2 & param_2 - 1) != 0) goto switchD_10041710b_caseD_0;
      if (0x7f < (int)param_2) {
        uVar3 = uVar4;
        if (0x7ffff < (int)param_2) goto LAB_100417267;
        if (param_2 != 0x80) {
          if (param_2 == 0x400) {
LAB_1004172c5:
            uVar3 = 0x10e70000;
            goto switchD_10041710b_caseD_0;
          }
          if (param_2 != 0x800) goto switchD_10041710b_caseD_2;
        }
        uVar3 = 0x10e80000;
        goto switchD_10041710b_caseD_0;
      }
      if ((int)param_2 < 0x10) {
        switch(param_2 - 1) {
        case 0:
          break;
        case 1:
          uVar3 = 0x10e20000;
          break;
        default:
          goto switchD_10041710b_caseD_2;
        case 3:
          uVar3 = 0x10e30000;
          break;
        case 7:
          uVar3 = 0x10e40000;
        }
        goto switchD_10041710b_caseD_0;
      }
      if (param_2 == 0x10) {
        uVar3 = 0x10e50000;
        goto switchD_10041710b_caseD_0;
      }
      if (param_2 == 0x20) {
        uVar3 = 0x10e60000;
        goto switchD_10041710b_caseD_0;
      }
      if (param_2 == 0x40) goto LAB_1004172c5;
      goto switchD_10041710b_caseD_2;
    }
    uVar4 = 0x111d0000;
    uVar3 = 0x111d0000;
    if ((param_2 & param_2 - 1) != 0) goto switchD_10041710b_caseD_0;
    if (0x7f < (int)param_2) {
      uVar3 = uVar4;
      if (0x7ffff < (int)param_2) goto LAB_100417267;
      if (param_2 != 0x80) {
        if (param_2 == 0x400) {
LAB_1004172dc:
          uVar3 = 0x11240000;
          goto switchD_10041710b_caseD_0;
        }
        if (param_2 != 0x800) goto switchD_10041710b_caseD_2;
      }
      uVar3 = 0x11250000;
      goto switchD_10041710b_caseD_0;
    }
    if ((int)param_2 < 0x10) {
      switch(param_2 - 1) {
      case 0:
        break;
      case 1:
        uVar3 = 0x111e0000;
        break;
      default:
        goto switchD_10041710b_caseD_2;
      case 3:
        uVar3 = 0x111f0000;
        break;
      case 7:
        uVar3 = 0x11200000;
      }
      goto switchD_10041710b_caseD_0;
    }
    if (param_2 == 0x10) {
      uVar3 = 0x11220000;
      goto switchD_10041710b_caseD_0;
    }
    if (param_2 == 0x20) {
      uVar3 = 0x11230000;
      goto switchD_10041710b_caseD_0;
    }
    if (param_2 == 0x40) goto LAB_1004172dc;
    goto switchD_10041710b_caseD_2;
  }
  if (((param_1 != 0x69506f74) && (param_1 != 0x69506f64)) || ((param_2 & param_2 - 1) != 0))
  goto switchD_10041710b_caseD_0;
  if ((int)param_2 < 0x80) {
    if ((int)param_2 < 0x10) {
      switch(param_2 - 1) {
      case 0:
        break;
      case 1:
        uVar3 = 0x10d70000;
        break;
      default:
        goto switchD_10041710b_caseD_2;
      case 3:
        uVar3 = 0x10d80000;
        break;
      case 7:
        uVar3 = 0x10d90000;
      }
      goto switchD_10041710b_caseD_0;
    }
    if (param_2 == 0x10) {
      uVar3 = 0x10da0000;
      goto switchD_10041710b_caseD_0;
    }
    if (param_2 == 0x20) {
      uVar3 = 0x10db0000;
      goto switchD_10041710b_caseD_0;
    }
    if (param_2 == 0x40) goto LAB_1004171fe;
  }
  else {
    uVar3 = uVar4;
    if ((int)param_2 < 0x80000) {
      if (param_2 != 0x80) {
        if (param_2 == 0x400) {
LAB_1004171fe:
          uVar3 = 0x10dc0000;
          goto switchD_10041710b_caseD_0;
        }
        if (param_2 != 0x800) goto switchD_10041710b_caseD_2;
      }
      uVar3 = 0x10dd0000;
      goto switchD_10041710b_caseD_0;
    }
LAB_100417267:
    if (((param_2 == 0x80000) || (param_2 == 0x400000)) || (uVar4 = uVar3, param_2 == 0x800000))
    goto switchD_10041710b_caseD_0;
  }
switchD_10041710b_caseD_2:
  uVar3 = uVar4;
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "false";
    __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
switchD_10041710b_caseD_0:
  if ((param_3 & 0xffff0000) != 0x10d60000) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "(stringID >> 16) == kIPodGenericItemStringsID";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1001c337a(uVar3 | param_3 & 0xffff);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

