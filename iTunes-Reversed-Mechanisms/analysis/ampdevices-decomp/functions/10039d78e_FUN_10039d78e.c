// name: FUN_10039d78e
// address: 10039d78e

int FUN_10039d78e(long *param_1,undefined4 *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((int)param_1[0xd3] != 0x7572646d) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be true)";
      local_3c = 0x822;
      local_3a = "updateRestoreDeviceSpec->magic == ((OSType) \'urdm\')";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar4 = FUN_1001782e9(0,1);
    if (cVar4 == '\0') {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "::UpdateRestoreDeviceSpecIsValid(&mCurrentUpdateRestoreDeviceSpec)";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      iVar5 = -0x32;
      goto LAB_10039d8f5;
    }
  }
  iVar7 = (int)param_1[0x44];
  if (iVar7 == 0) {
    iVar7 = *(int *)((long)param_1 + 0x224);
  }
  uVar6 = (**(code **)(*param_1 + 0x58))(param_1);
  FUN_1001c6987(uVar6,0x73757261,iVar7,param_3 & 2,0);
  plVar3 = (long *)param_1[0xd4];
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  if (*(long *)(param_2 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_2 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  iVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,&local_58,param_3);
  plVar3 = (long *)CONCAT44(uStack_4c,uStack_50);
  if (plVar3 != (long *)0x0) {
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
  uVar6 = (**(code **)(*param_1 + 0x58))(param_1);
  if (iVar5 == 0) {
    iVar5 = 0;
    FUN_1001c6987(uVar6,0x73757273,iVar7,0,0);
  }
  else {
    FUN_1001c6987(uVar6,0x65727573,iVar7,(long)iVar5,0);
  }
LAB_10039d8f5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

