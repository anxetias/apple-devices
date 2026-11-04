// name: FUN_1004e38dc
// address: 1004e38dc

undefined8 FUN_1004e38dc(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInfoIsValid(deviceTrackInfo)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(long *)(param_1 + 0x188) != 0) {
    uVar2 = FUN_1004e0c3f(0,1);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
      uVar2 = FUN_100300729(uVar2,*(undefined8 *)(param_1 + 0x188));
      return uVar2;
    }
    goto LAB_1004e39c7;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return 0;
  }
LAB_1004e39c7:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

