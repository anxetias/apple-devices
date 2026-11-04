// name: FUN_1001fecea
// address: 1001fecea

int FUN_1001fecea(long param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long *local_90;
  undefined **local_88;
  code *local_80;
  long *local_78;
  undefined ***local_68;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar6 = (long *)FUN_1001c629e(0x38,&DAT_100711c6e);
  if (plVar6 == (long *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "context != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x6c;
    goto LAB_1001ff01b;
  }
  plVar6[3] = 0;
  plVar6[4] = 0;
  local_90 = plVar6;
  FUN_1004e17a4(param_1);
  local_a8 = *param_2;
  uStack_a4 = param_2[1];
  uStack_a0 = param_2[2];
  uStack_9c = param_2[3];
  if (*(long *)(param_2 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_2 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  if (param_1 == 0) {
LAB_1001fee26:
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_1001feea6:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_1001feecb:
    bVar3 = false;
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 == '\0') goto LAB_1001fee26;
    }
    if (*(char *)(param_1 + 0x35a) == '\0') {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_4a = "handlerData->deviceInfo.supportsBackupRestore";
        goto LAB_1001feea6;
      }
      goto LAB_1001feecb;
    }
    *local_90 = param_1;
    lVar8 = FUN_1001705fc(*(undefined8 *)(param_1 + 0x152c8));
    plVar1 = local_90;
    local_90[1] = lVar8;
    FUN_100203686(plVar6 + 3,&local_a8);
    *(undefined4 *)((long)plVar1 + 0x2c) = 0;
    iVar5 = 0;
    bVar3 = true;
  }
  plVar1 = (long *)CONCAT44(uStack_9c,uStack_a0);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar8 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (bVar3) {
    *(undefined1 *)(local_90 + 2) = 1;
    local_88 = &PTR_FUN_10083d7d0;
    local_80 = FUN_1001ff16d;
    local_78 = local_90;
    local_68 = &local_88;
    iVar5 = FUN_1001b1a89(&local_88,"EraseMobileDeviceFiber",0,0);
    if (local_68 == &local_88) {
      lVar8 = 0x20;
LAB_1001fefcc:
      (**(code **)((long)*local_68 + lVar8))();
    }
    else {
      lVar8 = 0x28;
      if (local_68 != (undefined ***)0x0) goto LAB_1001fefcc;
    }
    if (iVar5 != -0x80) {
      if (iVar5 == 0) goto LAB_1001ff01b;
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (iVar5 == 0) {
        iVar5 = 0;
        goto LAB_1001ff01b;
      }
    }
  }
  else {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  FUN_100205d70(plVar6 + 3);
  operator_delete(local_90);
  FUN_1004e1e68(param_1);
LAB_1001ff01b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

