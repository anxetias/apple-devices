// name: FUN_1004d65a6
// address: 1004d65a6

undefined8 FUN_1004d65a6(long *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 local_3c;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_3c = param_3;
  cVar1 = (**(code **)(*param_1 + 0x40))();
  uVar2 = 0xffffffce;
  if (cVar1 == '\0') {
    plVar3 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
    if (*plVar3 == 0) {
      uVar2 = FUN_1001cc310();
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "eventDict.IsValid()";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar2);
      FUN_1001782e9(0,0);
      uVar2 = 0xffffff94;
    }
    else {
      FUN_1001a7b90(&local_38,&PTR_cf_eventType_100855a30);
      FUN_10014d834(plVar3,&local_38,param_2);
      FUN_1001ab240(&local_38);
      FUN_1001a7b90(&local_38,&PTR_cf_eventVersion_10085e9c0);
      FUN_100365d78(plVar3,&local_38,&local_3c);
      FUN_1001ab240(&local_38);
      uVar2 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

