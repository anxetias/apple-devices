// name: FUN_100483533
// address: 100483533

long * FUN_100483533(long *param_1,int *param_2,char param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (int *)0x0) {
LAB_10048361b:
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0xd05e;
      uStack_38 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (*param_2 != 0x706c7374) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7ab58c;
        local_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0x2d50;
        uStack_38 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_10048361b;
    }
    lVar5 = *(long *)(param_2 + 0x132);
    if (param_3 == '\x01' && lVar5 == 0) {
      FUN_1004c4d24(&local_48);
      FUN_100217418(param_2 + 0x132,&local_48);
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
      lVar5 = *(long *)(param_2 + 0x132);
    }
    *param_1 = lVar5;
    lVar5 = *(long *)(param_2 + 0x134);
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
      UNLOCK();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

