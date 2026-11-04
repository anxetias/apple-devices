// name: FUN_1003c307c
// address: 1003c307c

undefined4 FUN_1003c307c(undefined4 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7a0a90;
      local_30 = 1;
      uStack_2c = 0x822;
      uStack_2a = 0x9752;
      uStack_28 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar5 = 0xffffffce;
    FUN_1001782e9(0,0);
  }
  else {
    FUN_100241e40(&local_38,param_1,param_2,0,0,0,0,0);
    plVar2 = (long *)CONCAT44(uStack_34,local_38);
    plVar3 = (long *)CONCAT26(uStack_2a,CONCAT24(uStack_2c,local_30));
    if (plVar2 == (long *)0x0) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_38 = 0x8220202;
        uStack_34 = 0x7a0a90;
        local_30 = 1;
        uStack_2c = 0x822;
        uStack_2a = 0x9774;
        uStack_28 = 0x1007c;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      uVar5 = 1000;
      FUN_1001782e9(0,0);
    }
    else {
      uVar5 = (**(code **)(*plVar2 + 0xd0))(plVar2,param_3);
    }
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

