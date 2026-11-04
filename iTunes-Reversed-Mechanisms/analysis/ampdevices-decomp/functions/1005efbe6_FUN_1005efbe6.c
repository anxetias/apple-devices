// name: FUN_1005efbe6
// address: 1005efbe6

int FUN_1005efbe6(uint param_1,int *param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 in_stack_fffffffffffff468;
  undefined4 uVar6;
  undefined8 local_b88;
  long *plStack_b80;
  undefined8 local_b78;
  long *plStack_b70;
  undefined8 local_b60;
  undefined4 local_b58 [2];
  undefined1 local_b50 [8];
  undefined4 local_b48;
  char *local_b44;
  undefined2 local_b3c;
  char *local_b3a;
  undefined4 local_ad8;
  char *local_ad4;
  undefined2 local_acc;
  char *local_aca;
  undefined4 local_6b8 [129];
  int local_4b4;
  int local_4ac;
  undefined1 local_4a0 [1056];
  undefined1 local_80 [52];
  int local_4c;
  undefined8 local_40;
  long local_38;
  
  uVar6 = (undefined4)((ulong)in_stack_fffffffffffff468 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40 = 0;
  if ((param_2[0xbd] != 0) == (param_2[0xba] != 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_ad8 = 0x8220202;
      local_ad4 = "Assertion failure";
      local_acc = 0x822;
      local_aca = 
      "(UInt32)(device->deviceInfo.versionInfo.dfuProductTypeID != 0) + (UInt32)(device->deviceInfo.versionInfo.recoveryProductTypeID != 0) == 1"
      ;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_ad8,0x16);
    }
    iVar3 = 0x65c;
    FUN_1001782e9(0,0);
    goto LAB_1005f00a3;
  }
  if ((6 < param_1) || ((0x71U >> (param_1 & 0x1f) & 1) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_ad8 = 0x8220202;
      local_ad4 = "Assertion failure";
      local_acc = 0x822;
      local_aca = 
      "(deviceSoftwareType == kDeviceSoftwareTypeWTF) || (deviceSoftwareType == kDeviceSoftwareTypeRecovery) || (deviceSoftwareType == kDeviceSoftwareTypeCarrierInfo) || (deviceSoftwareType == kDeviceSoftwareTypeAny)"
      ;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_ad8,0x16);
    }
    iVar3 = -0x32;
    FUN_1001782e9(0,0);
    goto LAB_1005f00a3;
  }
  FUN_1001c62d9(local_6b8,0x680);
  if (param_1 != 0) {
    local_b58[0] = 0;
    FUN_1001c62d9(local_b50,8);
    FUN_100249cb6(&local_b48,param_2[0xba],param_2[0xbd],param_2[0xbe],param_2[0xbf],*param_2,
                  CONCAT44(uVar6,param_2[0x111]));
    iVar3 = FUN_1002292b2(&local_b48,param_1,param_2[0x1a30],(char)param_2[0x1a31] == '\0',
                          &local_ad8,local_b58,param_2 + 0x1a31,param_3);
    FUN_100249ea6(&local_b48);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        iVar3 = 0x69506f64;
        if (*param_2 != 0) {
          iVar3 = *param_2;
        }
        local_b88 = 0;
        plStack_b80 = (long *)0x0;
        iVar3 = FUN_1002253a4(1,iVar3,&local_ad8,0,1,&local_b88,local_4a0);
        if (plStack_b80 != (long *)0x0) {
          LOCK();
          plVar5 = plStack_b80 + 1;
          lVar1 = *plVar5;
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (lVar1 == 0) {
            (**(code **)(*plStack_b80 + 0x10))(plStack_b80);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (iVar3 != -0x80) {
          if (iVar3 == 0) {
            iVar3 = FUN_10024a018(local_b58,local_80,0x20);
            if (iVar3 != 0) {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                local_b48 = 0x8220202;
                local_b44 = "Assertion failure";
                local_b3c = 0x822;
                local_b3a = 
                "bundleSoftwareVersion.GetBuildVersionCString(deviceParams.firmwareBundleBuildVersionCString, sizeof(deviceParams.firmwareBundleBuildVersionCString)) == noErr"
                ;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_b48,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            FUN_100249fca(local_b58);
            local_4ac = param_2[0x1a21];
            local_4b4 = param_2[0x111];
            if (param_1 == 4) {
              local_4c = (param_2[0x1a2f] != 1) + 3;
            }
            else {
              local_4c = 5;
              if (1 < param_1 - 5) goto LAB_1005efe7f;
            }
            goto LAB_1005efe84;
          }
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_b3a = (char *)CONCAT44(local_b3a._4_4_,iVar3);
            goto LAB_1005f0220;
          }
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_b3a = (char *)CONCAT44(local_b3a._4_4_,iVar3);
LAB_1005f0220:
          local_b3c = 0x400;
          local_b44 = "Assertion failure";
          local_b48 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_b48,0x12);
        }
      }
    }
    FUN_100249fca(local_b58);
    goto LAB_1005f00a3;
  }
  local_4ac = param_2[0x1a21];
  local_4b4 = param_2[0x111];
LAB_1005efe7f:
  local_4c = 6;
LAB_1005efe84:
  local_6b8[0] = 2;
  plVar5 = (long *)FUN_10039a28c();
  iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5,local_6b8,&local_b60);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
LAB_1005efeda:
      plVar5 = (long *)FUN_10039a28c();
      iVar3 = (**(code **)(*plVar5 + 8))(plVar5,local_b60);
      if (iVar3 != -0x80) {
        if (iVar3 != 0) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_ad8 = 0x8220202;
            local_ad4 = "Assertion failure";
            local_acc = 0x400;
            local_aca = (char *)CONCAT44(local_aca._4_4_,iVar3);
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_ad8,0x12);
          }
          if (iVar3 != 0) goto LAB_1005eff80;
        }
        plVar5 = (long *)FUN_10039a28c();
        local_b78 = 0;
        plStack_b70 = (long *)0x0;
        iVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,&local_b78,0);
        if (plStack_b70 != (long *)0x0) {
          LOCK();
          plVar5 = plStack_b70 + 1;
          lVar1 = *plVar5;
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (lVar1 == 0) {
            (**(code **)(*plStack_b70 + 0x10))(plStack_b70);
            std::__shared_weak_count::__release_weak();
          }
        }
        if ((iVar3 == -0x80) || (iVar3 == 0)) goto LAB_1005eff80;
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_ad8 = 0x8220202;
          local_ad4 = "Assertion failure";
          local_acc = 0x400;
          local_aca = (char *)CONCAT44(local_aca._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_ad8,0x12);
        }
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_ad8 = 0x8220202;
        local_ad4 = "Assertion failure";
        local_acc = 0x400;
        local_aca = (char *)CONCAT44(local_aca._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_ad8,0x12);
      }
      if (iVar3 == 0) goto LAB_1005efeda;
LAB_1005eff80:
      if (iVar3 == 0) {
        iVar3 = 0;
        goto LAB_1005f00a3;
      }
    }
  }
  FUN_100182d59(local_4a0,1);
LAB_1005f00a3:
  FUN_10026340c(&local_40);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

