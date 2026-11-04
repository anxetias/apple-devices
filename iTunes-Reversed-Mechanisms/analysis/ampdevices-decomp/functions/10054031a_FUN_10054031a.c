// name: FUN_10054031a
// address: 10054031a

undefined4 FUN_10054031a(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)((long)param_1 + 0xfd9) == '\0') {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x6601;
      uStack_38 = 0x1007e;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar5 = 0xffffffce;
    FUN_1001782e9(0,0);
  }
  else {
    (**(code **)(*param_1 + 0xd8))(param_1,0);
    (**(code **)(*param_1 + 0x130))(&local_48,param_1,1);
    plVar2 = (long *)CONCAT44(uStack_44,local_48);
    plVar3 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
    if (plVar2 == (long *)0x0) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        local_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0x5c54;
        uStack_38 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      uVar5 = 0xffffffce;
      FUN_1001782e9(0,0);
    }
    else {
      uVar5 = (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
    }
    (**(code **)(*param_1 + 0xe0))(param_1,0);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

