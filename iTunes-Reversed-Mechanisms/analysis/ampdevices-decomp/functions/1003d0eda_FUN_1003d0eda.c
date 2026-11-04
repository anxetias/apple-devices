// name: FUN_1003d0eda
// address: 1003d0eda

undefined8 FUN_1003d0eda(undefined4 param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  long local_4e8;
  long *plStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  char *local_4a4;
  undefined2 local_49c;
  undefined8 local_49a;
  void *local_490;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4d8 = (long *)0x0;
  uStack_4d0 = (long *)0x0;
  local_4e8 = 0;
  plStack_4e0 = (long *)0x0;
  FUN_1001c62d9(&local_4a8,0x468);
  local_4ac = param_3;
  local_4a8 = param_1;
  _memcpy(&local_4a4,param_2,0x460);
  FUN_10043dd98(&local_4f8,&local_4a8);
  plVar4 = uStack_4f0;
  lVar3 = local_4f8;
  if (local_4f8 == 0) {
    uVar10 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar10,0x10);
    if (cVar9 != '\0') {
      local_49a = "coreMediaItem != __null";
LAB_1003d1218:
      local_49c = 0x822;
      local_4a4 = "Assertion failure";
      local_4a8 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_4a8,0x16);
    }
  }
  else {
    if (uStack_4f0 != (long *)0x0) {
      LOCK();
      uStack_4f0[1] = uStack_4f0[1] + 1;
      UNLOCK();
    }
    local_4c8 = 0;
    uStack_4c0 = (long *)0x0;
    FUN_1001c62d9(&local_4a8,0x50);
    local_49a._0_6_ = CONCAT42(param_1,(undefined2)local_49a);
    local_4e8 = lVar3;
    plStack_4e0 = plVar4;
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar4[1] = plVar4[1] + 1;
      UNLOCK();
    }
    local_490 = param_2;
    FUN_100540dbf(&local_4f8,&local_4a8,&local_4e8);
    plVar1 = uStack_4f0;
    lVar3 = local_4f8;
    local_4c8._4_4_ = local_4f8._4_4_;
    uStack_4c0._4_4_ = uStack_4f0._4_4_;
    local_4f8 = 0;
    uStack_4f0 = (long *)0x0;
    local_4c8._0_4_ = (undefined4)lVar3;
    uStack_4c0._0_4_ = SUB84(plVar1,0);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar8 = uStack_4c0._4_4_;
    uVar7 = (undefined4)uStack_4c0;
    uVar6 = local_4c8._4_4_;
    uVar5 = (undefined4)local_4c8;
    plVar1 = uStack_4d0;
    local_4c8 = 0;
    uStack_4c0 = (long *)0x0;
    local_4d8 = (long *)CONCAT44(uVar6,uVar5);
    uStack_4d0 = (long *)CONCAT44(uVar8,uVar7);
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
    if (uStack_4c0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_4c0 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*uStack_4c0 + 0x10))(uStack_4c0);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_4d8 != (long *)0x0) {
      uVar10 = (**(code **)(*local_4d8 + 0x108))(local_4d8,local_4ac,param_4);
      goto LAB_1003d116e;
    }
    uVar10 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar10,0x10);
    if (cVar9 != '\0') {
      local_49a = "metaDataHandler != __null";
      goto LAB_1003d1218;
    }
  }
  uVar10 = 0;
  FUN_1001782e9(0,0);
LAB_1003d116e:
  if (uStack_4d0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_4d0 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*uStack_4d0 + 0x10))(uStack_4d0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

