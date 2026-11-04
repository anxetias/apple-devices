// name: FUN_1005fdcba
// address: 1005fdcba

void FUN_1005fdcba(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0xa0) == 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7a0a90;
      uStack_30 = 1;
      uStack_2c = 0x822;
      uStack_2a = 0x41ca;
      uStack_28 = 0x1007f;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_2a = 0;
    cVar4 = FUN_1005fd93c();
    if (cVar4 == '\0') {
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar5 = DAT_1008c7d18;
      cVar4 = _os_log_type_enabled(DAT_1008c7d18,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x4000100;
        local_44 = param_2;
        __os_log_impl(0x100000000,uVar5,0x10,
                      "**ERROR**: OnCloudTrackRedownload() failed to find clientID - %u in the delegate map!"
                      ,&local_48,8);
      }
    }
    plVar3 = (long *)CONCAT26(uStack_2a,CONCAT24(uStack_2c,uStack_30));
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
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

