// name: FUN_10014105c
// address: 10014105c

void FUN_10014105c(long *param_1)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 local_78 [16];
  long local_68;
  long *plStack_60;
  long local_58;
  long *local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  undefined4 local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = FUN_100135270();
  cVar2 = _os_log_type_enabled(uVar3,0);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0xd0))(&local_58,param_1);
    local_44 = FUN_1001b83ae(&local_58);
    local_3a = (undefined4)param_1[0x31];
    local_48 = 0x8220202;
    local_3c = 0x400;
    __os_log_impl(0x100000000,uVar3,0,"storereq> %{public}s(%d). Scheduling.",&local_48,0x12);
    FUN_1001b7a50(&local_58);
  }
  std::mutex::lock();
  *(undefined1 *)(param_1 + 0x2b) = 1;
  if (param_1[3] == 0) {
    FUN_10015095e(&local_48);
    lVar4 = FUN_100150dd2(&local_48);
    param_1[6] = lVar4;
    FUN_100150de8(&local_48);
  }
  else {
    param_1[6] = param_1[3];
  }
  std::mutex::unlock();
  lVar5 = FUN_100156d72();
  lVar4 = *(long *)(lVar5 + 0xe8);
  local_50 = *(long **)(lVar5 + 0xf0);
  if (local_50 != (long *)0x0) {
    LOCK();
    local_50[1] = local_50[1] + 1;
    UNLOCK();
  }
  local_58 = lVar4;
  if (lVar4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10014a576(uVar3);
    }
    cVar2 = FUN_1001782e9(0,0);
    if (cVar2 == '\0') {
      uVar3 = FUN_100135270();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        (**(code **)(*param_1 + 0xd0))(local_78,param_1);
        local_44 = FUN_1001b83ae(local_78);
        local_3a = (undefined4)param_1[0x31];
        local_48 = 0x8220202;
        local_3c = 0x400;
        __os_log_impl(0x100000000,uVar3,0x10,
                      "storereq> ***ERROR*** %{public}s(%d). No scheduler. Cannot schedule to send."
                      ,&local_48,0x12);
        FUN_1001b7a50(local_78);
      }
      goto LAB_100141278;
    }
  }
  local_68 = 0;
  plStack_60 = (long *)0x0;
  if (param_1[2] != 0) {
    plStack_60 = (long *)std::__shared_weak_count::lock();
    if (plStack_60 != (long *)0x0) {
      local_68 = param_1[1];
    }
  }
  FUN_10012e594(lVar4,&local_68);
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_100141278:
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*local_50 + 0x10))(local_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

