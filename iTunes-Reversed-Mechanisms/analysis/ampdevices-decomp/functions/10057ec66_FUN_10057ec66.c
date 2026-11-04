// name: FUN_10057ec66
// address: 10057ec66

void FUN_10057ec66(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long local_58;
  long *local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10057e14a(&local_58,param_1);
  if (local_58 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be not NULL)";
      local_3c = 0x822;
      local_3a = "deletedObjectsTracker";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar2 = FUN_1001782e9(0,0);
    if (cVar2 == '\0') goto LAB_10057ecdb;
  }
  FUN_1003cfebc(local_58,7,0,*(undefined8 *)(param_2 + 0x18));
LAB_10057ecdb:
  plVar5 = *(long **)(param_1 + 0xd8);
  plVar1 = *(long **)(param_1 + 0xe0);
  if (plVar5 == plVar1) {
LAB_10057ed02:
    if (plVar5 != plVar1) {
      lVar4 = (long)plVar1 - (long)(plVar5 + 2);
      if (lVar4 != 0) {
        _memmove(plVar5,plVar5 + 2,lVar4 - 3);
      }
      *(long *)(param_1 + 0xe0) = (long)plVar5 + lVar4;
    }
  }
  else {
    do {
      if (*plVar5 == *(long *)(param_2 + 0x18)) goto LAB_10057ed02;
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar1);
  }
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    lVar4 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*local_50 + 0x10))(local_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

