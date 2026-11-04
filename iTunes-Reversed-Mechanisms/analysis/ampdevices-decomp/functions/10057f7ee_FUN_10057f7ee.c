// name: FUN_10057f7ee
// address: 10057f7ee

void FUN_10057f7ee(undefined8 param_1,long param_2)

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
  FUN_10057e14a(&local_58,param_1);
  if (local_58 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be not NULL)";
      local_3c = 0x822;
      local_3a = "deletedObjectsTracker";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar3 = FUN_1001782e9(0,0);
    if (cVar3 == '\0') goto LAB_10057f85a;
  }
  FUN_1003cfebc(local_58,1,0,*(undefined8 *)(param_2 + 0x28));
LAB_10057f85a:
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
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

