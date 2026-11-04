// name: FUN_1004c4d24
// address: 1004c4d24

undefined8 * FUN_1004c4d24(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar3 = operator_new(0x48,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_10085d838;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined1 *)(puVar3 + 5) = 0;
    puVar3[6] = puVar3 + 7;
  }
  plVar4 = operator_new(0x20);
  plVar6 = plVar4 + 1;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_10085d898;
  plVar4[3] = (long)puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    uVar7 = 0;
    plVar8 = plVar4;
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16,uVar7,
                          plVar8);
    }
    FUN_1001782e9(0,0);
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    lVar1 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  else {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar4[2] = plVar4[2] + 1;
    UNLOCK();
    puVar3[1] = puVar3;
    puVar3[2] = plVar4;
    LOCK();
    plVar8 = plVar4 + 1;
    lVar1 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
    plVar8 = plVar4;
    cVar2 = (**(code **)*puVar3)(puVar3);
    if (cVar2 == '\0') {
      puVar3 = (undefined8 *)0x0;
      plVar8 = (long *)0x0;
      LOCK();
      lVar1 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__shared_weak_count::__release_weak();
      }
    }
    *(int *)param_1 = (int)puVar3;
    *(int *)((long)param_1 + 4) = (int)((ulong)puVar3 >> 0x20);
    *(int *)(param_1 + 1) = (int)plVar8;
    *(int *)((long)param_1 + 0xc) = (int)((ulong)plVar8 >> 0x20);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

