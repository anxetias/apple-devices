// name: FUN_1002affcc
// address: 1002affcc

undefined4 FUN_1002affcc(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x9206;
      uStack_38 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *param_2 = 0;
    if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
       (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        local_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0x8d38;
        uStack_38 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      if (*(int *)(param_1 + 0x3c) == 0x46494c45) {
        lVar5 = *(long *)(param_1 + 200);
        uVar4 = 0;
        if (lVar5 == 0) {
          FUN_100241e02(&local_48,param_1,2,0,0,0);
          plVar2 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar2[1] = plVar2[1] + 1;
            UNLOCK();
          }
          uVar4 = FUN_1002b6ab2(param_1);
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            lVar5 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar5 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
              std::__shared_weak_count::__release_weak();
            }
          }
          plVar2 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            lVar5 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar5 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
              std::__shared_weak_count::__release_weak();
            }
          }
          lVar5 = *(long *)(param_1 + 200);
        }
        *param_2 = lVar5;
        goto LAB_1002b0138;
      }
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        local_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0x8f4a;
        uStack_38 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  uVar4 = 0xffffffce;
LAB_1002b0138:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

