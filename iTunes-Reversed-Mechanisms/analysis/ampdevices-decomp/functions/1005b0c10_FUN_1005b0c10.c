// name: FUN_1005b0c10
// address: 1005b0c10

void FUN_1005b0c10(long **param_1)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *local_68;
  long *plStack_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar3 = operator_new(0xa0,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar3 != (long *)0x0) {
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_10086f180;
    FUN_10032f0f2(plVar3 + 3);
    FUN_10032f0f2(plVar3 + 5);
    FUN_10032f0f2(plVar3 + 7);
    FUN_10032f0f2(plVar3 + 9);
    FUN_10032f0f2(plVar3 + 0xb);
    FUN_10032f0f2(plVar3 + 0xd);
    FUN_10032f0f2(plVar3 + 0xf);
    plVar3[0x11] = 0;
    plVar3[0x12] = 0;
    plVar3[0x13] = 0;
  }
  local_68 = plVar3;
  plVar4 = operator_new(0x20);
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_10086f368;
  plVar4[3] = (long)plVar3;
  plStack_60 = plVar4;
  if (plVar3 != (long *)0x0) {
    if (plVar3[2] == 0) {
      LOCK();
      plVar4[1] = plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar4[2] = plVar4[2] + 1;
      UNLOCK();
      plVar3[1] = (long)plVar3;
      plVar3[2] = (long)plVar4;
    }
    else {
      if (*(long *)(plVar3[2] + 8) != -1) goto LAB_1005b0d6a;
      LOCK();
      plVar4[1] = plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar4[2] = plVar4[2] + 1;
      UNLOCK();
      plVar3[1] = (long)plVar3;
      plVar3[2] = (long)plVar4;
      std::__shared_weak_count::__release_weak();
    }
    plVar3 = plVar4 + 1;
    LOCK();
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1005b0d6a:
  plVar3 = local_68;
  if (local_68 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = (**(code **)(*local_68 + 0x20))(local_68);
    if (cVar2 != '\0') {
      *param_1 = plVar3;
      param_1[1] = plStack_60;
      param_1 = &local_68;
    }
  }
  *param_1 = (long *)0x0;
  param_1[1] = (long *)0x0;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar3 = plStack_60 + 1;
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

