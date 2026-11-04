// name: FUN_100480e23
// address: 100480e23

long * FUN_100480e23(long *param_1,long param_2,char param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0xcfad;
      uStack_38 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x1e0);
    if (param_3 == '\x01' && lVar4 == 0) {
      FUN_1004c4d24(&local_48);
      FUN_100217418((long *)(param_2 + 0x1e0),&local_48);
      plVar2 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar4 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          std::__shared_weak_count::__release_weak();
        }
      }
      lVar4 = *(long *)(param_2 + 0x1e0);
    }
    *param_1 = lVar4;
    lVar4 = *(long *)(param_2 + 0x1e8);
    param_1[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

