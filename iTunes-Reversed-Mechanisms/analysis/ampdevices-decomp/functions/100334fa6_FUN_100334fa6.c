// name: FUN_100334fa6
// address: 100334fa6

int FUN_100334fa6(double param_1,long param_2,int param_3,ulong param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  char *pcVar12;
  bool bVar13;
  double dVar14;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_78;
  int local_74;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined4 uStack_6a;
  undefined4 uStack_66;
  undefined2 local_62;
  undefined8 local_60;
  undefined2 local_58;
  ulong local_56;
  undefined2 local_4e;
  undefined8 local_4c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_90 = param_1;
  if (param_2 == 0) {
LAB_1003350d4:
    uVar10 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar10,0x10);
    if (cVar7 != '\0') {
      local_78 = 0x8220202;
      local_74 = 0x7a0a90;
      uStack_70 = 1;
      uStack_6e = 0;
      uStack_6c = 0x822;
      uStack_6a = 0x7ad2b2;
      uStack_66 = 1;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_2 + 8) != 0x64756c63) {
      uVar10 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar10,0x10);
      if (cVar7 != '\0') {
        local_78 = 0x8220202;
        local_74 = 0x7ab58c;
        uStack_70 = 1;
        uStack_6e = 0;
        uStack_6c = 0x822;
        uStack_6a = 0x7ad710;
        uStack_66 = 1;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      cVar7 = FUN_1001782e9(0,1);
      if (cVar7 == '\0') goto LAB_1003350d4;
    }
    if (*(long *)(param_2 + 0x16688) == 0) {
      uVar10 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar10,0x10);
      if (cVar7 != '\0') {
        local_78 = 0x8220202;
        local_74 = 0x7a0a90;
        uStack_70 = 1;
        uStack_6e = 0;
        uStack_6c = 0x822;
        uStack_6a = 0x7c01a8;
        uStack_66 = 1;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0,0);
      param_3 = 0x484;
      goto LAB_100335156;
    }
    cVar7 = FUN_1001ee068();
    uVar5 = uStack_6e;
    uVar3 = uStack_70;
    iVar9 = local_74;
    if (cVar7 != '\0') {
      if (*(int *)(param_2 + 0x166d8) == 0) {
        param_3 = 0;
      }
      else {
        iVar8 = *(int *)(param_2 + 0x166d4);
        uStack_70 = (undefined2)(param_4 >> 0x20);
        uVar4 = uStack_70;
        uStack_6e = (undefined2)(param_4 >> 0x30);
        uVar6 = uStack_6e;
        local_74 = (int)param_4;
        iVar2 = local_74;
        local_74 = iVar9;
        uStack_70 = uVar3;
        uStack_6e = uVar5;
        if (iVar8 == 4) {
          if (param_3 == 0) {
            local_80 = (double)FUN_100335b2c(param_2);
            uVar10 = FUN_100334975(param_2,*(undefined4 *)(param_2 + 0x166d8),1);
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar1 = DAT_1008c75b8;
            cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (param_4 == 0) {
              if (cVar7 != '\0') {
                local_88 = *(double *)(param_2 + 0x152c8);
                FUN_100335d68(local_b8,local_80);
                local_98 = FUN_1001b83ae(local_b8);
                FUN_100334b21(local_a8,uVar10);
                local_60 = FUN_1001b83ae(local_a8);
                local_78 = 0x8420302;
                local_74 = SUB84(local_88,0);
                uStack_70 = (undefined2)((ulong)local_88 >> 0x20);
                uStack_6e = (undefined2)((ulong)local_88 >> 0x30);
                uStack_6c = 0x822;
                uStack_6a = (undefined4)local_98;
                uStack_66 = (undefined4)((ulong)local_98 >> 0x20);
                local_62 = 0x822;
                __os_log_impl(0x100000000,uVar1,1,
                              "airtraffic> sending FinishedSyncingMetadata for device %{public}@, syncTypes = %{public}s, anchors = %{public}s"
                              ,&local_78,0x20);
                FUN_1001b7a50(local_a8);
                FUN_1001b7a50(local_b8);
              }
              _ATHostConnectionSendMetadataSyncFinished
                        (*(undefined8 *)(param_2 + 0x16688),local_80,uVar10);
            }
            else {
              if (cVar7 != '\0') {
                local_88 = *(double *)(param_2 + 0x152c8);
                FUN_100335d68(local_b8,local_80);
                local_98 = FUN_1001b83ae(local_b8);
                FUN_100334b21(local_a8,uVar10);
                local_60 = FUN_1001b83ae(local_a8);
                local_4c = *(undefined8 *)(param_2 + 0x153a8);
                local_78 = 0x8420502;
                local_74 = SUB84(local_88,0);
                uStack_70 = (undefined2)((ulong)local_88 >> 0x20);
                uStack_6e = (undefined2)((ulong)local_88 >> 0x30);
                uStack_6c = 0x822;
                uStack_6a = (undefined4)local_98;
                uStack_66 = (undefined4)((ulong)local_98 >> 0x20);
                local_62 = 0x822;
                local_58 = 0x800;
                local_4e = 0x800;
                local_56 = param_4;
                __os_log_impl(0x100000000,uVar1,1,
                              "airtraffic> sending FinishedSyncingMetadata for device %{public}@, syncTypes = %{public}s, anchors = %{public}s, purgeDataBytes = %llu, freeDiskBytes = %llu"
                              ,&local_78,0x34);
                FUN_1001b7a50(local_a8);
                FUN_1001b7a50(local_b8);
              }
              if (*(ulong *)(param_2 + 0x168e0) < param_4) {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar1 = DAT_1008c75b8;
                cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar7 != '\0') {
                  local_78 = 0x8000200;
                  uStack_6c = 0x800;
                  uStack_6a = (undefined4)*(undefined8 *)(param_2 + 0x168e0);
                  uStack_66 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x168e0) >> 0x20);
                  local_74 = iVar2;
                  uStack_70 = uVar4;
                  uStack_6e = uVar6;
                  __os_log_impl(0x100000000,uVar1,1,
                                "airtraffic> requested purgeDataBytes %llu exceeds purgeableDiskBytes %llu"
                                ,&local_78,0x16);
                }
              }
              FUN_10033600e(*(undefined8 *)(param_2 + 0x16688),local_80,uVar10,param_4);
            }
            FUN_10017060f(uVar10);
            FUN_10017060f(local_80);
            FUN_10033470c(param_2,5,0);
          }
          else {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar10 = DAT_1008c75b8;
            cVar7 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            if (cVar7 != '\0') {
              uVar1 = *(undefined8 *)(param_2 + 0x152c8);
              local_78 = 0x4000202;
              uStack_70 = 0x842;
              uStack_6e = (undefined2)uVar1;
              uStack_6c = (undefined2)((ulong)uVar1 >> 0x10);
              uStack_6a = (undefined4)((ulong)uVar1 >> 0x20);
              local_74 = param_3;
              __os_log_impl(0x100000000,uVar10,0x10,
                            "airtraffic> sync error %d for device %{public}@",&local_78,0x12);
            }
            FUN_1003360f2(param_2,param_3);
          }
          *(undefined8 *)(param_2 + 0x166d8) = 0;
          *(undefined8 *)(param_2 + 0x16704) = 0;
          *(undefined8 *)(param_2 + 0x1673c) = 0;
          *(undefined8 *)(param_2 + 0x16774) = 0;
          *(undefined8 *)(param_2 + 0x167ac) = 0;
          iVar8 = *(int *)(param_2 + 0x166d4);
        }
        if (iVar8 == 5) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar10 = DAT_1008c75b8;
          cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar7 != '\0') {
            uVar1 = *(undefined8 *)(param_2 + 0x152c8);
            if ((ulong)*(uint *)(param_2 + 0x166d4) < 10) {
              pcVar12 = (&PTR_s_Unknown_100854818)[*(uint *)(param_2 + 0x166d4)];
            }
            else {
              pcVar12 = "UNKNOWN";
            }
            local_78 = 0x8420202;
            local_74 = (int)uVar1;
            uStack_70 = (undefined2)((ulong)uVar1 >> 0x20);
            uStack_6e = (undefined2)((ulong)uVar1 >> 0x30);
            uStack_6c = 0x822;
            uStack_6a = SUB84(pcVar12,0);
            uStack_66 = (undefined4)((ulong)pcVar12 >> 0x20);
            __os_log_impl(0x100000000,uVar10,1,
                          "airtraffic> waiting for AssetManifest or SyncFinished for device %{public}@, current state is %{public}s"
                          ,&local_78,0x16);
          }
          dVar14 = DAT_100744e08;
          if (0.0 <= local_90) {
            dVar14 = (double)FUN_1001ebd46();
            dVar14 = dVar14 + local_90;
          }
          uVar11 = *(uint *)(param_2 + 0x166d4);
          local_80 = dVar14;
          if (uVar11 == 5) {
            local_88 = *(double *)(param_2 + 0x16820);
            do {
              dVar14 = local_80;
              if (local_88 < *(double *)(param_2 + 0x16820)) {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar10 = DAT_1008c75b8;
                cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar7 != '\0') {
                  uVar1 = *(undefined8 *)(param_2 + 0x152c8);
                  local_78 = 0x8420102;
                  local_74 = (int)uVar1;
                  uStack_70 = (undefined2)((ulong)uVar1 >> 0x20);
                  uStack_6e = (undefined2)((ulong)uVar1 >> 0x30);
                  __os_log_impl(0x100000000,uVar10,1,
                                "airtraffic> got Ping for device %{public}@ waiting for AssetManifest or SyncFinished"
                                ,&local_78,0xc);
                }
                local_88 = *(double *)(param_2 + 0x16820);
                dVar14 = DAT_100744e08;
                if (DAT_100701af0 <= local_90) {
                  dVar14 = (double)FUN_1001ebd46();
                  dVar14 = dVar14 + local_90;
                }
              }
              local_80 = dVar14;
              dVar14 = (double)FUN_1001ebd46();
              if (local_80 <= dVar14) {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar10 = DAT_1008c75b8;
                cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar7 != '\0') {
                  uVar1 = *(undefined8 *)(param_2 + 0x152c8);
                  local_78 = 0x8420102;
                  local_74 = (int)uVar1;
                  uStack_70 = (undefined2)((ulong)uVar1 >> 0x20);
                  uStack_6e = (undefined2)((ulong)uVar1 >> 0x30);
                  __os_log_impl(0x100000000,uVar10,1,
                                "airtraffic> timed out waiting for AssetManifest or SyncFinished for device %{public}@"
                                ,&local_78,0xc);
                }
                FUN_100333742(param_2,7);
                param_3 = 0x480;
                goto LAB_100335156;
              }
              cVar7 = FUN_100333382(param_2);
              if (cVar7 != '\0') {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar10 = DAT_1008c75b8;
                cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar7 != '\0') {
                  uVar1 = *(undefined8 *)(param_2 + 0x152c8);
                  local_78 = 0x8420102;
                  local_74 = (int)uVar1;
                  uStack_70 = (undefined2)((ulong)uVar1 >> 0x20);
                  uStack_6e = (undefined2)((ulong)uVar1 >> 0x30);
                  __os_log_impl(0x100000000,uVar10,1,
                                "airtraffic> sync canceled waiting for AssetManifest or SyncFinished for device %{public}@"
                                ,&local_78,0xc);
                }
                FUN_100333742(param_2,2);
                bVar13 = *(char *)(param_2 + 0x6abd) == '\0';
                iVar9 = 0x482;
                param_3 = -0x80;
                goto LAB_100335a1e;
              }
              FUN_1001b0d8d(DAT_10070f2b8);
              uVar11 = *(uint *)(param_2 + 0x166d4);
            } while (uVar11 == 5);
          }
          if ((uVar11 & 0xfffffffe) == 6) {
            FUN_10033615f(param_2 + 0x166e8);
            FUN_10033615f(param_2 + 0x16720);
            FUN_10033615f(param_2 + 0x16758);
            FUN_10033615f(param_2 + 0x16790);
            FUN_100316867(*(undefined8 *)(param_2 + 0x30),0xf,1);
            param_3 = 0;
            FUN_100316f84(*(undefined8 *)(param_2 + 0x30),0,0,0);
            if (param_4 != 0) {
              FUN_1004e48c6(param_2);
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar10 = DAT_1008c75b8;
              cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar7 != '\0') {
                local_78 = 0x8000200;
                uStack_6c = 0x800;
                uStack_6a = (undefined4)*(undefined8 *)(param_2 + 0x153a8);
                uStack_66 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x153a8) >> 0x20);
                local_74 = iVar2;
                uStack_70 = uVar4;
                uStack_6e = uVar6;
                __os_log_impl(0x100000000,uVar10,1,
                              "airtraffic> requested purgeDataBytes = %llu, freeDiskBytes = %llu",
                              &local_78,0x16);
              }
            }
          }
          else {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar10 = DAT_1008c75b8;
            cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar7 != '\0') {
              uVar1 = *(undefined8 *)(param_2 + 0x152c8);
              if (uVar11 < 10) {
                pcVar12 = &DAT_100745108 + *(int *)(&DAT_100745108 + (ulong)uVar11 * 4);
              }
              else {
                pcVar12 = "UNKNOWN";
              }
              local_60 = FUN_10032f390(*(undefined4 *)(param_2 + 0x169f8));
              local_78 = 0x8420302;
              local_74 = (int)uVar1;
              uStack_70 = (undefined2)((ulong)uVar1 >> 0x20);
              uStack_6e = (undefined2)((ulong)uVar1 >> 0x30);
              uStack_6c = 0x822;
              uStack_6a = SUB84(pcVar12,0);
              uStack_66 = (undefined4)((ulong)pcVar12 >> 0x20);
              local_62 = 0x822;
              __os_log_impl(0x100000000,uVar10,1,
                            "airtraffic> did not receive AssetManifest or SyncFinished for device %{public}@, current state is %{public}s, last error is %{public}s"
                            ,&local_78,0x20);
            }
            if (*(char *)(param_2 + 0x6abd) == '\0') {
              param_3 = 0x482;
            }
            else {
              bVar13 = *(int *)(param_2 + 0x169f8) == 0xe;
              iVar9 = 0x48b;
              param_3 = 0x480;
LAB_100335a1e:
              if (bVar13) {
                param_3 = iVar9;
              }
            }
          }
        }
      }
      goto LAB_100335156;
    }
    uVar10 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar10,0x10);
    if (cVar7 != '\0') {
      local_78 = 0x8220202;
      local_74 = 0x7a0a90;
      uStack_70 = 1;
      uStack_6e = 0;
      uStack_6c = 0x822;
      uStack_6a = 0x7a4675;
      uStack_66 = 1;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
  }
  param_3 = -0x32;
LAB_100335156:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_3;
}

