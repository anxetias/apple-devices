// name: FUN_100130bba
// address: 100130bba

void FUN_100130bba(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long *plStack_80;
  long local_78;
  long *plStack_70;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  undefined4 local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plStack_80 = (long *)0x0;
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar7 = 0;
  }
  else {
    plStack_80 = (long *)std::__shared_weak_count::lock();
    if (plStack_80 == (long *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x20);
    }
  }
  local_78 = 0;
  plStack_70 = (long *)0x0;
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (plVar3 = (long *)std::__shared_weak_count::lock(), plStack_70 = plVar3, plVar3 == (long *)0x0)
     ) {
    plVar3 = (long *)0x0;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
    local_78 = lVar6;
  }
  if (lVar7 == 0) {
    uVar4 = FUN_10012d63e();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 == '\0') goto LAB_100130d0e;
    local_54 = FUN_1001b83ae(param_1 + 0x30);
    local_4a = *(undefined4 *)(param_1 + 0x40);
    pcVar5 = "Scheduler was destroyed. Cannot set StoreBag in request %{public}s(%d)";
  }
  else {
    if ((lVar6 != 0) && (cVar2 = FUN_100144532(lVar6), cVar2 == '\0')) {
      cVar2 = FUN_10012bbe4(param_2);
      if (cVar2 == '\0') {
        FUN_1001b7b04(&local_58,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
        FUN_1001aa38a(local_60,&local_58,0x1d4d);
        FUN_10012fd0a(lVar7,&local_78,local_60);
        FUN_1001aaad2(local_60);
        FUN_1001b7a50(&local_58);
      }
      else {
        FUN_10012bc1e(&local_58,param_2);
        FUN_100144396(lVar6,&local_58);
        FUN_1001a8fac(&local_58);
        FUN_10012e8c2(lVar7,&local_78,*(uint *)(param_1 + 0x18) | 1);
      }
      goto LAB_100130d0e;
    }
    uVar4 = FUN_10012d63e();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 == '\0') goto LAB_100130d0e;
    local_54 = FUN_1001b83ae(param_1 + 0x30);
    local_4a = *(undefined4 *)(param_1 + 0x40);
    pcVar5 = "Request %{public}s(%d) was cancelled. Cannot set bag.";
  }
  local_4c = 0x400;
  local_58 = 0x8220202;
  __os_log_impl(0x100000000,uVar4,0x10,pcVar5,&local_58,0x12);
LAB_100130d0e:
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_80 != (long *)0x0) {
    LOCK();
    plVar3 = plStack_80 + 1;
    lVar7 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

