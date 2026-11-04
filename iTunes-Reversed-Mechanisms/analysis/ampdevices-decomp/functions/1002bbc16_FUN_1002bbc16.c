// name: FUN_1002bbc16
// address: 1002bbc16

undefined8 ** FUN_1002bbc16(undefined8 **param_1)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  undefined8 *local_58;
  long *plStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar3 = operator_new(0x278,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_100845a40;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 7) = 0x3f800000;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0x3f800000;
    FUN_10027a642(puVar3 + 0xd,0);
    FUN_10027a642(puVar3 + 0x2e,0);
  }
  local_58 = puVar3;
  plVar4 = operator_new(0x20);
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_100845aa0;
  plVar4[3] = (long)puVar3;
  plStack_50 = plVar4;
  if (puVar3 != (undefined8 *)0x0) {
    if (puVar3[2] == 0) {
      LOCK();
      plVar4[1] = plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar4[2] = plVar4[2] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      puVar3[2] = plVar4;
    }
    else {
      if (*(long *)(puVar3[2] + 8) != -1) goto LAB_1002bbd32;
      LOCK();
      plVar4[1] = plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar4[2] = plVar4[2] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      puVar3[2] = plVar4;
      std::__shared_weak_count::__release_weak();
    }
    plVar5 = plVar4 + 1;
    LOCK();
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1002bbd32:
  puVar3 = local_58;
  ppuVar7 = param_1;
  if (local_58 == (undefined8 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = (**(code **)*local_58)(local_58);
    if (cVar2 != '\0') {
      *param_1 = puVar3;
      param_1[1] = plStack_50;
      ppuVar7 = &local_58;
    }
  }
  *ppuVar7 = (undefined8 *)0x0;
  ppuVar7[1] = (undefined8 *)0x0;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_50 + 1;
    lVar1 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

