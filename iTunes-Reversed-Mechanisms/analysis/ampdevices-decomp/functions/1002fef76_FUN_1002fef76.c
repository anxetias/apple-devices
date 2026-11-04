// name: FUN_1002fef76
// address: 1002fef76

void FUN_1002fef76(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (lVar1 = *(long *)(param_1 + 0x10), lVar1 == 0)) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
      return;
    }
  }
  else {
    uVar2 = FUN_100474865();
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
      FUN_100316867(lVar1,uVar2,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

