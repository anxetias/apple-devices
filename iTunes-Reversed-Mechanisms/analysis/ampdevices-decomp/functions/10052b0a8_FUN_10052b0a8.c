// name: FUN_10052b0a8
// address: 10052b0a8

void FUN_10052b0a8(long *param_1)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
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
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar5 == lVar4) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mStrongRefs.size() > 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    lVar4 = *param_1;
    lVar5 = param_1[1];
  }
  if (lVar5 != lVar4) {
    FUN_100203686(&local_48,lVar5 + -0x10);
    lVar4 = param_1[1];
    FUN_10021e316(lVar4 + -0x10);
    param_1[1] = lVar4 + -0x10;
  }
  FUN_10015a142(local_58);
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

