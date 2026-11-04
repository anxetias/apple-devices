// name: FUN_10041c30c
// address: 10041c30c

int FUN_10041c30c(long param_1,undefined1 *param_2,undefined8 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 local_b28;
  long *plStack_b20;
  undefined8 local_b10;
  undefined8 local_b08;
  long *local_b00;
  undefined4 local_af8;
  char *local_af4;
  undefined2 local_aec;
  char *local_aea;
  undefined1 local_8e8;
  undefined1 local_8e0 [1056];
  undefined1 local_4c0 [64];
  undefined1 local_480 [8];
  undefined1 local_478 [1056];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined1 *)0x0) {
    plVar6 = (long *)FUN_10039a28c();
    iVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((iVar4 == -0x80) || (iVar4 == 0)) goto LAB_10041c630;
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 == '\0') goto LAB_10041c630;
    local_aea = (char *)CONCAT44(local_aea._4_4_,iVar4);
LAB_10041c5e1:
    local_aec = 0x400;
    local_af4 = "Assertion failure";
    local_af8 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_af8,0x12);
    goto LAB_10041c630;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  local_b08 = param_3;
  cVar3 = FUN_100247c62(uVar2);
  if (cVar3 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_af8 = 0x8220202;
      local_af4 = "Assertion failure";
      local_aec = 0x822;
      local_aea = "IsSoftwareUpdateRestoreDeviceClass(mDeviceClass)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_af8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
    goto LAB_10041c630;
  }
  if (*(char *)(param_1 + 0x5c) == '\0') {
    local_b28 = 0;
    plStack_b20 = (long *)0x0;
    iVar4 = FUN_1002253a4(0,uVar2,param_2,1,1,&local_b28,local_478);
    if (plStack_b20 != (long *)0x0) {
      LOCK();
      plVar6 = plStack_b20 + 1;
      lVar1 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        local_b00 = plStack_b20;
        (**(code **)(*plStack_b20 + 0x10))(plStack_b20);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (iVar4 == -0x80) goto LAB_10041c630;
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 == '\0') goto LAB_10041c630;
      local_aea = (char *)CONCAT44(local_aea._4_4_,iVar4);
      goto LAB_10041c5e1;
    }
  }
  FUN_10041c242(&local_af8,param_1,param_4,param_5);
  cVar3 = *(char *)(param_1 + 0x5c);
  puVar7 = local_478;
  if (cVar3 != '\0') {
    puVar7 = param_2;
  }
  _memcpy(local_8e0,puVar7,0x420);
  local_8e8 = 0;
  if (cVar3 == '\x01') {
    iVar4 = FUN_10024a018(local_b08,local_4c0,0x20);
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = 
        "firmwareBundleSoftwareVersion.GetBuildVersionCString(params.firmwareBundleBuildVersionCString, sizeof(params.firmwareBundleBuildVersionCString)) == noErr"
        ;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  plVar6 = (long *)FUN_10039a28c();
  iVar4 = (**(code **)(*plVar6 + 0x48))(plVar6,&local_af8,&local_b10);
  if (iVar4 == -0x80) {
LAB_10041c613:
    FUN_100182d59(local_478,1);
  }
  else {
    if (iVar4 == 0) {
LAB_10041c43d:
      plVar6 = (long *)FUN_10039a28c();
      iVar4 = (**(code **)(*plVar6 + 8))(plVar6,local_b10);
      if ((iVar4 != -0x80) && (iVar4 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        goto LAB_10041c613;
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (iVar4 == 0) goto LAB_10041c43d;
    }
    if (iVar4 != 0) goto LAB_10041c613;
    iVar4 = 0;
  }
  FUN_10026340c(local_480);
LAB_10041c630:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

