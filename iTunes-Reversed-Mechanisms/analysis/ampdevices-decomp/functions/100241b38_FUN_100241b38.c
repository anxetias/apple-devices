// name: FUN_100241b38
// address: 100241b38

void FUN_100241b38(undefined4 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  plVar3 = DAT_1008c54d0;
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c54d0 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "sHandlerList != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
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
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_48);
    plVar3 = (long *)CONCAT44(uStack_3c,uStack_40);
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
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

