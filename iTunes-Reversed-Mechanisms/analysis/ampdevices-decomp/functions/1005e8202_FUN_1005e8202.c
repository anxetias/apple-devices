// name: FUN_1005e8202
// address: 1005e8202

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1005e8202(long param_1,long param_2,long param_3,long param_4,undefined4 param_5,int param_6
                 ,int param_7,undefined8 *param_8)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined4 local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  long local_88;
  int local_80;
  char local_79;
  uint local_78;
  char *local_74;
  undefined2 local_6c;
  char *local_6a;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_88 = param_4;
  local_80 = param_6;
  if (param_8 == (undefined8 *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_78 = 0x8220202;
      local_74 = "Assertion failure";
      local_6c = 0x822;
      local_6a = "outDevice != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1005e8306:
    iVar5 = -0x32;
    goto LAB_1005e8d35;
  }
  *param_8 = 0;
  local_90 = param_5;
  if ((char)param_5 == '\0') {
    if ((((param_3 != 0) != (param_2 != 0)) == (param_4 != 0)) ||
       (((param_3 != 0 && (param_2 != 0)) && (param_4 != 0)))) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_78 = 0x8220202;
        local_74 = "Assertion failure";
        local_6c = 0x822;
        local_6a = 
        "createProgressDevice || (((dfuDeviceRef != nullptr) ^ (recoveryDeviceRef != nullptr) ^ (restorableDeviceRef != nullptr)) && ((dfuDeviceRef == nullptr) || (recoveryDeviceRef == nullptr) || (restorableDeviceRef == nullptr)))"
        ;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1005e8306;
    }
    local_79 = param_7 != 0;
    piVar11 = *(int **)(param_1 + 0x60);
    piVar8 = piVar11;
    if (piVar11 != (int *)0x0) {
      do {
        if (piVar8[0x1a2f] - 1U < 2) {
          local_8c = 0;
          goto LAB_1005e83d2;
        }
        piVar1 = piVar8 + 0x1a1e;
        piVar8 = *(int **)piVar1;
      } while (*(int **)piVar1 != (int *)0x0);
      if (param_3 == 0) {
        do {
          cVar3 = FUN_100170633(*(undefined8 *)(piVar11 + 0x1a28),param_2);
          if (cVar3 != '\0') goto LAB_1005e852d;
          piVar11 = *(int **)(piVar11 + 0x1a1e);
        } while (piVar11 != (int *)0x0);
      }
      else {
        do {
          cVar3 = FUN_100170633(*(undefined8 *)(piVar11 + 0x1a2a),param_3);
          if (cVar3 != '\0') goto LAB_1005e852d;
          piVar11 = *(int **)(piVar11 + 0x1a1e);
        } while (piVar11 != (int *)0x0);
      }
    }
  }
  else {
    local_79 = param_7 != 0;
    if (param_7 == 0 && param_6 == 0) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_78 = 0x8220202;
        local_74 = "Assertion failure";
        local_6c = 0x822;
        local_6a = 
        "createProgressDevice == false || progressDeviceFamilyID != kIPodUnknownFamilyID || progressDeviceDeviceClassHint != kITIPodDeviceClassUnknown"
        ;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  piVar8 = (int *)FUN_1001c6429(0x68e8);
  if (piVar8 == (int *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_78 = 0x8220202;
      local_74 = "Assertion failure";
      local_6c = 0x822;
      local_6a = "device != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x6c;
    goto LAB_1005e8594;
  }
  piVar8[0x1a20] = 0x72776970;
  iVar5 = FUN_1001ea5dc();
  piVar8[0x1a21] = iVar5;
  *(bool *)(piVar8 + 1) = param_7 != 0x69506f64;
  *(char *)((long)piVar8 + 5) = (char)local_90;
  piVar8[0xbe] = -1;
  piVar8[0xbf] = -1;
  uVar7 = FUN_1005f2dc9(param_1 + 0x60,piVar8);
  local_8c = (undefined4)CONCAT71((int7)((ulong)uVar7 >> 8),1);
LAB_1005e83d2:
  lVar9 = FUN_1001705fc(param_2);
  plVar2 = (long *)(piVar8 + 0x1a28);
  FUN_10017060f(*plVar2);
  *plVar2 = lVar9;
  uVar7 = FUN_1001705fc(param_3);
  FUN_10017060f(*(undefined8 *)(piVar8 + 0x1a2a));
  *(undefined8 *)(piVar8 + 0x1a2a) = uVar7;
  lVar9 = FUN_1001705fc(local_88);
  FUN_10017060f(*(long *)(piVar8 + 0x1a2c));
  *(long *)(piVar8 + 0x1a2c) = lVar9;
  if (*plVar2 == 0) {
    if (*(long *)(piVar8 + 0x1a2a) == 0) {
      if (lVar9 == 0) goto LAB_1005e84e4;
      iVar5 = _AMRestorableDeviceGetProductType(local_88);
      iVar6 = _AMRestorableDeviceGetState(local_88);
      if (iVar6 == 1) {
        piVar8[0xba] = iVar5;
        *(undefined2 *)(piVar8 + 0xbb) = 0;
        piVar8[0xbc] = 0;
        piVar8[0xbd] = 0;
LAB_1005e896c:
        lVar9 = 0;
      }
      else {
        piVar8[0xba] = 0;
        *(undefined2 *)(piVar8 + 0xbb) = 0;
        piVar8[0xbc] = 0;
        piVar8[0xbd] = iVar5;
        lVar9 = _AMRestorableDeviceCopySerialNumber(local_88);
        if (lVar9 == 0) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_78 = 0x8220202;
            local_74 = "Assertion failure";
            local_6c = 0x822;
            local_6a = "serialNumberString != nullptr";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_1005e896c;
        }
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar7 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        local_78 = 0x4000100;
        local_74 = (char *)CONCAT44(local_74._4_4_,iVar5);
        __os_log_impl(0x100000000,uVar7,1,"Restorable product type ID is 0x%x",&local_78,8);
      }
      uVar7 = _AMRestorableDeviceGetECID(local_88);
      *(undefined8 *)(piVar8 + 0x18ea) = uVar7;
      iVar5 = _AMRestorableDeviceGetBoardID(local_88);
      piVar8[0x18ec] = iVar5;
      iVar5 = _AMRestorableDeviceGetChipID(local_88);
      piVar8[0x18ed] = iVar5;
    }
    else {
      piVar8[0xba] = 0;
      *(undefined2 *)(piVar8 + 0xbb) = 0;
      piVar8[0xbc] = 0;
      iVar5 = _AMRecoveryModeDeviceGetProductType();
      piVar8[0xbd] = iVar5;
      lVar9 = _AMRecoveryModeDeviceCopySerialNumber(*(undefined8 *)(piVar8 + 0x1a2a));
      if (lVar9 == 0) {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_78 = 0x8220202;
          local_74 = "Assertion failure";
          local_6c = 0x822;
          local_6a = "serialNumberString != nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar7 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        local_78 = 0x4000100;
        local_74 = (char *)CONCAT44(local_74._4_4_,piVar8[0xbd]);
        __os_log_impl(0x100000000,uVar7,1,"Recovery product type ID is 0x%x",&local_78,8);
      }
      uVar7 = _AMRecoveryModeDeviceGetECID(*(undefined8 *)(piVar8 + 0x1a2a));
      *(undefined8 *)(piVar8 + 0x18ea) = uVar7;
    }
    if (lVar9 == 0) goto LAB_1005e84e4;
    cVar3 = FUN_10017393c(lVar9,piVar8 + 0xc1,0x100);
    if (cVar3 == '\0') {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_78 = 0x8220202;
        local_74 = "Assertion failure";
        local_6c = 0x822;
        local_6a = 
        "JRCFStringGetCString( serialNumberString, device->deviceInfo.userSerialNumber, sizeof( device->deviceInfo.userSerialNumber ), kCFStringEncodingUTF8 )"
        ;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  else {
    iVar5 = _AMDFUModeDeviceGetProductType();
    piVar8[0xba] = iVar5;
    uVar4 = _AMDFUModeDeviceGetProductID(*(undefined8 *)(piVar8 + 0x1a28));
    *(undefined2 *)(piVar8 + 0xbb) = uVar4;
    iVar5 = _AMDFUModeDeviceGetLocationID(*plVar2);
    piVar8[0xbc] = iVar5;
    piVar8[0xbd] = 0;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar7 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_78 = 0x4000100;
      local_74 = (char *)CONCAT44(local_74._4_4_,piVar8[0xba]);
      __os_log_impl(0x100000000,uVar7,1,"DFU product type ID is 0x%x",&local_78,8);
    }
    uVar7 = _AMDFUModeDeviceGetECID(*(undefined8 *)(piVar8 + 0x1a28));
    *(undefined8 *)(piVar8 + 0x18ea) = uVar7;
LAB_1005e84e4:
    lVar9 = 0;
  }
  if (param_7 == 0x69506f64) {
    *piVar8 = 0x69506f64;
    puVar12 = (undefined4 *)0x0;
    iVar5 = local_80;
  }
  else {
    if (local_80 == 0) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_78 = 0x8220202;
        local_74 = "Assertion failure";
        local_6c = 0x822;
        local_6a = "familyID != kIPodUnknownFamilyID";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0x400,0);
LAB_1005e86ef:
      if (piVar8[0xba] != 0) {
        lVar10 = 0;
        puVar12 = (undefined4 *)0x0;
        do {
          if (*(int *)((long)&DAT_10075c120 + lVar10) == piVar8[0xba]) {
            puVar12 = (undefined4 *)((long)&DAT_10075c120 + lVar10);
          }
          lVar10 = lVar10 + 0x18;
        } while (lVar10 != 0x1920);
        if (puVar12 != (undefined4 *)0x0) goto LAB_1005e8b64;
      }
      if (piVar8[0xbd] != 0) {
        lVar10 = 0;
        puVar12 = (undefined4 *)0x0;
        do {
          if (*(int *)((long)&DAT_10075c120 + lVar10) == piVar8[0xbd]) {
            puVar12 = (undefined4 *)((long)&DAT_10075c120 + lVar10);
          }
          lVar10 = lVar10 + 0x18;
        } while (lVar10 != 0x1920);
        if (puVar12 != (undefined4 *)0x0) goto LAB_1005e8b64;
      }
      if (local_88 == 0) {
        if ((param_7 == 0x69427269) || (param_7 == 0x4d616320)) {
          puVar12 = &local_a8;
          local_a8 = _DAT_10075da28;
          uStack_a0 = DAT_10075da30;
          local_98 = 0x100000004;
          iStack_a4 = param_7;
          uStack_9c = 24000;
          if (param_7 == 0x4d616320) {
            uStack_9c = 23000;
          }
        }
        else {
          puVar12 = (undefined4 *)&DAT_10075da28;
        }
      }
      else {
        local_78 = local_78 & 0xffffff00;
        uVar7 = _AMRestorableDeviceCopyProductString();
        local_58 = (undefined4)uVar7;
        uStack_54 = (undefined4)((ulong)uVar7 >> 0x20);
        cVar3 = FUN_10017393c(uVar7,&local_78,0x20,0x600);
        FUN_10016d588(&local_58);
        if (cVar3 == '\0') {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            local_4c = 0x822;
            local_4a = 
            "JRCFStringGetCString( CFReleaseAfterUse(AMRestorableDeviceCopyProductString(restorableDeviceRef)), productTypeCString, sizeof(productTypeCString), kCFStringEncodingASCII )"
            ;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        iVar5 = FUN_1005e8fac(&local_78);
        if (iVar5 == 0) {
          puVar12 = (undefined4 *)&DAT_10075da28;
        }
        else {
          puVar12 = &local_a8;
          local_a8 = _DAT_10075da28;
          uStack_a0 = DAT_10075da30;
          uStack_9c = DAT_10075da34;
          local_98 = 0x100000004;
          iStack_a4 = iVar5;
          if (iVar5 == 0x4d616320) {
            uStack_9c = 23000;
          }
          else {
            if (iVar5 != 0x69427269) goto LAB_1005e8b64;
            uStack_9c = 24000;
          }
        }
      }
    }
    else {
      lVar10 = 0;
      puVar12 = (undefined4 *)0x0;
      do {
        if (*(int *)((long)&DAT_10075c12c + lVar10) == local_80) {
          puVar12 = (undefined4 *)((long)&DAT_10075c120 + lVar10);
        }
        lVar10 = lVar10 + 0x18;
      } while (lVar10 != 0x1920);
      if (puVar12 == (undefined4 *)0x0) goto LAB_1005e86ef;
    }
LAB_1005e8b64:
    iVar5 = puVar12[1];
    if (iVar5 != 0) {
      iVar6 = iVar5;
      if ((char)local_90 != '\0') {
        iVar6 = param_7;
      }
      if (local_79 == '\0') {
        iVar6 = iVar5;
      }
      if (local_80 != 0) {
        iVar6 = iVar5;
      }
      *piVar8 = iVar6;
    }
    piVar8[0x1a26] = puVar12[2];
    iVar5 = puVar12[3];
  }
  piVar8[0x111] = iVar5;
  if (((char)local_90 == '\0') && (piVar8[0x1a26] == 1)) {
    if (*(long *)(piVar8 + 0x1a28) == 0) {
      if (*(long *)(piVar8 + 0x1a2a) == 0) goto LAB_1005e8c6d;
      iVar5 = _AMRecoveryModeDeviceGetSecurityEpoch();
    }
    else {
      iVar5 = _AMDFUModeDeviceGetSecurityEpoch();
    }
    piVar8[0xbf] = iVar5;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar7 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_74 = (char *)(ulong)(uint)piVar8[0xbf];
      local_78 = 0x8000100;
      __os_log_impl(0x100000000,uVar7,1,"Security epoch is %lu",&local_78,0xc);
    }
    _AMRLog(5,&cf_AMPDevicesAgent_SCEP_u,piVar8[0xbf]);
  }
