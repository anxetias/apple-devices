// name: FUN_1003870d4
// address: 1003870d4

/* WARNING: Type propagation algorithm not settling */

int FUN_1003870d4(int param_1,uint param_2,long param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  int local_45c [2];
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_45c[1] = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "folderSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_45c + 1,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
  }
  local_45c[0] = 0;
  if (0x3f < param_1 - 1U) {
switchD_100387166_caseD_9:
    local_45c[0] = FUN_1005f6332(param_1,param_2,param_3);
    goto LAB_100387800;
  }
  uVar3 = param_2 & 1;
  switch(param_1) {
  case 1:
  case 2:
    uVar4 = _CFBundleGetMainBundle();
    lVar6 = FUN_100174cec(uVar4);
    FUN_10016ffd2(lVar6,param_3,local_45c);
    iVar1 = local_45c[0];
    if ((local_45c[0] != -0x80) && (local_45c[0] != 0)) {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_45c[1] = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x400;
        local_44a = (char *)CONCAT44(local_44a._4_4_,iVar1);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_45c + 1,0x12);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    }
    if ((param_1 == 1) && (local_45c[0] == 0)) {
      local_45c[0] = FUN_10017d5ba(param_3,param_3);
    }
    goto LAB_1003877f8;
  case 3:
    if ((param_2 & 1) != 0) {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_45c[1] = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = "createFolder == false";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_45c + 1,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      FUN_1001782e9(0,0);
    }
    local_45c[0] = -0x32;
    lVar5 = _CFBundleGetMainBundle();
    if (lVar5 == 0) {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_45c[1] = 0x8220202;
        local_454 = "Assertion failure (expected to be not NULL)";
        local_44c = 0x822;
        local_44a = "mainBundle";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_45c + 1,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      lVar6 = 0;
      cVar2 = FUN_1001782e9(0,0);
      if (cVar2 == '\0') goto LAB_1003877f8;
    }
    lVar6 = FUN_100174ca8(lVar5);
    if (lVar6 == 0) {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_45c[1] = 0x8220202;
        local_454 = "Assertion failure (expected to be not NULL)";
        local_44c = 0x822;
        local_44a = "resourcesDirectoryURL";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_45c + 1,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      cVar2 = FUN_1001782e9(0,0);
      if (cVar2 == '\0') {
LAB_1003877f5:
        lVar6 = 0;
        goto LAB_1003877f8;
      }
    }
    FUN_10016ffd2(lVar6,param_3,local_45c);
    iVar1 = local_45c[0];
    if ((local_45c[0] != -0x80) && (local_45c[0] != 0)) {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_44a = (char *)CONCAT44(local_44a._4_4_,iVar1);
LAB_100387a3d:
        local_44c = 0x400;
        local_454 = "Assertion failure";
        local_45c[1] = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_45c + 1,0x12);
      }
LAB_1003875d5:
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    }
    goto LAB_1003877f8;
  case 4:
    uVar8 = 0xffff8005;
    goto LAB_10038733e;
  case 5:
    uVar8 = 0xffff8003;
LAB_10038733e:
    uVar4 = 0x646c6962;
LAB_100387648:
    local_45c[0] = FUN_100193150(uVar8,uVar4,uVar3,local_45c + 1);
    pcVar7 = "iTunes";
    break;
  case 6:
    local_45c[0] = FUN_100193150(0xffff8005,0x61737570,uVar3,local_45c + 1);
    pcVar7 = "com.apple.AMPLibraryAgent";
    break;
  case 7:
    uVar8 = 0xffff8003;
    uVar4 = 0x61737570;
    goto LAB_100387648;
  case 8:
    local_45c[0] = -0x32;
    lVar5 = _CFBundleGetMainBundle();
    if (lVar5 == 0) {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_45c[1] = 0x8220202;
        local_454 = "Assertion failure (expected to be not NULL)";
        local_44c = 0x822;
        local_44a = "mainBundle";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_45c + 1,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      lVar6 = 0;
      cVar2 = FUN_1001782e9(0,0);
      if (cVar2 == '\0') goto LAB_1003877f8;
    }
    lVar6 = FUN_100174e2b(lVar5);
    if (lVar6 == 0) {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_45c[1] = 0x8220202;
        local_454 = "Assertion failure (expected to be not NULL)";
        local_44c = 0x822;
        local_44a = "pluginsDirectoryURL";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_45c + 1,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      cVar2 = FUN_1001782e9(0,0);
      if (cVar2 == '\0') goto LAB_1003877f5;
    }
    FUN_10016ffd2(lVar6,param_3,local_45c);
    iVar1 = local_45c[0];
    if ((local_45c[0] != -0x80) && (local_45c[0] != 0)) {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_44a = (char *)CONCAT44(local_44a._4_4_,iVar1);
        goto LAB_100387a3d;
      }
      goto LAB_1003875d5;
    }
