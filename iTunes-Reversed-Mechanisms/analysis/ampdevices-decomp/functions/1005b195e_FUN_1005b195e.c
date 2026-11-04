// name: FUN_1005b195e
// address: 1005b195e

long ** FUN_1005b195e(long **param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  long **pplVar5;
  long *local_68;
  long *plStack_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar3 = operator_new(0x40,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar3 != (long *)0x0) {
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined4 *)(plVar3 + 4) = 0;
    *plVar3 = (long)&PTR_FUN_10086f1b8;
    plVar3[5] = 0;
    plVar3[6] = 0;
    *(undefined1 *)(plVar3 + 7) = 0;
  }
  local_68 = plVar3;
  plStack_60 = operator_new(0x20);
  plStack_60[1] = 0;
  plStack_60[2] = 0;
  *plStack_60 = (long)&PTR_FUN_10086f3b8;
  plStack_60[3] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plStack_60[1] = plStack_60[1] + 1;
    UNLOCK();
    LOCK();
    plStack_60[2] = plStack_60[2] + 1;
    UNLOCK();
    plVar3[1] = (long)plVar3;
    plVar3[2] = (long)plStack_60;
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
  plVar3 = local_68;
  pplVar5 = param_1;
  if (local_68 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = (**(code **)(*local_68 + 0x30))(local_68,param_2,param_3);
    if (cVar2 != '\0') {
      *param_1 = plVar3;
      param_1[1] = plStack_60;
      pplVar5 = &local_68;
    }
  }
  *pplVar5 = (long *)0x0;
  pplVar5[1] = (long *)0x0;
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

