// name: FUN_1005b21b6
// address: 1005b21b6

void FUN_1005b21b6(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 local_68 [16];
  undefined8 *local_58;
  long *local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mDataPacker != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_10032602e(&local_58,param_2,1);
    if (local_58 != (undefined8 *)0x0) {
      uVar5 = FUN_1003c5880();
      cVar4 = _os_log_type_enabled(uVar5,1);
      if (cVar4 != '\0') {
        pcVar3 = *(char **)(param_2 + 0x60);
        FUN_100486d8f(local_68,param_2);
        local_3a = (char *)FUN_1001b83ae(local_68);
        local_48 = 0x8000202;
        local_3c = 0x820;
        local_44 = pcVar3;
        __os_log_impl(0x100000000,uVar5,1,"ch> PLAYLIST: (new) %llx \'%s\'",&local_48,0x16);
        FUN_1001b7a50(local_68);
      }
      *(undefined1 *)(local_58 + 4) = 1;
      (**(code **)*local_58)(&local_48);
      FUN_1005b1798(*(undefined8 *)(param_1 + 0x28),&local_48);
      FUN_1001a8fac(&local_48);
    }
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

