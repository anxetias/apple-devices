// name: FUN_1004b11c8
// address: 1004b11c8

int FUN_1004b11c8(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1004b15f3();
  if (*(long *)(param_1 + 0x78) == 0) {
    plVar5 = (long *)0x0;
    iVar4 = 0;
  }
  else {
    plVar5 = (long *)std::__shared_weak_count::lock();
    iVar4 = 0;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar2 = *(long **)(param_1 + 0x70);
      iVar4 = 0;
      if (plVar2 != (long *)0x0) {
        iVar4 = (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
      }
    }
  }
  if (*(code **)(param_1 + 0x80) != (code *)0x0) {
    iVar4 = (**(code **)(param_1 + 0x80))(param_1,0x72737472,0,0,param_1 + 0x90);
  }
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0x1b8) = 1;
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar4;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

