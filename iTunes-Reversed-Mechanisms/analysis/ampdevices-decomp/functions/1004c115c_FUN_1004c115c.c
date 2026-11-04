// name: FUN_1004c115c
// address: 1004c115c

int FUN_1004c115c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x4f0) == 0) {
    FUN_1004c3f8e(param_1);
  }
  plVar3 = *(long **)(param_1 + 0x4f8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
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
  if (*(long *)(param_1 + 0x4f0) == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mCoreMediaItem != __null";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
  }
  else {
    iVar5 = FUN_1004406ae(*(long *)(param_1 + 0x4f0),1,0);
    if (iVar5 != -0x80) {
      if (iVar5 == 0) {
        iVar5 = FUN_100445f2a(*(undefined8 *)(param_1 + 0x4f0),param_2);
        if ((iVar5 == -0x80) || (iVar5 == 0)) goto LAB_1004c12a3;
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 == '\0') goto LAB_1004c12a3;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar5);
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 == '\0') goto LAB_1004c12a3;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar5);
      }
      local_3c = 0x400;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
LAB_1004c12a3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

