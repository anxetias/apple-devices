// name: FUN_10036a342
// address: 10036a342

undefined8 *
FUN_10036a342(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long local_68;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10037b1be(&local_58,0);
  if (local_58 == 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "lookupTable != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    *param_1 = 0;
    param_1[1] = 0;
    if (uStack_50 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_50 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*uStack_50 + 0x10))(uStack_50);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    local_68 = local_58;
    local_60 = uStack_50;
    if (uStack_50 != (long *)0x0) {
      LOCK();
      uStack_50[1] = uStack_50[1] + 1;
      UNLOCK();
    }
    FUN_1002426dc(param_2,param_3,param_4,1,&local_68);
    if (local_60 != (long *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar1 = uStack_50;
    if ((int)((ulong)(*(long *)(local_58 + 0x18) - *(long *)(local_58 + 0x10)) >> 3) == 0) {
      local_58 = 0;
      uStack_50 = (long *)0x0;
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
    }
    *(undefined4 *)param_1 = (undefined4)local_58;
    *(undefined4 *)((long)param_1 + 4) = local_58._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_50;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_50._4_4_;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

