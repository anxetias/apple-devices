// name: FUN_1004d764e
// address: 1004d764e

undefined8 FUN_1004d764e(long *param_1,undefined8 param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar2 = (long *)(**(code **)(*param_1 + 0x10))();
  if (*plVar2 == 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "eventDict.IsValid()";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
    uVar3 = 0xffffff94;
  }
  else {
    FUN_1001a7b90(&local_38,&PTR_cf_topic_10085e3d0);
    FUN_10014d834(plVar2,&local_38,param_2);
    FUN_1001ab240(&local_38);
    uVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

