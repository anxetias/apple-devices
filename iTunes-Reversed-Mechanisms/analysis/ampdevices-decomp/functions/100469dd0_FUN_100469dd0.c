// name: FUN_100469dd0
// address: 100469dd0

int FUN_100469dd0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar6 = operator_new(0x78,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_10085c110;
    *(undefined4 *)(puVar6 + 3) = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    *(undefined1 *)(puVar6 + 0xe) = 0;
  }
  plVar7 = operator_new(0x20);
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_10085c1f8;
  plVar7[3] = (long)puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    plVar7[1] = plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar7[2] = plVar7[2] + 1;
    UNLOCK();
    puVar6[1] = puVar6;
    puVar6[2] = plVar7;
    LOCK();
    plVar3 = plVar7 + 1;
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (puVar6 == (undefined8 *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be not NULL)";
      local_3c = 0x822;
      local_3a = "service";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar4 = FUN_1001782e9(0,0);
    iVar5 = -0x6c;
    if (cVar4 == '\0') goto LAB_100469f22;
  }
  iVar5 = FUN_1001e9c3e(puVar6 + 3);
  if (iVar5 == 0) {
    *(undefined1 *)(puVar6 + 0xe) = 1;
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar7[1] = plVar7[1] + 1;
      UNLOCK();
    }
    *param_1 = puVar6;
    plVar3 = (long *)param_1[1];
    param_1[1] = plVar7;
    iVar5 = 0;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
        iVar5 = 0;
      }
    }
  }
  else {
    cVar4 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x4000100;
      local_44 = (char *)CONCAT44(local_44._4_4_,iVar5);
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "**ERROR**: CreateLock() failed! error:%d",&local_48,8);
    }
    cVar4 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x4000100;
      local_44 = (char *)CONCAT44(local_44._4_4_,iVar5);
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "**ERROR**: AMPDevicesAgentService::Setup() failed! status:%d",&local_48,8
                         );
    }
  }
LAB_100469f22:
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

