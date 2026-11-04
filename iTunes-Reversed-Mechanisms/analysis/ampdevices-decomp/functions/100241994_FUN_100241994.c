// name: FUN_100241994
// address: 100241994

void FUN_100241994(undefined4 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar7 = (long *)CONCAT44(DAT_1008c54d0._4_4_,(undefined4)DAT_1008c54d0);
  if (plVar7 == (long *)0x0) {
    FUN_100457986(&local_38,1);
    uVar4 = uStack_30;
    DAT_1008c54d0._4_4_ = uStack_34;
    DAT_1008c54d0._0_4_ = local_38;
    uVar3 = CONCAT22(uStack_2a,uStack_2c);
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_2a = 0;
    plVar7 = (long *)CONCAT44(DAT_1008c54d8._4_4_,(undefined4)DAT_1008c54d8);
    DAT_1008c54d8._0_4_ = uVar4;
    DAT_1008c54d8._4_4_ = uVar3;
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar7 = (long *)CONCAT26(uStack_2a,CONCAT24(uStack_2c,uStack_30));
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar7 = (long *)CONCAT44(DAT_1008c54d0._4_4_,(undefined4)DAT_1008c54d0);
    if (plVar7 == (long *)0x0) {
      uVar6 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar6,0x10);
      if (cVar5 != '\0') {
        local_38 = 0x8220202;
        uStack_34 = 0x7a0a90;
        uStack_30 = 1;
        uStack_2c = 0x822;
        uStack_2a = 0x2cf1;
        uStack_28 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_100241ab6;
    }
  }
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  if (*(long *)(param_1 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  (**(code **)(*plVar7 + 8))(plVar7,&local_48);
  plVar7 = (long *)CONCAT44(uStack_3c,uStack_40);
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_100241ab6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

