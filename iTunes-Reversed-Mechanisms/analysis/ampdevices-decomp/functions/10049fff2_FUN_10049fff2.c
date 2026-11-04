// name: FUN_10049fff2
// address: 10049fff2

long ** FUN_10049fff2(long **param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long **pplVar6;
  long *local_58;
  long *plStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar3 = operator_new(0x178,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar3 != (long *)0x0) {
    FUN_100220a12(plVar3);
    *plVar3 = (long)&PTR_FUN_10085cb68;
    FUN_10049f3b8(plVar3 + 5);
    *(undefined1 *)(plVar3 + 0x2e) = 0;
  }
  local_58 = plVar3;
  plVar4 = operator_new(0x20);
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_10085cc98;
  plVar4[3] = (long)plVar3;
  plStack_50 = plVar4;
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
      if (*(long *)(plVar3[2] + 8) != -1) goto LAB_1004a00ee;
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
LAB_1004a00ee:
  plVar3 = local_58;
  pplVar6 = param_1;
  if (local_58 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"ch>      LIBRARY PREFS modifiedFields 0x%0.16llx",
                          &local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = (**(code **)(*local_58 + 0x18))(local_58,param_2);
    if (cVar2 != '\0') {
      *param_1 = plVar3;
      param_1[1] = plStack_50;
      pplVar6 = &local_58;
    }
  }
  *pplVar6 = (long *)0x0;
  pplVar6[1] = (long *)0x0;
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