LAB_1003877f8:
    FUN_10017060f(lVar6);
    goto LAB_100387800;
  default:
    goto switchD_100387166_caseD_9;
  case 0xd:
    uVar4 = 0x70646f63;
    goto LAB_1003876c2;
  case 0x10:
    uVar4 = 0x63616368;
    goto LAB_10038748b;
  case 0x23:
    uVar4 = 0x6c6f6773;
LAB_10038748b:
    local_45c[0] = FUN_100193150(0xffff8005,uVar4,uVar3,local_45c + 1);
    pcVar7 = "com.apple.AMPDevicesAgent";
    break;
  case 0x25:
    local_45c[0] = FUN_100193150(0xffff8005,0x6c6f6773,uVar3,local_45c + 1);
    pcVar7 = "iPod Updater Logs";
    break;
  case 0x26:
    local_45c[0] = FUN_100193150(0xffff8005,0x6c6f6773,uVar3,local_45c + 1);
    pcVar7 = "iPhone Updater Logs";
    break;
  case 0x27:
    local_45c[0] = FUN_100193150(0xffff8005,0x6c6f6773,uVar3,local_45c + 1);
    pcVar7 = "iPad Updater Logs";
    break;
  case 0x28:
    local_45c[0] = FUN_100193150(0xffff8005,0x6c6f6773,uVar3,local_45c + 1);
    pcVar7 = "Apple TV Updater Logs";
    break;
  case 0x29:
    local_45c[0] = FUN_100193150(0xffff8005,0x6c6f6773,uVar3,local_45c + 1);
    pcVar7 = "Apple Watch Updater Logs";
    break;
  case 0x2a:
    local_45c[0] = FUN_100193150(0xffff8005,0x6c6f6773,uVar3,local_45c + 1);
    pcVar7 = "HomePod Updater Logs";
    break;
  case 0x2b:
    local_45c[0] = FUN_100193150(0xffff8005,0x6c6f6773,uVar3,local_45c + 1);
    pcVar7 = "Mac Updater Logs";
    break;
  case 0x2c:
    local_45c[0] = FUN_100193150(0xffff8005,0x6c6f6773,uVar3,local_45c + 1);
    pcVar7 = "iBridge Updater Logs";
    break;
  case 0x30:
    uVar4 = 0xffff8005;
    goto LAB_10038766e;
  case 0x31:
    uVar4 = 0xffff8003;
LAB_10038766e:
    local_45c[0] = FUN_100193150(uVar4,0x646c6962,uVar3,local_45c + 1);
    pcVar7 = "MobileDevice";
    break;
  case 0x32:
    local_45c[0] = FUN_100193150(0xffff8005,0x61737570,uVar3,local_45c + 1);
    pcVar7 = "MobileSync";
    break;
  case 0x37:
    pcVar7 = "ProvisioningProfilesPath";
    goto LAB_1003875ea;
  case 0x3a:
    pcVar7 = "ConfigurationProfilesPath";
LAB_1003875ea:
    local_45c[0] = FUN_1005f6cc0(pcVar7,param_3);
    goto LAB_100387800;
  case 0x3e:
    uVar4 = 0x6465736b;
LAB_1003876c2:
    local_45c[0] = FUN_100193150(0xffff8005,uVar4,uVar3,param_3);
    goto LAB_100387800;
  case 0x3f:
    local_45c[0] = FUN_1003870d4(4,param_2,local_45c + 1);
    goto LAB_1003872bc;
  case 0x40:
    local_45c[0] = FUN_1005f62e8(5,param_2,local_45c + 1);
LAB_1003872bc:
    pcVar7 = "Scripts";
  }
  if (local_45c[0] == 0) {
    local_45c[0] = FUN_1005f63db(local_45c + 1,pcVar7,param_2,0,param_3,0);
  }
LAB_100387800:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_45c[0];
}

