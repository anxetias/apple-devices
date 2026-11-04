// name: FUN_1002f90cd
// address: 1002f90cd

long * FUN_1002f90cd(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = 0;
  uStack_50 = (long *)0x0;
  lVar7 = *(long *)(param_2 + 0x2758);
  if (lVar7 == 0) {
    FUN_10037b1be(&local_48,0);
    uVar5 = uStack_40;
    uVar4 = uStack_44;
    uVar3 = local_48;
    plVar1 = uStack_50;
    uVar2 = CONCAT22(uStack_3a,uStack_3c);
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_3a = 0;
    local_58 = CONCAT44(uVar4,uVar3);
    uStack_50 = (long *)CONCAT44(uVar2,uVar5);
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar11 = plVar1 + 1;
      lVar7 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar1 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar11 = plVar1 + 1;
      lVar7 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_58 == 0) {
      uVar8 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      if (cVar6 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0xe47a;
        uStack_38 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_1002f9255;
    }
    lVar7 = FUN_1002f930c(param_2);
    for (; lVar7 != 0; lVar7 = FUN_1002f9451(lVar7)) {
      plVar1 = *(long **)(lVar7 + 0x68);
      plVar11 = plVar1;
      if (plVar1 != (long *)0x0) {
        do {
          if ((*(byte *)(*plVar11 + 0x240) & 4) != 0) goto LAB_1002f91ea;
          plVar10 = plVar11 + 10;
          plVar9 = plVar1;
          plVar11 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
        do {
          plVar11 = plVar9;
          if ((*(byte *)((long)plVar9 + 0x61) & 8) != 0) goto LAB_1002f91ea;
          plVar11 = plVar9 + 10;
          plVar10 = plVar1;
          plVar9 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
        do {
          plVar11 = plVar10;
          if ((*(byte *)(*plVar10 + 0x298) & 1) == 0) break;
          plVar9 = plVar10 + 10;
          plVar11 = plVar1;
          plVar10 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
LAB_1002f91ea:
        *(byte *)((long)plVar11 + 0x61) = *(byte *)((long)plVar11 + 0x61) | 8;
        FUN_10037b52e(local_58);
      }
    }
    FUN_100203686((long *)(param_2 + 0x2758),&local_58);
    lVar7 = *(long *)(param_2 + 0x2758);
  }
  *param_1 = lVar7;
  lVar7 = *(long *)(param_2 + 0x2760);
  param_1[1] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + 1;
    UNLOCK();
  }
LAB_1002f9255:
  if (uStack_50 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_50 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*uStack_50 + 0x10))(uStack_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

