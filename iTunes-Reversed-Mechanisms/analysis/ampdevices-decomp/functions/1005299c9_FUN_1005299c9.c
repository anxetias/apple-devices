// name: FUN_1005299c9
// address: 1005299c9

void FUN_1005299c9(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
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
      local_2a = "AppProgressBarIsValid(progressBar1)";
LAB_100529ad2:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
  }
  else {
    cVar1 = FUN_100527a20(param_2);
    if (cVar1 != '\0') {
      uVar2 = FUN_1001c156e();
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        FUN_1001c6987(uVar2,0x74707267,param_1,param_2,0);
        return;
      }
      goto LAB_100529af9;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "AppProgressBarIsValid(progressBar2)";
      goto LAB_100529ad2;
    }
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_100529af9:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

