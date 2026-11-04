// name: FUN_1004c4fb0
// address: 1004c4fb0

long * FUN_1004c4fb0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long local_58;
  long *local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1004c4d24(&local_58);
  if (local_58 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "newDataDict != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    *param_1 = 0;
    param_1[1] = 0;
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
  else {
    if (*(long *)(param_2 + 0x18) != 0) {
      FUN_10017060f(*(undefined8 *)(local_58 + 0x18));
      uVar4 = FUN_100170651(*(undefined8 *)(param_2 + 0x18));
      uVar4 = FUN_100172752(uVar4,*(undefined8 *)(param_2 + 0x18),2);
      *(undefined8 *)(local_58 + 0x18) = uVar4;
    }
    if (*(long *)(param_2 + 0x20) != 0) {
      FUN_10017060f(*(undefined8 *)(local_58 + 0x20));
      uVar4 = FUN_100170651(*(undefined8 *)(param_2 + 0x20));
      uVar4 = FUN_100172752(uVar4,*(undefined8 *)(param_2 + 0x20),2);
      *(undefined8 *)(local_58 + 0x20) = uVar4;
    }
    *param_1 = local_58;
    param_1[1] = (long)local_50;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

