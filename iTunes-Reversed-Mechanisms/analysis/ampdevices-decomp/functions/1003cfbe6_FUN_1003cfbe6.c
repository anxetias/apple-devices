// name: FUN_1003cfbe6
// address: 1003cfbe6

undefined8 ** FUN_1003cfbe6(undefined8 **param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 **ppuVar8;
  undefined8 *local_58;
  long *plStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar3 = operator_new(0x158,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_100857768;
    lVar4 = 0x38;
    do {
      puVar1 = (undefined8 *)((long)puVar3 + lVar4 + -0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar3 + lVar4 + -0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)((long)puVar3 + lVar4) = 0x3f800000;
      lVar4 = lVar4 + 0x28;
    } while (lVar4 != 0x178);
  }
  local_58 = puVar3;
  plVar5 = operator_new(0x20);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_1008577c8;
  plVar5[3] = (long)puVar3;
  plStack_50 = plVar5;
  if (puVar3 != (undefined8 *)0x0) {
    if (puVar3[2] == 0) {
      LOCK();
      plVar5[1] = plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar5[2] = plVar5[2] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      puVar3[2] = plVar5;
    }
    else {
      if (*(long *)(puVar3[2] + 8) != -1) goto LAB_1003cfcea;
      LOCK();
      plVar5[1] = plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar5[2] = plVar5[2] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      puVar3[2] = plVar5;
      std::__shared_weak_count::__release_weak();
    }
    plVar6 = plVar5 + 1;
    LOCK();
    lVar4 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1003cfcea:
  puVar3 = local_58;
  ppuVar8 = param_1;
  if (local_58 == (undefined8 *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = (**(code **)*local_58)(local_58);
    if (cVar2 != '\0') {
      *param_1 = puVar3;
      param_1[1] = plStack_50;
      ppuVar8 = &local_58;
    }
  }
  *ppuVar8 = (undefined8 *)0x0;
  ppuVar8[1] = (undefined8 *)0x0;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar5 = plStack_50 + 1;
    lVar4 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar4 == 0) {
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

