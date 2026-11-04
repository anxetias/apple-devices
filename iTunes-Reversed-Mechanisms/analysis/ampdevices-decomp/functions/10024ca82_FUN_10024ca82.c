// name: FUN_10024ca82
// address: 10024ca82

undefined4
FUN_10024ca82(uint param_1,int param_2,undefined4 *param_3,undefined8 param_4,undefined4 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  undefined4 local_6c;
  int *local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if ((param_1 & 0xfffffffc) == 4) {
    if (param_3[9] == 0 && param_3[8] == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_4a = 
        "(deviceUpdaterFamilyInfo.mobileDeviceDFUProductTypeID != 0) || (deviceUpdaterFamilyInfo.mobileDeviceRecoveryProductTypeID != 0)"
        ;
        goto LAB_10024ccc5;
      }
    }
    else {
      if (param_1 == 6 || param_3[8] != 0) {
        lVar4 = FUN_1005f4b1c(*param_3);
        if (lVar4 == 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_4a = "webUpdateDictionary != nullptr";
LAB_10024cf3c:
            local_4c = 0x822;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
LAB_10024cf61:
          FUN_1001782e9(0,0);
LAB_10024cf6d:
          lVar7 = 0;
          uVar2 = 0;
          lVar5 = 0;
        }
        else {
          lVar5 = FUN_10024e6d3(lVar4,0,&local_6c);
          if (lVar5 == 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_4a = "recoverySoftwareVersionsParentDictionary != nullptr";
              goto LAB_10024cf3c;
            }
            goto LAB_10024cf61;
          }
          lVar5 = FUN_100166b7f(lVar5,&cf_RecoverySoftwareVersions);
          if (lVar5 == 0) goto LAB_10024cf6d;
          local_68 = param_3 + 8;
          if (param_1 - 5 < 3) {
            pcVar9 = &cf_CarrierInfo;
            if (param_1 != 6) {
              pcVar9 = &cf_Firmware;
            }
            pcVar10 = &cf_Recovery;
            if (param_1 != 5) {
              pcVar10 = pcVar9;
            }
            lVar5 = FUN_100166b7f(lVar5,pcVar10);
            if (lVar5 == 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_4a = "mobileDeviceModesDictionary != nullptr";
                goto LAB_10024cf3c;
              }
              goto LAB_10024cf61;
            }
            if (*local_68 != 0) {
              pcVar9 = &cf_DFU;
              goto LAB_10024cd44;
            }
            lVar5 = FUN_100166b7f(lVar5,&cf_Recovery);
            if (lVar5 == 0) goto LAB_10024ceff;
            local_68 = param_3 + 9;
          }
          else {
            pcVar9 = &cf_WTF;
LAB_10024cd44:
            lVar5 = FUN_100166b7f(lVar5,pcVar9);
            if (lVar5 == 0) {
LAB_10024ceff:
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_4a = "mobileDeviceProductTypesForSoftwareTypeDictionary != nullptr";
                goto LAB_10024cf3c;
              }
              goto LAB_10024cf61;
            }
          }
          local_60 = lVar5;
          lVar5 = FUN_1001736b8(DAT_1008c4d90,0,&cf__u,*local_68);
          if (lVar5 == 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_4a = "productTypeIDString != nullptr";
              goto LAB_10024cf3c;
            }
            goto LAB_10024cf61;
          }
          lVar6 = FUN_100166b7f(local_60,lVar5);
          if (lVar6 == 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_4a = "softwareDictionary != nullptr";
LAB_10024d084:
              local_4c = 0x822;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
LAB_10024cec7:
            lVar7 = 0;
            FUN_1001782e9(0,0);
            uVar2 = 0;
          }
          else {
            if (param_1 == 4) {
              if (param_2 == 0) {
                lVar7 = FUN_10024efd7(lVar6);
                lVar8 = FUN_100173bb7(lVar7,&cf_0,0);
                if (lVar8 == 0) {
                  FUN_10017060f(lVar7);
                }
                else {
                  if ((param_5 != (undefined4 *)0x0) &&
                     (cVar1 = FUN_100164d80(lVar7,param_5), cVar1 == '\0')) {
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x822;
                      local_4a = 
                      "JRCFTypeGetUInt32(securityEpochString, outOptionalLatestSecurityEpoch)";
                      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  if (lVar7 != 0) goto LAB_10024cffb;
                }
                lVar7 = 0;
              }
              else {
                lVar7 = FUN_1001736b8(DAT_1008c4d90,0,&cf__u,param_2);
                if (lVar7 == 0) {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 != '\0') {
                    local_4a = "securityEpochString != nullptr";
                    goto LAB_10024d084;
                  }
                  goto LAB_10024cec7;
                }
LAB_10024cffb:
                lVar6 = FUN_100166b7f(lVar6,lVar7);
                if (lVar6 == 0) {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "softwareDictionary != nullptr";
                    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  uVar2 = 0;
                  FUN_1001782e9(0,0);
                  goto LAB_10024cf72;
                }
              }
            }
            else {
              lVar7 = 0;
            }
            uVar2 = FUN_10024ebc1(lVar6,1,param_4,local_6c);
          }
        }
LAB_10024cf72:
        FUN_10017060f(lVar7);
        FUN_10017060f(lVar5);
        FUN_10017060f(lVar4);
        goto LAB_10024cb40;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_4a = 
        "(deviceSoftwareType == kDeviceSoftwareTypeCarrierInfo) || (deviceUpdaterFamilyInfo.mobileDeviceDFUProductTypeID != 0)"
        ;
        goto LAB_10024ccc5;
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = 
      "(deviceSoftwareType == kDeviceSoftwareTypeWTF) || (deviceSoftwareType == kDeviceSoftwareTypeRecovery) || (deviceSoftwareType == kDeviceSoftwareTypeCarrierInfo) || (deviceSoftwareType == kDeviceSoftwareTypeDFUFirmware)"
      ;
LAB_10024ccc5:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  uVar2 = 0;
  FUN_1001782e9(0,0);
LAB_10024cb40:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

