// name: FUN_10021e4d4
// address: 10021e4d4

long ** FUN_10021e4d4(long **param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  long **pplVar6;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long *local_58;
  long *plStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar4 = operator_new(0x30,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar4 != (long *)0x0) {
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_10083e200;
    *(undefined4 *)((long)plVar4 + 0x2c) = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    *(undefined1 *)(plVar4 + 5) = 0;
  }
  local_58 = plVar4;
  plStack_50 = operator_new(0x20);
  plStack_50[1] = 0;
  plStack_50[2] = 0;
  *plStack_50 = (long)&PTR_FUN_10083e2f0;
  plStack_50[3] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plStack_50[1] = plStack_50[1] + 1;
    UNLOCK();
    LOCK();
    plStack_50[2] = plStack_50[2] + 1;
    UNLOCK();
    plVar4[1] = (long)plVar4;
    plVar4[2] = (long)plStack_50;
    LOCK();
    plVar4 = plStack_50 + 1;
    lVar2 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  pplVar6 = param_1;
  if (local_58 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_68 = *param_2;
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    if (*(long *)(param_2 + 2) != 0) {
      LOCK();
      plVar4 = (long *)(*(long *)(param_2 + 2) + 8);
      *plVar4 = *plVar4 + 1;
      UNLOCK();
    }
    cVar3 = (**(code **)(*local_58 + 0x20))(local_58,&local_68);
    plVar4 = (long *)CONCAT44(uStack_5c,uStack_60);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (cVar3 != '\0') {
      *param_1 = local_58;
      param_1[1] = plStack_50;
      pplVar6 = &local_58;
    }
  }
  *pplVar6 = (long *)0x0;
  pplVar6[1] = (long *)0x0;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_50 + 1;
    lVar2 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

