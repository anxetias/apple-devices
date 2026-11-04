// name: FUN_100267452
// address: 100267452

undefined8 FUN_100267452(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "ITIPodRefIsValid(iPod)";
LAB_100267586:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
LAB_10026750e:
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    if (param_2 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "outCheckinAckData != nullptr";
        goto LAB_100267586;
      }
      goto LAB_10026750e;
    }
    if (*(code **)(param_1 + 0x4d0) != (code *)0x0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
                    /* WARNING: Could not recover jumptable at 0x0001002674b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(param_1 + 0x4d0))(param_1,param_2);
        return uVar2;
      }
      goto LAB_1002675fe;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "iPod->callbacks.copyRentalCheckinAckProc != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xfffffffc;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
LAB_1002675fe:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

