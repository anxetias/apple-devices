// name: FUN_10057606a
// address: 10057606a

undefined4 FUN_10057606a(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_3c = 0;
  uVar4 = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
    local_58 = *(undefined4 *)(param_1 + 8);
    uStack_54 = *(undefined4 *)(param_1 + 0xc);
    uStack_50 = *(undefined4 *)(param_1 + 0x10);
    uStack_4c = *(undefined4 *)(param_1 + 0x14);
    if (*(long *)(param_1 + 0x10) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    FUN_1005705c2(&local_38,&local_58,&local_3c);
    FUN_100217418((long *)(param_1 + 0x28),&local_38);
    plVar1 = (long *)CONCAT26(uStack_2a,CONCAT24(uStack_2c,local_30));
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar1 = (long *)CONCAT44(uStack_4c,uStack_50);
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar4 = local_3c;
    if (*(long *)(param_1 + 0x28) == 0) {
      uVar6 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar6,0x10);
      if (cVar5 != '\0') {
        local_38 = 0x8220202;
        uStack_34 = 0x7a0a90;
        local_30 = 1;
        uStack_2c = 0x822;
        uStack_2a = 0x96cc;
        uStack_28 = 0x1007e;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
      uVar4 = local_3c;
    }
  }
  local_3c = uVar4;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_3c;
}

