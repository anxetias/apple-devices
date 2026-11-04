// name: FUN_1002c3944
// address: 1002c3944

void FUN_1002c3944(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 local_58 [16];
  undefined8 local_48;
  long *plStack_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_48 = 0;
  plStack_40 = (long *)0x0;
  FUN_100238ca8(local_58,param_1 + 3);
  lVar6 = *param_1;
  lVar5 = param_1[1];
  if (lVar5 == lVar6) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mStrongRefs.size() > 0";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
    lVar6 = *param_1;
    lVar5 = param_1[1];
  }
  if (lVar5 == lVar6) {
    FUN_10015a142(local_58);
  }
  else {
    local_48 = *(undefined8 *)(lVar5 + -0x10);
    plStack_40 = *(long **)(lVar5 + -8);
    if (*(long *)(lVar5 + -8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(lVar5 + -8) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    lVar6 = param_1[1];
    FUN_100205d70(lVar6 + -0x10);
    plVar1 = plStack_40;
    param_1[1] = lVar6 + -0x10;
    FUN_10015a142(local_58);
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      lVar6 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

