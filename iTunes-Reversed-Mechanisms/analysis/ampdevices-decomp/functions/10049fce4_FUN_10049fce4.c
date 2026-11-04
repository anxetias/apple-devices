// name: FUN_10049fce4
// address: 10049fce4

long ** FUN_10049fce4(long **param_1,undefined1 param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  long **pplVar5;
  long *local_58;
  long *plStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar3 = operator_new(0x38,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar3 != (long *)0x0) {
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_10085cac8;
    *(undefined1 *)(plVar3 + 3) = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
  }
  local_58 = plVar3;
  plStack_50 = operator_new(0x20);
  plStack_50[1] = 0;
  plStack_50[2] = 0;
  *plStack_50 = (long)&PTR_FUN_10085cbc8;
  plStack_50[3] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plStack_50[1] = plStack_50[1] + 1;
    UNLOCK();
    LOCK();
    plStack_50[2] = plStack_50[2] + 1;
    UNLOCK();
    plVar3[1] = (long)plVar3;
    plVar3[2] = (long)plStack_50;
    LOCK();
    plVar3 = plStack_50 + 1;
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar3 = local_58;
  pplVar5 = param_1;
  if (local_58 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"ch>      LIBRARY PREFS modifiedFields 0x%0.16llx",
                          &local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = (**(code **)(*local_58 + 0x30))(local_58,param_2);
    if (cVar2 != '\0') {
      *param_1 = plVar3;
      param_1[1] = plStack_50;
      pplVar5 = &local_58;
    }
  }
  *pplVar5 = (long *)0x0;
  pplVar5[1] = (long *)0x0;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar3 = plStack_50 + 1;
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar1 == 0) {
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

