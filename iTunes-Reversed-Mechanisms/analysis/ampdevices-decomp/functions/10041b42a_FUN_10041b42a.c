// name: FUN_10041b42a
// address: 10041b42a

ulong FUN_10041b42a(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                   undefined8 param_5)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  void *pvVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *local_78;
  char *local_70;
  ulong local_68;
  void *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x58) == 0x6950686e) {
    local_68 = 0;
    cVar7 = FUN_10024bc99(0);
    if ((cVar7 == '\0') || (local_68 = 0, *(long *)(param_1 + 0x508) != 0)) {
      local_60 = (void *)0x0;
      uVar13 = local_68;
      goto LAB_10041b4ab;
    }
    pvVar10 = (void *)FUN_1001c629e(0x6660,&DAT_100711c6e);
    if (pvVar10 == (void *)0x0) {
      uVar9 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar9,0x10);
      if (cVar7 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "deviceInfo != nullptr";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar13 = 0xffffff94;
      goto LAB_10041b6ae;
    }
    local_60 = pvVar10;
    if (*(int *)(param_1 + 0x80) == 0) {
      uVar9 = FUN_1005e9a2c();
      iVar8 = FUN_1005e7a82(uVar9,*(undefined4 *)(param_1 + 0x84),local_60);
      if (iVar8 != -0x80) {
        if (iVar8 == 0) {
          *(undefined1 *)((long)local_60 + 0x6200) = 0;
          pcVar11 = (char *)((long)local_60 + 0x6302);
          cVar7 = '\0';
          goto LAB_10041b7a0;
        }
        uVar9 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar9,0x10);
        if (cVar7 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    else {
      pcVar11 = (char *)FUN_1004de449();
      if (pcVar11 != (char *)0x0) {
        local_70 = pcVar11;
        _memcpy(local_60,pcVar11 + 0x50,0x6660);
        cVar7 = local_70[0x151f8];
        pcVar11 = local_70 + 0x6352;
LAB_10041b7a0:
        plVar2 = (long *)(param_1 + 0x508);
        if (*pcVar11 == '\0') {
          local_70 = pcVar11;
          uVar13 = FUN_10024ae56(param_1 + 0x4c0,(long)local_60 + 0x6200,cVar7,param_4,
                                 (long)local_60 + 0x61e0,(long)local_60 + 0xf4,plVar2,param_5);
          if ((int)uVar13 == 0) {
            cVar7 = FUN_10017393c(*plVar2,local_70,0x100,0x8000100);
            if (cVar7 == '\0') {
              uVar9 = FUN_1001cc310();
              cVar7 = _os_log_type_enabled(uVar9,0x10);
              if (cVar7 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = 
                "::JRCFStringGetCString(mDeviceUpdaterFamilyInfo.mobileDeviceCarrierString, phoneCarrierFromDeviceRecord, sizeof(deviceInfo->phoneCarrier), kCFStringEncodingUTF8)"
                ;
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            uVar13 = local_68;
            if (*(int *)(param_1 + 0x84) != 0) {
              uVar9 = FUN_1005e9a2c();
              local_68 = FUN_1005e810c(uVar9,*(undefined4 *)(param_1 + 0x84),local_70);
              uVar13 = local_68;
              if (((int)local_68 != -0x80) && ((int)local_68 != 0)) {
                uVar9 = FUN_1001cc310();
                cVar7 = _os_log_type_enabled(uVar9,0x10);
                uVar13 = local_68;
                if (cVar7 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,(int)local_68);
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                  uVar13 = local_68;
                }
              }
            }
          }
        }
        else {
          lVar12 = FUN_100172473(DAT_1008c4d90,pcVar11,0x8000100);
          *plVar2 = lVar12;
          uVar13 = local_68;
          if (lVar12 == 0) {
            uVar9 = FUN_1001cc310();
            cVar7 = _os_log_type_enabled(uVar9,0x10);
            if (cVar7 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "mDeviceUpdaterFamilyInfo.mobileDeviceCarrierString != nullptr";
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            local_68 = 0;
            FUN_1001782e9(0,0);
            uVar13 = local_68;
          }
        }
        goto LAB_10041b4ab;
      }
      uVar9 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar9,0x10);
      if (cVar7 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "handlerData != nullptr";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    uVar13 = 0x45f;
  }
  else {
    local_60 = (void *)0x0;
    local_68 = 0;
    uVar13 = local_68;
LAB_10041b4ab:
    local_68 = uVar13;
    FUN_1002537af(param_1 + 0x4c0,param_1 + 0x528,param_3,param_2,&local_78);
    if (local_78 == (undefined4 *)0x0) {
      uVar9 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar9,0x10);
      if (cVar7 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "evaluationResultRef != nullptr";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      if (local_78 != (undefined4 *)0x0) goto LAB_10041b507;
    }
    else {
LAB_10041b507:
      puVar6 = local_78;
      *(undefined4 *)(param_1 + 0x558) = local_78[4];
      uVar3 = local_78[1];
      uVar4 = local_78[2];
      uVar5 = local_78[3];
      *(undefined4 *)(param_1 + 0x548) = *local_78;
      *(undefined4 *)(param_1 + 0x54c) = uVar3;
      *(undefined4 *)(param_1 + 0x550) = uVar4;
      *(undefined4 *)(param_1 + 0x554) = uVar5;
      FUN_10024adb0(param_1 + 0x560,local_78 + 6);
      *(undefined4 *)(param_1 + 0x5a8) = puVar6[0x18];
      FUN_10024adb0(param_1 + 0x5b0,puVar6 + 0x1a);
      FUN_10024adb0(param_1 + 0x5f8,puVar6 + 0x2c);
      FUN_100249f2c(param_1 + 0x640,puVar6 + 0x3e);
      FUN_100249f2c(param_1 + 0x650,puVar6 + 0x42);
      _memcpy((void *)(param_1 + 0x660),puVar6 + 0x46,0x420);
      FUN_100249f2c(param_1 + 0xa80,puVar6 + 0x14e);
      FUN_100249f2c(param_1 + 0xa90,puVar6 + 0x152);
      _memcpy((void *)(param_1 + 0xaa0),puVar6 + 0x156,0x420);
      FUN_100249f2c(param_1 + 0xec0,puVar6 + 0x25e);
      FUN_100249f2c(param_1 + 0xed0,puVar6 + 0x262);
      _memcpy((void *)(param_1 + 0xee0),puVar6 + 0x266,0x420);
      puVar6 = local_78;
      if (local_78 != (undefined4 *)0x0) {
        puVar1 = local_78 + 0x25e;
        FUN_100249fee(local_78 + 0x262);
        FUN_100249fca(puVar1);
        FUN_100249fee(puVar6 + 0x152);
        FUN_100249fca(puVar6 + 0x14e);
        FUN_100249fee(puVar6 + 0x42);
        FUN_100249fca(puVar6 + 0x3e);
        FUN_10024f3ba(puVar6 + 0x2c);
        FUN_10024f3ba(puVar6 + 0x1a);
        FUN_10024f3ba(puVar6 + 6);
        operator_delete(puVar6);
      }
    }
    uVar13 = local_68;
    if (local_60 == (void *)0x0) goto LAB_10041b6ae;
  }
  operator_delete(local_60);
LAB_10041b6ae:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13 & 0xffffffff;
}

