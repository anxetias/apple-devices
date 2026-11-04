// name: FUN_100358659
// address: 100358659

void FUN_100358659(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_100314a6c();
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "trackData != nullptr";
LAB_100358771:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    lVar2 = FUN_1002f950a(lVar2,param_2);
    if (lVar2 != 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        FUN_1003584ca(lVar2,param_3,0);
        return;
      }
      goto LAB_100358798;
    }
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "trackInfo != nullptr";
      goto LAB_100358771;
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_100358798:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

