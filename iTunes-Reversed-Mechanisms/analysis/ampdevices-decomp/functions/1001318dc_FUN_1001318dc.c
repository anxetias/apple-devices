// name: FUN_1001318dc
// address: 1001318dc

void FUN_1001318dc(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long *plStack_60;
  long local_58;
  long *plStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  undefined4 local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  plStack_60 = (long *)0x0;
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar7 = 0;
  }
  else {
    plStack_60 = (long *)std::__shared_weak_count::lock();
    if (plStack_60 == (long *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x20);
    }
  }
  local_58 = 0;
  plStack_50 = (long *)0x0;
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (plVar3 = (long *)std::__shared_weak_count::lock(), plStack_50 = plVar3, plVar3 == (long *)0x0)
     ) {
    plVar3 = (long *)0x0;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
    local_58 = lVar6;
  }
  if (lVar7 == 0) {
    uVar4 = FUN_10012d63e();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 == '\0') goto LAB_100131a56;
    local_44 = FUN_1001b83ae(param_1 + 0x30);
    local_3a = *(undefined4 *)(param_1 + 0x40);
    pcVar5 = 
    "Scheduler was destroyed. Cannot continue request %{public}s(%d) after custom requirements were satisfied."
    ;
  }
  else {
    if ((lVar6 != 0) && (cVar2 = FUN_100144532(), cVar2 == '\0')) {
      if (*param_2 == 0) {
        FUN_10012e8c2(lVar7,&local_58,*(uint *)(param_1 + 0x18) | 4);
      }
      else {
        FUN_10012fd0a(lVar7,&local_58,param_2);
      }
      goto LAB_100131a56;
    }
    uVar4 = FUN_10012d63e();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 == '\0') goto LAB_100131a56;
    local_44 = FUN_1001b83ae(param_1 + 0x30);
    local_3a = *(undefined4 *)(param_1 + 0x40);
    pcVar5 = 
    "Request %{public}s(%d) was cancelled. Cannot continue after custom requirements were satisfied."
    ;
  }
  local_3c = 0x400;
  local_48 = 0x8220202;
  __os_log_impl(0x100000000,uVar4,0x10,pcVar5,&local_48,0x12);
LAB_100131a56:
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
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar3 = plStack_60 + 1;
    lVar7 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

