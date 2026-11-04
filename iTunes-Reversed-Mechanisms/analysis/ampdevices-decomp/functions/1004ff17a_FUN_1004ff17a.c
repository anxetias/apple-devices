// name: FUN_1004ff17a
// address: 1004ff17a

void FUN_1004ff17a(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "allDevicesDict != nullptr";
LAB_1004ff52a:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    lVar3 = FUN_1001736b8(DAT_1008c4d90,0,&cf__016llX,*(undefined8 *)(param_1 + 0x38));
    if (lVar3 != 0) {
      lVar4 = FUN_100166b7f(param_2,lVar3);
      if (lVar4 == 0) {
        lVar4 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      }
      else {
        lVar4 = FUN_100171413(DAT_1008c4d90,0,lVar4);
      }
      if (lVar4 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "deviceDict != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        lVar4 = 0;
        FUN_1001782e9(0,0);
        goto LAB_1004ff4d3;
      }
      FUN_100171502(lVar4,&cf_ID,lVar3);
      FUN_100168746(lVar4,&cf_FirmwareVersion,*(undefined2 *)(param_1 + 0x48),0);
      FUN_100168746(lVar4,&cf_SoftwareVersion,*(undefined4 *)(param_1 + 0x58),0);
      FUN_100168746(lVar4,&cf_FamilyID,*(undefined4 *)(param_1 + 0x284),0);
      if (*(int *)(param_1 + 0x66b0) == 0x69506f64) {
        FUN_100168746(lVar4,&cf_UpdaterFamilyID,*(undefined4 *)(param_1 + 0x5c),0);
      }
      else {
        FUN_100171552(lVar4,&cf_UpdaterFamilyID);
        FUN_10016843e(lVar4,&cf_ProductType,param_1 + 0x106,0);
        FUN_10016843e(lVar4,&cf_BuildVersion,param_1 + 0xc6,0);
      }
      iVar2 = *(int *)(param_1 + 0x66b0);
      if (iVar2 < 0x69506f64) {
        if (iVar2 == 0x69506164) {
          pcVar6 = &cf_iPad;
        }
        else {
          if (iVar2 != 0x6950686e) goto LAB_1004ff3a1;
          pcVar6 = &cf_iPhone;
        }
      }
      else {
        pcVar6 = &cf_iPod;
        if ((iVar2 != 0x69506f64) && (iVar2 != 0x69506f74)) {
LAB_1004ff3a1:
          pcVar6 = (cfstringStruct *)0x0;
        }
      }
      FUN_100171502(lVar4,&cf_DeviceClass,pcVar6);
      iVar2 = FUN_100167d23(lVar4,&cf_UseCount);
      FUN_100168746(lVar4,&cf_UseCount,(long)(iVar2 + 1),0);
      FUN_10016843e(lVar4,&cf_RegionInfo,param_1 + 0x6208,0);
      FUN_10016843e(lVar4,&cf_SerialNumber,param_1 + 0x144,0);
      FUN_10016843e(lVar4,&cf_IMEI,param_1 + 0x6230,0);
      FUN_10016843e(lVar4,&cf_MEID,param_1 + 0x6290,0);
      FUN_10016843e(lVar4,&cf_IMEI2,param_1 + 0x62d0,0);
      FUN_10016843e(lVar4,&cf_FirmwareVersionString,param_1 + 0x66,0);
      if (*(char *)(param_1 + 0x36a) != '\0') {
        FUN_100168746(lVar4,&cf_GamesPlatformID,*(undefined4 *)(param_1 + 0x6654),0);
        FUN_100168746(lVar4,&cf_GamesPlatformVersion,*(undefined4 *)(param_1 + 0x6658),0);
      }
      FUN_1001711e2();
      FUN_10016909e(lVar4,&cf_Connected);
      FUN_1004ff5a7(param_1,lVar4);
      FUN_100171502(param_2,lVar3,lVar4);
      goto LAB_1004ff4d3;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "deviceIDStr != nullptr";
      goto LAB_1004ff52a;
    }
  }
  lVar3 = 0;
  FUN_1001782e9(0,0);
  lVar4 = 0;
LAB_1004ff4d3:
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

