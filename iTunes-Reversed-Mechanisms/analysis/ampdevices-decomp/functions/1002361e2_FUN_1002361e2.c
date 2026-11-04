// name: FUN_1002361e2
// address: 1002361e2

int FUN_1002361e2(long param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(long *)(param_2 + 2) == 0) || (*(long *)(*(long *)(param_2 + 2) + 8) == -1)) {
    uVar9 = FUN_1001cc310();
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    cVar7 = _os_log_type_enabled(uVar9,0x10);
    if (cVar7 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inExecutionDelegate.expired() == false";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
    FUN_1001782e9(0,0);
    iVar8 = -0x32;
    goto LAB_10023635a;
  }
  iVar8 = FUN_1001e9c3e(param_1 + 0x40);
  if (iVar8 == 0) {
    iVar8 = FUN_1001e8dd6(param_1 + 0xd8,1,0);
    if (iVar8 == 0) {
      uVar3 = *param_2;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      if (*(long *)(param_2 + 2) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(param_2 + 2) + 0x10);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      lVar2 = *(long *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x18) = uVar3;
      *(undefined4 *)(param_1 + 0x1c) = uVar4;
      *(undefined4 *)(param_1 + 0x20) = uVar5;
      *(undefined4 *)(param_1 + 0x24) = uVar6;
      iVar8 = 0;
      if (lVar2 != 0) {
        std::__shared_weak_count::__release_weak();
      }
      goto LAB_10023635a;
    }
    uVar9 = FUN_100235e52();
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    cVar7 = _os_log_type_enabled(uVar9,0x10);
    if (cVar7 != '\0') {
      local_44 = (char *)FUN_1001b83ae(param_1 + 0x28);
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar8);
      pcVar10 = 
      "**ERROR**: CreateLockedCompletion(mNonPreemptiveCompletion) failed! ccp:%{public}s status:%d"
      ;
      goto LAB_10023633e;
    }
  }
  else {
    uVar9 = FUN_100235e52();
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    cVar7 = _os_log_type_enabled(uVar9,0x10);
    if (cVar7 != '\0') {
      local_44 = (char *)FUN_1001b83ae(param_1 + 0x28);
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar8);
      pcVar10 = "**ERROR**: CreateLock() failed! ccp:%{public}s status:%d";
LAB_10023633e:
      local_3c = 0x400;
      local_48 = 0x8220202;
      __os_log_impl(0x100000000,uVar9,0x10,pcVar10,&local_48,0x12);
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar9);
LAB_10023635a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

