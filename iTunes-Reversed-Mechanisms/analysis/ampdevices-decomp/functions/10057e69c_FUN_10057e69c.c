// name: FUN_10057e69c
// address: 10057e69c

void FUN_10057e69c(long param_1,long param_2)

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
    if (cVar2 == '\0') goto LAB_10057e711;
  }
  FUN_1003cfebc(local_58,5,0,*(undefined8 *)(param_2 + 0x60));
LAB_10057e711:
  plVar5 = *(long **)(param_1 + 0x90);
  plVar1 = *(long **)(param_1 + 0x98);
  if (plVar5 == plVar1) {
LAB_10057e738:
    if (plVar5 != plVar1) {
      lVar4 = (long)plVar1 - (long)(plVar5 + 3);
      if (lVar4 != 0) {
        _memmove(plVar5,plVar5 + 3,lVar4 - 5);
      }
      *(long *)(param_1 + 0x98) = (long)plVar5 + lVar4;
    }
  }
  else {
    do {
      if (*plVar5 == *(long *)(param_2 + 0x60)) goto LAB_10057e738;
      plVar5 = plVar5 + 3;
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

