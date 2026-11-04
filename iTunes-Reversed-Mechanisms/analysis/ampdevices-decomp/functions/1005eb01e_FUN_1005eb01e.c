// name: FUN_1005eb01e
// address: 1005eb01e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005eb01e(undefined8 param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  uint local_88;
  char *local_84;
  undefined2 local_7c;
  int local_7a;
  uint local_68;
  char *local_64;
  undefined2 local_5c;
  char *local_5a;
  undefined2 local_52;
  int local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 local_42;
  char *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1005e9a2c();
  iVar2 = _AMRestorableDeviceGetState(param_1);
  pcVar4 = (char *)_AMRestorableDeviceGetECID(param_1);
  if (1 < param_2) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      local_5c = 0x822;
      local_5a = 
      "deviceEvent == kAMRestorableDeviceEventDiscovered || deviceEvent == kAMRestorableDeviceEventDisappeared"
      ;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1005eb7b3;
  }
  if (DAT_1008c7bb8 == -1) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      local_5c = 0x822;
      local_5a = "handler.mAMRestorableClientID != kMobileDeviceAMRestorableInvalidClientID";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1005eb7b3;
  }
  if (1 < iVar2 - 3U) {
    if (iVar2 - 1U < 2) {
      iVar3 = _AMRestorableDeviceGetProductType(param_1);
      if (iVar3 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_68 = 0x8220202;
          local_64 = "Assertion failure";
          local_5c = 0x822;
          local_5a = "productTypeID != 0";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        FUN_1001782e9(0,0);
      }
      lVar6 = 0;
      do {
        if (*(int *)((long)&DAT_10075c120 + lVar6) == iVar3) {
          bVar13 = *(int *)(&UNK_10075c134 + lVar6) == 1;
          goto LAB_1005eb264;
        }
        lVar6 = lVar6 + 0x18;
      } while (lVar6 != 0x1920);
      bVar13 = true;
LAB_1005eb264:
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 != '\0') {
        local_64 = "Disconnect";
        if (param_2 == 0) {
          local_64 = "Connect";
        }
        pcVar9 = "DFU";
        if (iVar2 == 2) {
          pcVar9 = "recovery";
        }
        local_40 = "NOT ";
        if (bVar13) {
          local_40 = "";
        }
        local_68 = 0x8220502;
        local_5c = 0x800;
        local_52 = 0x400;
        uStack_4c = 0x822;
        uStack_4a = SUB82(pcVar9,0);
        uStack_48 = (undefined6)((ulong)pcVar9 >> 0x10);
        local_42 = 0x822;
        local_5a = pcVar4;
        local_50 = iVar3;
        __os_log_impl(0x100000000,uVar5,1,
                      "%{public}s of ECID 0x%016llX product type ID 0x%x %{public}s mode; %{public}susing MobileRestore"
                      ,&local_68,0x30);
      }
      if (iVar2 == 2) {
        FUN_100238ca8(&local_68,&DAT_1008c7ca8);
        puVar10 = DAT_1008c7cf8;
        if (DAT_1008c7cf8 == (undefined8 *)0x0) {
          puVar11 = &DAT_1008c7cf8;
          puVar12 = &DAT_1008c7cf8;
        }
        else {
          do {
            while (puVar8 = puVar10, puVar11 = puVar8, (char *)puVar8[4] <= pcVar4) {
              if (pcVar4 <= (char *)puVar8[4]) goto LAB_1005eb5cb;
              puVar10 = (undefined8 *)puVar8[1];
              if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
                puVar12 = puVar8 + 1;
                goto LAB_1005eb51b;
              }
            }
            puVar10 = (undefined8 *)*puVar8;
            puVar12 = puVar8;
          } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
        }
LAB_1005eb51b:
        puVar8 = operator_new(0x30);
        puVar8[4] = pcVar4;
        *(undefined1 *)(puVar8 + 5) = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = puVar11;
        *puVar12 = puVar8;
        puVar10 = puVar8;
        if ((long *)*DAT_1008c7cf0 != (long *)0x0) {
          puVar10 = (undefined8 *)*puVar12;
          DAT_1008c7cf0 = (long *)*DAT_1008c7cf0;
        }
        FUN_1001ad344(DAT_1008c7cf8,puVar10);
        _DAT_1008c7d00 = _DAT_1008c7d00 + 1;
LAB_1005eb5cb:
        *(byte *)(puVar8 + 5) = (byte)param_2 ^ 1;
        FUN_10015a142(&local_68);
        if (!bVar13) {
          lVar6 = _AMRestorableDeviceCopyRecoveryModeDevice(param_1);
          if (lVar6 == 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_68 = 0x8220202;
              local_64 = "Assertion failure";
              local_5c = 0x822;
              local_5a = "recoveryDeviceRef != nullptr";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            if (param_2 == 0) {
              FUN_1005ec592(lVar6,0);
            }
            else {
              FUN_1005ec79a(lVar6,0);
            }
            FUN_10017060f(lVar6);
          }
          goto LAB_1005eb7b3;
        }
      }
      else if (!bVar13) {
        lVar6 = _AMRestorableDeviceCopyDFUModeDevice(param_1);
        if (lVar6 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_68 = 0x8220202;
            local_64 = "Assertion failure";
            local_5c = 0x822;
            local_5a = "dfuDeviceRef != nullptr";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          if (param_2 == 0) {
            FUN_1005ec48e(lVar6,0);
          }
          else {
            FUN_1005ec696(lVar6,0);
          }
          FUN_10017060f(lVar6);
        }
        goto LAB_1005eb7b3;
      }
      FUN_1001c62d9(&local_68,0x28);
      local_68 = param_2 == 0 ^ 7;
      local_50 = (int)param_1;
      uStack_4c = (undefined2)((ulong)param_1 >> 0x20);
      uStack_4a = (undefined2)((ulong)param_1 >> 0x30);
      iVar2 = FUN_1001c0269(0x41704576,0x414d524e,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_88 = 0x8220202;
          local_84 = "Assertion failure";
          local_7c = 0x400;
          local_7a = iVar2;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_88,0x12);
        }
      }
    }
    else {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 != '\0') {
        local_64 = "disconnect";
        if (param_2 == 0) {
          local_64 = "connect";
        }
        local_68 = 0x8220302;
        local_5c = 0x800;
        local_52 = 0x400;
        local_5a = pcVar4;
        local_50 = iVar2;
        __os_log_impl(0x100000000,uVar5,1,
                      "%{public}s of ECID 0x%016llX; unknown device state of %d! ignoring",&local_68
                      ,0x1c);
      }
    }
    goto LAB_1005eb7b3;
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar5 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 != '\0') {
    local_64 = "Disconnect";
    if (param_2 == 0) {
      local_64 = "Connect";
    }
    pcVar9 = "BootedOS";
    if (iVar2 == 3) {
      pcVar9 = "RestoreOS";
    }
    local_68 = 0x8220302;
    local_5c = 0x800;
    local_52 = 0x822;
    local_50 = (int)pcVar9;
    uStack_4c = (undefined2)((ulong)pcVar9 >> 0x20);
    uStack_4a = 0;
    local_5a = pcVar4;
    __os_log_impl(0x100000000,uVar5,1,"%{public}s of ECID 0x%016llX %{public}s",&local_68,0x20);
  }
  if (iVar2 != 4) goto LAB_1005eb7b3;
  FUN_100238ca8(&local_68,&DAT_1008c7bd0);
  uVar5 = DAT_1008c7bc8;
  if (param_2 == 0) {
    uVar7 = FUN_10017076e(DAT_1008c7bc8);
    cVar1 = FUN_100170781(uVar5,0,uVar7,param_1);
    if (cVar1 == '\0') {
      FUN_1001709a5(DAT_1008c7bc8,param_1);
    }
    else {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 != '\0') {
        pcVar4 = "Duplicate BootedOS appearance!";
        goto LAB_1005eb5b0;
      }
    }
  }
  else {
    uVar7 = FUN_10017076e(DAT_1008c7bc8);
    lVar6 = FUN_1001708fc(uVar5,0,uVar7,param_1);
    if (lVar6 < 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 != '\0') {
        pcVar4 = "Disconnect of unknown device!";
LAB_1005eb5b0:
        local_88 = local_88 & 0xffff0000;
        __os_log_impl(0x100000000,uVar5,1,pcVar4,&local_88,2);
      }
    }
    else {
      FUN_100170bed(DAT_1008c7bc8,lVar6);
    }
  }
  FUN_10015a142(&local_68);
LAB_1005eb7b3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

