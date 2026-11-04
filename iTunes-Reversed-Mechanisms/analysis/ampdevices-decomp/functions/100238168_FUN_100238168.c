// name: FUN_100238168
// address: 100238168

void FUN_100238168(long param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0xf8) == param_2) {
    FUN_100238484(param_1,1);
    cVar1 = FUN_1001e8dbb(param_1 + 0xd8);
    if (cVar1 != '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
        FUN_1001e8f15(param_1 + 0xd8);
        return;
      }
      goto LAB_10023825e;
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "inFiberID == mFiberID";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
LAB_10023825e:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

