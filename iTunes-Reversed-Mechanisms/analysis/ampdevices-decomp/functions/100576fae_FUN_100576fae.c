// name: FUN_100576fae
// address: 100576fae

undefined4 FUN_100576fae(long param_1,undefined4 *param_2)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulong local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = 0;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  if (*(long *)(param_2 + 2) != 0) {
    LOCK();
    plVar6 = (long *)(*(long *)(param_2 + 2) + 8);
    *plVar6 = *plVar6 + 1;
    UNLOCK();
  }
  plVar6 = *(long **)(param_1 + 0x18);
  if (plVar6 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mDestDataHandler != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar3 = 0x20c2;
    FUN_1001782e9(0,0);
  }
  else {
    lVar4 = (**(code **)(*plVar6 + 0x1a0))(plVar6,&local_50);
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "buffer != __null";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      uVar3 = 0x20c3;
      FUN_1001782e9(0,0);
    }
    else {
      plVar6 = (long *)CONCAT44(uStack_64,local_68);
      if (plVar6 == (long *)0x0) {
        FUN_100203686(&local_68,param_1 + 8);
        plVar6 = (long *)CONCAT44(uStack_64,local_68);
      }
      uVar3 = (**(code **)(*plVar6 + 0x98))(plVar6,0,lVar4,local_50 & 0xffffffff,1,0);
    }
  }
  plVar6 = (long *)CONCAT44(uStack_5c,uStack_60);
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

