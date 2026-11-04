// name: FUN_1003539f0
// address: 1003539f0

undefined8 FUN_1003539f0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == (undefined8 *)0x0) || (param_2[2] == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
      return 0;
    }
  }
  else if (*(int *)((long)param_2 + 0x174) == 0) {
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
      uVar2 = FUN_1004985e6(param_1,*param_2);
      return uVar2;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    uVar2 = FUN_1004983e2(param_1,*(int *)((long)param_2 + 0x174));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

