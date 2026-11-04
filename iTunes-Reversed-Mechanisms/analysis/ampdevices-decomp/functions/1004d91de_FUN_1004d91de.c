// name: FUN_1004d91de
// address: 1004d91de

long ** FUN_1004d91de(long **param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  long **pplVar6;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long *local_78;
  long *plStack_70;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar4 = operator_new(0xb0,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar4 != (long *)0x0) {
    FUN_1001c75be(plVar4);
    plVar4[9] = 0;
    plVar4[10] = 0;
    *plVar4 = (long)&PTR_FUN_10085ed38;
    plVar4[0xb] = (long)&PTR_FUN_10085ed98;
    plVar4[0xc] = 0;
    plVar4[0xd] = 0;
    *(undefined2 *)(plVar4 + 0xf) = 0;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    plVar4[0x12] = 0;
    plVar4[0x13] = 0;
    plVar4[0x14] = 0;
    plVar4[0x15] = 0;
  }
  local_78 = plVar4;
  local_5c = param_4;
  plStack_70 = operator_new(0x20);
  plStack_70[1] = 0;
  plStack_70[2] = 0;
  *plStack_70 = (long)&PTR_FUN_10085ee30;
  plStack_70[3] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plStack_70[1] = plStack_70[1] + 1;
    UNLOCK();
    LOCK();
    plStack_70[2] = plStack_70[2] + 1;
    UNLOCK();
    plVar4[9] = (long)plVar4;
    plVar4[10] = (long)plStack_70;
    LOCK();
    plVar4 = plStack_70 + 1;
    lVar2 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  pplVar6 = param_1;
  if (local_78 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_88 = *param_2;
    uStack_84 = param_2[1];
    uStack_80 = param_2[2];
    uStack_7c = param_2[3];
    if (*(long *)(param_2 + 2) != 0) {
      LOCK();
      plVar4 = (long *)(*(long *)(param_2 + 2) + 8);
      *plVar4 = *plVar4 + 1;
      UNLOCK();
    }
    cVar3 = (**(code **)(*local_78 + 0x20))(local_78,&local_88,param_3,(undefined1)local_5c);
    plVar4 = (long *)CONCAT44(uStack_7c,uStack_80);
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
      *param_1 = local_78;
      param_1[1] = plStack_70;
      pplVar6 = &local_78;
    }
  }
  *pplVar6 = (long *)0x0;
  pplVar6[1] = (long *)0x0;
  if (plStack_70 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_70 + 1;
    lVar2 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

