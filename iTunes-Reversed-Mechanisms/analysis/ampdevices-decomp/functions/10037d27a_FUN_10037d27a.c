// name: FUN_10037d27a
// address: 10037d27a

void FUN_10037d27a(long *param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 uVar9;
  long *plVar10;
  byte local_84;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10037c504(param_2);
  uVar3 = param_4 & 0xfffffffe;
  if (param_3 >= 0x7a) {
    uVar3 = param_4;
  }
  if ((param_5 & 1) != 0) {
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x6a3e;
      uStack_48 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_10037d58e(&local_58,param_2,param_3,uVar3,param_5);
  plVar10 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
  if (CONCAT44(uStack_54,local_58) == 0) {
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xe47a;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_10037b356(&local_58);
    uVar7 = uStack_50;
    uVar6 = uStack_54;
    uVar5 = local_58;
    uVar4 = CONCAT22(uStack_4a,uStack_4c);
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    local_78 = CONCAT44(uVar6,uVar5);
    uStack_70 = (long *)CONCAT44(uVar4,uVar7);
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar10 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_78 != 0) {
      local_84 = (byte)param_4;
      if ((param_3 < 0x7a & local_84) != 0) {
        FUN_10037b70a(local_78);
      }
      *param_1 = local_78;
      param_1[1] = (long)uStack_70;
      goto LAB_10037d462;
    }
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x6a86;
      uStack_48 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    *param_1 = 0;
    param_1[1] = 0;
    plVar10 = uStack_70;
  }
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10037d462:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

