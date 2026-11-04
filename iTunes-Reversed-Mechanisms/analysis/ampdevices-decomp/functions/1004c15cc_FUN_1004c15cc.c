// name: FUN_1004c15cc
// address: 1004c15cc

undefined8 FUN_1004c15cc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = 0xfffffffc;
  if (*(int *)((long)param_1 + 0x1c) == 0x46494c45) {
    (**(code **)(*param_1 + 0x310))(param_1,0);
    if ((long *)param_1[0xaa] == (long *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar5,0x10);
      if (cVar4 != '\0') {
        local_38 = 0x8220202;
        uStack_34 = 0x7a0a90;
        local_30 = 1;
        uStack_2c = 0x822;
        uStack_2a = 0x53bb;
        uStack_28 = 0x1007d;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
      uVar5 = 0xffffffce;
    }
    else {
      (**(code **)(*(long *)param_1[0xaa] + 0xf0))(&local_38);
      FUN_100217418(param_2,&local_38);
      plVar3 = (long *)CONCAT26(uStack_2a,CONCAT24(uStack_2c,local_30));
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
      uVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

