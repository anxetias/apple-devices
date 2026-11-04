// name: FUN_1002b646f
// address: 1002b646f

long FUN_1002b646f(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x8d38;
      uStack_38 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    lVar8 = 0;
    FUN_1001782e9(0,0);
    goto LAB_1002b654b;
  }
  if (*(int *)(param_1 + 0x3c) != 0x46494c45) {
    lVar8 = 0;
    goto LAB_1002b654b;
  }
  uVar5 = 0;
  FUN_100241e02(&local_48,param_1,2,0,0,0,0,0);
  plVar3 = (long *)CONCAT44(uStack_44,local_48);
  plVar7 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
  if (plVar3 == (long *)0x0) {
    lVar8 = 0;
  }
  else {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_3a = 0;
    (**(code **)(*plVar3 + 0x40))();
    if (CONCAT44(uStack_44,local_48) == 0) {
LAB_1002b651e:
      lVar8 = 0;
    }
    else {
      lVar8 = CONCAT44(uStack_44,local_48) + 0x20;
      cVar4 = FUN_1001b8428(lVar8);
      if (cVar4 != '\0') goto LAB_1002b651e;
      lVar8 = FUN_1001b8d0c(lVar8);
    }
    plVar3 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (lVar8 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1003ab356(lVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1002b654b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar8;
}

