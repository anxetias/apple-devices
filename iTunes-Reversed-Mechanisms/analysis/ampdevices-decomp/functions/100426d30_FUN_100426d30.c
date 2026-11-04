// name: FUN_100426d30
// address: 100426d30

int FUN_100426d30(int *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long *local_48;
  long *plStack_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_48 = (long *)0x0;
  plStack_40 = (long *)0x0;
  if (*param_1 == 0x49443343) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    FUN_100203686(&local_48,param_1 + 2);
    iVar4 = FUN_100426c81(param_1);
    if (iVar4 == 0) {
      if (local_48 == (long *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (**(code **)(*local_48 + 0xf0))(local_48,uVar5);
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = (char *)CONCAT44(local_2a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "connection->magic == \'ID3C\'";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    iVar4 = -0x32;
    FUN_1001782e9(0,0);
  }
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

