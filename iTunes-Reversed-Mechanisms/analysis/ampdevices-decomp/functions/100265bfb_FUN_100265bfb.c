// name: FUN_100265bfb
// address: 100265bfb

void FUN_100265bfb(long param_1,undefined4 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "ITIPodRefIsValid(iPod)";
LAB_100265cfd:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (param_3 != 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
                    /* WARNING: Could not recover jumptable at 0x000100265c5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x478))(param_1,param_2,param_3);
        return;
      }
      goto LAB_100265d24;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "value != nullptr";
      goto LAB_100265cfd;
    }
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_100265d24:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

