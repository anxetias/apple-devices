// name: FUN_1002fe487
// address: 1002fe487

undefined8 FUN_1002fe487(long param_1,long param_2)

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
    if (cVar1 == '\0') goto LAB_1002fe52b;
    local_2a = "TrackInfoIsValid(sourceTrackInfo)";
  }
  else {
    if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
      uVar2 = FUN_1002fca9a(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x58));
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 == '\0') goto LAB_1002fe52b;
    local_2a = "TrackInfoIsValid(destTrackInfo)";
  }
  local_2c = 0x822;
  local_34 = "Assertion failure";
  local_38 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
LAB_1002fe52b:
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

