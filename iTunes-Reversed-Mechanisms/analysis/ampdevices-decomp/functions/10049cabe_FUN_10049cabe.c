// name: FUN_10049cabe
// address: 10049cabe

undefined8 * FUN_10049cabe(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = operator_new(0x598,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar4 != (long *)0x0) {
    FUN_1003c2b00(plVar4);
    *plVar4 = (long)&PTR_FUN_10085c788;
    plVar4[0x9b] = 0;
    plVar4[0x9c] = 0;
    plVar4[0x9d] = 0;
    plVar4[0x9e] = 0;
    FUN_1001c62d9(plVar4 + 0x9f,0xa0);
  }
  plVar5 = operator_new(0x20);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_10085ca78;
  plVar5[3] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    if (plVar4[2] == 0) {
      LOCK();
      plVar5[1] = plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar5[2] = plVar5[2] + 1;
      UNLOCK();
      plVar4[1] = (long)plVar4;
      plVar4[2] = (long)plVar5;
    }
    else {
      if (*(long *)(plVar4[2] + 8) != -1) goto LAB_10049cbd8;
      LOCK();
      plVar5[1] = plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar5[2] = plVar5[2] + 1;
      UNLOCK();
      plVar4[1] = (long)plVar4;
      plVar4[2] = (long)plVar5;
      std::__shared_weak_count::__release_weak();
    }
    plVar6 = plVar5 + 1;
    LOCK();
    lVar1 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10049cbd8:
  *param_1 = plVar4;
  plVar6 = (long *)param_1[1];
  param_1[1] = plVar5;
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar1 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
    plVar4 = (long *)*param_1;
  }
  if (plVar4 == (long *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handler != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10049ccac;
  }
  iVar3 = (**(code **)(*plVar4 + 0x2b8))(plVar4,param_2,param_3);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) goto LAB_10049ccac;
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    if (iVar3 == 0) goto LAB_10049ccac;
  }
  plVar4 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10049ccac:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

