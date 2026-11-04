// name: FUN_100529cfc
// address: 100529cfc

void FUN_100529cfc(uint param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 & 0xffff0000) != 0x1f40000) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "(key >> 16) == kGenericItemStringsID";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar3 = 0x1f40000;
  if ((param_1 & param_1 - 1) != 0) goto switchD_100529dda_caseD_0;
  if ((int)param_1 < 0x800) {
    if ((int)param_1 < 0x10) {
      switch(param_1) {
      case 0:
      case 1:
        break;
      case 2:
        uVar3 = 0x1f50000;
        break;
      default:
        goto switchD_100529dda_caseD_3;
      case 4:
        uVar3 = 0x1f60000;
        break;
      case 8:
        uVar3 = 0x1f70000;
      }
      goto switchD_100529dda_caseD_0;
    }
    if (0x3f < (int)param_1) {
      if (param_1 != 0x40) {
        if (param_1 == 0x80) goto LAB_100529ec9;
        if (param_1 != 0x400) goto switchD_100529dda_caseD_3;
      }
      uVar3 = 0x1fa0000;
      goto switchD_100529dda_caseD_0;
    }
    if (param_1 == 0x10) {
      uVar3 = 0x1f80000;
      goto switchD_100529dda_caseD_0;
    }
    if (param_1 == 0x20) {
      uVar3 = 0x1f90000;
      goto switchD_100529dda_caseD_0;
    }
  }
  else if ((int)param_1 < 0x20000) {
    if ((int)param_1 < 0x4000) {
      if (param_1 == 0x800) {
LAB_100529ec9:
        uVar3 = 0x1fb0000;
        goto switchD_100529dda_caseD_0;
      }
      if (param_1 == 0x2000) {
        uVar3 = 0x2080000;
        goto switchD_100529dda_caseD_0;
      }
    }
    else {
      if (param_1 == 0x4000) {
        uVar3 = 0x20f0000;
        if ((param_3 & 1) == 0) {
          uVar3 = 0x2090000;
        }
        goto switchD_100529dda_caseD_0;
      }
      if (param_1 == 0x8000) {
        uVar3 = (param_3 & 1) * 0x20000 + 0x20a0000;
        goto switchD_100529dda_caseD_0;
      }
      if (param_1 == 0x10000) {
        uVar3 = 0x20b0000;
        goto switchD_100529dda_caseD_0;
      }
    }
  }
  else if ((int)param_1 < 0x400000) {
    if (param_1 == 0x20000) {
      uVar3 = 0x20c0000;
      goto switchD_100529dda_caseD_0;
    }
    if (param_1 == 0x40000) {
      uVar3 = 0x20d0000;
      goto switchD_100529dda_caseD_0;
    }
    if (param_1 == 0x80000) {
      uVar3 = 0x1ff0000;
      goto switchD_100529dda_caseD_0;
    }
  }
  else {
    if ((param_1 == 0x400000) || (param_1 == 0x800000)) goto switchD_100529dda_caseD_0;
    if (param_1 == 0x4000000) {
      uVar3 = 0x2110000;
      goto switchD_100529dda_caseD_0;
    }
  }
switchD_100529dda_caseD_3:
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
switchD_100529dda_caseD_0:
  FUN_1001c337a(param_2 & 0xffff | uVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

