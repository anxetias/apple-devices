// name: FUN_1002670e7
// address: 1002670e7

undefined8 FUN_1002670e7(long param_1,long param_2,long param_3)

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
LAB_100267225:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_10026724a:
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    if (param_2 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_3a = "outRequestData != nullptr";
        goto LAB_100267225;
      }
      goto LAB_10026724a;
    }
    if (param_3 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_3a = "outDiversityElementIDsArray != nullptr";
        goto LAB_100267225;
      }
      goto LAB_10026724a;
    }
    if (*(code **)(param_1 + 0x4c0) != (code *)0x0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
                    /* WARNING: Could not recover jumptable at 0x00010026715d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(param_1 + 0x4c0))(param_1,param_2,param_3);
        return uVar2;
      }
      goto LAB_1002672e7;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "iPod->callbacks.copyRentalBagRequestProc != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xfffffffc;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
LAB_1002672e7:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

