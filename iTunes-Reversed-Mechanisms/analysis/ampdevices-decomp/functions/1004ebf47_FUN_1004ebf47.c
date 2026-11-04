// name: FUN_1004ebf47
// address: 1004ebf47

undefined8 FUN_1004ebf47(long param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "TrackInfoIsValid(trackInfo)";
LAB_1004ec048:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (*(long *)(param_2 + 0x10) == *(long *)(param_1 + 0x30)) {
      uVar2 = FUN_1004744bf(param_2,0);
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
        uVar3 = FUN_1004ec077(param_1,uVar2);
        return uVar3;
      }
      goto LAB_1004ec072;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = 
      "(((trackInfo) != nullptr) ? ((trackInfo)->trackDataPrivate) : nullptr) == handlerData->trackData"
      ;
      goto LAB_1004ec048;
    }
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return 0;
  }
LAB_1004ec072:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