LAB_1005e8c6d:
  if ((char)local_8c == '\x01' && param_7 != 0x69506f64) {
    iVar5 = puVar12[4];
    if (iVar5 == 4) {
      if (*(long *)(piVar8 + 0x1a2c) == 0) {
        bVar13 = *(long *)(piVar8 + 0x1a28) == 0;
      }
      else {
        bVar13 = piVar8[0xba] == 0;
      }
      iVar5 = bVar13 + 2;
    }
    piVar8[0x1a2e] = iVar5;
  }
  if ((*(long *)(piVar8 + 0x16a) == 0) &&
     (((lVar10 = *(long *)(piVar8 + 0x1a28), lVar10 != 0 ||
       (lVar10 = *(long *)(piVar8 + 0x1a2a), lVar10 != 0)) ||
      (lVar10 = *(long *)(piVar8 + 0x1a2c), lVar10 != 0)))) {
    *(long *)(piVar8 + 0x16a) = lVar10;
  }
  FUN_100248122(*piVar8,0,0,piVar8 + 4);
  if ((char)local_8c != '\0') {
    uVar7 = FUN_1001c156e();
    FUN_1001c6987(uVar7,0x72697061,piVar8[0x1a21],0,0);
  }
  *param_8 = piVar8;
  iVar5 = 0;
  goto LAB_1005e8d2d;
LAB_1005e852d:
  uVar7 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar7,0x10);
  if (cVar3 != '\0') {
    local_78 = 0x8220202;
    local_74 = "Assertion failure";
    local_6c = 0x822;
    local_6a = "device == nullptr";
    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
  }
  FUN_1001782e9(0,0);
  iVar5 = 0x64e - (uint)(param_3 == 0);
LAB_1005e8594:
  lVar9 = 0;
LAB_1005e8d2d:
  FUN_10017060f(lVar9);
LAB_1005e8d35:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

