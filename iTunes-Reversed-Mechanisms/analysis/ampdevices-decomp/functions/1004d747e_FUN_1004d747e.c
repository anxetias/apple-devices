// name: FUN_1004d747e
// address: 1004d747e

void FUN_1004d747e(long *param_1,undefined1 param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  long local_58;
  long *local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar3 = (long *)(**(code **)(*param_1 + 0x10))();
  if (*plVar3 == 0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "eventDict.IsValid()";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
  }
  else {
    (**(code **)(*param_1 + 0x58))(param_1,plVar3);
    FUN_1004c9e84(&local_58);
    if (local_58 == 0) {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "metricsHandler != __null";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      FUN_1001782e9(0,0);
    }
    else {
      FUN_1004cadc6(local_58,plVar3,param_2);
    }
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      lVar1 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

