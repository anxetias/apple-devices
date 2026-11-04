// name: FUN_100269334
// address: 100269334

void FUN_100269334(long *param_1)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1001ee041();
  if (cVar2 != '\0') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "JRIsCurrentThreadPreemptive() == false";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,1);
  }
  plVar1 = param_1 + 2;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    (**(code **)(*param_1 + 0xb0))(param_1);
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

