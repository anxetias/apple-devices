// name: FUN_1002ebcf0
// address: 1002ebcf0

long ** FUN_1002ebcf0(long **param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long **pplVar6;
  long **pplVar7;
  undefined1 local_80 [16];
  long *local_70;
  long *plStack_68;
  long **local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = param_1;
  plVar3 = operator_new(0x40,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar3 != (long *)0x0) {
    FUN_10053c29e(plVar3);
    *plVar3 = (long)&PTR_FUN_100853278;
  }
  local_70 = plVar3;
  plVar4 = operator_new(0x20);
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_1008532f0;
  plVar4[3] = (long)plVar3;
  plStack_68 = plVar4;
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
      if (*(long *)(plVar3[2] + 8) != -1) goto LAB_1002ebdde;
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
LAB_1002ebdde:
  plVar3 = local_70;
  if (local_70 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    pplVar6 = local_60;
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,
                          "ch> **ERROR** AMPLEntireLibraryCommandDataCreator - couldn\'t add db data"
                          ,&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    pplVar7 = pplVar6;
  }
  else {
    FUN_1001a7a9e(local_80,param_4);
    pplVar7 = local_60;
    cVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_2,param_3,local_80);
    FUN_1001a8fac(local_80);
    pplVar6 = pplVar7;
    if (cVar2 != '\0') {
      *pplVar7 = plVar3;
      pplVar6 = &local_70;
      pplVar7[1] = plStack_68;
    }
  }
  *pplVar6 = (long *)0x0;
  pplVar6[1] = (long *)0x0;
  if (plStack_68 != (long *)0x0) {
    LOCK();
    plVar3 = plStack_68 + 1;
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return pplVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

