// name: FUN_1005f9507
// address: 1005f9507

int FUN_1005f9507(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "gameInfo != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1005f9893;
  }
  *param_2 = 0;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "manifestDictionary != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = 0x4b1;
    goto LAB_1005f9893;
  }
  lVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "gameInfoDictionary != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
    goto LAB_1005f9893;
  }
  iVar2 = FUN_1005f6d4d(param_1,&cf_GUID,&local_50);
  if (iVar2 == 0) {
    FUN_100168746(lVar3,PTR_cf_GUID_10088fbf0,local_50,1);
    uVar4 = FUN_100166c1b(param_1,&cf_Name);
    FUN_100171502(lVar3,&cf_Name,uVar4);
    lVar5 = FUN_100166b7f(param_1,&cf_LocalizedNames);
    if (lVar5 != 0) {
      FUN_100171502(lVar3,&cf_LocalizedNames,lVar5);
    }
    lVar5 = FUN_100166c1b(param_1,&cf_Version);
    if (lVar5 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "gameVersion != nullptr";
LAB_1005f9977:
        local_3c = 0x822;
        uStack_40 = 1;
        uStack_44 = 0x7a0a90;
        local_48 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
    }
    else {
      FUN_100171502(lVar3,&cf_Version,lVar5);
      lVar5 = FUN_100166844(param_1,&cf_Platforms);
      if (lVar5 != 0) {
        FUN_100171502(lVar3,&cf_Platforms,lVar5);
        iVar2 = FUN_1005f6d4d(param_1,&cf_Supersede,&local_48);
        if (iVar2 == 0) {
          FUN_100168746(lVar3,&cf_SupersedeGUID,CONCAT44(uStack_44,local_48),0);
        }
        lVar5 = FUN_100166c1b(param_1,&cf_UserDataPath);
        if (lVar5 != 0) {
          FUN_100171502(lVar3,&cf_UserDataPath,lVar5);
          uVar4 = FUN_100166c1b(param_1,&cf_SampleDataPath);
          FUN_100171502(lVar3,&cf_SampleDataPath,uVar4);
        }
        FUN_100171502(lVar3,&cf_IsBuiltIn,*(undefined8 *)PTR__kCFBooleanFalse_10082e030);
        *param_2 = lVar3;
        iVar2 = 0;
        goto LAB_1005f9893;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "gamePlatforms != nullptr";
        goto LAB_1005f9977;
      }
    }
    FUN_1001782e9(0,0);
    iVar2 = 0x4b1;
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
  FUN_10017060f(lVar3);
LAB_1005f9893:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

