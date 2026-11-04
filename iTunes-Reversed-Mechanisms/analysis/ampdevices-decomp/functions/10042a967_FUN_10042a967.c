// name: FUN_10042a967
// address: 10042a967

undefined4
FUN_10042a967(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 local_4f8 [8];
  long *local_4f0;
  undefined8 local_4e8;
  long *plStack_4e0;
  undefined1 local_4d0 [1160];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4e8 = 0;
  plStack_4e0 = (long *)0x0;
  FUN_1001c62d9(local_4d0,0x488);
  FUN_10053207e(&local_48,local_4d0,param_1,1);
  local_4f0 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
  plStack_4e0 = local_4f0;
  if (CONCAT44(uStack_44,local_48) == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x7290;
      uStack_38 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar4 = 0xffffffce;
    FUN_1001782e9(0,0);
  }
  else {
    if (local_4f0 != (long *)0x0) {
      LOCK();
      local_4f0[1] = local_4f0[1] + 1;
      UNLOCK();
    }
    uVar4 = FUN_10042db01(local_4f8,param_2,param_3,param_4);
    if (local_4f0 != (long *)0x0) {
      LOCK();
      plVar1 = local_4f0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_4f0 + 0x10))(local_4f0);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (plStack_4e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_4e0 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_4e0 + 0x10))(plStack_4e0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

