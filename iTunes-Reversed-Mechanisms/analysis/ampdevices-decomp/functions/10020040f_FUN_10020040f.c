// name: FUN_10020040f
// address: 10020040f

int FUN_10020040f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 local_6e8;
  char *local_6e4;
  undefined2 local_6dc;
  int local_6da;
  undefined1 local_6d0 [1664];
  long *local_50;
  undefined4 local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_6d0,0x698);
  FUN_1004e17a4(param_1);
  local_6f8 = *param_5;
  uStack_6f4 = param_5[1];
  uStack_6f0 = param_5[2];
  uStack_6ec = param_5[3];
  if (*(long *)(param_5 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_5 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  iVar5 = FUN_1002005d3(local_6d0,param_1,param_2,param_3,param_4,&local_6f8);
  plVar1 = (long *)CONCAT44(uStack_6ec,uStack_6f0);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (iVar5 == 0) {
    iVar5 = FUN_1002008a6(local_6d0);
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_6e8 = 0x8220202;
      local_6e4 = "Assertion failure";
      local_6dc = 0x400;
      local_6da = iVar5;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_6e8,0x12);
    }
  }
  FUN_1004e1e68(param_1);
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_44;
  }
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_50 + 0x10))(local_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

