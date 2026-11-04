// name: FUN_100504891
// address: 100504891

undefined4 FUN_100504891(undefined8 param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = FUN_1004de449();
  if (lVar5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0x45f;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    if (*(long *)(param_2 + 2) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_2 + 2) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    uVar4 = FUN_1001fe9ce(lVar5,2,&local_48);
    plVar1 = (long *)CONCAT44(uStack_3c,uStack_40);
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      lVar5 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

