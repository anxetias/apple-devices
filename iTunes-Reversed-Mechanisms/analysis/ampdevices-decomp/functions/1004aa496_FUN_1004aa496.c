// name: FUN_1004aa496
// address: 1004aa496

int FUN_1004aa496(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined6 local_78;
  undefined2 uStack_72;
  long *local_68;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    iVar4 = -0x3e6;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0x646e6974) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_88._0_4_ = 0x8220202;
        local_88._4_4_ = 0x7a0a90;
        local_80 = 1;
        uStack_7c = 0x822;
        uStack_7a = 0x389e;
        local_78 = 0x1007d;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
      }
      FUN_1001782e9(0,1);
      iVar4 = -999;
      goto LAB_1004aa5a1;
    }
    LOCK();
    piVar1 = (int *)(param_1 + 0x14);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 != 1) goto LAB_1004aa59f;
    local_88._0_4_ = 0x85d1f8;
    local_88._4_4_ = 1;
    local_80 = 0x4a9c2f;
    uStack_7c = 1;
    uStack_7a = 0;
    local_78 = (undefined6)param_1;
    uStack_72 = (undefined2)((ulong)param_1 >> 0x30);
    local_58 = 0;
    uStack_50 = 0;
    uStack_49 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = (long *)0x0;
    local_68 = &local_88;
    FUN_10017869a(&local_88);
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      lVar5 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_68 == &local_88) {
      lVar5 = 0x20;
LAB_1004aa594:
      (**(code **)(*local_68 + lVar5))();
    }
    else {
      lVar5 = 0x28;
      if (local_68 != (long *)0x0) goto LAB_1004aa594;
    }
    iVar4 = 1;
  }
LAB_1004aa59f:
  iVar4 = iVar4 + -1;
LAB_1004aa5a1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

