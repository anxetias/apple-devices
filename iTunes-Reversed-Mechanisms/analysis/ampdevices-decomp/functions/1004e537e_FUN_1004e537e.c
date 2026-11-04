// name: FUN_1004e537e
// address: 1004e537e

void FUN_1004e537e(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined1 uVar9;
  short sVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  char *pcVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  uint *puVar26;
  long *plVar27;
  byte bVar28;
  bool bVar29;
  undefined1 local_1170 [16];
  undefined1 local_1160 [16];
  undefined1 local_1150 [20];
  undefined4 local_113c;
  undefined1 local_1138 [16];
  undefined8 *local_1128;
  long local_1120;
  undefined8 local_1118;
  char local_1109;
  undefined1 local_1108 [1056];
  undefined2 local_ce8;
  undefined2 uStack_ce6;
  int iStack_ce4;
  int iStack_ce0;
  undefined2 local_cdc;
  int local_cda;
  undefined2 uStack_cd6;
  undefined2 uStack_cd4;
  undefined2 local_cd2;
  undefined4 local_cd0;
  undefined2 uStack_ccc;
  undefined2 uStack_cca;
  undefined2 uStack_cc8;
  undefined4 uStack_cc6;
  undefined2 uStack_cc2;
  undefined2 uStack_cc0;
  undefined2 uStack_cbe;
  undefined4 uStack_cbc;
  undefined2 local_cb8;
  long local_cb6;
  undefined8 local_c9c;
  code *local_c94;
  ulong local_c8c;
  ushort local_8c8;
  ushort local_8c6;
  short local_8c4;
  undefined4 local_878;
  uint local_874;
  undefined2 local_870;
  uint local_86e;
  undefined2 local_86a;
  uint local_868;
  undefined2 local_864;
  uint local_862;
  undefined2 local_85e;
  int local_85c;
  uint local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1004e5396;
  lVar14 = FUN_100108310();
  lVar14 = -lVar14;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar7 = *(undefined8 **)(param_1 + 0x68);
  lVar18 = param_1;
  puVar6 = local_1128;
  lVar20 = local_1120;
  local_113c = param_2;
  do {
    local_1120 = lVar18;
    local_1128 = puVar7;
    if (local_1128 == (undefined8 *)0x0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      *(undefined **)((long)&local_38 + lVar14) = &UNK_1004e79b5;
      local_1128 = puVar6;
      local_1120 = lVar20;
      ___stack_chk_fail();
    }
    *(undefined8 *)(local_1120 + 0x68) = *local_1128;
    lVar20 = local_1128[1];
    iVar13 = *(int *)(local_1128 + 2);
    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e53df;
    local_1118 = FUN_10026647d(lVar20);
    if (iVar13 < 0x706f646d) {
      if (iVar13 == 0x696e7461) {
        if (DAT_1008c75c0 != -1) {
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e77b9;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar19 = DAT_1008c75b8;
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e55bd;
        cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar8 != '\0') {
          local_ce8 = 0x100;
          uStack_ce6 = 0x800;
          iStack_ce4 = (int)local_1118;
          iStack_ce0 = (int)((ulong)local_1118 >> 0x20);
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5601;
          __os_log_impl(0x100000000,uVar19,1,
                        "support> got kITIPodInterfaceAttachedMessage for device id %016llX");
        }
        uVar19 = *(undefined8 *)(local_1120 + 0x10);
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5618;
        lVar18 = FUN_10050c4fb(uVar19,local_1118);
        if (lVar18 != 0) {
          if (*(long *)(lVar18 + 0x66d8) != lVar20) {
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5632;
            uVar19 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5642;
            cVar8 = _os_log_type_enabled(uVar19,0x10);
            if (cVar8 != '\0') {
              local_ce8 = 0x202;
              uStack_ce6 = 0x822;
              iStack_ce4 = 0x7a0a90;
              iStack_ce0 = 1;
              local_cdc = 0x822;
              local_cda = 0x7d761a;
              uStack_cd6 = 1;
              uStack_cd4 = 0;
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e76e9;
              __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)");
            }
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5653;
            FUN_1001782e9(0,0);
          }
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e565b;
          FUN_1004e17a4(lVar18);
          uVar19 = *(undefined8 *)(lVar18 + 0x66d8);
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5667;
          lVar20 = FUN_10055ae0c(uVar19);
          if (lVar20 == 0) {
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7607;
            uVar19 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7617;
            cVar8 = _os_log_type_enabled(uVar19,0x10);
            if (cVar8 != '\0') {
              local_ce8 = 0x202;
              uStack_ce6 = 0x822;
              iStack_ce4 = 0x7a0a90;
              iStack_ce0 = 1;
              local_cdc = 0x822;
              local_cda = 0x7b322a;
              uStack_cd6 = 1;
              uStack_cd4 = 0;
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e77a1;
              __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)");
            }
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7628;
            FUN_1001782e9(0,0);
          }
          else if (*(long *)(lVar18 + 0x7168) == 0) {
LAB_1004e5708:
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e571a;
            FUN_10050eb39(lVar18,lVar20,0,1);
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5689;
            iVar13 = _AMDeviceGetInterfaceType(lVar20);
            if (iVar13 == 1) {
              uVar19 = *(undefined8 *)(lVar18 + 0x7168);
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e569e;
              iVar13 = _AMDeviceGetInterfaceType(uVar19);
              if (iVar13 == 2) {
                if (*(long *)(lVar18 + 0x7168) != 0) {
                  if (DAT_1008c75c0 != -1) {
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e78df;
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar19 = DAT_1008c75b8;
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e56d3;
                  cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar8 != '\0') {
                    local_ce8 = 0;
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5708;
                    __os_log_impl(0x100000000,uVar19,1,"support> transitioning from WiFi to USB");
                  }
                }
                goto LAB_1004e5708;
              }
            }
          }
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7630;
          FUN_1004e1e68(lVar18);
        }
      }
      else if (iVar13 == 0x696e7464) {
        if (DAT_1008c75c0 != -1) {
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7819;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar19 = DAT_1008c75b8;
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e73a7;
        cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar8 != '\0') {
          local_ce8 = 0x100;
          uStack_ce6 = 0x800;
          iStack_ce4 = (int)local_1118;
          iStack_ce0 = (int)((ulong)local_1118 >> 0x20);
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e73eb;
          __os_log_impl(0x100000000,uVar19,1,
                        "support> got kITIPodInterfaceDetachedMessage for device id %016llX");
        }
        uVar19 = *(undefined8 *)(local_1120 + 0x10);
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7402;
        lVar18 = FUN_10050c4fb(uVar19,local_1118);
        if (lVar18 != 0) {
          if (*(long *)(lVar18 + 0x66d8) != lVar20) {
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e741c;
            uVar19 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e742c;
            cVar8 = _os_log_type_enabled(uVar19,0x10);
            if (cVar8 != '\0') {
              local_ce8 = 0x202;
              uStack_ce6 = 0x822;
              iStack_ce4 = 0x7a0a90;
              iStack_ce0 = 1;
              local_cdc = 0x822;
              local_cda = 0x7d761a;
              uStack_cd6 = 1;
              uStack_cd4 = 0;
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7745;
              __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)");
            }
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e743d;
            FUN_1001782e9(0,0);
          }
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7445;
          FUN_1004e17a4(lVar18);
          uVar19 = *(undefined8 *)(lVar18 + 0x66d8);
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7451;
          lVar20 = FUN_10055ae0c(uVar19);
          if (*(long *)(lVar18 + 0x7168) == 0) {
LAB_1004e75cc:
            if (lVar20 == 0) {
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e75df;
              FUN_10050eb39(lVar18,0,0,0);
            }
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7469;
            iVar13 = _AMDeviceGetInterfaceType();
            if (iVar13 != 1) goto LAB_1004e75cc;
            if (lVar20 == 0) {
LAB_1004e74df:
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e74f1;
              FUN_10050eb39(lVar18,lVar20,0,1);
              if (*(long *)(lVar18 + 0x30) != 0) {
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7503;
                FUN_100315cf3();
              }
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e747f;
              iVar13 = _AMDeviceGetInterfaceType(lVar20);
              if (iVar13 == 2) {
                if (DAT_1008c75c0 != -1) {
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e78c7;
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar19 = DAT_1008c75b8;
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e74aa;
                cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar8 != '\0') {
                  local_ce8 = 0;
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e74df;
                  __os_log_impl(0x100000000,uVar19,1,"support> transitioning from USB to WiFi");
                }
                goto LAB_1004e74df;
              }
            }
          }
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e75e7;
          FUN_1004e1e68(lVar18);
        }
      }
      else if (iVar13 == 0x706f6461) {
        if (DAT_1008c75c0 != -1) {
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e77e9;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar19 = DAT_1008c75b8;
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5438;
        cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar8 != '\0') {
          local_ce8 = 0x100;
          uStack_ce6 = 0x800;
          iStack_ce4 = (int)local_1118;
          iStack_ce0 = (int)((ulong)local_1118 >> 0x20);
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5480;
          __os_log_impl(0x100000000,uVar19,1,
                        "support> got kITIPodAttachedMessage for device id %016llX");
        }
      }
    }
    else if (iVar13 == 0x706f646d) {
      if (DAT_1008c75c0 != -1) {
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e77d1;
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar19 = DAT_1008c75b8;
      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5741;
      cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar8 != '\0') {
        local_ce8 = 0x100;
        uStack_ce6 = 0x800;
        iStack_ce4 = (int)local_1118;
        iStack_ce0 = (int)((ulong)local_1118 >> 0x20);
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5785;
        __os_log_impl(0x100000000,uVar19,1,
                      "support> got kITIPodMountedMessage for device id %016llX",&local_ce8,0xc);
      }
      iVar13 = 0;
      do {
        uVar19 = *(undefined8 *)(local_1120 + 0x10);
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e579f;
        lVar18 = FUN_10050c4fb(uVar19,local_1118);
        if (lVar18 == 0) {
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e584d;
          cVar8 = FUN_10050c5ed(lVar20,0x706f6461,local_1120);
          if (cVar8 != '\0') {
            if (DAT_1008c75c0 != -1) {
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6de4;
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar19 = DAT_1008c75b8;
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5873;
            cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar8 != '\0') {
              local_ce8 = 0x100;
              uStack_ce6 = 0x800;
              iStack_ce4 = (int)local_1118;
              iStack_ce0 = (int)((ulong)local_1118 >> 0x20);
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e58b7;
              __os_log_impl(0x100000000,uVar19,1,
                            "support> simulating kITIPodAttachedMessage for device id %016llX",
                            &local_ce8,0xc);
            }
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e58cd;
            lVar18 = FUN_1005000d5(local_1120,lVar20,local_1118);
            if (lVar18 != 0) goto LAB_1004e57ab;
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e58de;
            uVar19 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e58ee;
            cVar8 = _os_log_type_enabled(uVar19,0x10);
            if (cVar8 != '\0') {
              local_ce8 = 0x202;
              uStack_ce6 = 0x822;
              iStack_ce4 = 0x7a0a90;
              iStack_ce0 = 1;
              local_cdc = 0x822;
              local_cda = 0x7ade6a;
              uStack_cd6 = 1;
              uStack_cd4 = 0;
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6373;
              __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_ce8,0x16
                                 );
            }
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e58ff;
            FUN_1001782e9(0,0);
          }
        }
        else {
LAB_1004e57ab:
          local_1109 = *(char *)(lVar18 + 0x6ad6);
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e57bf;
          FUN_1004e17a4(lVar18);
          if (*(long *)(lVar18 + 0x66d8) != lVar20) {
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e57d0;
            FUN_100264ec8();
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e57d8;
            uVar19 = FUN_10026394e(lVar20);
            *(undefined8 *)(lVar18 + 0x66d8) = uVar19;
          }
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e57ee;
          iVar13 = FUN_10026677e(lVar20,local_1108);
          if (iVar13 != 0) goto LAB_1004e57f9;
          if (*(char *)(lVar18 + 0x6abc) == '\0') {
            uVar12 = *(undefined4 *)(lVar18 + 0x66b0);
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e592d;
            iVar13 = FUN_1002441f8(uVar12,local_1108,0x6974756e,0,&local_458);
            if (iVar13 == 0) {
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e594d;
              iVar13 = FUN_1001888ba(&local_458,"FirstTime",&local_878);
              if (iVar13 == 0) {
                if (DAT_1008c75c0 != -1) {
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e71b3;
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar19 = DAT_1008c75b8;
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5e67;
                cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar8 != '\0') {
                  local_ce8 = 0;
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5e9c;
                  __os_log_impl(0x100000000,uVar19,1,"setup> found FirstTime file",&local_ce8,2);
                }
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5ea8;
                iVar13 = FUN_100182d4d(&local_878);
                if ((iVar13 != -0x80) && (iVar13 != 0)) {
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5eba;
                  uVar19 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5eca;
                  cVar8 = _os_log_type_enabled(uVar19,0x10);
                  if (cVar8 != '\0') {
                    local_ce8 = 0x202;
                    uStack_ce6 = 0x822;
                    iStack_ce4 = 0x7a0a90;
                    iStack_ce0 = 1;
                    local_cdc = 0x400;
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6d14;
                    local_cda = iVar13;
                    __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_ce8
                                        ,0x12);
                  }
                }
                uVar19 = *(undefined8 *)(lVar18 + 0x66d8);
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5ee4;
                iVar13 = FUN_100598b00(uVar19,lVar18 + 0x50,0);
                if (iVar13 != -0x80) {
                  if (iVar13 == 0) {
                    if ((*(char *)(lVar18 + 0x3b1) != '\0') &&
                       (*(char *)(DAT_1008c76a0 + 0x1a92) == '\0')) {
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6a5e;
                      iVar13 = FUN_1001888ba(&local_458,"SkipSetup",&local_ce8);
                      if (iVar13 != 0) {
                        if (*(int *)(lVar18 + 0x66b0) == 0x69506f64) {
                          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6a85;
                          cVar8 = FUN_10050d3e9(&local_458,"ShowRegistration");
                          if (cVar8 != '\0') {
                            if (DAT_1008c75c0 != -1) {
                              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7368;
                              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                            }
                            uVar19 = DAT_1008c75b8;
                            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6aab;
                            cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
                            if (cVar8 != '\0') {
                              local_ce8 = 0;
                              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6ae0;
                              __os_log_impl(0x100000000,uVar19,1,
                                            "setup> created ShowRegistration file",&local_ce8,2);
                            }
                          }
                        }
                        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6af3;
                        cVar8 = FUN_10050d3e9(&local_458,"ShowLicense");
                        if (cVar8 != '\0') {
                          if (DAT_1008c75c0 != -1) {
                            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7338;
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          uVar19 = DAT_1008c75b8;
                          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6b19;
                          cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar8 != '\0') {
                            local_ce8 = 0;
                            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6b4e;
                            __os_log_impl(0x100000000,uVar19,1,"setup> created ShowLicense file",
                                          &local_ce8,2);
                          }
                        }
                        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6b61;
                        cVar8 = FUN_10050d3e9(&local_458,"ShowWarranty");
                        if (cVar8 != '\0') {
                          if (DAT_1008c75c0 != -1) {
                            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7350;
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          uVar19 = DAT_1008c75b8;
                          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6b8b;
                          cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar8 != '\0') {
                            local_ce8 = 0;
                            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6bc4;
                            __os_log_impl(0x100000000,uVar19,1,"setup> created ShowWarranty file",
                                          &local_ce8,2);
                          }
                        }
                      }
                    }
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5f32;
                    iVar13 = FUN_1001888ba(&local_458,"iTunesDB",&local_878);
                    if (iVar13 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e64c0;
                      uVar19 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e64d0;
                      cVar8 = _os_log_type_enabled(uVar19,0x10);
                      if (cVar8 != '\0') {
                        local_ce8 = 0x202;
                        uStack_ce6 = 0x822;
                        iStack_ce4 = 0x7a0a90;
                        iStack_ce0 = 1;
                        local_cdc = 0x822;
                        local_cda = 0x7a64cb;
                        uStack_cd6 = 1;
                        uStack_cd4 = 0;
                        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6ea7;
                        __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",
                                            &local_ce8,0x16);
                      }
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e64e1;
                      FUN_1001782e9(0,0);
                    }
                    else if (*(int *)(lVar18 + 0x66b0) == 0x69506f64) {
                      uVar19 = *(undefined8 *)(lVar18 + 0x66d8);
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5f56;
                      cVar8 = FUN_100266a70(uVar19);
                      if (cVar8 != '\0') {
                        uVar19 = *(undefined8 *)(lVar18 + 0x66d8);
                        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5f6a;
                        cVar8 = FUN_100266b26(uVar19);
                        if ((((cVar8 == '\0') && (*(char *)(lVar18 + 0x6453) != '\0')) &&
                            (*(char *)(lVar18 + 0x6454) != '\0')) &&
                           (*(char *)(lVar18 + 0x6458) != '\0')) {
                          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7847;
                          iVar13 = FUN_1002d23f2(lVar20,local_1108,0);
                          if ((iVar13 != -0x80) && (iVar13 != 0)) {
                            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7859;
                            uVar19 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7869;
                            cVar8 = _os_log_type_enabled(uVar19,0x10);
                            if (cVar8 != '\0') {
                              local_ce8 = 0x202;
                              uStack_ce6 = 0x822;
                              iStack_ce4 = 0x7a0a90;
                              iStack_ce0 = 1;
                              local_cdc = 0x400;
                              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7934;
                              local_cda = iVar13;
                              __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",
                                                  &local_ce8,0x12);
                            }
                          }
                          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7875;
                          iVar13 = FUN_100266eca(lVar20);
                          if ((iVar13 != -0x80) && (iVar13 != 0)) {
                            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7887;
                            uVar19 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7897;
                            cVar8 = _os_log_type_enabled(uVar19,0x10);
                            if (cVar8 != '\0') {
                              local_ce8 = 0x202;
                              uStack_ce6 = 0x822;
                              iStack_ce4 = 0x7a0a90;
                              iStack_ce0 = 1;
                              local_cdc = 0x400;
                              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7989;
                              local_cda = iVar13;
                              __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",
                                                  &local_ce8,0x12);
                            }
                          }
                          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e78a7;
                          FUN_1004e3ed9(lVar18);
                          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e78af;
                          FUN_1004e1e68(lVar18);
                          break;
                        }
                      }
                    }
                  }
                  else {
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e637d;
                    uVar19 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e638d;
                    cVar8 = _os_log_type_enabled(uVar19,0x10);
                    if (cVar8 != '\0') {
                      local_ce8 = 0x202;
                      uStack_ce6 = 0x822;
                      iStack_ce4 = 0x7a0a90;
                      iStack_ce0 = 1;
                      local_cdc = 0x400;
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e63e5;
                      local_cda = iVar13;
                      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",
                                          &local_ce8,0x12);
                    }
                  }
                }
              }
            }
          }
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e595d;
          FUN_1004e17a4(lVar18);
          uVar19 = *(undefined8 *)(lVar18 + 0x66d8);
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5969;
          sVar10 = FUN_1002660d3(uVar19);
          *(short *)(lVar18 + 0x48) = sVar10;
          if (sVar10 == 0) {
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5977;
            uVar19 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5987;
            cVar8 = _os_log_type_enabled(uVar19,0x10);
            if (cVar8 != '\0') {
              local_ce8 = 0x202;
              uStack_ce6 = 0x822;
              iStack_ce4 = 0x7a0a90;
              iStack_ce0 = 1;
              local_cdc = 0x822;
              local_cda = 0x7d76a8;
              uStack_cd6 = 1;
              uStack_cd4 = 0;
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6317;
              __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_ce8,0x16
                                 );
            }
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5998;
            FUN_1001782e9(0,0);
          }
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e59a0;
          iVar13 = FUN_10050c1f0(lVar18);
          if (iVar13 == -0x80) goto LAB_1004e6040;
          if (iVar13 == 0) {
            iVar13 = *(int *)(lVar18 + 0x66b0);
            bVar29 = false;
            if (((iVar13 != 0x69506164) && (iVar13 != 0x6950686e)) && (iVar13 != 0x69506f74)) {
              bVar29 = true;
            }
            if (DAT_1008c75c0 != -1) {
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6f1b;
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar19 = DAT_1008c75b8;
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e59f8;
            cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (bVar29) {
              if (cVar8 != '\0') {
                uVar15 = *(undefined8 *)(lVar18 + 0x66d8);
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5a15;
                uVar15 = FUN_10026647d(uVar15);
                local_cda = *(int *)(lVar18 + 0x284);
                lVar16 = lVar18 + 0x66;
                lVar1 = lVar18 + 0xc6;
                lVar2 = lVar18 + 0x144;
                local_ce8 = 0x502;
                iStack_ce4 = (int)uVar15;
                iStack_ce0 = (int)((ulong)uVar15 >> 0x20);
                local_cdc = 0x400;
                uStack_cd6 = 0x822;
                uStack_cd4 = (undefined2)lVar16;
                local_cd2 = (undefined2)((ulong)lVar16 >> 0x10);
                local_cd0 = (undefined4)((ulong)lVar16 >> 0x20);
                uStack_ccc = 0x822;
                uStack_cca = (undefined2)lVar1;
                uStack_cc8 = (undefined2)((ulong)lVar1 >> 0x10);
                uStack_cc6 = (undefined4)((ulong)lVar1 >> 0x20);
                uStack_cc2 = 0x822;
                uStack_cc0 = (undefined2)lVar2;
                uStack_cbe = (undefined2)((ulong)lVar2 >> 0x10);
                uStack_cbc = (undefined4)((ulong)lVar2 >> 0x20);
                pcVar21 = 
                "setup> device id %016llX, family id %u, software version %{public}s, build version %{public}s, serial number %{public}s"
                ;
                uVar15 = 0x30;
LAB_1004e5bc7:
                uStack_ce6 = 0x800;
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5bcc;
                __os_log_impl(0x100000000,uVar19,1,pcVar21,&local_ce8,uVar15);
              }
            }
            else if (cVar8 != '\0') {
              uVar15 = *(undefined8 *)(lVar18 + 0x66d8);
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5b29;
              uVar15 = FUN_10026647d(uVar15);
              lVar1 = lVar18 + 0x106;
              lVar16 = lVar18 + 0x66;
              lVar2 = lVar18 + 0xc6;
              uStack_cbc = *(undefined4 *)(lVar18 + 0x284);
              local_cb6 = lVar18 + 0x144;
              local_ce8 = 0x602;
              iStack_ce4 = (int)uVar15;
              iStack_ce0 = (int)((ulong)uVar15 >> 0x20);
              local_cdc = 0x822;
              local_cda = (int)lVar1;
              uStack_cd6 = (undefined2)((ulong)lVar1 >> 0x20);
              uStack_cd4 = (undefined2)((ulong)lVar1 >> 0x30);
              local_cd2 = 0x822;
              local_cd0 = (undefined4)lVar16;
              uStack_ccc = (undefined2)((ulong)lVar16 >> 0x20);
              uStack_cca = (undefined2)((ulong)lVar16 >> 0x30);
              uStack_cc8 = 0x822;
              uStack_cc6 = (undefined4)lVar2;
              uStack_cc2 = (undefined2)((ulong)lVar2 >> 0x20);
              uStack_cc0 = (undefined2)((ulong)lVar2 >> 0x30);
              uStack_cbe = 0x400;
              local_cb8 = 0x822;
              pcVar21 = 
              "setup> device id %016llX, product type %{public}s, product version %{public}s, build version %{public}s, family id %u, serial number %{public}s"
              ;
              uVar15 = 0x3a;
              goto LAB_1004e5bc7;
            }
            if (*(char *)(lVar18 + 0x33a) == '\0') {
LAB_1004e5c82:
              uVar19 = *(undefined8 *)(lVar18 + 0x66d8);
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5c8e;
              cVar8 = FUN_1002d2858(uVar19);
              if (cVar8 == '\0') {
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5da8;
                uVar19 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5db8;
                cVar8 = _os_log_type_enabled(uVar19,0x10);
                if (cVar8 != '\0') {
                  local_ce8 = 0x202;
                  uStack_ce6 = 0x822;
                  iStack_ce4 = 0x7a0a90;
                  iStack_ce0 = 1;
                  local_cdc = 0x822;
                  local_cda = 0x7d7713;
                  uStack_cd6 = 1;
                  uStack_cd4 = 0;
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6a3d;
                  __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_ce8,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5dc9;
                FUN_1001782e9(0,0);
                if (DAT_1008c75c0 != -1) {
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e719b;
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar19 = DAT_1008c75b8;
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5deb;
                cVar8 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                iVar11 = 0x470;
                iVar13 = 0x470;
                if (cVar8 != '\0') {
                  pcVar21 = "RegisterIPodDevice() - invalid volume format";
LAB_1004e600f:
                  local_ce8 = 0;
                  uVar15 = 0x10;
                  puVar26 = (uint *)&local_ce8;
LAB_1004e6016:
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6021;
                  __os_log_impl(0x100000000,uVar19,uVar15,pcVar21,puVar26,2);
                  iVar13 = iVar11;
                }
              }
              else {
                uVar19 = *(undefined8 *)(lVar18 + 0x66d8);
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5ca2;
                cVar8 = FUN_1002d2cd4(uVar19);
                if (cVar8 != '\0') goto LAB_1004e5caa;
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5fa3;
                uVar19 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5fb3;
                cVar8 = _os_log_type_enabled(uVar19,0x10);
                if (cVar8 != '\0') {
                  local_ce8 = 0x202;
                  uStack_ce6 = 0x822;
                  iStack_ce4 = 0x7a0a90;
                  iStack_ce0 = 1;
                  local_cdc = 0x822;
                  local_cda = 0x7d7743;
                  uStack_cd6 = 1;
                  uStack_cd4 = 0;
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6c7c;
                  __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_ce8,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5fc4;
                FUN_1001782e9(0,0);
                if (DAT_1008c75c0 != -1) {
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e71e3;
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar19 = DAT_1008c75b8;
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5fe6;
                cVar8 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                iVar11 = 0x471;
                iVar13 = 0x471;
                if (cVar8 != '\0') {
                  pcVar21 = "RegisterIPodDevice() - invalid USB configuration";
                  goto LAB_1004e600f;
                }
              }
              goto LAB_1004e6040;
            }
            uVar19 = *(undefined8 *)(lVar18 + 0x66d8);
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5be9;
            cVar8 = FUN_100266a70(uVar19);
            if (cVar8 == '\0') goto LAB_1004e5c82;
            uVar19 = *(undefined8 *)(lVar18 + 0x66d8);
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5c00;
            cVar8 = FUN_1002db291(uVar19,lVar18 + 0x50);
            if (cVar8 == '\0') {
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5c0d;
              uVar19 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5c1d;
              cVar8 = _os_log_type_enabled(uVar19,0x10);
              if (cVar8 != '\0') {
                local_ce8 = 0x202;
                uStack_ce6 = 0x822;
                iStack_ce4 = 0x7a0a90;
                iStack_ce0 = 1;
                local_cdc = 0x822;
                local_cda = 0x7d76ca;
                uStack_cd6 = 1;
                uStack_cd4 = 0;
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6c20;
                __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_ce8,
                                    0x16);
              }
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5c2e;
              FUN_1001782e9(0,0);
              if (DAT_1008c75c0 != -1) {
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e71cb;
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar19 = DAT_1008c75b8;
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5c50;
              cVar8 = _os_log_type_enabled(DAT_1008c75b8,0x10);
              iVar11 = 0x472;
              iVar13 = 0x472;
              if (cVar8 == '\0') goto LAB_1004e6040;
              pcVar21 = "RegisterIPodDevice() - device authentication failed";
              goto LAB_1004e600f;
            }
LAB_1004e5caa:
            if (*(char *)(lVar18 + 0x6abc) == '\0') {
              if ((*(char *)(lVar18 + 0x331) != '\0') || (*(char *)(lVar18 + 0x33b) == '\0')) {
LAB_1004e5e2a:
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5e32;
                FUN_1004e3ed9(lVar18);
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5e3a;
                FUN_1004e1e68(lVar18);
                iVar13 = -0x80;
                goto LAB_1004e6040;
              }
              if (*(char *)(DAT_1008c76a0 + 0x1a91) != '\0') {
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e628f;
                uVar9 = FUN_1002c48cf(lVar18);
                *(undefined1 *)(lVar18 + 0x6afa) = uVar9;
              }
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e62a5;
              cVar8 = FUN_1001cd44e("ignore-devices",0,0);
              if (cVar8 != '\0') {
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e62bb;
                FUN_1001c38e0("ignore-devices pref is set, ignoring device");
                goto LAB_1004e5e2a;
              }
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6594;
              cVar8 = FUN_1002c3fff(lVar18);
              if (cVar8 == '\0') goto LAB_1004e5e2a;
              if ((*(int *)(lVar18 + 0x66b0) == 0x69506f64) && (*(char *)(lVar18 + 0x362) != '\0'))
              {
                uVar19 = *(undefined8 *)(lVar18 + 0x66d8);
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e65bd;
                cVar8 = FUN_100266b26(uVar19);
                if (cVar8 == '\0') {
                  uVar19 = *(undefined8 *)(lVar18 + 0x66d8);
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e65d4;
                  FUN_10026677e(uVar19,&local_458);
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e65e9;
                  iVar13 = FUN_10017e137(&local_458,&local_ce8,0);
                  if ((iVar13 == 0) &&
                     (((local_8c8 != 0x4953 || (local_8c6 != 0x4244)) || (local_8c4 == 1)))) {
                    if (DAT_1008c75c0 != -1) {
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7380;
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    uVar19 = DAT_1008c75b8;
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6ffd;
                    cVar8 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                    if (cVar8 != '\0') {
                      local_874 = (uint)(local_8c8 >> 8);
                      local_86e = local_8c8 & 0xff;
                      local_868 = (uint)(local_8c6 >> 8);
                      local_862 = local_8c6 & 0xff;
                      local_85c = (int)local_8c4;
                      local_878 = 0x4000500;
                      local_870 = 0x400;
                      local_86a = 0x400;
                      local_864 = 0x400;
                      local_85e = 0x400;
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e709d;
                      __os_log_impl(0x100000000,uVar19,0x10,
                                    "setup> not FAT32 volume format (filesystemID = \'%c%c\', signature = \'%c%c\', filesystemSubType = %d"
                                    ,&local_878,0x20);
                    }
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e70ae;
                    FUN_1001c334a(local_1138,0x10cf0002);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e70c4;
                    FUN_1002477a4(local_1160,&local_458);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e70da;
                    FUN_1001bbec4(&local_878,local_1138,local_1160);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e70eb;
                    FUN_1001c334a(local_1150,0x10cf0003);
                    uVar12 = *(undefined4 *)(lVar18 + 0x28);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e70fd;
                    FUN_1004fda52(local_1170,uVar12);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7119;
                    FUN_10050e7f4(&local_878,local_1150,local_1170);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7121;
                    FUN_1001b7a50(local_1170);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7129;
                    FUN_1001b7a50(local_1150);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7131;
                    FUN_1001b7a50(&local_878);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e713d;
                    FUN_1001b7a50(local_1160);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7149;
                    FUN_1001b7a50(local_1138);
                    uVar19 = *(undefined8 *)(lVar18 + 0x66d8);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7155;
                    FUN_100266f9e(uVar19);
                    goto LAB_1004e5e2a;
                  }
                }
              }
              *(undefined1 *)(lVar18 + 0x6abd) = 1;
              if (*(char *)(lVar18 + 0x6abc) != '\0') goto LAB_1004e5cbe;
              uVar19 = *(undefined8 *)(lVar18 + 0x66d8);
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e663c;
              cVar8 = FUN_100266a70(uVar19);
              if (cVar8 != '\0') {
                uVar19 = *(undefined8 *)(lVar18 + 0x66d8);
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e664c;
                cVar8 = FUN_100266904(uVar19);
                if (cVar8 == '\0') {
                  uVar19 = *(undefined8 *)(lVar18 + 0x66d8);
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e665c;
                  cVar8 = FUN_100266b26(uVar19);
                  if (cVar8 == '\0') {
                    uVar12 = *(undefined4 *)(lVar18 + 0x66b0);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6670;
                    uVar19 = FUN_100416f20(uVar12,0x10cc00aa);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e667f;
                    FUN_1001b7eb0(&local_458,uVar19);
                    uVar12 = *(undefined4 *)(lVar18 + 0x28);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6691;
                    FUN_1004fda52(&local_878,uVar12);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e66a3;
                    FUN_1004508b1(&local_458,&local_878);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e66ab;
                    FUN_1001b7a50(&local_878);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e66b3;
                    FUN_1001b7a50(&local_458);
                  }
                }
              }
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e66c4;
              FUN_1001c62d9(&local_ce8,0x284);
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e66dc;
              FUN_1001dfbb3("_ITDCMR_",&local_cdc,0x40);
              local_c8c = (ulong)*(uint *)(lVar18 + 0x28);
              local_c9c = 0x646f506900000001;
              local_c94 = FUN_10050d4a6;
              uVar19 = **(undefined8 **)(lVar18 + 0x20);
              pcVar4 = (code *)(*(undefined8 **)(lVar18 + 0x20))[1];
              local_ce8 = 10;
              uStack_ce6 = 0;
              iStack_ce4 = 9;
              iStack_ce0 = 0x284;
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6739;
              iVar13 = (*pcVar4)(uVar19,0x72646220,&local_ce8);
              if (iVar13 == -0x80) goto LAB_1004e6040;
              if (iVar13 != 0) {
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6dee;
                uVar19 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6dfe;
                cVar8 = _os_log_type_enabled(uVar19,0x10);
                if (cVar8 != '\0') {
                  local_458 = 0x8220202;
                  local_454 = "Assertion failure";
                  local_44c = 0x400;
                  local_44a = (char *)CONCAT44(local_44a._4_4_,iVar13);
                  puVar26 = &local_458;
                  goto LAB_1004e5b05;
                }
                goto LAB_1004e6040;
              }
              lVar16 = *(long *)(lVar18 + 0x30);
              if (lVar16 == 0) {
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6f3d;
                uVar19 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6f4d;
                cVar8 = _os_log_type_enabled(uVar19,0x10);
                if (cVar8 != '\0') {
                  local_458 = 0x8220202;
                  local_454 = "Assertion failure";
                  local_44c = 0x822;
                  local_44a = "trackData != nullptr";
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e723f;
                  __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_458,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6f5e;
                FUN_1001782e9(0,0);
                iVar13 = 0;
                bVar28 = 1;
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6773;
                _memcpy((void *)(lVar16 + 0x27b8),(void *)(lVar18 + 0x6b40),0x420);
                uVar5 = *(ulong *)(lVar16 + 0x1bb0);
                uVar17 = uVar5 | 0x11e000000;
                *(ulong *)(lVar16 + 0x1bb0) = uVar17;
                *(byte *)(lVar16 + 0x2be0) = *(byte *)(lVar16 + 0x2be0) & 0xfe;
                *(undefined4 *)(lVar16 + 0x2d08) = *(undefined4 *)(lVar18 + 0x66b0);
                *(long *)(lVar16 + 0x2d10) = lVar18 + 0x50;
                bVar28 = *(byte *)(lVar16 + 0x2d1a);
                bVar22 = *(byte *)(lVar18 + 0x35c) & 1;
                *(byte *)(lVar16 + 0x2d1a) = bVar28 & 0xfe | bVar22;
                bVar23 = *(char *)(lVar18 + 0x38f) * '\x02' & 2;
                *(byte *)(lVar16 + 0x2d1a) = bVar28 & 0xfc | bVar22 | bVar23;
                bVar24 = (*(byte *)(lVar18 + 0x370) & 1) << 2;
                *(byte *)(lVar16 + 0x2d1a) = bVar28 & 0xf8 | bVar22 | bVar23 | bVar24;
                bVar25 = 8;
                if (*(char *)(lVar18 + 0x35c) == '\0') {
                  bVar25 = (*(char *)(lVar18 + 0x35b) != '\0') << 3;
                }
                *(byte *)(lVar16 + 0x2d1a) = bVar28 & 0xf0 | bVar22 | bVar23 | bVar24 | bVar25;
                *(byte *)(lVar16 + 0x2d1a) =
                     bVar28 & 0xd0 | bVar22 | bVar23 | bVar24 | bVar25 |
                     (*(byte *)(lVar18 + 0x3a2) & 1) << 5;
                if (*(char *)(lVar18 + 0x360) == '\0') {
                  uVar17 = uVar5 | 0x4011e000000;
                  *(ulong *)(lVar16 + 0x1bb0) = uVar17;
                }
                *(ulong *)(lVar16 + 0x1bb0) = uVar17 | 0x700000000000;
                if (*(char *)(lVar18 + 0x361) == '\0') {
                  *(ulong *)(lVar16 + 0x1bb0) = uVar17 | 0xf00000000000;
                }
                if (*(long *)(lVar18 + 0x16658) != 0) {
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e68b8;
                  FUN_100203686(lVar16 + 0x2cb0,lVar18 + 0x16658);
                }
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e68ca;
                FUN_100314834(lVar16,FUN_1004f5a78,lVar18);
                uVar12 = *(undefined4 *)(lVar18 + 0x66b0);
                uVar3 = *(undefined4 *)(lVar18 + 0x284);
                uVar9 = *(undefined1 *)(lVar18 + 0x308);
                *(long *)(&stack0xffffffffffffffd0 + lVar14) = lVar18 + 0x6b1e;
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6902;
                FUN_100248174(uVar12,uVar3,uVar9,lVar18 + 0x6b18,lVar18 + 0x6b1a,lVar18 + 0x6b1c);
                *(undefined2 *)(lVar16 + 0x2d18) = *(undefined2 *)(lVar18 + 0x6b18);
                iVar13 = *(int *)(lVar18 + 0x66b0);
                if (((iVar13 == 0x69506164) || (iVar13 == 0x69506f74)) || (iVar13 == 0x6950686e)) {
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6941;
                  iVar13 = FUN_100183add(local_1108,0,lVar18 + 0x6f64);
                  if ((iVar13 != -0x80) && (iVar13 != 0)) {
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6953;
                    uVar19 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6963;
                    cVar8 = _os_log_type_enabled(uVar19,0x10);
                    if (cVar8 != '\0') {
                      local_458 = 0x8220202;
                      local_454 = "Assertion failure";
                      local_44c = 0x400;
                      local_44a = (char *)CONCAT44(local_44a._4_4_,iVar13);
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7294;
                      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",
                                          &local_458,0x12);
                    }
                  }
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6970;
                  uVar19 = FUN_1001c156e();
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6984;
                  FUN_1001c6987(uVar19,0x72667369,0,0,0);
                }
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6998;
                iVar13 = FUN_10050d613(lVar18,local_1108,1);
                bVar28 = 1;
                if (iVar13 != -0x80) {
                  if (iVar13 == 0) {
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e69b8;
                    cVar8 = FUN_10050e41d(lVar18);
                    if (cVar8 == '\0') {
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e715f;
                      uVar19 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e716f;
                      cVar8 = _os_log_type_enabled(uVar19,0x10);
                      if (cVar8 != '\0') {
                        local_458 = 0x8220202;
                        local_454 = "Assertion failure";
                        local_44c = 0x822;
                        local_44a = 
                        "NewRetainedIPodDelayedAction( handlerData, SetupDeviceDelayedAction )";
                        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7308;
                        __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",
                                            &local_458,0x16);
                      }
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7180;
                      FUN_1001782e9(0,0);
                    }
                    else {
                      *(undefined1 *)(lVar18 + 0x6abc) = 1;
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e69cc;
                      uVar19 = FUN_1001c156e();
                      uVar12 = *(undefined4 *)(lVar18 + 0x28);
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e69e1;
                      FUN_1001c6987(uVar19,0x69706461,uVar12,0,0);
                    }
                    iVar13 = 0;
                  }
                  else {
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6f6e;
                    uVar19 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6f7e;
                    cVar8 = _os_log_type_enabled(uVar19,0x10);
                    if (cVar8 != '\0') {
                      local_458 = 0x8220202;
                      local_454 = "Assertion failure";
                      local_44c = 0x400;
                      local_44a = (char *)CONCAT44(local_44a._4_4_,iVar13);
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6fd6;
                      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",
                                          &local_458,0x12);
                    }
                  }
                }
              }
              goto LAB_1004e6043;
            }
            *(undefined1 *)(lVar18 + 0x6abd) = 1;
LAB_1004e5cbe:
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5ccf;
            iVar13 = FUN_10050d613(lVar18,local_1108,0);
            if (iVar13 == -0x80) goto LAB_1004e6040;
            if (iVar13 != 0) {
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6028;
              uVar19 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6038;
              cVar8 = _os_log_type_enabled(uVar19,0x10);
              if (cVar8 != '\0') goto LAB_1004e5afe;
              goto LAB_1004e6040;
            }
            if (*(char *)(lVar18 + 0x3a1) != '\0') {
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5d0d;
              iVar13 = FUN_1001888ba(lVar18 + 0x75e0,"iTunesPrefs.plist",0,&local_ce8);
              if (iVar13 == -0x2b) {
                if (DAT_1008c75c0 != -1) {
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e72ac;
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar19 = DAT_1008c75b8;
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6454;
                cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
                iVar11 = 0x478;
                iVar13 = 0x478;
                if (cVar8 != '\0') {
                  local_458 = local_458 & 0xffff0000;
                  uVar15 = 1;
                  pcVar21 = "setup> iTunesPrefs.plist not found, assuming device was erased";
                  puVar26 = &local_458;
                  goto LAB_1004e6016;
                }
              }
              else if (iVar13 == 0) {
                iVar13 = 0;
                if ((*(int *)(lVar18 + 0x14ccc) != 0) &&
                   (iVar13 = 0, iStack_ce0 != *(int *)(lVar18 + 0x14ccc))) {
                  if (DAT_1008c75c0 != -1) {
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7320;
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar19 = DAT_1008c75b8;
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5d5d;
                  cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar8 != '\0') {
                    local_458 = local_458 & 0xffff0000;
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5d92;
                    __os_log_impl(0x100000000,uVar19,1,"setup> iTunesPrefs.plist was modified",
                                  &local_458,2);
                  }
                  *(int *)(lVar18 + 0x14ccc) = iStack_ce0;
                }
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6492;
                uVar19 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e64a2;
                cVar8 = _os_log_type_enabled(uVar19,0x10);
                if (cVar8 != '\0') {
                  local_458 = 0x8220202;
                  local_454 = "Assertion failure";
                  local_44c = 0x822;
                  local_44a = "fileStatus == noErr || fileStatus == fnfErr";
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6dcc;
                  __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_458,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e64b3;
                FUN_1001782e9(0,0);
                iVar13 = 0;
              }
              goto LAB_1004e6040;
            }
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e641d;
            FUN_1004e1e68(lVar18);
            if (local_1109 != '\0') goto LAB_1004e5807;
            iVar13 = 0;
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5aa8;
            uVar19 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5ab8;
            cVar8 = _os_log_type_enabled(uVar19,0x10);
            if (cVar8 == '\0') goto LAB_1004e6040;
LAB_1004e5afe:
            iStack_ce0 = 1;
            iStack_ce4 = 0x7a0a90;
            uStack_ce6 = 0x822;
            local_ce8 = 0x202;
            local_cdc = 0x400;
            puVar26 = (uint *)&local_ce8;
            local_cda = iVar13;
LAB_1004e5b05:
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5b10;
            __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",puVar26,0x12);
LAB_1004e6040:
            bVar28 = 0;
LAB_1004e6043:
            if (!(bool)(~bVar28 & iVar13 != 0x478) && iVar13 != 0) {
              *(undefined1 *)(lVar18 + 0x6abc) = 1;
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e606d;
              FUN_1004e3b42(lVar18);
            }
            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6075;
            FUN_1004e1e68(lVar18);
            if ((iVar13 != 0) && (iVar13 != 0x478)) {
              if (DAT_1008c75c0 != -1) {
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6f33;
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar19 = DAT_1008c75b8;
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e60ad;
              cVar8 = _os_log_type_enabled(DAT_1008c75b8,0x10);
              if (cVar8 != '\0') {
                local_ce8 = 0x100;
                uStack_ce6 = 0x400;
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e60ea;
                iStack_ce4 = iVar13;
                __os_log_impl(0x100000000,uVar19,0x10,"setup> RegisterIPodDevice failed (%d)",
                              &local_ce8,8);
              }
              if (iVar13 == 0x460) {
                *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e610f;
                cVar8 = FUN_1002d213c(local_1108,0,0,0,0,0);
                iVar13 = 0x460;
                if (cVar8 != '\0') {
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6125;
                  cVar8 = FUN_100266a70(lVar20);
                  if (cVar8 != '\0') {
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6135;
                    FUN_10018a0cf(local_1108);
                  }
                  *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e613d;
                  lVar16 = FUN_10055aed6(lVar20);
                  if (lVar16 == 0) {
                    if (*(long *)(lVar18 + 0x7168) != 0) {
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6157;
                      iVar11 = _AMDeviceIsValid();
                      if (iVar11 == 0) goto LAB_1004e57f9;
                    }
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6167;
                    uVar12 = FUN_100266214(lVar20);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6176;
                    FUN_1001b7a44(&local_458);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6183;
                    uVar19 = FUN_100416f20(uVar12,0x10cc01c3);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6192;
                    FUN_1001b7eb0(&local_878,uVar19);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e619e;
                    FUN_1001b7a44(local_1138);
                    if (lVar20 == 0 || DAT_1008c77c0 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e63ef;
                      uVar19 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e63ff;
                      cVar8 = _os_log_type_enabled(uVar19,0x10);
                      if (cVar8 != '\0') {
                        local_ce8 = 0x202;
                        uStack_ce6 = 0x822;
                        iStack_ce4 = 0x7a0a90;
                        iStack_ce0 = 1;
                        local_cdc = 0x822;
                        local_cda = 0x7e522c;
                        uStack_cd6 = 1;
                        uStack_cd4 = 0;
                        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6d70;
                        __os_log_error_impl(0x100000000,uVar19,0x10);
                      }
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6410;
                      FUN_1001782e9(0,0);
                    }
                    else {
                      plVar27 = (long *)(DAT_1008c77c0 + 0x10);
                      do {
                        plVar27 = (long *)*plVar27;
                        if (plVar27 == (long *)0x0) goto LAB_1004e6549;
                        if (*(int *)(plVar27 + 1) != 0x64756c63) {
                          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e61da;
                          uVar19 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e61ea;
                          cVar8 = _os_log_type_enabled(uVar19,0x10);
                          if (cVar8 != '\0') {
                            local_ce8 = 0x202;
                            uStack_ce6 = 0x822;
                            iStack_ce4 = 0x7ab58c;
                            iStack_ce0 = 1;
                            local_cdc = 0x822;
                            local_cda = 0x7ad710;
                            uStack_cd6 = 1;
                            uStack_cd4 = 0;
                            *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6268;
                            __os_log_error_impl(0x100000000,uVar19,0x10);
                          }
                          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e61fa;
                          cVar8 = FUN_1001782e9(0,1);
                          if (cVar8 == '\0') goto LAB_1004e6549;
                        }
                      } while (plVar27[0xcdb] != lVar20);
                      if (*(int *)(plVar27 + 1) != 0x64756c63) {
                        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e64f6;
                        uVar19 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6506;
                        cVar8 = _os_log_type_enabled(uVar19,0x10);
                        if (cVar8 != '\0') {
                          local_ce8 = 0x202;
                          uStack_ce6 = 0x822;
                          iStack_ce4 = 0x7ab58c;
                          iStack_ce0 = 1;
                          local_cdc = 0x822;
                          local_cda = 0x7ad710;
                          uStack_cd6 = 1;
                          uStack_cd4 = 0;
                          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6f03;
                          __os_log_error_impl(0x100000000,uVar19,0x10);
                        }
                        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e651a;
                        cVar8 = FUN_1001782e9(0,1);
                        if (cVar8 == '\0') goto LAB_1004e6549;
                      }
                      uVar12 = *(undefined4 *)(plVar27 + 5);
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6532;
                      FUN_1004fda52(&local_ce8,uVar12);
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6541;
                      FUN_1001b80b2(&local_458,&local_ce8);
                      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6549;
                      FUN_1001b7a50(&local_ce8);
                    }
LAB_1004e6549:
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6563;
                    FUN_10045096d(&local_878,local_1138,&local_458);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e656f;
                    FUN_1001b7a50(local_1138);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e657b;
                    FUN_1001b7a50(&local_878);
                    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e6587;
                    FUN_1001b7a50(&local_458);
                  }
                }
              }
            }
LAB_1004e57f9:
            if (local_1109 != '\0') {
              if (iVar13 == 0) {
LAB_1004e5807:
                *(undefined1 *)(lVar18 + 0x6ad6) = 0;
                iVar13 = 0;
              }
              *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5819;
              FUN_1002666aa(lVar20);
            }
          }
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5821;
          FUN_1004e1e68(lVar18);
        }
        bVar29 = iVar13 == 0x478;
        iVar13 = 0x478;
      } while (bVar29);
    }
    else if (iVar13 == 0x706f6472) {
      if (DAT_1008c75c0 != -1) {
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7831;
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar19 = DAT_1008c75b8;
      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e752a;
      cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar8 != '\0') {
        local_ce8 = 0x100;
        uStack_ce6 = 0x800;
        iStack_ce4 = (int)local_1118;
        iStack_ce0 = (int)((ulong)local_1118 >> 0x20);
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e756e;
        __os_log_impl(0x100000000,uVar19,1,
                      "support> got kITIPodRemovedMessage for device id %016llX");
      }
      uVar19 = *(undefined8 *)(local_1120 + 0x10);
      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7585;
      lVar18 = FUN_10050c4fb(uVar19,local_1118);
      if (lVar18 != 0) {
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7599;
        FUN_1004e17a4(lVar18);
        if (*(long *)(lVar18 + 0x66d8) != lVar20) {
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e75aa;
          FUN_100264ec8();
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e75b2;
          uVar19 = FUN_10026394e(lVar20);
          *(undefined8 *)(lVar18 + 0x66d8) = uVar19;
        }
        if ((char)local_113c == '\0') {
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e75f8;
          FUN_10050a6f5(lVar18,FUN_10050c92a);
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e75ca;
          FUN_100507e3a(lVar18);
        }
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7600;
        FUN_1004e1e68(lVar18);
      }
    }
    else if (iVar13 == 0x706f6475) {
      if (DAT_1008c75c0 != -1) {
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7801;
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar19 = DAT_1008c75b8;
      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e54cb;
      cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar8 != '\0') {
        local_ce8 = 0x100;
        uStack_ce6 = 0x800;
        iStack_ce4 = (int)local_1118;
        iStack_ce0 = (int)((ulong)local_1118 >> 0x20);
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e550f;
        __os_log_impl(0x100000000,uVar19,1,
                      "support> got kITIPodUnmountedMessage for device id %016llX");
      }
      uVar19 = *(undefined8 *)(local_1120 + 0x10);
      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5526;
      lVar18 = FUN_10050c4fb(uVar19,local_1118);
      if (lVar18 != 0) {
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e553a;
        FUN_1004e17a4(lVar18);
        if (*(long *)(lVar18 + 0x66d8) != lVar20) {
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e554b;
          FUN_100264ec8();
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5553;
          uVar19 = FUN_10026394e(lVar20);
          *(undefined8 *)(lVar18 + 0x66d8) = uVar19;
        }
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5562;
        FUN_100507f87(lVar18);
        if (((*(char *)(lVar18 + 0x6ad8) == '\0') && (*(int *)(lVar18 + 0x66e0) == 0)) &&
           ((*(char *)(lVar18 + 0x14cd8) == '\0' || (*(char *)(lVar18 + 0x14cef) != '\0')))) {
          *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e558e;
          FUN_100507e3a(lVar18);
        }
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e5596;
        FUN_1004e1e68(lVar18);
      }
    }
    if (*(int *)(local_1128 + 2) == 0x706f646d) {
      uVar19 = local_1128[1];
      *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7649;
      cVar8 = FUN_100266a70(uVar19);
      if (cVar8 != '\0') {
        uVar19 = local_1128[1];
        *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e765d;
        FUN_1002666aa(uVar19);
      }
    }
    uVar19 = local_1128[1];
    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e766d;
    FUN_100264ec8(uVar19);
    *(undefined8 *)((long)&local_38 + lVar14) = 0x1004e7679;
    operator_delete(local_1128);
    puVar7 = *(undefined8 **)(local_1120 + 0x68);
    lVar18 = local_1120;
    puVar6 = local_1128;
    lVar20 = local_1120;
  } while( true );
}

