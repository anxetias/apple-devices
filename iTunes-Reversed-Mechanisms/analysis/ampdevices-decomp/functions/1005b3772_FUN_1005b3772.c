// name: FUN_1005b3772
// address: 1005b3772

long ** FUN_1005b3772(long **param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long **pplVar6;
  undefined1 local_80 [16];
  long *local_70;
  long *plStack_68;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5c = param_3;
  plVar3 = operator_new(0x108,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar3 != (long *)0x0) {
    FUN_10053c29e(plVar3);
    *plVar3 = (long)&PTR_FUN_10086f230;
    plVar3[8] = (long)&PTR_FUN_10086f2a0;
    plVar3[0xc] = 0;
    plVar3[0xd] = 0;
    plVar3[9] = 0;
    plVar3[10] = 0;
    *(undefined4 *)(plVar3 + 0xb) = 0;
    FUN_10032f0f2(plVar3 + 0xe);
    FUN_10032f0f2(plVar3 + 0x10);
    plVar3[0x12] = 0;
    *(undefined8 *)((long)plVar3 + 0x9c) = 0;
    plVar3[0x15] = 0;
    *(undefined4 *)(plVar3 + 0x16) = 0;
    *(undefined1 *)((long)plVar3 + 0xb4) = 0;
    plVar3[0x17] = 0;
    plVar3[0x18] = 0;
    plVar3[0x19] = 0;
    plVar3[0x1a] = 0;
    *(undefined4 *)(plVar3 + 0x1b) = 0x3f800000;
    plVar3[0x1c] = 0;
    plVar3[0x1d] = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1f] = 0;
    *(undefined4 *)(plVar3 + 0x20) = 0x3f800000;
  }
  local_70 = plVar3;
  plVar4 = operator_new(0x20);
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_10086f458;
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
      if (*(long *)(plVar3[2] + 8) != -1) goto LAB_1005b3911;
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
LAB_1005b3911:
  plVar3 = local_70;
  pplVar6 = param_1;
  if (local_70 == (long *)0x0) {
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
    FUN_1001a7a9e(local_80,param_4);
    cVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,param_2,local_5c,local_80);
    FUN_1001a8fac(local_80);
    if (cVar2 != '\0') {
      *param_1 = plVar3;
      param_1[1] = plStack_68;
      pplVar6 = &local_70;
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

