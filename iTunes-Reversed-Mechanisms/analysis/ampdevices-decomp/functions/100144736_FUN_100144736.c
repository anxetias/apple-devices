// name: FUN_100144736
// address: 100144736

void FUN_100144736(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined4 local_b0;
  long local_a8;
  long *plStack_a0;
  undefined8 local_98 [2];
  long local_88;
  long *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [12];
  undefined2 local_5c;
  undefined4 local_5a;
  undefined2 local_56;
  undefined8 local_54;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = FUN_100153f3a(*param_3);
  FUN_1001a7a9e(local_98,uVar3);
  uVar3 = FUN_100135270();
  cVar1 = _os_log_type_enabled(uVar3,2);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0xd0))(&local_88,param_1);
    local_68._4_8_ = FUN_1001b83ae(&local_88);
    local_5a = (undefined4)param_1[0x31];
    local_68._0_4_ = 0x8220302;
    local_5c = 0x400;
    local_56 = 0x842;
    local_54 = local_98[0];
    __os_log_impl(0x100000000,uVar3,2,"storereq> %{public}s(%d). Response dialog spec %{public}@",
                  local_68,0x1c);
    FUN_1001b7a50(&local_88);
  }
  lVar4 = FUN_100156d72();
  local_88 = *(long *)(lVar4 + 0xb8);
  plVar6 = *(long **)(lVar4 + 0xc0);
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar6[1] = plVar6[1] + 1;
    UNLOCK();
  }
  local_80 = plVar6;
  if (local_88 == 0) {
    uVar3 = FUN_100135270();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xd0))(local_78,param_1);
      local_68._4_8_ = FUN_1001b83ae(local_78);
      local_5a = (undefined4)param_1[0x31];
      local_68._0_4_ = 0x8220202;
      local_5c = 0x400;
      __os_log_impl(0x100000000,uVar3,0x10,
                    "storereq> ***ERROR*** %{public}s(%d). No UI provider to process response dialog."
                    ,local_68,0x12);
      FUN_1001b7a50(local_78);
    }
    goto LAB_100144a4c;
  }
  std::mutex::lock();
  *(undefined1 *)(param_1 + 7) = 1;
  std::mutex::unlock();
  FUN_100153fc6(local_78,*param_3);
  uVar2 = (**(code **)(*param_1 + 0x138))(param_1,local_78,local_98,param_2);
  lVar4 = FUN_100156d72();
  plVar6 = *(long **)(lVar4 + 200);
  FUN_1001a7a9e(local_d0,local_78);
  FUN_100153ec0(local_c0,*param_3);
  local_a8 = 0;
  plStack_a0 = (long *)0x0;
  local_b0 = uVar2;
  if ((param_1[2] != 0) &&
     (plStack_a0 = (long *)std::__shared_weak_count::lock(), plStack_a0 != (long *)0x0)) {
    local_a8 = param_1[1];
  }
  local_48 = (long *)0x0;
  plVar5 = operator_new(0x40);
  *plVar5 = (long)&PTR_FUN_10083ab20;
  FUN_1001a7abe(plVar5 + 1,local_d0);
  FUN_1001a7abe(plVar5 + 3,local_c0);
  *(undefined4 *)(plVar5 + 5) = local_b0;
  plVar5[6] = local_a8;
  plVar5[7] = (long)plStack_a0;
  local_a8 = 0;
  plStack_a0 = (long *)0x0;
  local_48 = plVar5;
  (**(code **)(*plVar6 + 0x10))(plVar6,local_68);
  if (local_48 == (long *)local_68) {
    lVar4 = 0x20;
LAB_1001449f6:
    (**(code **)(*local_48 + lVar4))();
  }
  else {
    lVar4 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_1001449f6;
  }
  if (plStack_a0 != (long *)0x0) {
    LOCK();
    plVar6 = plStack_a0 + 1;
    lVar4 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_1001a8fac(local_c0);
  FUN_1001a8fac(local_d0);
  FUN_1001a8fac(local_78);
  plVar6 = local_80;
LAB_100144a4c:
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar4 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_1001a8fac(local_98);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

