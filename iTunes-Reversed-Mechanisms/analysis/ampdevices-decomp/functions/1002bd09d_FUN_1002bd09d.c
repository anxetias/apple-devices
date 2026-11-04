// name: FUN_1002bd09d
// address: 1002bd09d

undefined8 FUN_1002bd09d(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "TrackInfoIsValid(trackInfo)";
LAB_1002bd1a7:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    lVar2 = FUN_100597c13(param_1,0);
    if (lVar2 != 0) {
      uVar3 = FUN_100166c1b(*(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x98),
                            PTR_cf_mime_type_1008536b8);
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
        uVar3 = FUN_1002f3b9d(uVar3);
        return uVar3;
      }
      goto LAB_1002bd1d1;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "trackInstance != nullptr";
      goto LAB_1002bd1a7;
    }
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return 0;
  }
LAB_1002bd1d1:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

