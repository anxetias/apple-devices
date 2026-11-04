// name: FUN_10039bc84
// address: 10039bc84

void FUN_10039bc84(long *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "pvData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x28))(param_1,0,0,0,0);
    if (cVar1 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "thisController->IsRestoreOrUpdateInProgress()";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
      uVar2 = 0xffffffce;
    }
    else {
      if ((int)param_1[0x155] == 1) {
        uVar2 = _VVVRestorePod();
      }
      else {
        uVar2 = _VVVUpdatePod(param_1[1],param_1[0x87]);
      }
      uVar2 = FUN_100399136(uVar2);
    }
    *(undefined4 *)((long)param_1 + 0xaa4) = uVar2;
    *(undefined1 *)(param_1 + 0x154) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

