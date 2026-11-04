// name: FUN_10020e860
// address: 10020e860

void FUN_10020e860(long param_1,int param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  uint uVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  pcVar7 = &cf_OS_mode;
  if (param_2 != 0) {
    pcVar7 = &cf_Restore_mode;
  }
  uVar4 = FUN_1001736b8(DAT_1008c4d90,0,&cf_AMPDevicesAgent___deviceappeared_device_p,pcVar7,param_1
                       );
  _AMRLog(5,&cf___,uVar4);
  FUN_10017060f(uVar4);
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "device != nullptr";
LAB_10020eb28:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_10020ea70:
    FUN_1001782e9(0,0);
  }
  else {
    if (param_3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_4a = "thisController != nullptr";
        goto LAB_10020eb28;
      }
      goto LAB_10020ea70;
    }
    iVar2 = _AMDeviceGetInterfaceType(param_1);
    if (iVar2 != 1) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        _AMRLog(5,&cf_AMPDevicesAgent_device_pdoesn_thaveUSBinterface_ignoring,param_1);
        return;
      }
      goto LAB_10020ed3d;
    }
    cVar1 = FUN_1005ed719(param_1,0,0);
    if (cVar1 == '\0') {
      uVar8 = *(uint *)(param_3 + 0x2ad4);
      if ((uVar8 != 6) && (uVar8 != 8)) {
        _AMRLog(3,&cf_AMPDevicesAgent_Unexpectedmuxeddeviceappearedinstate_d);
        uVar8 = *(uint *)(param_3 + 0x2ad4);
      }
      if ((uVar8 < 0xc) && ((0x954U >> (uVar8 & 0x1f) & 1) != 0)) {
        if ((char)param_2 == '\0') {
          uVar4 = _CFNumberGetTypeID();
          lVar5 = 0;
          lVar6 = FUN_1005ba383(param_1,0,&cf_UniqueChipID,uVar4,0);
          if (lVar6 == 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "ecidNumber != nullptr";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            lVar5 = 0;
LAB_10020ebb3:
            lVar6 = 0;
            FUN_1001782e9(0,0);
          }
        }
        else {
          uVar3 = _AMDeviceGetConnectionID(param_1);
          _AMRLog(5,&cf_AMPDevicesAgent_CreatingrestoremodedevicewithusbMuxDeviceID__X,uVar3);
          lVar5 = _AMRestoreModeDeviceCreate(DAT_1008c4d90,uVar3,0);
          if (lVar5 == 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "restoreDeviceRef != nullptr";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            _AMRLog(3,&cf_AMPDevicesAgent_FailedtocreaterestoremodedevicewithusbMuxDeviceID__X,uVar3
                   );
            goto LAB_10020ea79;
          }
          lVar6 = _AMRestoreModeDeviceCopyEcid(lVar5);
          if (lVar6 == 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "ecidNumber != nullptr";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            goto LAB_10020ebb3;
          }
        }
        uVar4 = FUN_1001696f3(lVar6,0);
        FUN_10017060f(lVar6);
        cVar1 = FUN_10020efac(param_3,uVar4);
        if (cVar1 == '\0') {
          if (*(long *)(param_3 + 0x21d8) == 0) {
            lVar6 = 0;
LAB_10020ec2d:
            FUN_10017060f(lVar6);
          }
          else {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "thisController->mRestoreDeviceRef == nullptr";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            lVar6 = *(long *)(param_3 + 0x21d8);
            if (lVar6 != -1) goto LAB_10020ec2d;
          }
          if ((char)param_2 == '\0') {
            *(undefined8 *)(param_3 + 0x21d8) = 0xffffffffffffffff;
          }
          else {
            *(long *)(param_3 + 0x21d8) = lVar5;
          }
        }
        else {
          FUN_10017060f(lVar5);
        }
      }
    }
  }
LAB_10020ea79:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
LAB_10020ed3d:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

