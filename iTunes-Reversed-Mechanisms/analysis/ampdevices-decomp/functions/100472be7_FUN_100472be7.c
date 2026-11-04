// name: FUN_100472be7
// address: 100472be7

undefined8 FUN_100472be7(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "TrackInfoIsValid(trackInfo)";
LAB_100472cf3:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
      uVar2 = FUN_10030064f(param_2);
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        uVar2 = FUN_100472a20(param_1,uVar2);
        return uVar2;
      }
      goto LAB_100472d1a;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "TrackInfoIsValid(sourceTrackInfo)";
      goto LAB_100472cf3;
    }
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return 0xffffffce;
  }
LAB_100472d1a:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

