// name: FUN_1002c14ac
// address: 1002c14ac

void FUN_1002c14ac(long *param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != (long *)0x0) {
    if (param_2 == (long *)0x0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "destNameList != nullptr";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (param_2 != param_1) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
        FUN_1001bd6b0(param_2,*param_1,param_1[1],param_1[1] - *param_1 >> 4);
        return;
      }
      goto LAB_1002c158c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
LAB_1002c158c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

