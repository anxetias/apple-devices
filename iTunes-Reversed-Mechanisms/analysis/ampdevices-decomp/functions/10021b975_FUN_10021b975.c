// name: FUN_10021b975
// address: 10021b975

void FUN_10021b975(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  long local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  if (lVar2 != 0) {
    if (DAT_1008c75d0 != -1) {
      _dispatch_once(&DAT_1008c75d0,&PTR___NSConcreteGlobalBlock_1008570a8);
    }
    uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75c8);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8420102;
      local_34 = lVar2;
      __os_log_impl(0x100000000,uVar3,0x10,"notify> error %{public}@",&local_38,0xc);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

