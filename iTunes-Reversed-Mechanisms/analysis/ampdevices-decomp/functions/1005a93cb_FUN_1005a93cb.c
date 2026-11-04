// name: FUN_1005a93cb
// address: 1005a93cb

void FUN_1005a93cb(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1001ee056();
  if (cVar1 == '\0') {
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
      FUN_1001e9de0(param_1);
      return;
    }
  }
  else {
    cVar1 = FUN_1001e9c23(param_1);
    if (cVar1 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "IsLockValid(lock)";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      while( true ) {
        iVar2 = FUN_1001e9e65(param_1);
        if (iVar2 == 0) break;
        FUN_1001ee7ac();
        FUN_1001b153d();
      }
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

