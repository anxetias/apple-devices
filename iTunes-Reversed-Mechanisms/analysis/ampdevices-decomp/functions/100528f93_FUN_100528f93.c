// name: FUN_100528f93
// address: 100528f93

void FUN_100528f93(double param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  double local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100527a20();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "AppProgressBarIsValid(progressBar)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1005290ce;
  }
  if ((param_1 != DAT_100700af8) || (local_40 = DAT_100700af8, NAN(param_1) || NAN(DAT_100700af8)))
  {
    if (0.0 <= param_1) {
      local_40 = param_1;
      if (DAT_100700458 < param_1) {
        local_40 = DAT_100700458;
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_2a = "value <= 1.0";
          goto LAB_10052915d;
        }
        goto LAB_100529083;
      }
    }
    else {
      local_40 = 0.0;
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "value >= 0.0";
LAB_10052915d:
        local_2c = 0x822;
        local_34 = "Assertion failure";
        local_38 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_38,0x16);
      }
LAB_100529083:
      FUN_1001782e9(0,0);
    }
    *(byte *)(param_2 + 0x828) = *(byte *)(param_2 + 0x828) & 0x7f;
  }
  if ((*(double *)(param_2 + 0x820) != local_40) ||
     (NAN(*(double *)(param_2 + 0x820)) || NAN(local_40))) {
    *(double *)(param_2 + 0x820) = local_40;
    uVar2 = FUN_1001c156e();
    FUN_1001c6987(uVar2,0x75707267,param_2,0,0);
  }
LAB_1005290ce:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

